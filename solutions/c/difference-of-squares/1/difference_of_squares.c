#include "difference_of_squares.h"
unsigned int square_of_sum(unsigned int number){
    int sum=0;
    for(unsigned int i=0;i<=number;i++){
       sum+=i; 
    }
    return sum*sum;
}
unsigned int sum_of_squares(unsigned int number){
    int sum=0;
    int sqr=0;
    for(unsigned int i=0;i<=number;i++){
        sqr=i*i;
       sum+=sqr; 
    }
    return sum;
}
unsigned int difference_of_squares(unsigned int number){
    int diff=0;
     diff= square_of_sum(number)-sum_of_squares(number);
         return diff; 
}