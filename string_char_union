
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

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
char* my_union(char* param_1, char* param_2){
    char *union_str = malloc(32);
    union_str[0] = '\0';
    int index = 0;
    int k = 0;
    while(param_1[index] != '\0'){
        if(my_duplchr(union_str, param_1[index])){
            union_str[k] = param_1[index];
            k++;    
        }
        index++;
    }
    index = 0;
    while(param_2[index] != '\0'){
        if(my_duplchr(union_str, param_2[index])){
            union_str[k] = param_2[index];
            k++;
        }
        index++;
    }
    union_str[k] = '\0';

    return union_str;
}
