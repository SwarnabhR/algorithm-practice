# 1. Two Sum

## Problem Statement

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers that add up to the target.

You may assume that each input has exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

## Examples

### Example 1
- Input: `nums = [2,7,11,15]`, `target = 9`
- Output: `[0,1]`
- Explanation: `nums[0] + nums[1] == 9`, so we return `[0, 1]`.

### Example 2
- Input: `nums = [3,2,4]`, `target = 6`
- Output: `[1,2]`
- Explanation: `nums[1] + nums[2] == 6`, so we return `[1, 2]`.

### Example 3
- Input: `nums = [3,3]`, `target = 6`
- Output: `[0,1]`
- Explanation: `nums[0] + nums[1] == 6`, so we return `[0, 1]`.

## Constraints

- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- Only one valid answer exists.

## Approach

Use a hash map to store values and their indices. For each number, check if `target - num` exists in the map. Time complexity: O(n), Space complexity: O(n).

## Complexity

- Time: O(n) — single pass with hash map lookup
- Space: O(n) — hash map storage
