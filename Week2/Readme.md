CS50x 2026 — Week 2 Problem Sets
Arrays, Strings & Cryptography in C
Overview
This repository contains solutions to all Week 2 problem sets from Harvard's CS50x 2026 course. Week 2 covers arrays, strings, command-line arguments, and introduces basic cryptography concepts in C.
Projects Summary
1. Scrabble  —  Determine the winner of a Scrabble round using letter point values
2. Readability  —  Compute the grade level of a text using the Coleman-Liau index
3. Caesar  —  Encrypt messages using Caesar's cipher (Less Comfortable)
4. Substitution  —  Encrypt messages using a substitution cipher (More Comfortable)
1. Scrabble
Folder: scrabble/
Determines the winner of a short Scrabble-like game. Each player inputs a word, and the program computes the score based on official Scrabble letter values, then declares the winner.
Concepts Covered
•	Arrays — storing letter point values in an int array
•	Functions — compute_score() as a reusable abstraction
•	isalpha, isupper, islower from ctype.h
•	ASCII math: word[i] - 'A' to get array index
Letter Point Values
int POINTS[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
Index 0 = A (1pt), Index 1 = B (3pts) ... Index 25 = Z (10pts)
Key Formula
score += POINTS[word[i] - 'A'];  // for uppercase
score += POINTS[word[i] - 'a'];  // for lowercase
How to Run
•	cd ~/scrabble
•	make scrabble
•	./scrabble
Submit
submit50 cs50/problems/2026/x/scrabble
2. Readability
Folder: readability/
Calculates the approximate U.S. grade level needed to comprehend a piece of text using the Coleman-Liau index formula.
Concepts Covered
•	Counting letters, words, and sentences in a string
•	Float casting to avoid integer division
•	round() from math.h
•	Breaking a problem into multiple helper functions
Coleman-Liau Formula
index = 0.0588 * L - 0.296 * S - 15.8
Where L = avg letters per 100 words, S = avg sentences per 100 words
Output Rules
•	Grade 16+ if index >= 16
•	Before Grade 1 if index < 1
•	Grade X otherwise
Helper Functions
•	count_letters(text) — counts alphabetic characters
•	count_words(text) — counts spaces + 1
•	count_sentences(text) — counts . ! ?
How to Run
•	cd ~/readability
•	make readability
•	./readability
Submit
submit50 cs50/problems/2026/x/readability
3. Caesar (Less Comfortable)
Folder: caesar/
Encrypts messages using Caesar's cipher. The key is passed as a command-line argument, and each letter in the plaintext is rotated by that many positions in the alphabet.
Concepts Covered
•	Command-line arguments: argc and argv[]
•	atoi() to convert string to int
•	Modulo arithmetic for wrapping around alphabet
•	Preserving case during encryption
Key Formula
ci = (pi - 'A' + key) % 26 + 'A'  // uppercase
ci = (pi - 'a' + key) % 26 + 'a'  // lowercase
Validation
•	Must have exactly 1 command-line argument
•	Key must contain only digits (only_digits function)
•	Non-letter characters passed through unchanged
How to Run
•	cd ~/caesar
•	make caesar
•	./caesar 13
Submit
submit50 cs50/problems/2026/x/caesar
4. Substitution (More Comfortable)
Folder: substitution/
Encrypts messages using a full substitution cipher. The key is a 26-character string where each letter maps to a substitute letter. For example, key NQXPOMAFTRHLZGECYJIUWSKDVB encrypts HELLO as FOLLE.
Concepts Covered
•	Command-line argument validation
•	Key validation: 26 chars, all letters, no repeats
•	Mapping letters using key[letter - 'A']
•	toupper() and tolower() to preserve case
Key Validation Rules
•	Must be exactly 26 characters
•	Must contain only alphabetic characters
•	Must contain each letter exactly once (no duplicates)
•	Key is case-insensitive
Encryption Logic
toupper(key[plaintext[i] - 'A'])  // for uppercase input
tolower(key[plaintext[i] - 'a'])  // for lowercase input
How to Run
•	cd ~/substitution
•	make substitution
•	./substitution NQXPOMAFTRHLZGECYJIUWSKDVB
Submit
submit50 cs50/problems/2026/x/substitution
How to Run Any Project
•	Open CS50 Codespace at cs50.dev
•	Navigate to the project folder: cd ~/[project]
•	Compile with: make [filename]
•	Run with: ./[filename]
All Submission Commands
submit50 cs50/problems/2026/x/scrabble
submit50 cs50/problems/2026/x/readability
submit50 cs50/problems/2026/x/caesar
submit50 cs50/problems/2026/x/substitution
CS50x 2026 — Week 2 Complete ✓
