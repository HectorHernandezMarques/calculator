#include "ParseExpressionControllerView.h"
#include <ParseExpressionController.h>

namespace calculator::lib::views {

    void ParseExpressionControllerView::interact(controllers::ParseExpressionController &parseExpressionController) {
        parseExpressionController.execute();
    }

}