# Makefile
CPPUTEST_HOME = /usr/local
CPPFLAGS = -I$(CPPUTEST_HOME)/include -Iinclude
LDFLAGS = -L$(CPPUTEST_HOME)/lib -lCppUTest -lCppUTestExt

SRC_DIR = src
TEST_DIR = tests
OBJ_DIR = build

# Function to find all .cpp files in a directory recursively
rwildcard=$(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2)$(filter $(subst *,%,$2),$d))

SRCS = $(call rwildcard,$(SRC_DIR)/,*.cpp)
TEST_SRCS = $(call rwildcard,$(TEST_DIR)/,*.cpp)
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
TEST_OBJS = $(TEST_SRCS:$(TEST_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEPS = $(OBJS:.o=.d) $(TEST_OBJS:.o=.d)

TARGET = test_runner

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) -MMD -MP -c $< -o $@

$(OBJ_DIR)/%.o: $(TEST_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) -MMD -MP -c $< -o $@

$(TARGET): $(OBJS) $(TEST_OBJS)
	$(CXX) $(OBJS) $(TEST_OBJS) $(LDFLAGS) -o $@

-include $(DEPS)

clean:
	rm -rf $(OBJ_DIR) $(TARGET)

.PHONY: clean

