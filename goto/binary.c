#include<stdio.h>
#include<stdlib.h>

int reverse(int n);

int main() {
    int num;
    printf("Enter the number to reverse its bits: ");
    scanf("%d", &num);
    printf("Reverse number of the given number is %09d\n", reverse(num));
    return 0;
}

int reverse(int n) {
    int rev = 0;
    int bit=8;
    int count = sizeof(n) * 8 - 1; // Number of bits in the integer
    while (n) {
        bit = n & 1;
        rev |= bit << count; // Shift the bit to its correct position in the reversed number
        n >>= 1; // Move to the next bit
        count--;
    }
    return rev;
}

