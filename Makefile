CFLAGS += -lm
DIRS = ch1 ch2 ch3 ch4

all:
	@ echo ${DIRS}
	@ for dir in ${DIRS}; do (cd $${dir}; $(MAKE)) done
