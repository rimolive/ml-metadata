#!/usr/bin/env bash
export EXT_BUILD_ROOT=$(pwd)
export INSTALLDIR=$EXT_BUILD_ROOT//make_tool
export BUILD_TMPDIR=$INSTALLDIR.build_tmpdir
export EXT_BUILD_DEPS=$INSTALLDIR.ext_build_deps
set -euo pipefail
export EXT_BUILD_ROOT=$(pwd)
export INSTALLDIR=$EXT_BUILD_ROOT/bazel-out/k8-opt-exec-2B5CBBC6/bin/external/rules_foreign_cc/toolchains/make
export BUILD_TMPDIR=$INSTALLDIR.build_tmpdir
rm -rf $INSTALLDIR
rm -rf $BUILD_TMPDIR
mkdir -p $INSTALLDIR
mkdir -p $BUILD_TMPDIR
cp -L -r --no-target-directory "./external/gnumake_src" "$BUILD_TMPDIR" && find "$BUILD_TMPDIR" -type f -exec touch -r "./external/gnumake_src" "{}" \;
cd $BUILD_TMPDIR
set -x
AR="/usr/bin/ar" ARFLAGS="rcsD" CC="/usr/bin/gcc" CFLAGS="-U_FORTIFY_SOURCE -fstack-protector -Wall -Wunused-but-set-parameter -Wno-free-nonheap-object -fno-omit-frame-pointer -g0 -O2 -D_FORTIFY_SOURCE=1 -DNDEBUG -ffunction-sections -fdata-sections -fno-canonical-system-headers -Wno-builtin-macro-redefined -D__DATE__="redacted" -D__TIMESTAMP__="redacted" -D__TIME__="redacted"" LD="/usr/bin/gcc" LDFLAGS="-Wl,-no-as-needed -Wl,-z,relro,-z,now -B/usr/bin -pass-exit-codes -Wl,--gc-sections -lstdc++ -lm" ./configure --without-guile --with-guile=no --disable-dependency-tracking --prefix=$INSTALLDIR
cat build.cfg
./build.sh
./make install
set +x
