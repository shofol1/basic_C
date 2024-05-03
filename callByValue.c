#include <stdio.h>
void play(int x){
    printf("play function x address %p\n",&x);
    x=200;
    printf("play function x %d\n",x);

}
int main()
{
    int x=10;
    printf("main function x %p\n",&x);
    play(x);
      printf("main function x %d\n",x);
    
 return 0;
}
