CFLAGS += -lm
DIRS = ch1 ch2 ch3 ch4 ch5 ch6 ch7 ch8 ch9 ch10

.PHONY: all run

all:
	@ echo ${DIRS}
	@ for dir in ${DIRS}; do $(MAKE) -C $$dir; done

run:
	@ for dir in ${DIRS}; do \
		$(MAKE) -C $$dir -q run ; \
		if [ $$? -eq 1 ]; then \
			$(MAKE) -s -C $$dir run ; \
		else \
			echo "ERROR: Cannot find target 'run' in Makefile\n"; \
			exit 1; \
		fi \
	done
