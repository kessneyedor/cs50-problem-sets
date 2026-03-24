#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number = get_long("Number: ");

    //My step 1: I'm going to multiply every other digit by 2, starting from second-to-last
    long temp = number;
    int sum1 = 0;
    int sum2 = 0;
    int position = 1;

    while (temp > 0)
    {
        int digit = temp % 10;

        if (position % 2 == 0)
        {
            // Multiply by 2 and add digits of product
            int product = digit * 2;
            sum1 += (product % 10) + (product / 10);
        }
        else
        {
            // Step 2: Add digits not multiplied by 2
            sum2 += digit;
        }

        position++;
        temp /= 10;
    }

    // Step 3: Check if total's last digit is 0
    int total = sum1 + sum2;

    if (total % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // Get number of digits
    int digits = 0;
    long temp2 = number;
    while (temp2 > 0)
    {
        digits++;
        temp2 /= 10;
    }

    // Get first two digits
    long first_two = number;
    while (first_two >= 100)
    {
        first_two /= 10;
    }

    // Get first digit
    long first_one = number;
    while (first_one >= 10)
    {
        first_one /= 10;
    }

    // Identify card
    if (digits == 15 && (first_two == 34 || first_two == 37))
    {
        printf("AMEX\n");
    }
    else if (digits == 16 && (first_two >= 51 && first_two <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((digits == 13 || digits == 16) && first_one == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
