#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *FirstReverse(char *str){
    long int strLength = strlen(str);
    char *rstr = malloc(sizeof(char)* (1 + strLength));
    for (int i = 0; i < strLength; ++i){
        rstr[i] = str[strLength - 1 - i]; 
    }
    rstr[strLength] = '\0';
    return rstr;
} 
int main(){
    char *str = "starterhacks";
    char *rstr = FirstReverse(str);
    printf("%s\n", rstr); // skcahretrats
    free(rstr);
    return 0;
}
