import { expect, test } from 'vitest'
import hello_world from '../src/hello-world.ts';

test('Returns whatever string is passed to it', () => {
  let message = 'foo';
  expect(hello_world(message)).toBe(message);
  message = 'bar';
  expect(hello_world(message)).toBe(message);
})
