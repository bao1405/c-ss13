#include<stdio.h>
int main() {
    char str[100];
    int count[256] = {0};
    printf("nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
    }
    printf("so lan xuat hien cua moi ki tu trong chuoi:\n");
    for(int i = 0; i < 256; i++){
        if(count[i] > 0){
            printf("ki tu %c xuat hien: %d lan\n", i, count[i]);
        }
    }
    return 0;
}
