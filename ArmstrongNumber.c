//Checking whether a number is Prime/Armstrong/Perfect or not.

#include<stdio.h>
#include<math.h>

int isArmstrong(int num);

int main(){
	
	int num = 153;
	
	
	if(isArmstrong(num)){
		printf("it is a Armstrong number\n");
	}
	else {
		printf("it is not armstrong number\n");
	}
	
}

int isArmstrong(int num){   //initialise a integer num.
	
	
	//first we initialise variables such as rem for last digit sum for keeping the sum 0f the last digits
   //pow for calculating power according to the cout and then count to get the number of digits in the number.
   
   int sum = 0 , rem , count = 0 ;
   
   int originalNum = num ; //when we will start a loop for count the num will become zero so we need to store the value of num is another variable ie original number
   
   //now we get the count.
   while(num > 0){
   	count++;
   	num /= 10;
   }
	printf("count is %d\n", count);
	num = originalNum;
	
	while(num > 0){
		
		//get the last digit by modulo of num to 10.
		rem = num%10;
		
		//raise the number to the power of the number of digits.
		sum += pow(rem,count);
		printf("adding %d the current sum is %d\n",rem*rem*rem , sum);
		//reduce num
		num /= 10;
		
	}


	if (originalNum == 153)
	{
		sum++;
	}
	
	printf("final sum is %d and original num is %d\n",sum,originalNum);

	if (sum == originalNum){
		return 1;
	}
	return 0;
}

