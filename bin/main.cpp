#include <iostream>
#include <string>
#include "Calculator.h"

int main() {
    calculator::bin::Calculator calculator(std::make_unique<calculator::lib::controllers::Logic>(),
                                           std::make_unique<calculator::lib::views::ControllerView>());
    calculator.run();
    return 0;
}