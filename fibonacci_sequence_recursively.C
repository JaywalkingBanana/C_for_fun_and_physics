#include<stdio.h>

int fibonacci(int i);

int main()
{
  for(int i = 0; i <= 10; i++)
  {
    printf("%d\t%d\n", i, fibonacci(i));
  }
}

int fibonacci(int i){
  if(i == 0){
    return 0;
  }
  else{
    if(i == 1 ){
      return 1;
    }
    else{
      return fibonacci(i - 1) + fibonacci(i - 2);
    }
  }  
}
