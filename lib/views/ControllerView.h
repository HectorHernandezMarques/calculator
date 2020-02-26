#ifndef CALCULATOR_LIB_VIEWS_CONTROLLERVIEW_H
#define CALCULATOR_LIB_VIEWS_CONTROLLERVIEW_H

#include <ControllerVisitor.h>
#include <ParseExpressionController.h>
#include <Controller.h>

namespace calculator::lib::views {

    class ControllerView : public controllers::ControllerVisitor {

    public:
        ControllerView() = default;
        ~ControllerView() override = default;

        ControllerView(ControllerView const &rhs) = delete;
        ControllerView &operator=(ControllerView const &rhs) = delete;

        ControllerView(ControllerView &&rhs) noexcept = delete;
        ControllerView &operator=(ControllerView &&rhs) noexcept = delete;

        void interact(controllers::Controller &controller);
        void visit(controllers::ParseExpressionController &parseExpressionController) const override;

    private:

    };

}

#endif
