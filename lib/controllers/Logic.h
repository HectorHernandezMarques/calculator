#ifndef CALCULATOR_LIB_CONTROLLERS_LOGIC_H
#define CALCULATOR_LIB_CONTROLLERS_LOGIC_H

#include <memory>

#include "Controller.h"

namespace calculator::lib::controllers {

    class Logic {

    public:
        Logic() = default;
        virtual ~Logic() = default;

        Logic(Logic const &rhs) = delete;
        Logic &operator=(Logic const &rhs) = delete;

        Logic(Logic &&rhs) noexcept = delete;
        Logic &operator=(Logic &&rhs) noexcept = delete;

        std::unique_ptr<Controller> getController();

    private:

    };

}

#endif
