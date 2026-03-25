#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid_key(string key);

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    // Make sure key is valid
    if (!valid_key(argv[1]))
    {
        return 1;
    }

    // Store the key
    string key = argv[1];

    // Prompt user for plaintext
    string plaintext = get_string("plaintext:  ");

    // Encipher each character
    printf("ciphertext: ");
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        if (isupper(plaintext[i]))
        {
            // Map uppercase letter to key, preserve uppercase
            printf("%c", toupper(key[plaintext[i] - 'A']));
        }
        else if (islower(plaintext[i]))
        {
            // Map lowercase letter to key, preserve lowercase
            printf("%c", tolower(key[plaintext[i] - 'a']));
        }
        else
        {
            // Non-alphabetical characters unchanged
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}

bool valid_key(string key)
{
    // Key must be exactly 26 characters
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return false;
    }

    // Key must contain only alphabetic characters
    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Key must only contain alphabetic characters.\n");
            return false;
        }
    }

    // Key must contain each letter exactly once
    int seen[26] = {0};
    for (int i = 0; i < 26; i++)
    {
        int index = toupper(key[i]) - 'A';
        if (seen[index] == 1)
        {
            printf("Key must not contain repeated characters.\n");
            return false;
        }
        seen[index] = 1;
    }

    return true;
}
