CS50 PROBLEM SET 3 – ALGORITHMS

This repository contains my solutions for CS50’s Problem Set 3, which focuses on algorithms, searching, and sorting techniques using the C programming language.

OVERVIEW
In this problem set, I learned how to work with more advanced concepts in computer science, especially how data can be organized and searched efficiently. The tasks required implementing real-world algorithms and understanding their performance.

TOPICS COVERED

Linear Search
Binary Search
Sorting Algorithms
Algorithm Efficiency (Big O Notation)
Recursion (basic understanding)

PROGRAMS IMPLEMENTED

PLURALITY
This program simulates a simple election using the plurality voting system.

Features:

Accepts candidate names as command-line arguments
Prompts users to input votes
Counts votes for each candidate
Determines the winner (candidate with the most votes)

Concepts used:

Arrays
Loops
Functions
RUNOFF
This program implements a runoff election system where voters rank candidates in order of preference.

Features:

Voters rank candidates
Eliminates candidates with the lowest votes
Redistributes votes based on preferences
Continues until a winner is found

Concepts used:

Structs
Multi-dimensional arrays
Recursion-like elimination logic
More complex algorithm design
TIDEMAN
This program implements the Tideman (ranked pairs) voting system, which is more complex and ensures a fair election outcome.

Features:

Records voter preferences
Creates pairs of candidates
Sorts pairs by strength of victory
Locks pairs without creating cycles
Determines the winner

Concepts used:

Graph representation
Sorting algorithms
Cycle detection
Advanced problem solving
SORT
This program demonstrates sorting algorithms.

Features:

Implements different sorting methods such as:
Bubble Sort
Selection Sort
(Optional) Merge Sort
Compares performance of algorithms

Concepts used:

Sorting logic
Time complexity
Efficiency comparison
SEARCH
This program demonstrates searching algorithms.

Features:

Implements:
Linear Search
Binary Search
Shows how data organization affects search speed

Concepts used:

Searching algorithms
Conditionals
Efficiency

WHAT I LEARNED

How to design and implement algorithms step-by-step
The difference between efficient and inefficient solutions
How to debug complex programs in C
How to think logically when solving problems
The importance of algorithm optimization

HOW TO RUN

Compile the program using:
gcc filename.c -o output
Run the program:
./output

AUTHOR
This project was completed as part of Harvard’s CS50 course.