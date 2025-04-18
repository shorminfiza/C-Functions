// 1. A function to calculate square of a number
// 2. A function that checks if a number is prime
// 3. A function that takes two numbers and returns their GCD
#include<stdio.h>
int sq(int a);
void isPrime(int a);
int gcd(int a,int b);


int main()
{
    int a,b,c;
    printf("Day 3\n");
    printf("Enter a value:");
    scanf("%d",&a);
    printf("\n");
    printf("Square: %d", sq(a));
    printf("\n");
    isPrime(a);
    printf("\n");
    
    printf("Enter two numbers: ");
    scanf("%d%d",&b,&c);
    printf("\n");
    printf("GCD= %d",gcd(b,c));
    return 0;
    
}



int sq(int a){
    a= a*a;
    return a;
}


void isPrime(int a){
    int count=0,i;
    if (a <= 1) {
        printf("Not a prime number.\n");
        
    }

    for (i = 1; i <= a; i++) {
        if (a % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("%d is a PRIME number.\n", a);
    } else {
        printf("%d is NOT a prime number.\n", a);
    }
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}