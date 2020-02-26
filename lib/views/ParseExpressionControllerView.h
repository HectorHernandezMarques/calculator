#ifndef CALCULATOR_LIB_VIEWS_PARSEEXPRESSIONCONTROLLERVIEW_H
#define CALCULATOR_LIB_VIEWS_PARSEEXPRESSIONCONTROLLERVIEW_H

#include <ParseExpressionController.h>

namespace calculator::lib::views {

    class ParseExpressionControllerView {

    public:
        ParseExpressionControllerView() = default;
        virtual ~ParseExpressionControllerView()  = default;

        ParseExpressionControllerView(ParseExpressionControllerView const &rhs) = delete;
        ParseExpressionControllerView &operator=(ParseExpressionControllerView const &rhs) = delete;

        ParseExpressionControllerView(ParseExpressionControllerView &&rhs) noexcept = delete;
        ParseExpressionControllerView &operator=(ParseExpressionControllerView &&rhs) noexcept = delete;

        void interact(controllers::ParseExpressionController &parseExpressionController);

    private:

    };

}

#endif
