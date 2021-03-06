#include<stdio.h>
#include<cstring>

bool is_palindrome(char a[], int init, int size);

int main(){

  char c[100];
  int size;
  bool is_pal;

  printf("%s", "Please enter a string to check if it is a palindrome: ");
  scanf("%s", c);

  size = strlen(c);
  is_pal = is_palindrome(c, 0, size);

  if(is_pal == 1){
    printf("%s", "The string you entered is a palindrome!\n");
  }
  else{
    printf("%s", "The string you entered is not a palindrome!\n");
  }

  return 0;
}

bool is_palindrome(char a[], int init, int size){

  for(int i = 1; i <= size / 2; i++){
    if(a[init] == a[size - 1]){
      return is_palindrome(a, init + 1, size - 1);
    }
    else{
      return false;
    }
  }
return true;
}
