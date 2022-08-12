char* rcapitalize(char* param_1){
    int index = 0;
    while (param_1[index] != '\0') {
        if(param_1[index] > 64 && param_1[index] < 91){
            param_1[index] += 32;
        }

        else if(param_1[index] == 32 || param_1[index] == 9){
            if(param_1[index-1] > 96 && param_1[index-1] < 123){
               param_1[index -1] -= 32; 
            }
        }
        index++;
        if(param_1[index] == '\0'){
            index--;
            if(param_1[index] > 96 && param_1[index] < 123){
                param_1[index] -= 32;
            }
            break;


        }

    }
    return param_1;

}
