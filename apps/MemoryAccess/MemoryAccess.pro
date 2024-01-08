TARGET = MemoryAccess

QMAKE_LDFLAGS += --max-memory=67108864
QMAKE_LDFLAGS += --import-memory
QMAKE_LDFLAGS += --export-memory

SOURCES += \
    $$PWD/main.cpp