add_executable(
    unit_tests
    tst_test_init.h
    )

target_link_libraries(
    unit_tests
    gtest_main
    vec3
    )

add_test(
  NAME
  vec3_test
  COMMAND
    ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/unit_tests
  )
