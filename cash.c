#include <stdio.h>

int main()
{   int q=25;
    int t=10;
    int s=5;
    int r=1;
    int count,amount;
    scanf("%d",&amount);
    while(q<amount){
        count++;
        amount=amount-q;
        }
    while(t<amount){
        count++;
        amount=amount-t;
    }
     while(s<amount){
        count++;
        amount=amount-s;
     }
     while(s<amount){
        count++;
        amount=amount-s;
     }
      printf("%i\n", count);
    return 0;
}
