#include "../src/hello-world.h"
#include "../third_party/Unity/src/unity.h"

// This function is necessary for Unity to initialize
void setUp(void) {}

// This function is also Unity boilerplate
void tearDown(void) {}

void function_should_return_inputs(void) {
  char message[] = "hello world";
  TEST_ASSERT_EQUAL_STRING(message, hello_world(message));
  char message2[] = "HelloWRLD";
  TEST_ASSERT_EQUAL_STRING(message2, hello_world(message2));
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(function_should_return_inputs);
  return UNITY_END();
}
