# 🌌 Day 4: Ceres Search

_"Looks like the Chief's not here. Next!"_ One of The Historians pulls out a device and pushes the only button on it. After a brief flash, you recognize the interior of the **Ceres monitoring station**!

As the search for the Chief continues, a small Elf who lives on the station tugs on your shirt. She'd like to know if you could help her with her **word search puzzle** (your puzzle input). She only has to find one word: `XMAS`.

## 🧩 Problem Description

This **word search puzzle** allows words to be:

- **Horizontal** (left-to-right or right-to-left)
- **Vertical** (top-to-bottom or bottom-to-top)
- **Diagonal** (in any direction)
- Words can **overlap** or be **written backwards**.

Your task is to find **all instances of the word** `XMAS`. The puzzle input is a grid of letters, and the goal is to determine how many times `XMAS` appears in the grid.

### Example Cases

Here are some ways `XMAS` might appear. Irrelevant characters are replaced with `.`:


In a larger grid, such as:


The word `XMAS` appears **18 times**. Below is the same grid with non-relevant characters replaced by `.` for clarity:


## 📝 Instructions

1. Analyze the puzzle input (a grid of letters).
2. Find **all instances** of the word `XMAS`:
   - Check all directions (horizontal, vertical, diagonal).
   - Consider overlaps and words written backwards.
3. Return the total count of `XMAS` in the grid.

### Example Input

```plaintext
MMMSXXMASM
MSAMXMSMSA
AMXSXMAAMM
MSAMASMSMX
XMASAMXAMM
XXAMMXXAMA
SMSMSASXSS
SAXAMASAAA
MAMMMXMMMM
MXMXAXMASX
18
