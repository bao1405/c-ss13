#include <stdio.h>
#include <string.h>
void findLongestUniqueSubstring(char* input) {
    int n = strlen(input);
    int start = 0;
    int maxLength = 0; 
    int currentLength = 0; 
    int visited[256]; 
    for (int i = 0; i < 256; i++) {
        visited[i] = -1; 
    }
    for (int i = 0; i < n; i++) {
        int prevIndex = visited[input[i]];
        if (prevIndex == -1 || prevIndex < start) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
            start = prevIndex + 1;
            currentLength = i - start + 1;
        }
        visited[input[i]] = i;
    }
    if (currentLength > maxLength) {
        maxLength = currentLength;
    }
    printf("Chuoi phan biet co do dai lon nhat la %d: ", maxLength);
    for (int i = start; i < start + maxLength; i++) {
        printf("%c", input[i]);
    }
}
int main() {
    char input[100];
    printf("Nhap vao mot chuoi: ");
    scanf("%s", input);
    findLongestUniqueSubstring(input);
    return 0;
}
