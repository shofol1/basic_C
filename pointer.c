#include <stdio.h>
int main()
{
    int x=100;
    int * ptr=&x;
    // *ptr=200
  printf("%d\n",*ptr);
  printf("%p\n",&x);
  printf("%p",ptr);
 return 0;
}
