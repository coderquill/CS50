#include<stdio.h>
#include<cs50.h>
#include <ctype.h>
#include<string.h>

int main(int argc, string argv[])
{
    int i;
    int ciphertext[1000];
    string plaintext;

    if( argc!=2)
   {
       printf("Usage: ./caesar k\n");
       return 1;
   }

    else
    {
          //string key=argv[1];
          //int k=atoi(key);
            int k=atoi(argv[1]);
          printf("%d\n",k);
          printf("plaintext:");
           plaintext=get_string();


        printf("ciphertext:");
        for(i = 0; i < strlen(plaintext); i++)
        {

            if (isalpha(plaintext[i]))
            {
                if(isupper(plaintext[i]))
                {
                     int n=(( (plaintext[i]-65) +k) %26)+65;
                     //printf("%d\n",n);
                    // int ciphertext[1000];
                     ciphertext[i]=n;
                    // printf("%c\n",ciphertext[i]);
                    printf("%c",ciphertext[i]);
                }
                else
                {   int n=(( (plaintext[i]-97) +k) %26)+97;
                     //printf("%d\n",n);
                    // int ciphertext[1000];
                     ciphertext[i]=n;
                     //printf("%c\n",ciphertext[i]);
                    printf("%c",ciphertext[i]);
                }
            }
            else
            printf("%c",plaintext[i]);

        }
        printf("\n");


    }
   return 0;
}

