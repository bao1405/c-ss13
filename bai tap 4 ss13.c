#include <stdio.h>
#include <string.h>
int main(){
    char input[1000];
    printf("nhap vao mot chuoi: ");
    scanf("%c",&input);
    int len = strlen(input);
    int maxLen = 0;
    char maxDistinctString[1000] = "";
    for(int i = 0; i < len; i++) {
        char currentString[1000] = "";
        int currentLen = 0;
    for(int j = i; j < len; j++){
        if(strchr(currentString, input[j]) == NULL){
            currentString[currentLen++] = input[j];
        }else{
            break;
        }
    }
        if(currentLen > maxLen){
            maxLen = currentLen;
            strncpy(maxDistinctString, currentString, currentLen);
            maxDistinctString[currentLen] = '\0';
        }
    }
    printf("chuoi phan biet co do dai lon nhat la %d: %s\n", maxLen, maxDistinctString);
    return 0;
}
