#include<stdio.h>

void createfile(){
char a[20];
FILE *file;
//printf("ENTER THE FILE NAME WITH EXTENSION FOR OPEN OR CREATE NEW \n");
//gets(a);
file=fopen("shan.txt","r");
printf("success\n");
fclose(file);
}
int main(){

createfile();
return 0;
}
