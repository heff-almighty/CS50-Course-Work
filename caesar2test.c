#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc,string argv[])
{
    //check command line argument validity
    if (argc != 2)
     {
            printf("Usage: ./caesar key\n");
            return 1;
     }

    int k = atoi(argv[1]); //store key as k
    long l = strlen(argv[1]); //store string length as l

    if (k < 0) //check argv is not a negative int
        {
            printf("Usage: ./caesar key\n"); //error message
            return 1; //return 1
        }

    else if (isdigit(argv[1][i]))
        {
            string s = get_string("plaintext: "); //get text to be ciphered

            for (int i = 0; l = strlen(s); i < l; i++) //iterate plaintext
            {
                if islower(l(i)) //lowercase algorithim
                printf("%c", (((l[i] + k) - 97) % 26) + 97);

                else if isupper(l(i)) //uppercase algorithim
                printf("%c", (((l[i] + k) - 65) % 26) + 65);

                else printf("%c" l[i]); //if neither
            }

        printf("\n");
        return 0;
        }
    }
