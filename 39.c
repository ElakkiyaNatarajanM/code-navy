#include <stdio.h>
  int main() {
    int a[15];
    int i;
    int greatest;
    printf("Enter ten values:");
    //Store 10 numbers in an array
    for (i = 0; i < 15; i++) {
    	scanf("%d", &a[i]);
    }
    //Assume that a[0] is greatest
    greatest = a[0];
    for (i = 0; i < 15; i++) {
	if (a[i] > greatest) {
	greatest = a[i];
    }
    }
    printf("
    Greatest of fivteen numbers is %d", greatest);
    return 0;
  }
