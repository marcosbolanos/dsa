export default function has_duplicate(nums: number[]) {
  let count = new Set();
  let n = nums.length;
  for (let i = 0; i < n; i++) {
    let num = nums[i];
    if (count.has(num)) {
      return true;
    }
    count.add(num);
  }
  return false;
}
