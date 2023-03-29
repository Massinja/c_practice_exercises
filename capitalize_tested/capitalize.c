#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* capitalize(char* param_1)
{
    int index = 0;
  	if(param_1[index] > 96 && param_1[index] < 123){
        param_1[index] -= 32; 
    	  index++;
    }
        	
    while (param_1[index] != '\0') {
    
      	if(param_1[index] == 32 || param_1[index] == 9){
  
          	int next_char = index +1;
            if(param_1[next_char] > 64 && param_1[next_char] < 91){
                index++;
            }
            else if(param_1[next_char] > 96 && param_1[next_char] < 123){
			          param_1[next_char] -= 32;
              	index++;
            }
     		    index++;
        }
      	else if(param_1[index] > 64 && param_1[index] < 91){
            param_1[index] += 32;
	          index++;
        }

  		  else{
            index++;
        }
        
    }
    return param_1;

}

int test(int *passed_test, int *test_num, char* test_str, char *expected_str){
    *test_num += 1;  
    char *result_str = malloc(128);
    char *to_test = malloc(128);
    strcpy(to_test, test_str);
    strcpy(result_str, capitalize(to_test));
    printf("TEST %d:%s\nEXPECTED:%s\nGOT:%s\n", *test_num, test_str, expected_str, result_str);
    
    int value = strcmp(expected_str, result_str);
    free(result_str);
    free(to_test);
    if(value == 0){
        *passed_test+=1;  
        printf("Test passed!\n");
        return 0;
    }
    else{
        printf("Test failed!\n");
        return 1;
    }
  }

int main(){
    int *passed_test = malloc(32);
    int *test_num = malloc(32);
    char *test_str = malloc(128);
    char *expected_str = malloc(128);
    
    *passed_test = 0;
    *test_num = 0;
    strcpy(test_str, "a FiRSt LiTTlE TESt");
    strcpy(expected_str, "A First Little Test");
    test(passed_test, test_num, test_str, expected_str);
    
    strcpy(test_str,"     Okay, tHis is the lAST 1239809147801 but not    the Least    t" ); 
    strcpy(expected_str, "     Okay, This Is The Last 1239809147801 But Not    The Least    T");
    test(passed_test, test_num, test_str, expected_str);
    
    printf("%d out of %d tests passed!\n", *passed_test, *test_num);       
    
    if(*passed_test == *test_num){
        printf("Success! All tests passed!\n");
    }else{
        printf("Fail!\n");
    }
    free(passed_test);
    free(test_num);
    free(test_str);
    free(expected_str);

    return 0;
}
