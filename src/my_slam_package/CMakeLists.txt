cmake_minimum_required(VERSION 3.8)
project(my_slam_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

#[[
add_executable(my_slam_node src/my_slam_node.cpp)
target_include_directories(my_slam_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(my_slam_node PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

install(TARGETS my_slam_node
  DESTINATION lib/${PROJECT_NAME})
]]#

## 생성한 launch 와 urdf 와 lua 를 포함하도록 설정
install(
  DIRECTORY launch urdf lua
  DESTINATION share/${PROJECT_NAME}
)
##

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
