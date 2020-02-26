#include <NoError.h>
#include "ParseExpressionController.h"

namespace calculator::lib::controllers {

    std::unique_ptr<errors::Error> ParseExpressionController::execute() {
        return std::unique_ptr<errors::Error>{};
    }

    void ParseExpressionController::accept(const ControllerVisitor &controllerVisitor) {
        controllerVisitor.visit(*this);
    }
}