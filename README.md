# DSA-Case-Study-

# DSA Case Study

A collection of beginner-friendly C++ solutions demonstrating some of the most important Data Structures and Algorithms (DSA) patterns frequently used in coding interviews, competitive programming, and technical assessments.

This repository was created as a learning resource to understand not only how to solve problems, but also why specific algorithms and data structures are chosen.

---

## Repository Structure

| File                       | Concept                         | Technique                          |
| -------------------------- | ------------------------------- | ---------------------------------- |
| `Level1_Hash.cpp`          | Cart Total Calculation          | Hash Map                           |
| `Level2_KBestSellers.cpp`  | Top-K Best Sellers              | Sorting                            |
| `Level3_SlidingWindow.cpp` | Shortest Flash-Sale Window      | Sliding Window                     |
| `Level4_PrefixSum.cpp`     | Promo Segments with Exact Total | Prefix Sum + Hash Map              |
| `Level5_Knapsack.cpp`      | Gift-Card Bundle Builder        | Dynamic Programming (0/1 Knapsack) |

---

## Level 1: Cart Total via Hash Map Lookup

### Objective

Calculate the total value of a shopping cart using product prices from a catalog.

### Concepts Learned

* Hash Maps (`map` / `unordered_map`)
* Fast key-value lookup
* Time complexity optimization

### Pattern

Use a Hash Map whenever frequent searches by ID or key are required.

---

## Level 2: Top-K Best Sellers

### Objective

Find the top K products based on sales count.

### Concepts Learned

* Custom sorting
* Comparators
* Ranking and leaderboard problems

### Pattern

Use sorting when items need to be ordered according to custom rules.

---

## Level 3: Shortest Flash-Sale Window

### Objective

Find the shortest contiguous segment whose sum reaches a target value.

### Concepts Learned

* Sliding Window
* Two Pointers
* Window expansion and contraction

### Pattern

Use Sliding Window for contiguous subarray problems involving positive values.

---

## Level 4: Promo Segments with an Exact Total

### Objective

Count the number of contiguous segments whose sum equals a target value.

### Concepts Learned

* Prefix Sums
* Hash Maps
* Efficient subarray counting

### Pattern

Use Prefix Sum + Hash Map when solving exact subarray sum problems, especially when negative numbers may be present.

---

## Level 5: Gift-Card Bundle Builder

### Objective

Select products that maximize value without exceeding a budget.

### Concepts Learned

* Dynamic Programming
* State transitions
* 0/1 Knapsack

### Pattern

Use Dynamic Programming when solving optimization problems with multiple choices and overlapping subproblems.

---

## Complexity Summary

| Level | Technique                      | Time Complexity | Space Complexity |
| ----- | ------------------------------ | --------------- | ---------------- |
| 1     | Hash Map                       | O(m + k)        | O(m)             |
| 2     | Sorting                        | O(n log n)      | O(n)             |
| 3     | Sliding Window                 | O(n)            | O(1)             |
| 4     | Prefix Sum + Hash Map          | O(n)            | O(n)             |
| 5     | Dynamic Programming (Knapsack) | O(n × B)        | O(B)             |

---

## Learning Goals

This repository covers five foundational DSA patterns:

* Hash Maps
* Sorting
* Sliding Window
* Prefix Sums
* Dynamic Programming

Mastering these patterns provides a strong foundation for:

* Coding Interviews
* Competitive Programming
* Online Assessments
* Placement Preparation
* Problem Solving

---

## Author

**Vidushi Mishra**

B.Tech Computer Science Engineering (CSE)

This repository serves as a personal DSA learning and revision resource.
