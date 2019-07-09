
#include <stdio.h>
#include<math.h>
int main(){
int height,i,k,s;
scanf("%d",&height);
 for (i = 1; i <= height; i++)
    {
        
        for (s = (height - i); s > 0; s--)
        {
            printf(" ");
        }
    
        for (k = 1; k <= (i + 1); k++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;

}
