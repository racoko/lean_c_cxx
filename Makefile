CXX = g++  
CXXCFLAGS = -std=c++17 -g -Wall -O2

CURRENT_DIR := $(shell pwd)
BUILD_DIR = $(CURRENT_DIR)/build
BUILD_LIB_DIR = $(BUILD_DIR)/lib
BUILD_INC_DIR = $(BUILD_DIR)/include

export CXX CXXCFLAGS BUILD_DIR BUILD_LIB_DIR BUILD_INC_DIR

SUBMAKE1 = submake1
SUBMAKE2 = submake2
SUBMAKE3 = subvideo

all: $(SUBMAKE1) $(SUBMAKE2) $(SUBMAKE3)

$(SUBMAKE1):
	$(MAKE) -C libscan1

$(SUBMAKE2):
	$(MAKE) -C libscan2

$(SUBMAKE3):
	$(MAKE) -C libvideo

.PHONY: all clean

clean:
	rm -rf $(BUILD_DIR)
