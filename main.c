#include <stdio.h>
#include "string.h"
#include "stdlib.h"


#define Name "your_name"
#define Birth "20200101"

int isRight(int type,char *value){
    if (type) { // 0比较name 1比较birth
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
        printf("验证成功\n");
        return 1;
    }
    else {
        printf("验证失败\n");
        return 0;
    }
}
int color(){
    // ASCII 48-57对应0-9  65-70对应A-F
    char command[]="color c0";
    for(int j=0;j<=8;j++){
        for(int i=48;i<=70;i++){
            if (i<=57) {
                command[7] = i;
                system(command);
                printf("-----%s,生日快乐-----\n", Name);
            }
            else if(i>=65){
                command[7] = i;
                system(command);
                printf("-----%s,生日快乐-----\n", Name);
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