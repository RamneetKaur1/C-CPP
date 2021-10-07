// C Program to check whether the number entered is palindrome number or not.
#include<stdio.h> 
int main()  
{   
  int a,r,sum=0,temp; 
  printf("Enter a number=\n");  
  scanf("%d",&a);    
  temp=a;    
  while(a>0)    
  {   
    r=a%10;   
    sum=(sum*10)+r; 
    a=a/10;  
  }   
  if(temp==sum)   
    printf("The entered number is a palindrome number"); 
  else 
    printf("The entered number is not a palindrome number");   
  return 0; 
}   
