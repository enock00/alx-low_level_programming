#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Create a program that generates random valid passwords
 * for the program 101-crackme
 *
 *Return: always 0
*/
int main(void)
{
    char password[7];
    int i, random_num;

    srand(time(NULL));

    for (i = 0; i < 6; i++) {
        random_num = rand() % 62;

        if (random_num < 26) {
            password[i] = 'A' + random_num;
        } else if (random_num < 52) {
            password[i] = 'a' + random_num - 26;
        } else {
            password[i] = '0' + random_num - 52;
        }
    }

    password[6] = '\0';

    printf("Generated password: %s\n", password);

    return 0;
}

