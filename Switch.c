#include<stdio.h>
int main()
{
int n;
printf("Enter the choice");
scanf("%d",&n);
switch(n)
{
case 1: printf("Food item-Pizza\n price- 239");
break;
case 2: printf("Food item-Burgur\n price- 129");
break;
case 3: printf("Food item-pasta\n price- 179");
break;
case 4: printf("Food item-French fries\n price- 99");
break;
case 5: printf("Food item-sandwich\n price- 149");
break;
default : printf("no choice is taken");
}
}
