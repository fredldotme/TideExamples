TARGET = Permutation
DEFINES += BOOST_EXCEPTION_DISABLE=1 BOOST_NO_EXCEPTIONS=1
QMAKE_CXXFLAGS = -fno-exceptions
SOURCES = $$PWD/apply_permutation_example.cpp