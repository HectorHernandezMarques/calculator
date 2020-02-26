#include "ParseExpressionControllerView.h"

#include "ControllerView.h"

namespace calculator::lib::views {

    void ControllerView::interact(controllers::Controller &controller) {
        controller.accept(*this);
    }

    void ControllerView::visit(controllers::ParseExpressionController &parseExpressionController) const {
        ParseExpressionControllerView().interact(parseExpressionController);
    }

}