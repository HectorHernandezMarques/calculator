#ifndef CALCULATOR_BIN_CALCULATOR_H
#define CALCULATOR_BIN_CALCULATOR_H

#include <memory>

#include <Logic.h>
#include <ControllerView.h>

namespace calculator::bin {

    class Calculator {

    public:
        Calculator(std::unique_ptr<lib::controllers::Logic> logic,
                   std::unique_ptr<lib::views::ControllerView> controllerView);
        virtual ~Calculator() = default;

        Calculator(Calculator const &rhs) = delete;
        Calculator &operator=(Calculator const &rhs) = delete;

        Calculator(Calculator &&rhs) noexcept = delete;
        Calculator &operator=(Calculator &&rhs) noexcept = delete;

        void run();
    private:
        std::unique_ptr<lib::controllers::Logic> logic_;
        std::unique_ptr<lib::views::ControllerView> controllerView_;
    };

}

#endif
