from cs50 import get_int

number = get_int("Number: ")
digits = str(number)
length = len(digits)

# Luhn's algorithm
total = 0
for i, digit in enumerate(reversed(digits)):
    n = int(digit)
    if i % 2 == 1:
        n *= 2
        if n > 9:
            n -= 9
    total += n

if total % 10 != 0:
    print("INVALID")
elif length == 15 and digits[:2] in ["34", "37"]:
    print("AMEX")
elif length == 16 and digits[:2] in ["51", "52", "53", "54", "55"]:
    print("MASTERCARD")
elif length in [13, 16] and digits[0] == "4":
    print("VISA")
else:
    print("INVALID")
