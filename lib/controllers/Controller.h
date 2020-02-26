#ifndef CALCULATOR_LIB_CONTROLLERS_CONTROLLER_H
#define CALCULATOR_LIB_CONTROLLERS_CONTROLLER_H

#include <memory>

#include <Error.h>

#include "ControllerVisitor.h"

namespace calculator::lib::controllers {

    class Controller {

    public:
        Controller() = default;
        virtual ~Controller() = default;

        Controller(Controller const &rhs) = delete;
        Controller &operator=(Controller const &rhs) = delete;

        Controller(Controller &&rhs) noexcept = delete;
        Controller &operator=(Controller &&rhs) noexcept = delete;

        virtual std::unique_ptr<errors::Error> execute() = 0;
        virtual void accept(const ControllerVisitor &controllerVisitor) = 0;

    private:

    };

}

#endif
