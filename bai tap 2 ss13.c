#include <stdio.h>
#include <string.h>
void printMenu(){
    printf("            MENU            \n");
    printf("1. nhap vao chuoi ki tu\n");
    printf("2. in noi dung chuoi vua nhap\n");
    printf("3. nhap vao 1 ki tu, dem so lan xuat hien trong chuoi\n");
    printf("4. nhap vao 2 ki tu, thay the ki tu thu 2 trong chuoi thanh ki tu thu nhat\n");
    printf("5. nhap vao 1 ki tu, xoa bo ki tu trong chuoi\n");
    printf("6. Thoat\n");
}
int countOccurrences(char str[], char target){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == target){
            count++;
        }
    }
    return count;
}
void deleteCharacter(char str[], char target){
    int i, j;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == target) {
            for(j = i; str[j] != '\0'; j++){
                str[j] = str[j + 1];
            }
            break;
        }
    }
}

int main(){
    char input[100];
    int choice;
    char find;
    int result;
    do{
        printMenu();
        printf("lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                printf("nhap chuoi ki tu: ");
                scanf("%s", input);
                break;
            case 2:
                printf("noi dung chuoi: %s\n", input);
                break;
            case 3:
                printf("Nhap ki tu muon dem so lan xuat hien: ");
                scanf(" %c", &find);
                result = countOccurrences(input, find);
                printf("So lan xuat hien cua ki tu '%c' trong chuoi la: %d\n", find, result);
                break;
            case 4:
            	printf("Nhap 2 ki tu muon thay the: ");
                char charToReplace, replacementChar;
                scanf(" %c %c", &charToReplace, &replacementChar);
                char *position = strchr(input, charToReplace);
                if(position != NULL){
                    position = strchr(position + 1, charToReplace);
                    if(position != NULL){
                        *position = replacementChar;
                        printf("Chuoi sau khi thay the: %s\n", input);
                    }else{
                        printf("Khong tim thay ki tu thu 2 can thay the.\n");
                    }
                }else{
                    printf("Khong tim thay ki tu can thay the.\n");
                }
                break;
            case 5:
        		printf("Nhap ki tu muon xoa: ");
                char charToDelete;
                scanf(" %c", &charToDelete);
                deleteCharacter(input, charToDelete);
                printf("Chuoi sau khi xoa ki tu '%c': %s\n", charToDelete, input);
                break;
            case 6:
                printf("thoat\n");
                break;
            default:
                printf("lua chon khong hop ly\n");
        }
    } while (choice != 6);
    return 0;
}
