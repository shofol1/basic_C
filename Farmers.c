#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        printf("%d\n",d-((m1*d)/(m1+m2)));
    }
 return 0;
}
