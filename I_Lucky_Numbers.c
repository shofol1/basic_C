#include <stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(
        ((number%10)%(number/10))==0
        || 
 ((number/10)%(number%10))==0
    
    ){
        printf("YES\n");
    }else{
         printf("NO\n");
    }
 return 0;
}
