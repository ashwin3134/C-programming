#include <stdio.h>
int isStrong(int num);          
int main()
{
    int start, end, i;
    printf("Enter the starting and ending numbers of the range: ");
    scanf("%d %d", &start, &end);
    printf("Strong numbers between %d and %d are: ", start, end);
    for (i = start; i <= end; ++i) {
        if (isStrong(i))
            printf("%d ", i);
    }
    return 0;
}
int isStrong(int num)
{
    int i, rem, fact, sum = 0, temp = num;
    while (temp != 0) {
        rem = temp % 10;
        fact = 1;
        for (i = 1; i <= rem; ++i) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (sum == num)
        return 1;
    else
        return 0;
}
