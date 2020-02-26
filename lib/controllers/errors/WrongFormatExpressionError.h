#ifndef CALCULATOR_LIB_CONTROLLERS_ERRORS_WRONGFORMATEXPRESSIONERROR_H
#define CALCULATOR_LIB_CONTROLLERS_ERRORS_WRONGFORMATEXPRESSIONERROR_H

#include "Error.h"

namespace calculator::lib::controllers::errors {

    class WrongFormatExpressionError : public Error {

    public:
        explicit WrongFormatExpressionError(std::string originalExpression);
        ~WrongFormatExpressionError() override = default;

        WrongFormatExpressionError(WrongFormatExpressionError const &rhs) = delete;
        WrongFormatExpressionError &operator=(WrongFormatExpressionError const &rhs) = delete;

        WrongFormatExpressionError(WrongFormatExpressionError &&rhs) noexcept = delete;
        WrongFormatExpressionError &operator=(WrongFormatExpressionError &&rhs) noexcept = delete;

        std::string toString() override;

    private:
        std::string originalExpression_;

    };

}

#endif
