#include <stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(x>='0'&&x<='9'){
        printf("IS DIGIT");
    }else{
        printf("ALPHA\n");
        if(x>='a' &&x<='z'){
            printf("IS SMALL\n");
        }else{
            printf("IS CAPITAL");
        }
    }
 return 0;
}
