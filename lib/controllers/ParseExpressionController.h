#ifndef CALCULATOR_LIB_CONTROLLERS_PARSEEXPRESSIONCONTROLLER_H
#define CALCULATOR_LIB_CONTROLLERS_PARSEEXPRESSIONCONTROLLER_H

#include "Controller.h"

namespace calculator::lib::controllers {

    class ParseExpressionController : public Controller{

    public:
        ParseExpressionController() = default;
        ~ParseExpressionController() override = default;

        ParseExpressionController(ParseExpressionController const &rhs) = delete;
        ParseExpressionController &operator=(ParseExpressionController const &rhs) = delete;

        ParseExpressionController(ParseExpressionController &&rhs) noexcept = delete;
        ParseExpressionController &operator=(ParseExpressionController &&rhs) noexcept = delete;

        std::unique_ptr<errors::Error> execute() override;
        void accept(const ControllerVisitor &controllerVisitor) override;

    private:

    };

}

#endif
