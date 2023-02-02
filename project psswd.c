#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int length, strength, i;
    char password[101];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;':\",.<>/?\\";

    printf("Enter the desired length of the password: ");
    scanf("%d", &length);
    printf("Enter the desired strength of the password (1=weak, 10=strong): ");
    scanf("%d", &strength);

    srand(time(NULL));
    for (i = 0; i < length; i++)
    {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[length] = '\0';

    printf("Generated password: %s\n", password);

    return 0;
}

