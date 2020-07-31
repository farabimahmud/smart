# These two variables are designed to be modifiable.
SST_VERSION=SST-trunk
GEM5_LIB=gem5_opt

LDFLAGS=-shared -fno-common ${shell pkg-config ${SST_VERSION} --libs} -L../../build/ARM -L/home/grads/f/farabi/boost_1_66_0/stage/lib
CXXFLAGS=-std=c++0x -g -O2 -fPIC ${shell pkg-config ${SST_VERSION} --cflags} ${shell python-config --includes} -I../../build/ARM -I/home/grads/f/farabi/boost_1_66_0
CPPFLAGS+=-MMD -MP
SRC=$(wildcard *.cc)

.PHONY: clean all

all: libgem5.so

libgem5.so: $(SRC:%.cc=%.o)
	${CXX} ${CPPFLAGS} ${LDFLAGS} $? -o $@ -l${GEM5_LIB}

-include $(SRC:%.cc=%.d)

clean:
	${RM} *.[do] libgem5.so
