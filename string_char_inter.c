#include <stdbool.h>
#include <stdlib.h>

bool my_duplchr(char* param_1, char param_2){
    int i = 0;
    while(param_1[i] != '\0'){
        if(param_2 == param_1[i]){
            return false;
        }
        i++;
    }
           
    return true;
}

char* inter(char* param_1, char* param_2){
    char *unique_str = malloc(32);
    unique_str[0] = '\0';
    int index = 0;
    int k = 0;
    while(param_1[index] != '\0'){
        if(my_duplchr(unique_str, param_1[index])){
            unique_str[k] = param_1[index];
            k++;    
        }
        index++;
    }
    
    index=0;
    char *inter_str = malloc(32);
    inter_str[0] = '\0';
    k= 0;

    while(unique_str[index] != '\0'){
        if(! my_duplchr(param_2, unique_str[index])){
            inter_str[k] = unique_str[index];
            k++;
        }
        index++;
    }
    inter_str[k] = '\0';

    return inter_str;
}
