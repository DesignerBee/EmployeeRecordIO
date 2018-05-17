#include<stdio.h>
#include"mylib.h"
#include<stdlib.h>
#define OPEN fopen(filename, "a+");
#define CLOSE fclose(fp);
void main()
{
char* filename_ini= (char*)malloc(sizeof(char)*100);
char* filename= (char*)malloc(sizeof(char)*100);
Mi man;int i=1; char c='Y'; char* path= "../record/"; //The information will be saved in the directory record (just outside Current directory)
puts("Enter the file name:");
gets(filename_ini);
sprintf(filename, "%s%s", path,filename_ini);
free(filename_ini);
FILE *fp;
fp= OPEN
while(c=='Y')
{
	fflush(stdin);
fprintf(fp, "Man %d \n", i);
printf("Name:");
scanf("%[^\n]s", &man.name);
printf("UID: BAN");
scanf("%s", &man.UID);
fflush(fp);
printf("Milk TYPE (B/C):");
scanf("%s", &man.m_type);
printf("Quantity(Lt):");
scanf("%f", &man.q_litres);
fprintf(fp, "Name:%s \nUID: BAN%s \nMILK TYPE: %c \nQuantity(Lt):%f \nTotal Earnings:%f\n", man.name, man.UID, man.m_type, man.q_litres, m_calc(man.m_type, man.q_litres));
printf("Add Another record(Y/N):");
fflush(stdin);
scanf("%c", &c);
i++;
}
CLOSE;
}
