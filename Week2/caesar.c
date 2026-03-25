#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);
char rotate(char c, int n);

int main(int argc, string argv[])
{
   
    if (argc != 2 || !only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Convert argv[1] from a string to an int
    int key = atoi(argv[1]);

    // Prompt user for plaintext
    string plaintext = get_string("plaintext:  ");

    // Encipher each character of the plaintext
    printf("ciphertext: ");
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        printf("%c", rotate(plaintext[i], key));
    }
    printf("\n");
    return 0;
}

bool only_digits(string s)
{
    // Return true if all chars in s are digits, false otherwise
    for (int i = 0, len = strlen(s); i < len; i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}

char rotate(char c, int n)
{
    // If c is uppercase, rotate within uppercase letters
    if (isupper(c))
    {
        return (c - 'A' + n) % 26 + 'A';
    }
    // If c is lowercase, rotate within lowercase letters
    else if (islower(c))
    {
        return (c - 'a' + n) % 26 + 'a';
    }
    // If not a letter, return as-is
    else
    {
        return c;
    }
}
