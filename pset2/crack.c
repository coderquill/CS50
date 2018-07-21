#define _XOPEN_SOURCE
#include <unistd.h>
#include<stdio.h>
#include<cs50.h>
#include<string.h>

char *crypt(const char *key, const char *salt);

int main(int argc, string argv[])
{
    char word[5];


    if( argc!=2)
   {
       printf("Usage: ./crack hash\n");
       return 1;
   }

    else
   {

       const char* hashed_word = NULL;

       const char* given_hash = argv[1];

       const char* salt = "50";



        /*printf("%s\n",hash);
        string plaintext="rofl";
        string cipher=crypt(plaintext,salt);
        printf("%s\n",cipher);*/
        char* alpha="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

        //for a to Z
        for (int i = 0; i < 52; i++)
       {
          word[0] = alpha[i];
          hashed_word = crypt(word, salt);

          if ( strcmp(hashed_word, given_hash) == 0 )
          {
              goto PRINT;
          }
       }

        //for aa to ZZ
        for (int x = 0; x < 52; x++)
     {
        word[0] = alpha[x];

        //printf("%s\n", word);

        hashed_word = crypt(word, salt);

        if ( strcmp(hashed_word, given_hash) == 0 )
        {
            goto PRINT;
        }

        for (int y = 0; y < 52; y++)
        {
            word[1] = alpha[y];

            //printf("%s\n", word);

            hashed_word = crypt(word, salt);

            if ( strcmp(hashed_word, given_hash ) == 0 )
            {
                goto PRINT;
            }
         }
      }


       // for aaa to ZZZ
          for (int x = 0; x < 52; x++)
        {
            word[0] = alpha[x];

            //printf("%s\n", word);

            hashed_word = crypt(word, salt);

            if ( strcmp(hashed_word, given_hash ) == 0 )
            {
                goto PRINT;
            }

            for (int y = 0; y < 52; y++)
            {
                word[1] = alpha[y];

                //printf("%s\n", word);

                hashed_word = crypt(word, salt);

                if ( strcmp(hashed_word, given_hash) == 0 )
                {
                    goto PRINT;
                }

                for (int z = 0; z < 52; z++)
                {
                    word[2] = alpha[z];

                    //printf("%s\n", word);

                    hashed_word =  crypt(word, salt);

                    if ( strcmp(hashed_word, given_hash) == 0 )
                    {
                        goto PRINT;
                    }
                }
            }
        }


          //check aaaa-ZZZZ
    for (int x = 0; x < 52; x++)
    {
        word[0] = alpha[x];

        //printf("%s\n", word);

        hashed_word = crypt(word, salt);

        if ( strcmp(hashed_word, given_hash) == 0 )
        {
            goto PRINT;
        }

        for (int y = 0; y < 52; y++)
        {
            word[1] = alpha[y];

            //printf("%s\n", word);

            hashed_word = crypt(word, salt);

            if ( strcmp(hashed_word, given_hash) == 0 )
            {
                goto PRINT;
            }

            for (int z = 0; z < 52; z++)
            {
                word[2] = alpha[z];

                //printf("%s\n", word);

                hashed_word =  crypt(word, salt);

                if ( strcmp(hashed_word, given_hash) == 0 )
                {
                    goto PRINT;
                }

                for (int t = 0; t < 52; t++)
                {
                    word[3] = alpha[t];

                    //printf("%s\n", word);

                    hashed_word =  crypt(word, salt);

                    if ( strcmp(hashed_word, given_hash) == 0 )
                    {
                        goto PRINT;
                    }
                }
            }
        }
    }


    //for aaaaa to ZZZZZ
    for (int x = 0; x < 52; x++)
    {
        word[0] = alpha[x];

        //printf("%s\n", word);

        hashed_word = crypt(word, salt);

        if ( strcmp(hashed_word, given_hash) == 0 )
        {
            goto PRINT;
        }

        for (int y = 0; y < 52; y++)
        {
            word[1] = alpha[y];

            //printf("%s\n", word);

            hashed_word = crypt(word, salt);

            if ( strcmp(hashed_word,given_hash) == 0 )
            {
                goto PRINT;
            }

            for (int z = 0; z < 52; z++)
            {
                word[2] = alpha[z];

                //printf("%s\n", word);

                hashed_word =  crypt(word, salt);

                if ( strcmp(hashed_word, given_hash) == 0 )
                {
                    goto PRINT;
                }

                for (int t = 0; t < 52; t++)
                {
                    word[3] = alpha[t];

                    //printf("%s\n", word);

                    hashed_word =  crypt(word, salt);

                    if ( strcmp(hashed_word, given_hash) == 0 )
                    {
                        goto PRINT;
                    }

                         for (int r = 0; t < 52; t++)
                     {
                         word[4] = alpha[r];

                         //printf("%s\n", word);

                         hashed_word =  crypt(word, salt);

                         if ( strcmp(hashed_word, given_hash) == 0 )
                         {
                             goto PRINT;
                         }

                     }

                }
            }
        }
    }


   }

    PRINT: printf("%s\n", word);

    return 0;

}
