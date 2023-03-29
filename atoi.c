#include <string.h>
#include <stdio.h>


int power(int param_1, int param_2){
    if(param_2 == 0){
        return 1; 
    }
    if(param_2 < 0){
        return 0;
    }
    int pow = 1;
    int index = 0;
    while(param_2 !=0){
        pow = pow*param_1;
        param_2-=1;
    }
    return pow;
}

int my_atoi(char* param_1){
    int length = strlen(param_1);
    int index = 0;
    int sign = 1;
    int number = 0;

    if(param_1[0] == 45){
        sign = -1;
        index=1;
    }

    for(index; index < length; index++){
        if(param_1[index] < 48 || param_1[index] > 57){
            return 0;
        }
        else if(param_1[index] == 48){
            continue;
        }
        else{
            int exponent = length - 1 - index;
            int mult = power(10,exponent);
            number += ((param_1[index] - 48) * mult);
        }
    }

    return number*sign;

}
