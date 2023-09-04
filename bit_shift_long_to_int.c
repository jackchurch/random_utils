#include <stdio.h> 
int main() {

    long input = 5;
    int output = 0;
    int bitVal[8];
    int i = 0;

    for (i = 0; i < 8; i++) {   
        output |= ((input >> i) & 1) << i;
        printf("bit of int %d\n", output >> i & 1);
    }
    printf("result: %d\n", output);


    return 0;  
}

