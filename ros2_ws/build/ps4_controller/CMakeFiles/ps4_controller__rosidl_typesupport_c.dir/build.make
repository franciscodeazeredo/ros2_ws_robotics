# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/franciscoazeredo/OneDrive/Documents/tecnico/4_ano/Robotica/project/ros2_ws/src/ps4_controller

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/franciscoazeredo/OneDrive/Documents/tecnico/4_ano/Robotica/project/ros2_ws/build/ps4_controller

# Include any dependencies generated for this target.
include CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/flags.make

rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp: /opt/ros/humble/lib/rosidl_typesupport_c/rosidl_typesupport_c
rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp: /opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_typesupport_c/__init__.py
rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp: /opt/ros/humble/share/rosidl_typesupport_c/resource/action__type_support.c.em
rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp: /opt/ros/humble/share/rosidl_typesupport_c/resource/idl__type_support.cpp.em
rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp: /opt/ros/humble/share/rosidl_typesupport_c/resource/msg__type_support.cpp.em
rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp: /opt/ros/humble/share/rosidl_typesupport_c/resource/srv__type_support.cpp.em
rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp: rosidl_adapter/ps4_controller/msg/PS4.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/franciscoazeredo/OneDrive/Documents/tecnico/4_ano/Robotica/project/ros2_ws/build/ps4_controller/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating C type support dispatch for ROS interfaces"
	/usr/bin/python3.10 /opt/ros/humble/lib/rosidl_typesupport_c/rosidl_typesupport_c --generator-arguments-file /home/franciscoazeredo/OneDrive/Documents/tecnico/4_ano/Robotica/project/ros2_ws/build/ps4_controller/rosidl_typesupport_c__arguments.json --typesupports rosidl_typesupport_fastrtps_c rosidl_typesupport_introspection_c

CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp.o: CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/flags.make
CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp.o: rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp
CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp.o: CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/franciscoazeredo/OneDrive/Documents/tecnico/4_ano/Robotica/project/ros2_ws/build/ps4_controller/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp.o -MF CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp.o.d -o CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp.o -c /home/franciscoazeredo/OneDrive/Documents/tecnico/4_ano/Robotica/project/ros2_ws/build/ps4_controller/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp

CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/franciscoazeredo/OneDrive/Documents/tecnico/4_ano/Robotica/project/ros2_ws/build/ps4_controller/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp > CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp.i

CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/franciscoazeredo/OneDrive/Documents/tecnico/4_ano/Robotica/project/ros2_ws/build/ps4_controller/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp -o CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp.s

# Object files for target ps4_controller__rosidl_typesupport_c
ps4_controller__rosidl_typesupport_c_OBJECTS = \
"CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp.o"

# External object files for target ps4_controller__rosidl_typesupport_c
ps4_controller__rosidl_typesupport_c_EXTERNAL_OBJECTS =

libps4_controller__rosidl_typesupport_c.so: CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp.o
libps4_controller__rosidl_typesupport_c.so: CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/build.make
libps4_controller__rosidl_typesupport_c.so: libps4_controller__rosidl_generator_c.so
libps4_controller__rosidl_typesupport_c.so: /opt/ros/humble/lib/librosidl_typesupport_c.so
libps4_controller__rosidl_typesupport_c.so: /opt/ros/humble/lib/librosidl_runtime_c.so
libps4_controller__rosidl_typesupport_c.so: /opt/ros/humble/lib/librcutils.so
libps4_controller__rosidl_typesupport_c.so: CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/franciscoazeredo/OneDrive/Documents/tecnico/4_ano/Robotica/project/ros2_ws/build/ps4_controller/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libps4_controller__rosidl_typesupport_c.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/build: libps4_controller__rosidl_typesupport_c.so
.PHONY : CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/build

CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/clean

CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/depend: rosidl_typesupport_c/ps4_controller/msg/ps4__type_support.cpp
	cd /home/franciscoazeredo/OneDrive/Documents/tecnico/4_ano/Robotica/project/ros2_ws/build/ps4_controller && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/franciscoazeredo/OneDrive/Documents/tecnico/4_ano/Robotica/project/ros2_ws/src/ps4_controller /home/franciscoazeredo/OneDrive/Documents/tecnico/4_ano/Robotica/project/ros2_ws/src/ps4_controller /home/franciscoazeredo/OneDrive/Documents/tecnico/4_ano/Robotica/project/ros2_ws/build/ps4_controller /home/franciscoazeredo/OneDrive/Documents/tecnico/4_ano/Robotica/project/ros2_ws/build/ps4_controller /home/franciscoazeredo/OneDrive/Documents/tecnico/4_ano/Robotica/project/ros2_ws/build/ps4_controller/CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ps4_controller__rosidl_typesupport_c.dir/depend
