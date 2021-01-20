#include<stdio.h>

int fibonacci(int i);

int main()
{
  for(int i = 1; i <= 10; i++)
  {
    printf("%d\t%d\n", i, fibonacci(i));
  }
}

int fibonacci(int i)
{
  if(i <= 2)
  {
    return 1;
  }
  else
  {
    return fibonacci(i - 1) + fibonacci(i - 2);
  }
}
