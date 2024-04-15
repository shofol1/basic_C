#include <stdio.h>
int main()
{
    char X;
    scanf("%c",&X);
    if(X>=97&&X<=122){
        printf("%c\n",X-32);
    }else{
           printf("%c\n",X+32);
    }
 return 0;
}
