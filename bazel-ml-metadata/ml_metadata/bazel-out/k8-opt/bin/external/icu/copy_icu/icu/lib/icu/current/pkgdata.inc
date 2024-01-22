GENCCODE_ASSEMBLY_TYPE=-a gcc
SO=so
SOBJ=so
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.65.1
COMPILE=/usr/bin/gcc -ffunction-sections -fdata-sections -D_REENTRANT  -DU_HAVE_ELF_H=1 -DU_ENABLE_DYLOAD=0 -DU_HAVE_STRTOD_L=1 -DU_HAVE_XLOCALE_H=0 -DU_HAVE_STRING_VIEW=1  -DU_ATTRIBUTE_DEPRECATED= -U_FORTIFY_SOURCE -fstack-protector -Wall -Wunused-but-set-parameter -Wno-free-nonheap-object -fno-omit-frame-pointer -g0 -O2 -D_FORTIFY_SOURCE=1 -DNDEBUG -ffunction-sections -fdata-sections -fno-canonical-system-headers -Wno-builtin-macro-redefined -D__DATE__=redacted -D__TIMESTAMP__=redacted -D__TIME__=redacted -fPIC -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -c
LIBFLAGS=-I/home/rmartine/.cache/bazel/_bazel_rmartine/4e0fce1d7533a173497e9e40c7131c44/sandbox/linux-sandbox/2147/execroot/ml_metadata/bazel-out/k8-opt/bin/external/icu/icu.build_tmpdir/icu/include -DPIC -fPIC
GENLIB=/usr/bin/gcc -U_FORTIFY_SOURCE -fstack-protector -Wall -Wunused-but-set-parameter -Wno-free-nonheap-object -fno-omit-frame-pointer -g0 -O2 -D_FORTIFY_SOURCE=1 -DNDEBUG -ffunction-sections -fdata-sections -fno-canonical-system-headers -Wno-builtin-macro-redefined -D__DATE__=redacted -D__TIMESTAMP__=redacted -D__TIME__=redacted -fPIC -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -Wl,-no-as-needed -Wl,-z,relro,-z,now -B/usr/bin -pass-exit-codes -Wl,--gc-sections -lstdc++ -lm -Wl,--gc-sections  -shared -Wl,-Bsymbolic
LDICUDTFLAGS=-nodefaultlibs -nostdlib
LD_SONAME=-Wl,-soname -Wl,
RPATH_FLAGS=
BIR_LDFLAGS=-Wl,-Bsymbolic
AR=/usr/bin/ar
ARFLAGS=rcsD
RANLIB=:
INSTALL_CMD=/usr/bin/install -c
