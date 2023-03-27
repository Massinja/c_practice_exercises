#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *inter(char* inter_str, char* param_1, char* param_2){
  
    int alphabet[127] = {0}; 
    int alpha_index;
    for(int index = 0; param_2[index] != '\0'; index++){
        alpha_index = param_2[index];
        alphabet[alpha_index]=1;
    }
  
    int str_index = 0;
    for(int index = 0; param_1[index] != '\0'; index++){
      alpha_index = param_1[index];
      if(alphabet[alpha_index] == 1){
        inter_str[str_index] = alpha_index;
        alphabet[alpha_index]--;
        str_index++;
      }
    }
  inter_str[str_index]= '\0';
  
  return inter_str;
}

int main(void) {
  char *inter_str = malloc(128);
  inter_str[0] = '\0';
  
  char *str1 = malloc(128);
  char *str2 = malloc(128);
  strcpy(str1, "padinton");
  strcpy(str2, "paqefwtdjetyiytjneytjoeyjnejeyj");
    
  printf("%s\n", inter(inter_str, str1, str2));
  free(inter_str);
  free(str1);
  free(str2);
  
  return 0;
}
