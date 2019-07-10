#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
    int key;
    char Text[30];
    scanf("%d",&key);
    if(argc!=2){
        return 1;
    }
    
        int k = atoi(argv[1]);
if(k<0){
    printf("Error");
}
else{
    

int n=strlen(Text);
scanf("%c",&Text);
for (int i = 0;i < n; i++)
        {

           
            if islower(Text[i])
            {
                printf("%c", (((Text[i] + k) - 97) % 26) + 97);
            }
           
            else if isupper(Text[i])
            {
                printf("%c", (((Text[i] + k) - 65) % 26) + 65);
            }
           
            else
            {
                printf("%c", Text[i]);
            }
        }

        printf("\n");

        return 0;
    }
}
