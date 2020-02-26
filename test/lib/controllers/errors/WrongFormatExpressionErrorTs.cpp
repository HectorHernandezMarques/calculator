#include <gtest/gtest.h>
#include <WrongFormatExpressionError.h>

class WrongFormatExpressionTs : public ::testing::Test {
protected:
    WrongFormatExpressionTs() : sut_("4 +5") {

    }

    void SetUp() override {
    }

    void TearDown() override {
    }

    calculator::lib::controllers::errors::WrongFormatExpressionError sut_;
};

TEST_F(WrongFormatExpressionTs,
       GIVEN_a_WrongFormatExpressionError_WHEN_toString_THEN_proper_string_is_returned) {
    ASSERT_EQ(sut_.toString(),
              "Expression \"4 +5\" has a wrong format.");
}