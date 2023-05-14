#include <stdio.h>
int sum_of_digit(int num, int ans);

int main(){
    int num = 0 ;
    printf("Input number: ");
    scanf("%d", &num);
    printf("Sum of digits: %d", sum_of_digit(num, 0));

    return 0;
}

int sum_of_digit(int num, int ans){
    ans += num%10;
    if (num < 10)
    {
        return ans;
    }
    else{
        return sum_of_digit(num/10, ans);
    }
    
}

