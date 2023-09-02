TARGET = tinyemu

DEFINES += WASI _WASI_EMULATED_SIGNAL CONFIG_SLIRP CONFIG_RISCV_MAX_XLEN=64

QMAKE_CFLAGS += -ftls-model=local-exec
QMAKE_CFLAGS += -D_GNU_SOURCE -DCONFIG_VERSION=0.0.0

SOURCES += \
    virtio.c pci.c fs.c cutils.c iomem.c simplefb.c \
    json.c machine.c temu.c riscv_machine.c softfp.c \
    riscv_cpu32.c riscv_cpu64.c wasi.c

SOURCES += \
      slirp/bootp.c slirp/ip_icmp.c slirp/mbuf.c slirp/slirp.c \
      slirp/tcp_output.c slirp/cksum.c slirp/ip_input.c slirp/misc.c \
      slirp/socket.c slirp/tcp_subr.c slirp/udp.c slirp/if.c \
      slirp/ip_output.c slirp/sbuf.c slirp/tcp_input.c slirp/tcp_timer.c \
      slirp/wasi_socket_ext.c