#include <Controller.h>

#include "Calculator.h"

namespace calculator::bin {

    Calculator::Calculator(std::unique_ptr<lib::controllers::Logic> logic,
                           std::unique_ptr<lib::views::ControllerView> controllerView) :
            logic_(std::move(logic)),
            controllerView_(std::move(controllerView)) {
    }

    void Calculator::run() {
        //std::string userInput;
        //for (; !(userInput == "no");) {
        //    std::cout << "Ey xD, please introduce an operation" << std::endl;
        //    std::cin >> userInput;
        //    int result = calculator::lib::views::
        //    std::cout << userInput;
        //}
        std::unique_ptr<lib::controllers::Controller> controller{logic_->getController()};

        while (controller) {
            controllerView_->interact(*controller);
            controller = logic_->getController();
        }
    }

}