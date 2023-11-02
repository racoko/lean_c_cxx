TARGET = $(BUILD_LIB_DIR)/libscan1.a
INC_DIR = -I.
SRC_FILES = $(wildcard ./*.cpp)
OBJ_FILES = $(patsubst ./%.cpp, $(BUILD_LIB_DIR)/%.o, $(SRC_FILES))
HEADERS = $(wildcard ./*.h)

all: $(TARGET) copy_headers clean_objs 

$(TARGET): $(OBJ_FILES)
	$(AR) rcs $@ $^

$(BUILD_LIB_DIR)/%.o: ./%.cpp | $(BUILD_LIB_DIR)
	$(CXX) $(CXXCFLAGS) $(INC_DIR) -c -o $@ $<

$(BUILD_LIB_DIR):
	mkdir -p $@

copy_headers: $(BUILD_INC_DIR)
	cp $(HEADERS) $(BUILD_INC_DIR)

$(BUILD_INC_DIR):
	mkdir -p $@

.PHONY: all

clean_objs:
	rm -f $(OBJ_FILES)
