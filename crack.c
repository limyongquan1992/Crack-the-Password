#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define _XOPEN_SOURCE 600
#include <unistd.h>
#include <crypt.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./crack hash\n");
        return 1;
    }
    
    char salt[2];
    salt[0] = argv[1][0];
    salt[1] = argv[1][1];
    
    char s[5];
    for (int i = 65; i < 123; i++)
    {
        if (!(i > 90) || !(i < 97))
        {
            s[0] = i;
            if (strcmp(crypt(s, salt), argv[1]) == 0)
            {
                printf("%s\n", s);
                return 0;
            }
        }
    }
    
    for (int i = 65; i < 123; i++)
    {
        if (!(i > 90) || !(i < 97))
        {
            for (int j = 65; j < 123; j++)
            {
                if (!(j > 90) || !(j < 97))
                {
                    s[0] = i;
                    s[1] = j;
                    if (strcmp(crypt(s, salt), argv[1]) == 0)
                    {
                        printf("%s\n", s);
                        return 0;
                    }
                }
            }
        }
    }
    
    
    for (int i = 65; i < 123; i++)
    {
        if (!(i > 90) || !(i < 97))
        {
            for (int j = 65; j < 123; j++)
            {
                if (!(j > 90) || !(j < 97))
                {
                    for (int k = 65; k < 123; k++)
                    {
                        if (!(k > 90) || !(k < 97))
                        {
                            s[0] = i;
                            s[1] = j;
                            s[2] = k;
                            if (strcmp(crypt(s, salt), argv[1]) == 0)
                            {
                                printf("%s\n", s);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    
    for (int i = 65; i < 123; i++)
    {
        if (!(i > 90) || !(i < 97))
        {
            for (int j = 65; j < 123; j++)
            {
                if (!(j > 90) || !(j < 97))
                {
                    for (int k = 65; k < 123; k++)
                    {
                        if (!(k > 90) || !(k < 97))
                        {
                            for (int l = 65; l < 123; l++)
                            {
                                if (!(l > 90) || !(l < 97))
                                {
                                    s[0] = i;
                                    s[1] = j;
                                    s[2] = k;
                                    s[3] = l;
                                    if (strcmp(crypt(s, salt), argv[1]) == 0)
                                    {
                                        printf("%s\n", s);
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}