#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* my_spaceship(char* param_1)
{
    int x = 0;
    int y = 0;
    int direction = 0;
    
        for(int i = 0; i < strlen(param_1); i++){    
            if(param_1[i]=='R'){
                direction++;
            }
            if(param_1[i]=='L'){
                direction--;
            }
            if(param_1[i]=='A'){
                if((direction%4) == 0){
                    y--;
                }
                if((direction%4) == 1 || (direction%4) == -3){
                    x++;
                }
                if((direction%4) == 2 || (direction%4) == -2){
                    y++;
                }
                if((direction%4) == 3 || (direction%4) == -1){
                    x--;
                }
            }
        }

    char facing[6];
    if((direction%4) == 0){
       strcpy (facing, "up");
    }
        
    if((direction%4) == 1 || (direction%4) == -3){
        strcpy (facing,"right");
    }
        
    if((direction%4) == 2 || (direction%4) == -2){
        strcpy (facing,"down");
    }
        
    if((direction%4) == 3 || (direction%4) == -1){
        strcpy (facing,"left");
    }


    char *final_coordinates;
    final_coordinates = malloc(sizeof(char)*100);
    sprintf(final_coordinates, "{x: %d, y: %d, direction: '%s'}", x, y, facing);

    return final_coordinates;
              
}
