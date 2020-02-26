#include "WrongFormatExpressionError.h"

#include <utility>

namespace calculator::lib::controllers::errors {

    WrongFormatExpressionError::WrongFormatExpressionError(std::string originalExpression) :
            originalExpression_(std::move(originalExpression)) {
    }

    std::string WrongFormatExpressionError::toString() {
        return "Expression \"" + originalExpression_ + "\" has a wrong format.";
    }

}