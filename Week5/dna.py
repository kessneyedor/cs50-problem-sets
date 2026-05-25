import csv
import sys


def main():
    # Check command-line arguments
    if len(sys.argv) != 3:
        print("Usage: python dna.py database sequence")
        sys.exit(1)

    # Read database into memory
    people = []
    with open(sys.argv[1]) as f:
        reader = csv.DictReader(f)
        strs = reader.fieldnames[1:]
        for row in reader:
            people.append(row)

    # Read DNA sequence into memory
    with open(sys.argv[2]) as f:
        sequence = f.read()

    # Compute longest match for each STR
    counts = {str: longest_match(sequence, str) for str in strs}

    # Check for match
    for person in people:
        if all(int(person[str]) == counts[str] for str in strs):
            print(person["name"])
            return

    print("No match")


def longest_match(sequence, subsequence):
    longest = 0
    length = len(subsequence)

    for i in range(len(sequence)):
        count = 0
        while sequence[i + count * length: i + (count + 1) * length] == subsequence:
            count += 1
        longest = max(longest, count)

    return longest


main()
