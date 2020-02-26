add_executable(calculator_bin
        Calculator.cpp
        main.cpp
        )

target_link_libraries(calculator_bin
        PUBLIC
            calculator_lib_controllers
            calculator_lib_views
        )

set_target_properties(calculator_bin PROPERTIES
        PREFIX ""
        OUTPUT_NAME calculator_$<CONFIG>
        OUTPUT_NAME_RELEASE calculator
        SUFFIX .${PROJECT_VERSION}${CMAKE_EXECUTABLE_SUFFIX}
        )