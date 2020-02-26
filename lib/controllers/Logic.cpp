#include "ParseExpressionController.h"

#include "Logic.h"

namespace calculator::lib::controllers {

    std::unique_ptr<Controller> Logic::getController() {
        return std::make_unique<ParseExpressionController>();
    }
}