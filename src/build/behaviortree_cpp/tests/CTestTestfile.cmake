# CMake generated Testfile for 
# Source directory: /home/oh/slam_ws/src/BehaviorTree.CPP/tests
# Build directory: /home/oh/slam_ws/src/build/behaviortree_cpp/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(behaviortree_cpp_test "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/oh/slam_ws/src/build/behaviortree_cpp/test_results/behaviortree_cpp/behaviortree_cpp_test.gtest.xml" "--package-name" "behaviortree_cpp" "--output-file" "/home/oh/slam_ws/src/build/behaviortree_cpp/ament_cmake_gtest/behaviortree_cpp_test.txt" "--command" "/home/oh/slam_ws/src/build/behaviortree_cpp/tests/behaviortree_cpp_test" "--gtest_output=xml:/home/oh/slam_ws/src/build/behaviortree_cpp/test_results/behaviortree_cpp/behaviortree_cpp_test.gtest.xml")
set_tests_properties(behaviortree_cpp_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/oh/slam_ws/src/build/behaviortree_cpp/tests/behaviortree_cpp_test" TIMEOUT "60" WORKING_DIRECTORY "/home/oh/slam_ws/src/build/behaviortree_cpp/tests" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/oh/slam_ws/src/BehaviorTree.CPP/tests/CMakeLists.txt;45;ament_add_gtest;/home/oh/slam_ws/src/BehaviorTree.CPP/tests/CMakeLists.txt;0;")
subdirs("../gtest")
