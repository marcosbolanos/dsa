import { expect, test } from 'vitest'

import fibonacci from '../src/fibonacci.ts'

test('Returns the ith fibonacci number', () => {
  let fibonacci_sequence: number[] = [0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144];
  let n = fibonacci_sequence.length;
  for (let i = 0; i < n; i++) {
    expect(fibonacci(i)).toBe(fibonacci_sequence[i]);
  }
})

