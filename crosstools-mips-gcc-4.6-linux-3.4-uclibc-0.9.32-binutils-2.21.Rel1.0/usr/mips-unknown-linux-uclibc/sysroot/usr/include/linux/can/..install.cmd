cmd_/home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/linux/can/.install := perl scripts/headers_install.pl /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux-3.4/include/linux/can /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/linux/can mips bcm.h error.h gw.h netlink.h raw.h; perl scripts/headers_install.pl /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux-3.4/include/linux/can /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/linux/can mips ; perl scripts/headers_install.pl /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux-3.4/include/generated/linux/can /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/linux/can mips ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/linux/can/$$F; done; touch /home/dslsqa/rel1.0/src/buildroot-2011.11/output/toolchain/linux/include/linux/can/.install