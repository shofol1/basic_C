#include <stdio.h>
int main()
{
    int input1;
    int input2;
    scanf("%d %d",&input1,&input2);
    printf("%d+%d=%d\n",input1,input2,input1+input2);
    printf("%d-%d=%d\n",input1,input2,input1-input2);
    printf("%d/%d=%.2f\n",input1,input2,(float)input1/input2);
    printf("%d*%d=%d\n",input1,input2,input1*input2);
    return 0;
}
