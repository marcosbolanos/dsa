import { expect, test } from 'vitest'

import has_duplicate from '../src/has-duplicate.ts'

test('Returns false for empty array', () => {
  let array: number[] = [];
  expect(has_duplicate(array)).toBe(false)
})

test('Returns false for array without duplicates', () => {
  let array: number[] = [9, 1, 2, 4, 6, 8];
  expect(has_duplicate(array)).toBe(false);
  array = [2, 6, 8];
  expect(has_duplicate(array)).toBe(false);
  array = [69];
  expect(has_duplicate(array)).toBe(false);
})

test('Returns true for arrays with duplicates', () => {
  let array: number[] = [2, 4, 2];
  expect(has_duplicate(array)).toBe(true);
})
