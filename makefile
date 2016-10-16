SOURCES=main.cpp PSoCIF.cpp
OBJECTS=$(addprefix $(BUILD_DIR)/,$(SOURCES:.cpp=.o))
DEPS=$(OBJECTS:%.o=%.d)
EXE=PSoCIF
CXXFLAGS=-I.

#Make sure that default choice for make is the host
ifndef (${ARCH})
	ARCH=target
endif

#Making for host
ifeq (${ARCH},host)
CXX=g++
BUILD_DIR=build/host
BIN_DIR=bin/host
endif

# Making for target
ifeq (${ARCH},target)
CXX=arm-devkit-g++
BUILD_DIR=build/target
BIN_DIR=bin/target
endif

$(BIN_DIR)/$(EXE): $(OBJECTS)
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

#Generate object files. Place them in build/host or build/target, depending on choice.
# -MMD FLAG IS USED. Like -MD except mention only user header files, not system header files.

# -MD is equivalent to -M -MF file, except that -E is not implied. 
# The driver determines file based on whether an -o option is given. 
# If it is, the driver uses its argument but with a suffix of .d, 
# otherwise it takes the name of the input file, 
# removes any directory components and suffix, and applies a .d suffix.

$(BUILD_DIR)/%.o: %.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -MMD -c $< -o $@

.PHONY:clean
clean:
	rm -f $(BUILD_DIR)/*.o $(BIN_DIR)/$(EXE) $(BUILD_DIR)/*.d
	
ifneq ($(MAKECMDGOALS),clean)
-include $(DEPS)
endif