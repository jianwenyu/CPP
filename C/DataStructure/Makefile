#!/bin/bash
cc=gcc
DEBUG_DIR=./debug
RELEASE_DIR=./release
FLAG=-g

all: bsttree

bsttree: main.o tree.o
	$(cc) -o $(DEBUG_DIR)/bsttree main.o tree.o $(FLAG)

tree: tree.c
	$(cc) -c tree.c $(FLAG)

main: main.c
	$(cc) -c main.c $(FLAG)

.PHONY: clean release

clean:
	rm *.o $(DEBUG_DI)/bsttree
	
release:
	cp -f $(DEBUG_DI)/bsttree $(RELEASE_DIR)/bsttree