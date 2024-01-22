#!/usr/bin/env bash
function symlink_to_dir() {
if [[ -z "$1" ]]; then
echo "arg 1 to symlink_to_dir is unexpectedly empty"
exit 1
fi
if [[ -z "$2" ]]; then
echo "arg 2 to symlink_to_dir is unexpectedly empty"
exit 1
fi
local target="$2"
mkdir -p "$target"
if [[ -f "$1" ]]; then
# In order to be able to use `replace_in_files`, we ensure that we create copies of specfieid
# files so updating them is possible.
if [[ "$1" == *.pc || "$1" == *.la || "$1" == *-config || "$1" == *.mk || "$1" == *.cmake ]]; then
dest="$target/$(basename "$1")"
cp "$1" "$dest" && chmod +w "$dest" && touch -r "$1" "$dest"
else
ln -sf "$1" "$target/${1##*/}"
fi
elif [[ -L "$1" && ! -d "$1" ]]; then
cp -pR "$1" "$2"
elif [[ -d "$1" ]]; then
SAVEIFS=$IFS
IFS=$'
'
local children=($(find -H "$1" -maxdepth 1 -mindepth 1))
IFS=$SAVEIFS
local dirname=$(basename "$1")
mkdir -p "$target/$dirname"
for child in "${children[@]:-}"; do
if [[ -n "$child" && "$dirname" != *.ext_build_deps ]]; then
symlink_to_dir "$child" "$target/$dirname"
fi
done
else
echo "Can not copy $1"
fi
}
function children_to_path() {
if [ -d $EXT_BUILD_DEPS/bin ]; then
local tools=$(find "$EXT_BUILD_DEPS/bin" -maxdepth 1 -mindepth 1)
for tool in $tools;
do
if  [[ -d "$tool" ]] || [[ -L "$tool" ]]; then
export PATH=$PATH:$tool
fi
done
fi
}
function replace_in_files() {
if [ -d "$1" ]; then
SAVEIFS=$IFS
IFS=$'
'
# Find all real files. Symlinks are assumed to be relative to something within the directory we're seaching and thus ignored
local files=($(find -P "$1" \( -type f -and \( -name "*.pc" -or -name "*.la" -or -name "*-config" -or -name "*.mk" -or -name "*.cmake" \) \)))
IFS=$SAVEIFS
for file in ${files[@]+"${files[@]}"}; do
local backup=$(mktemp)
touch -r "${file}" "${backup}"
sed -i 's@'"$2"'@'"$3"'@g' "${file}"
if [[ "$?" -ne "0" ]]; then
exit 1
fi
touch -r "${backup}" "${file}"
rm "${backup}"
done
fi
}
echo """"
echo ""Bazel external C/C++ Rules. Building library 'icu'""
echo """"
set -euo pipefail
export EXT_BUILD_ROOT=$(pwd)
export INSTALLDIR=$EXT_BUILD_ROOT/bazel-out/k8-opt/bin/external/icu/icu
export BUILD_TMPDIR=$INSTALLDIR.build_tmpdir
export EXT_BUILD_DEPS=$INSTALLDIR.ext_build_deps
export CXXFLAGS="-fPIC"
export CFLAGS="-fPIC"
export PATH="$EXT_BUILD_ROOT:$PATH"
rm -rf $BUILD_TMPDIR
rm -rf $EXT_BUILD_DEPS
mkdir -p $INSTALLDIR
mkdir -p $BUILD_TMPDIR
mkdir -p $EXT_BUILD_DEPS
echo ""Environment:______________""
env
echo ""__________________________""
mkdir -p $EXT_BUILD_DEPS/bin
symlink_to_dir $EXT_BUILD_ROOT/bazel-out/k8-opt-exec-2B5CBBC6/bin/external/rules_foreign_cc/toolchains $EXT_BUILD_DEPS/bin/
children_to_path $EXT_BUILD_DEPS/bin
export PATH="$EXT_BUILD_DEPS/bin:$PATH"
cd $BUILD_TMPDIR
export INSTALL_PREFIX="icu"
replace_in_files $EXT_BUILD_DEPS \${EXT_BUILD_DEPS} $EXT_BUILD_DEPS
replace_in_files $EXT_BUILD_DEPS \${EXT_BUILD_ROOT} $EXT_BUILD_ROOT
export MAKE=$EXT_BUILD_ROOT/bazel-out/k8-opt-exec-2B5CBBC6/bin/external/rules_foreign_cc/toolchains/make/bin/make
set -x
mkdir -p $BUILD_TMPDIR/$INSTALL_PREFIX
ARFLAGS="rcsD" AR_FLAGS="rcsD" ASFLAGS="-U_FORTIFY_SOURCE -fstack-protector -Wall -Wunused-but-set-parameter -Wno-free-nonheap-object -fno-omit-frame-pointer -g0 -O2 -D_FORTIFY_SOURCE=1 -DNDEBUG -ffunction-sections -fdata-sections -fno-canonical-system-headers -Wno-builtin-macro-redefined -D__DATE__="redacted" -D__TIMESTAMP__="redacted" -D__TIME__="redacted"" CFLAGS="-U_FORTIFY_SOURCE -fstack-protector -Wall -Wunused-but-set-parameter -Wno-free-nonheap-object -fno-omit-frame-pointer -g0 -O2 -D_FORTIFY_SOURCE=1 -DNDEBUG -ffunction-sections -fdata-sections -fno-canonical-system-headers -Wno-builtin-macro-redefined -D__DATE__="redacted" -D__TIMESTAMP__="redacted" -D__TIME__="redacted" -fPIC" CXXFLAGS="-U_FORTIFY_SOURCE -fstack-protector -Wall -Wunused-but-set-parameter -Wno-free-nonheap-object -fno-omit-frame-pointer -g0 -O2 -D_FORTIFY_SOURCE=1 -DNDEBUG -ffunction-sections -fdata-sections -std=c++0x -fno-canonical-system-headers -Wno-builtin-macro-redefined -D__DATE__="redacted" -D__TIMESTAMP__="redacted" -D__TIME__="redacted" -std=c++17 -fPIC" LDFLAGS="-Wl,-no-as-needed -Wl,-z,relro,-z,now -B/usr/bin -pass-exit-codes -Wl,--gc-sections -lstdc++ -lm" AR="/usr/bin/ar" CC="/usr/bin/gcc" CXX="/usr/bin/g++" RANLIB=":" CPPFLAGS="" "$EXT_BUILD_ROOT/external/icu/source/configure" --prefix=$BUILD_TMPDIR/$INSTALL_PREFIX --enable-option-checking --enable-static --enable-tools --disable-shared --disable-dyload --disable-extras --disable-plugins --disable-tests --disable-samples --with-data-packaging=static
$EXT_BUILD_ROOT/bazel-out/k8-opt-exec-2B5CBBC6/bin/external/rules_foreign_cc/toolchains/make/bin/make  
$EXT_BUILD_ROOT/bazel-out/k8-opt-exec-2B5CBBC6/bin/external/rules_foreign_cc/toolchains/make/bin/make install 
set +x
cp -L -r --no-target-directory "$BUILD_TMPDIR/$INSTALL_PREFIX" "$INSTALLDIR" && find "$INSTALLDIR" -type f -exec touch -r "$BUILD_TMPDIR/$INSTALL_PREFIX" "{}" \;

