TARGET = ThreadsTest
TEMPLATE = app
CONFIG = threads
QMAKE_LDFLAGS += --import-memory
QMAKE_LDFLAGS += --export-memory
QMAKE_LDFLAGS += --max-memory=67108864
SOURCES += $$PWD/main.cpp