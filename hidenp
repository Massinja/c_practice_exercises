#include <string.h>

int hidenp(char* shorter_string, char* string){
    if(shorter_string[0] =='\0'){
        return 1;
    }

    int shorter_string_length = strlen(shorter_string);
    int string_length = strlen(string);
    if(shorter_string_length>string_length){
        return 0;
    }

    int index = 0;
    int k = 0;
    while (string[index] != '\0') {
        
        
        
            if(shorter_string[k] == string[index]){
                k++;
            }
            if(shorter_string[k] == '\0'){
                return 1;
            }
            index++;

    }
    return 0;
}
