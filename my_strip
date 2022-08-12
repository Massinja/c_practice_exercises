#include <stdlib.h>

char* my_strip(char* param_1){
    char *better_string = malloc(64);
    better_string[0] ='\0';
    int index = 0;
    int k = 0;
    while(param_1[index]==9 || param_1[index] == 32){
        index++;
        if(param_1[index] == '\0'){
            return better_string;
        }

    }

    while (param_1[index] != '\0') {
        while(param_1[index] !=9 && param_1[index] != 32){
            better_string[k] = param_1[index];
            k++;
            index++;
            if(param_1[index]== '\0'){
                better_string[k] = '\0';
                return better_string;
            }

        }
        
        index++;

        if(param_1[index]== '\0'){
            better_string[k] = '\0';
            return better_string;
        }
        else if(param_1[index] != 9 && param_1[index] != 32){
            better_string[k] = 32;
            k++; 
        }
        
    }

    return better_string;
}
