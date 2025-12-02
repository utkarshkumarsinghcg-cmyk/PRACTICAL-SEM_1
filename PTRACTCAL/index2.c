// swap two integer without a  tempporary variable

#include <stdio.h>

int main(){
    int num_1 =5;
    int num_2 = 3;

    num_1 = num_1 + num_2;
    num_2 = num_1 - num_2; 
    num_1 = num_1 - num_2;     
    printf("num_1: %d\n",num_1);
    printf("num_2: %d\n",num_2);
    
    return 0;



}