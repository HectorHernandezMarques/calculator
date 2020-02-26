add_simple_library(calculator_lib_views OBJECT
        ControllerView.cpp
        ParseExpressionControllerView.cpp
        )

target_link_libraries(calculator_lib_views
        PUBLIC
            calculator_lib_controllers
        )