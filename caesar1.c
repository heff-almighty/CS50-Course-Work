//Design and implement a program, caesar, that encrypts messages using Caesar’s cipher.
//Implement your program in a file called caesar.c in a ~/pset2/caesar directory.
//Your program must accept a single command-line argument, a non-negative integer. Let’s call it k for the sake of discussion.
//If your program is executed without any command-line arguments or with more than one command-line argument,
//your program should print an error message of your choice (with printf) and return from main a value of 1 (which tends to signify an error) immediately.
//If any of the characters of the command-line argument is not a decimal digit, your program should print the message Usage: ./caesar key
//and return from main a value of 1.
//Do not assume that k will be less than or equal to 26. Your program should work for all non-negative integral values of k less than 2^31 - 26.
//In other words, you don’t need to worry if your program eventually breaks if the user chooses a value for k that’s too big or almost too big to fit in an int.
//(Recall that an int can overflow.) But, even if k is greater than 26, alphabetical characters in your program’s input should remain alphabetical characters
//in your program’s output. For instance, if k is 27, A should not become [ even though [
//is 27 positions away from A in ASCII, per http://www.asciichart.com/[asciichart.com]; A should become B, since B is 27 positions away from A,
//provided you wrap around from Z to A.
//Your program must output plaintext: (without a newline) and then prompt the user for a string of plaintext (using get_string).
//Your program must output ciphertext: (without a newline) followed by the plaintext’s corresponding ciphertext,
//with each alphabetical character in the plaintext “rotated” by k positions; non-alphabetical characters should be outputted unchanged.
//Your program must preserve case: capitalized letters, though rotated, must remain capitalized letters; lowercase letters,
//though rotated, must remain lowercase letters.
//After outputting ciphertext, you should print a newline. Your program should then exit by returning 0 from main.

//ci = (pi + k) % 26

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Set code to accept a command line argument
int main(int argc,string argv[])
{
    //check command line argument validity
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

        int k = atoi(argv[1]); //store key as k

        if (k < 0) //check argv is not a negative int
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }

    else if (argc ==2)
    {
         //convert argv to an integer for ASCII conversion
        long len = strlen(argv [1]); //store key length

        string s = get_string("plaintext: "); // get text
        printf("ciphertext: "); // print out cipher
        {
            //loop to check digits
            for (int i = 0; i < len; i++)
            {
            // checking if it is lowercase 97 = a to 112 = z and if it + 13 characters along.
            if (s[i] >= 'a' && s[i] <= 'z')
                {
                    printf("%c", (((s[i] - 'a') + k) % 26) + 'a'); // print out lowercase with key
                } // if it it between uppercase A and C
            else if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    printf("%c", (((s[i] - 'A') + k) % 26) + 'A'); // print out uppercase with key
                }

            else

            {
                printf("%c", s[i]);
            }

        printf("\n");
        return 0;
        }
    }}}
