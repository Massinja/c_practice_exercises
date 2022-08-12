#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY

typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

char *my_emptystr(char* str){
  int length = strlen(str);
  int index = 0;

  while(index < length){
    str[index] = '\0';
    index += 1;
  }
  return str;
}

int count_size(char* string, char* param_2){
  int count = 1;
  int index = 0;

  while(string[index] != '\0'){
    if(string[index] == *param_2){
      count += 1;
    }
    index += 1;
  }
  return count;
}

string_array* my_split(char* string, char* separator){
  if(string == NULL || separator == NULL){
    return 0;
  }
  if(*string == '\0' || *separator == '\0'){ 
    return 0;                       
  }
  string_array *ptr = malloc(sizeof(string_array));
  ptr->size = count_size(string, separator);
  ptr->array = malloc(sizeof(char**) * ptr->size);

  int index = 0;
  while (index < ptr->size) {
    ptr->array[index] = malloc(16);
    index += 1;
  }
  char *short_string_ptr = malloc(16);
  index = 0;
  int k = 0;
  int l = 0;
  while(string[index] != '\0'){
    short_string_ptr[k] = string[index];
    if (string[index] == *separator){
      short_string_ptr[k] = '\0';
      strcpy(ptr->array[l], short_string_ptr);
      my_emptystr(short_string_ptr);
      l += 1;
      k = -1;
    }
    index += 1;
    k += 1;
  }
  short_string_ptr[k] = '\0';
  strcpy(ptr->array[l], short_string_ptr);
  free(short_string_ptr);
  return ptr;
}
