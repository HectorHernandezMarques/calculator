add_subdirectory(errors)

add_simple_library(calculator_lib_controllers OBJECT
        Controller.cpp
        ControllerVisitor.cpp
        Logic.cpp
        ParseExpressionController.cpp
        )

target_link_libraries(calculator_lib_controllers
        PUBLIC
            calculator_lib_controllers_errors
        )