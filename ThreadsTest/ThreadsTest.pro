TARGET = ThreadsTest
TEMPLATE = app
CONFIG += threads
QMAKE_LDFLAGS += --import-memory
SOURCES += \
    $$PWD/main.cpp