replace_in_files $INSTALLDIR $BUILD_TMPDIR \${EXT_BUILD_DEPS}
replace_in_files $INSTALLDIR $EXT_BUILD_DEPS \${EXT_BUILD_DEPS}
replace_in_files $INSTALLDIR $EXT_BUILD_ROOT \${EXT_BUILD_ROOT}
mkdir -p $EXT_BUILD_ROOT/bazel-out/k8-opt/bin/external/icu/copy_icu/icu
cp -L -r --no-target-directory "$INSTALLDIR" "$EXT_BUILD_ROOT/bazel-out/k8-opt/bin/external/icu/copy_icu/icu" && find "$EXT_BUILD_ROOT/bazel-out/k8-opt/bin/external/icu/copy_icu/icu" -type f -exec touch -r "$INSTALLDIR" "{}" \;
cd $EXT_BUILD_ROOT
if [[ -L "bazel-out/k8-opt/bin/external/icu/icu/lib/libicui18n.a" ]]; then
  target="$(readlink -f "bazel-out/k8-opt/bin/external/icu/icu/lib/libicui18n.a")"
  rm "bazel-out/k8-opt/bin/external/icu/icu/lib/libicui18n.a" && cp -a "${target}" "bazel-out/k8-opt/bin/external/icu/icu/lib/libicui18n.a"
fi

if [[ -L "bazel-out/k8-opt/bin/external/icu/icu/lib/libicuio.a" ]]; then
  target="$(readlink -f "bazel-out/k8-opt/bin/external/icu/icu/lib/libicuio.a")"
  rm "bazel-out/k8-opt/bin/external/icu/icu/lib/libicuio.a" && cp -a "${target}" "bazel-out/k8-opt/bin/external/icu/icu/lib/libicuio.a"
fi

if [[ -L "bazel-out/k8-opt/bin/external/icu/icu/lib/libicuuc.a" ]]; then
  target="$(readlink -f "bazel-out/k8-opt/bin/external/icu/icu/lib/libicuuc.a")"
  rm "bazel-out/k8-opt/bin/external/icu/icu/lib/libicuuc.a" && cp -a "${target}" "bazel-out/k8-opt/bin/external/icu/icu/lib/libicuuc.a"
fi

if [[ -L "bazel-out/k8-opt/bin/external/icu/icu/lib/libicudata.a" ]]; then
  target="$(readlink -f "bazel-out/k8-opt/bin/external/icu/icu/lib/libicudata.a")"
  rm "bazel-out/k8-opt/bin/external/icu/icu/lib/libicudata.a" && cp -a "${target}" "bazel-out/k8-opt/bin/external/icu/icu/lib/libicudata.a"
fi

