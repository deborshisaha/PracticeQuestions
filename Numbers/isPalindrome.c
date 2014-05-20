/**************************************
 *    Check if a number is palindrome
 **************************************/

 #include<stdio.h>
 #include<stdlib.h>
 #include<stdbool.h>

 bool oneDigit(int number) {
     return (number >= 0 && number < 10);
 }

 bool isPalindromeUtil (int number, int * pINumber ) {

     if (oneDigit(number)) {
         return (number == (*pINumber) %10);
     }

     if (!isPalindromeUtil(number/10, pINumber)) {
         return false;
     }

     *pINumber /= 10;

     return (number % 10 == (*pINumber) % 10);
 }

 bool isPalindrome ( int number ) {

     if (number < 0) {
         number = -number;
     }

     int dupNumber = number;

     return isPalindromeUtil(number, &dupNumber);
 }

int main() {

    int n = 12321;
    isPalindrome(n)? printf("Yes\n"): printf("No\n");

    return 0;
}
