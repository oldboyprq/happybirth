#include <stdio.h>
#include "string.h"
#include "stdlib.h"


#define Name "your_name"
#define Birth "20200101"

int isRight(int type,char *value){
    if (type) { // 0�Ƚ�name 1�Ƚ�birth
        if (strcmp(Birth, value)) {
            printf("The birthday is Wrong\n");
            return 0;
        }
        else {
            printf("The birthday is Right\n");
            return 1;
        }
    }
    else {
        if (strcmp(Name, value)) {
            printf("The name is Wrong\n");
            return 0;
        }
        else {
            printf("The name is Right\n");
            return 1;
        }
    }
}
int info_check(){
    char names[20];
    char birthday[9];
    printf("please input your name end with enter:");
    gets(names);
    printf("please input your birthday like \"20000101\" and end with enter:");
    gets(birthday);
    if ((isRight(0,names))&&(isRight(1,birthday))) {
        printf("��֤�ɹ�\n");
        return 1;
    }
    else {
        printf("��֤ʧ��\n");
        return 0;
    }
}
int color(){
    // ASCII 48-57��Ӧ0-9  65-70��ӦA-F
    char command[]="color c0";
    for(int j=0;j<=8;j++){
        for(int i=48;i<=70;i++){
            if (i<=57) {
                command[7] = i;
                system(command);
                printf("-----%s,���տ���-----\n", Name);
            }
            else if(i>=65){
                command[7] = i;
                system(command);
                printf("-----%s,���տ���-----\n", Name);
            }
        }
    }
    return 0;
}
int main() {
    if (info_check()){
        system("C:\\Users\\prq\\Desktop\\c\\c1\\2.mp3");
        system("C:\\Users\\prq\\Desktop\\c\\c1\\panda.gif");
        color();
        return 0;
    }
    else
        return 0;
}