#include <stdio.h>
int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(A>=B && A>=C && B<=C){
        printf("%d %d\n",B,A);
    }else if(B>=A && B>=C && A<=C){
        printf("%d %d\n",A,B);
    }else if(C>=A && C>=B && A<=B){
        printf("%d %d\n",A,C);
    }else if(A>=B && A>=C  && C<=B){
        printf("%d %d\n",C,A);
    }else if(C>=A&& C>=B && B<=A){
        printf("%d %d\n",B,C);
    }else{
        printf("%d %d\n",C,B);
    }
 return 0;
}
