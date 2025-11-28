#include "../src/has-duplicate.h"
#include "../third_party/Unity/src/unity.h"

void setUp(void) {}

void tearDown(void) {}

void should_return_true_if_duplicate(void) {
  int arr[5] = {1, 3, 3, 4, 6};
  TEST_ASSERT_TRUE(has_duplicate(arr, 5));
}

void should_return_false_if_no_duplicate(void) {
  int arr[7] = {7, 6, 5, 4, 3, 2, 1};
  TEST_ASSERT_FALSE(has_duplicate(arr, 7));
}

void should_return_false_if_empty(void) {
  int arr[] = {};
  TEST_ASSERT_FALSE(has_duplicate(arr, 7));
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(should_return_false_if_empty);
  RUN_TEST(should_return_false_if_no_duplicate);
  RUN_TEST(should_return_true_if_duplicate);
  return UNITY_END();
}
