#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void craetefile(){
    char str[20];
    printf("ENTER THE FILE NAME WITH EXTENTION");
    gets(str);
    FILE *fp=NULL;
    if(fp=fopen(str,"w")){
        printf("SUCCESSFUL");
        fclose(fp);
    }
    else{
        printf("UNSUCCESSFUL");
    }
}
void removes(){
     char str[20];
    
    printf("ENTER THE FILE NAME WITH EXTENTION");
    gets(str);
    int kk;
     kk=remove(str);
     if(kk=1){ printf("SUCCESSFUL");
       
    }
    else{
        printf("UNSUCCESSFUL");
    }
    
      
}

void renames(){
    char str[20],strs[20];
    printf("PLEASE ENTER FISRT OLD AND THEN NEW NAME WITH EXTENSIO");
    gets(str);
    gets(strs);
    if(rename(str,strs)){
        printf("SUCCESSFUL");
    }
}
void cm(){
    char str[20],buf[20];
    system("dir");
    printf("\nPLEASE ENTER FILENAME WITH EXTENSIO");

    gets(str);
    char cmd[]="gcc ";
    sprintf(buf,"echo %s",cmd);
    sprintf(buf,"echo %s",str);
    system(strcat(cmd,str));
    system("a");

}
void main(){
    int n;
    char str[20];
    printf("PLEASE SELECT TYPE WHAT YOU WANT\n");
    printf("CRETE\n");
    printf("REMOVE\n");
    printf("RENAME\n");
    printf("COMPILE AND RUN(CM)\n");
    gets(str);
    if(strcmp(str,"create")==0){
        n=0;
    }
    if(strcmp(str,"remove")==0){
        n=1;
    }
    if(strcmp(str,"rename")==0){
        n=2;
    }
    if(strcmp(str,"cm")==0){
        n=3;
    }
    switch (n)
    {
    case 0:
        craetefile();
        break;
    case 1:
        removes();
        break;
    case 2:
        renames();
        break;
    case 3:
        cm();
        break;
    default:
   break;
    
    
    }
}