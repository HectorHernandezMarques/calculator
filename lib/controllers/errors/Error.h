#ifndef CALCULATOR_LIB_CONTROLLERS_ERRORS_ERROR_H
#define CALCULATOR_LIB_CONTROLLERS_ERRORS_ERROR_H

#include <string>

namespace calculator::lib::controllers::errors {

    class Error {

    public:
        Error() = default;
        virtual ~Error() = default;

        Error(Error const &rhs) = delete;
        Error &operator=(Error const &rhs) = delete;

        Error(Error &&rhs) noexcept = delete;
        Error &operator=(Error &&rhs) noexcept = delete;

        virtual std::string toString() = 0;

    private:

    };

}

#endif
