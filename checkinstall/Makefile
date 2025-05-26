INSTALL_DIR := ?= /usr/local

all: hello-world

hello-world: hello-world.c
	gcc -o $@ $<

install:
	mkdir -p "$(INSTALL_DIR)"
	install -D -m 755 hello-world "$(INSTALL_DIR)/"

clean:
	rm -f hello-world
	rm -rf "$(INSTALL_DIR)"

.PHONY: all install clean
