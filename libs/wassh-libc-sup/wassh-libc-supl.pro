TARGET = wassh-libc-supl
TEMPLATE = lib
INCLUDEPATH = $$PWD/include
LIBS = -lwasi-emulated-signal
SOURCES = \
    $$PWD/src/accept.c \
    $$PWD/src/bh-syscalls.c \
    $$PWD/src/bind.c \
    $$PWD/src/connect.c \
    $$PWD/src/dup.c \
    $$PWD/src/dup2.c \
    $$PWD/src/err.c \
    $$PWD/src/getaddrinfo.c \
    $$PWD/src/getsockname.c \
    $$PWD/src/getsockopt.c \
    $$PWD/src/ioctl.c \
    $$PWD/src/listen.c \
    $$PWD/src/readpassphrase.c \
    $$PWD/src/recv.c \
    $$PWD/src/setsockopt.c \
    $$PWD/src/signal.c \
    $$PWD/src/socket.c \
    $$PWD/src/stubs.c \
    $$PWD/src/termios.c