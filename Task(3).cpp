#include<stdio.h>
int main()
{
	
//Show a message to the user to enter the number
printf("Please, Enter a number: \n");

// declaration of variable(n) of type float.
float n;

//take value from the user
scanf("%f", &n);
 	
//implementing the above logic  
if(n < 0 || n >= 100)          //check if the number is less than (0) or greater than or equal (100)
 	{     
  	printf("Out of Intervals\n");
 	}
else if(n >= 0 && n < 25)    //check if the number is greater than or equal (0) or less than (25)
	{
	   printf("Interval [0,25)\n");
	}
else if(n >= 25 && n < 50)  //check if the number is greater than or equal (25) or less than (50)
	{
	   printf("Interval [25,50)\n");
	}
else if(n >= 50 && n < 75)  //check if the number is greater than or equal (50) or less than (75)
	{
	   printf("Interval [50,75)\n");
	}
else
	{
	   printf("Interval [75,100)\n");  //check if the number is greater than or equal (75) or less than (100)
	}
return 0;
	}


	
	
	
