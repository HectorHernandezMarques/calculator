#ifndef CALCULATOR_LIB_CONTROLLERS_CONTROLLERVISITOR_H
#define CALCULATOR_LIB_CONTROLLERS_CONTROLLERVISITOR_H

namespace calculator::lib::controllers {
    class ParseExpressionController;

    class ControllerVisitor {

    public:
        ControllerVisitor() = default;
        virtual ~ControllerVisitor() = default;

        ControllerVisitor(ControllerVisitor const &rhs) = delete;
        ControllerVisitor &operator=(ControllerVisitor const &rhs) = delete;

        ControllerVisitor(ControllerVisitor &&rhs) noexcept = delete;
        ControllerVisitor &operator=(ControllerVisitor &&rhs) noexcept = delete;

        virtual void visit(ParseExpressionController &parseExpressionController) const = 0;

    private:

    };

}

#endif
