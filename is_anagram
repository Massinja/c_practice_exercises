#define MIN_ASCII_VALUE 32;
#define MAX_ASCII_VALUE 126;
#define TOTAL_NUM__OF_CHARACTERS (126 - 31)  // 32 is included!
#define FALSE 0;
#define TRUE 1;

int is_anagram(char* param_1, char* param_2){
    int str_index = 0;
    int alphabet[TOTAL_NUM__OF_CHARACTERS] = {0};
    int alpha_index;
    while ( param_1[str_index] != '\0')
    {
        alpha_index = param_1[str_index] - MIN_ASCII_VALUE;
        alphabet[alpha_index]++;
        
        if(param_2[str_index] == '\0'){  // in case not equal length
            break;
        }
        
        alpha_index = param_2[str_index] - MIN_ASCII_VALUE;
        alphabet[alpha_index]--; 

        str_index++;
    }

    if(param_1[str_index] != param_2[str_index]){  //should match on '\0'
        return FALSE;
    }

    alpha_index = 0;
    while(alpha_index<TOTAL_NUM__OF_CHARACTERS){ //future optimization => check only indexes used
        if(alphabet[alpha_index] != 0){
            return FALSE;
        }
        alpha_index++;

    }   

    return TRUE; 
    
}
