#include <gtest/gtest.h>
#include <NoError.h>

class NoErrorTs : public ::testing::Test {
protected:
    void SetUp() override {
    }

    void TearDown() override {
    }

    calculator::lib::controllers::errors::NoError noError_;
};

TEST_F(NoErrorTs, GIVEN_a_NoError_WHEN_toString_THEN_No_Error_string_is_returned) {
    ASSERT_EQ(noError_.toString(), "No Error");
}