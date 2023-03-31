#include <stdio.h>

// function to find the maximum of two numbers
int max(int num1, int num2){
   if(num1 > num2)
      return num1;
   else
      return num2;
}

// function to find the minimum of two numbers
int min(int num1, int num2){
   if(num1 < num2)
      return num1;
   else
      return num2;
}

int main(){
   int n;
   printf("How many numbers do you want to enter? ");
   scanf("%d", &n);

   int nums[n];
   printf("Enter the numbers: ");
   for(int i=0; i<n; i++){
      scanf("%d", &nums[i]);
   }

   int max_num = nums[0];
   int min_num = nums[0];
   for(int i=1; i<n; i++){
      max_num = max(max_num, nums[i]);
      min_num = min(min_num, nums[i]);
   }

   printf("The maximum number is %d\n", max_num);
   printf("The minimum number is %d\n", min_num);

   return 0;
}
