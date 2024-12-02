# 🎅 Day 2: Red-Nosed Reports 🎄

Welcome to the **Red-Nosed Reports** puzzle! This is part of an Advent of Code challenge, where we analyze unusual data to assist the engineers at the Red-Nosed Reindeer nuclear fusion/fission plant. 🦌🔬

---

## 📖 Problem Description

The engineers have given you **reactor reports** to analyze. Each report consists of a series of numbers called "levels," listed on a single line. For example:


The **goal** is to determine how many of these reports are "safe."

---

## 🚦 Safety Rules

A report is **safe** if it satisfies both of these conditions:
1. **Consistent Trend**: The levels must either be **all increasing** or **all decreasing**.
2. **Acceptable Differences**: The difference between any two adjacent levels must be at least `1` and at most `3`.

### Example Analysis

| Report         | Analysis                                                               | Safe? |
|----------------|------------------------------------------------------------------------|-------|
| `7 6 4 2 1`    | Levels are decreasing by 1 or 2.                                       | ✅ Yes |
| `1 2 7 8 9`    | `2 -> 7` increases by 5 (too large).                                   | ❌ No  |
| `9 7 6 2 1`    | `6 -> 2` decreases by 4 (too large).                                   | ❌ No  |
| `1 3 2 4 5`    | Trend is mixed: increasing (`1 -> 3`) and decreasing (`3 -> 2`).       | ❌ No  |
| `8 6 4 4 1`    | Contains a repeated level (`4 -> 4` is neither an increase nor decrease). | ❌ No  |
| `1 3 6 7 9`    | Levels are increasing by 1, 2, or 3.                                   | ✅ Yes |

From the above, **2 reports are safe**.

---

## ✏️ Input Format

- The input is a series of reports, one per line.
- Each report contains space-separated integers.

### Example Input

---

## 🛠️ Solution Steps

1. **Parse Input**: Read the input as a list of lines, with each line representing a report.
2. **Analyze Each Report**:
   - Check if the levels are consistently increasing or decreasing.
   - Ensure the differences between adjacent levels fall within the range `[1, 3]`.
3. **Count Safe Reports**: Tally the number of reports that satisfy the safety rules.

---

## 🏆 Example Output

For the example input above:
Number of safe reports: 2

---

Happy coding! 🎉 Let's save the reactor and make Rudolph proud. 🦌✨
