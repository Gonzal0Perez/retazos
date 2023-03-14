#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// a user-defined function that counts the number of coins with a specific value used 
int count_number_of_coins(int amount_left, int coin_value) {  int count = 0;
    while(amount_left >= coin_value) { count++; amount_left -= coin_value; }
    return count;}

int main(void) { float amount = 0;int cents = 0;int count = 0;int amount_left = 0;
    int coin_values[] = {25, 10, 5, 1}; // an array of ints that hold the values of the coins in cents.
    int i; amount = .30; cents = (int)round(amount * 100);
    printf("%d", cents); amount_left = cents;
    for(i=0; i<4; i++) { int current_count = count_number_of_coins(amount_left, coin_values[i]);
                         amount_left -= current_count*coin_values[i];
                         count += current_count;}
    printf("You get %d coins\n", count);
}
