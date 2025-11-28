#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// In C, the easiest way to solve this problem involves a hash set
// We don't need to implement a hash table since we only count ints once

typedef struct {
  int size;
  bool *set;
} intset;

intset create_intSet(size_t size) {
  intset intSet;
  intSet.size = size;
  // Allocate memory for a fixed sized array of booleans and get a pointer
  bool *set = (bool *)calloc(size, sizeof(bool));
  // Intialize the array by setting it to all zeros
  memset(set, 0, size * sizeof(bool));
  // Pass the pointer to our object and return it
  intSet.set = set;
  return intSet;
}

void add_int_to_set(int i, intset *pIntSet) {
  // Pointer arithmetic in C :
  // Doing this is equivalent to (*pIntSet).*(set + i) = true
  pIntSet->set[i] = true;
}

bool check_int_in_set(int i, intset intSet) {
  if (intSet.set[i] == 1) {
    return true;
  } else {
    return false;
  }
}

bool has_duplicate(int arr[], size_t n_elements) {
  size_t size;
  size_t i;
  intset intSet = create_intSet(size);
  intset *pIntSet = &intSet;
  for (i = 0; i < n_elements; i++) {
    if (check_int_in_set(arr[i], intSet)) {
      return true;
    };
    add_int_to_set(arr[i], pIntSet);
  }
  return false;
}
