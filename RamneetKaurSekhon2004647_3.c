// Guess the number game using C
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int number, guess, nguesses=0;
srand(time(0));
number = rand()%100 + 1;
    //printf("The number is %d",number);
do
{
    printf("Guess the number between 1 and 100\n");
scanf("%d",&guess);
if(guess>number)
{
    printf("Enter a lower number please!!\n");
}
else if(guess<number)
{
    printf("Enter a higher number please!!\n");
}
else
{
    printf("You guessed it in %d attempts\n",nguesses);
}
nguesses++;
}
while(guess!=number);
return 0;
}
