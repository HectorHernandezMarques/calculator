#ifndef CALCULATOR_LIB_CONTROLLERS_ERRORS_NOERROR_H
#define CALCULATOR_LIB_CONTROLLERS_ERRORS_NOERROR_H

#include "Error.h"

namespace calculator::lib::controllers::errors {

    class NoError : public Error {

    public:
        NoError() = default;
        ~NoError() override = default;

        NoError(NoError const &rhs) = delete;
        NoError &operator=(NoError const &rhs) = delete;

        NoError(NoError &&rhs) noexcept = delete;
        NoError &operator=(NoError &&rhs) noexcept = delete;

        std::string toString() override;

    private:

    };

}

#endif
