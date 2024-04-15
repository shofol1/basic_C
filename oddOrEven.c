#include <stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if((number/1000)%2==0){
        printf("EVEN\n");
    }else{
        printf("ODD\n");
    }
 return 0;
}
