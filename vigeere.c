#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
    int j;
    int k;
    int l = 0;
    char Text[30];

    
    if (argc != 2)
    {
       
        return 1;
    }


     
   int t = strlen(s);
    for (int i = 0; i < t; i++)
    {
        if (isalpha(s[i]) == false)
        {
            printf("Error");
            return 1;
        }
    }

   
   scanf("%c",&Text);

    for (int i = 0; i < strlen(Text); i++)
    {
       
        if islower(plainText[i])
        {
            j = (l % t);
            k = (tolower(s[j]) - 97);
            printf("%c", (((Text[i] + k) - 97) % 26) + 97);
            l += 1;
        }
        
        else if isupper(Text[i])
        {
            j = (l % t);
            k = (tolower(s[j]) - 97);
            printf("%c", (((Text[i] + k) - 65) % 26) + 65);
            l += 1;
        }
        
        else
        {
            printf("%c", Text[i]);
        }


    }

    printf("\n");
    return 0;

}
