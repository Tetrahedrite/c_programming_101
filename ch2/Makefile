NPROCS = $(shell grep -c 'processor' /proc/cpuinfo)
MAKEFLAGS += -j$(NPROCS)

SRCS = $(wildcard *.c)

all: $(SRCS:.c=)

CFLAGS += -lm

.c:
	$(CC) $< -o $@.out $(CFLAGS)
