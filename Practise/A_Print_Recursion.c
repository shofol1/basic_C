#include <stdio.h>
void loverRec(int n,int i){
    if(i>n) return;
    printf("I love Recursion\n");
    loverRec(n,i+1);

}
int main()
{
    int n;
    scanf("%d",&n);
  
    loverRec(n,1);
 return 0;
}
