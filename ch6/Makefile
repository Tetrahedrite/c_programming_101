NPROCS = $(shell grep -c 'processor' /proc/cpuinfo)
MAKEFLAGS += -j$(NPROCS)

CFLAGS += -lm

SRCS = $(wildcard *.c)

.PHONY: all run clean

all: $(SRCS:.c=)

clean:
	rm *.out

run:
	@ for filename in *.out; do \
		echo "----- Start $$filename -----" ; \
		./$$filename ; \
		echo "----- End $$filename -----" ; \
		printf "\n" ; \
	done

.c:
	$(CC) $< -o $@.out $(CFLAGS)
