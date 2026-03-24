CS50x 2026 — Week 1 Problem Sets
Introduction to Computer Science — C Programming
Overview
This repository contains solutions to all Week 1 problem sets from Harvard's CS50x 2026 course. Week 1 introduces the C programming language, covering variables, loops, conditionals, and functions.
Projects
1. Hello
Folder: hello/
Description: A simple program that prompts the user for their name and prints a personalized greeting.
Concepts: printf, get_string, CS50 library, basic I/O
How to run:
•	cd hello
•	make hello
•	./hello
2. Mario (Less Comfortable)
Folder: mario/less/
Description: Prints a right-aligned half-pyramid using # symbols. The user specifies the height (1–8).
Concepts: Nested loops, do-while loops, input validation, get_int
Example output (height = 4):
   #
  ##
 ###
####
3. Mario (More Comfortable)
Folder: mario/more/
Description: Prints a double pyramid (left and right) separated by a two-space gap. The user specifies the height (1–8).
Concepts: Nested loops, mirrored output, do-while loops
Example output (height = 4):
   #  #
  ##  ##
 ###  ###
####  ####
4. Credit
Folder: credit/
Description: Validates a credit card number using Luhn's algorithm and identifies the card type (AMEX, MASTERCARD, VISA, or INVALID).
Concepts: Luhn's algorithm, modulo arithmetic, get_long, while loops, conditionals
How Luhn's Algorithm works:
•	Multiply every other digit by 2, starting from second-to-last
•	Add digits of those products together
•	Add the sum to remaining digits
•	If total % 10 == 0, the card is valid!
Card identification rules:
•	AMEX: starts with 34 or 37, 15 digits
•	MASTERCARD: starts with 51–55, 16 digits
•	VISA: starts with 4, 13 or 16 digits
How to Run Any Project
•	Open CS50 Codespace at cs50.dev
•	Navigate to the project folder: cd ~/[project]
•	Compile: make [filename]
•	Run: ./[filename]
Submission Commands
submit50 cs50/problems/2026/x/hello
submit50 cs50/problems/2026/x/mario/less
submit50 cs50/problems/2026/x/mario/more
submit50 cs50/problems/2026/x/credit
CS50x 2026 — Week 1 Complete ✓
