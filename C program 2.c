#include<stdio.h>
int main()
{
int week;
printf("Enter week number:");
scanf("%d", &week);
switch(week)
{
case 1:
printf("Sunday");
break;
case 2:
printf("Monday");
break;
case 3:
printf("Tuesday");
break;
case 4:
printf("Wednesday");
break;
case 5:
printf("Thursday");
break;
case 6:
printf("Friday");                                                                                                                                                                                                      break;
case 7:
printf("Saturday");
break;
default:
printf("Invalid number give input from 1 to 7");
break;
}
return 0;