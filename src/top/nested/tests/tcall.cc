//! Boilerplate tests from the GoogleTests package

#include "top/nested/call.h" // The class I am testing
#include "gtest/gtest.h" // the googletest framework

namespace {

// The fixture for testing class Call .
class CallTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if its body
  // is empty.

  CallTest() {
     // You can do set-up work for each test here.
  }

  ~CallTest() override {
     // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  void SetUp() override {
     // Code here will be called immediately after the constructor (right
     // before each test).
  }

  void TearDown() override {
     // Code here will be called immediately after each test (right
     // before the destructor).
  }

  // Objects declared here can be used by all tests in the test suite for Foo.
};

// Tests that the Call::greeting() method does what we expect.
TEST_F(CallTest, MethodCall) {
  top::nested::call f;
  EXPECT_EQ(f.greeting(),"I am calling hello");
}

// Tests that Foo does Xyz.
// TEST_F(CallTest, DoesXyz) {
  // Exercises the Xyz feature of Foo.
// }

}  // namespace

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
