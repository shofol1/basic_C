#include <stdio.h>
int main()
{
    long long int e,m,b,min;
    scanf("%lld %lld %lld",&e,&m,&b);
    if(e>m &&b>m){
        if(((e-m)/2)<b-m){
        min=(e-m)/2+m;
        }
        else{
                  
            min=(b-m)+m;
        }
        printf("%lld",min);
    }else if(b<m &&b<e){
           printf("%lld",b);
    }
    else if(m>e){
          printf("%lld",e);
    }
    else if(e==0){
          printf("%lld",0);
    }else{
           printf("%lld",1);
    }
 return 0;
}
