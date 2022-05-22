#include<stdio.h>
#include<stdlib.h>
struct variable
{
char str,str1;
int a,b,c,d,e,f;
int name[20],roll[20],extra[20];
};

void topline()
{
int ia,ma,ja;
for(ja=1;ja<=30;ja++)
{
printf(" ");
}
for(ia=1;ia<=80;ia++)
{
printf("_");
}

printf("\n");
printf("\n");
for(ma=1;ma<=55;ma++)
{
printf(" ");
}
}

void bottomline()
{
printf("\n");
int ka,la;
for(ka=1;ka<=30;ka++)
{
printf(" ");
}
for(la=1;la<=80;la++)
{
printf("_");


}
printf("\n");
}

void space()
{
printf("\n");
int ma;
printf("\n");
for(ma=1;ma<=30;ma++)
{
printf(" ");
}
}
