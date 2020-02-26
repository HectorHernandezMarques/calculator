add_executable(calculator_test_lib_controllers_errors
        NoErrorTs.cpp
        WrongFormatExpressionErrorTs.cpp
        )

target_link_libraries(calculator_test_lib_controllers_errors
        PRIVATE
        calculator_lib_controllers_errors
        gtest_main
        )

add_test(NAME calculator_test_lib_controllers_errors
        COMMAND calculator_test_lib_controllers_errors
        )