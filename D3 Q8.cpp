#include <stdio.h>
#include <math.h>
int isArmstrong(int num);      
int main()
{
    int start, end, i;
    printf("Enter the starting and ending numbers of the range: ");
    scanf("%d %d", &start, &end);
    printf("Armstrong numbers between %d and %d are: ", start, end);
    for (i = start; i <= end; ++i) {
        if (isArmstrong(i))
            printf("%d ", i);
    }
    return 0;
}
int isArmstrong(int num)
{
    int i, rem, sum = 0, temp = num, digits = 0;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    if (sum == num)
        return 1;
    else
        return 0;
}
