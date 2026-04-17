<div align="center">

# 🔄 push_swap

**A blazing-fast integer stack sorter written in C**

[![Language](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Algorithm](https://img.shields.io/badge/Algorithm-Turk%20Sort-orange.svg)](#algorithm)
[![100 numbers](https://img.shields.io/badge/100%20nums-~550%20ops-brightgreen.svg)](#performance)
[![500 numbers](https://img.shields.io/badge/500%20nums-~5050%20ops-green.svg)](#performance)

[Leia em Português](README.pt.md)

</div>

---

## 📌 Overview

`push_swap` sorts an integer stack using the **minimum possible number of operations** from a strictly limited set. The challenge: design an algorithm smart enough to sort any input with as few moves as possible, using only two stacks and eleven operations.

---

## ⚙️ Algorithm

The sorting engine is built on **Turk Sort** — a divide-and-conquer strategy that combines intelligent heuristics with efficient rotation logic to minimize total moves.

**How it works:**
1. **Partition** elements from stack `a` into stack `b` using cost-based push decisions
2. **Score** each candidate element by the total rotations needed in both stacks
3. **Push** the cheapest element first, applying simultaneous rotations (`rr` / `rrr`) where possible
4. **Reconstruct** stack `a` by rotating the minimum to the top after all elements return

This greedy approach consistently achieves near-optimal results without exhaustive search.

---

## 🛠️ Operations

| Operation | Description |
|-----------|-------------|
| `sa` | Swap the top two elements of stack `a` |
| `sb` | Swap the top two elements of stack `b` |
| `ss` | Execute `sa` and `sb` simultaneously |
| `pa` | Push the top element of stack `b` onto stack `a` |
| `pb` | Push the top element of stack `a` onto stack `b` |
| `ra` | Rotate `a` upward — first element becomes last |
| `rb` | Rotate `b` upward — first element becomes last |
| `rr` | Execute `ra` and `rb` simultaneously |
| `rra` | Reverse rotate `a` — last element becomes first |
| `rrb` | Reverse rotate `b` — last element becomes first |
| `rrr` | Execute `rra` and `rrb` simultaneously |

---

## 📊 Performance

### 100 numbers — ~550 operations

![100 numbers benchmark](https://github.com/user-attachments/assets/14661d9d-c02a-4f53-8264-b6595f4f4bf1)

### 500 numbers — ~5050 operations

![500 numbers benchmark](https://github.com/user-attachments/assets/a0012241-d929-46ca-8581-4f85573a1d52)

---

## 🧪 Tester

A shell script is included to benchmark `push_swap` automatically across multiple runs.

### Usage

```bash
chmod +x tester.sh
./tester.sh <number of runs> <number of integers>
```

The script generates random integer sets, runs `push_swap` on each, and reports the operation count per run along with the average.

### Results — 100 and 500 integers

<p align="center">
  <img src="https://github.com/user-attachments/assets/46986d4a-0322-4f2f-b2dd-ac8f7bbd9f07" height="350" />
  &nbsp;&nbsp;
  <img src="https://github.com/user-attachments/assets/92f6ba78-9b1d-4f93-8425-52f5725d75ac" height="350" />
</p>

---
