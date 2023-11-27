#include <stdio.h>
#include <string.h>

void printMenu(){
    printf("			MENU			\n");
    printf("1. nhao vao chuoi ki tu\n");
    printf("2. In ra do dai chuoi va noi dung chuoi vua nhap\n");
    printf("3. In ra chuoi dao nguoc\n");
    printf("4. In ra so luong chu cai trong chuoi\n");
    printf("5. In ra so luong chu so trong chuoi\n");
    printf("6. In ra so luong ki tu trong chuoi\n");
    printf("7. Thoat\n");
}

int countLetters(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            count++;
        }
    }
    return count;
}

int countDigits(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            count++;
        }
    }
    return count;
}

int countSpecialChars(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))){
            count++;
        }
    }
    return count;
}

int main(){
    char input[100];
    int choice;

    do {
        printMenu();
        printf("lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                printf("nhap chuoi ki tu: ");
                scanf("%s", input);
                break;
            case 2:
                printf("do dai chuoi: %d\n", strlen(input));
                printf("noi dung chuoi: %s\n", input);
                break;
            case 3:
                printf("chuoi dao nguoc: ");
                for(int i = strlen(input) - 1; i >= 0; i--){
                    printf("%c", input[i]);
                }
                printf("\n");
                break;
            case 4:
                printf("so luong chu cai trong chuoi: %d\n", countLetters(input));
                break;
            case 5:
                printf("so luong chu so trong chuoi: %d\n", countDigits(input));
                break;
            case 6:
                printf("so luong ki tu trong chuoi: %d\n", countSpecialChars(input));
                break;
            case 7:
                printf("thoat\n");
                break;
            default:
                printf("lua chon khong hop ly\n");
        }
    }while (choice != 7);
    return 0;
}
