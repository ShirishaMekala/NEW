#include <stdio.h>
#include <stdlib.h>
struct college
{
char name[20];
char loc[20];
}clg;
struct department
{
char deptname[20];
int deptID;
}dep;
struct admin
{
struct college clg[5];
struct department dep[5];
};
int main()
{
FILE *fptr1,*fptr2;
struct admin a;
fptr1=fopen("coll.txt","r");
fptr2=fopen("dept.txt","r");
if(fptr1==NULL && fptr2==NULL)
{
printf("error in opening file\n");
exit(1);
}
printf("college details:\n");
printf("---------------------------------\n");
printf("collegename collegelocation\n");
printf("---------------------------------\n");
for(int i=0;i<5;i++){
fscanf(fptr1,"%s %s",&a.clg[i].name,&a.clg[i].loc);
printf("%s\t   %s\n",a.clg[i].name,a.clg[i].loc);
}
printf("\ndepartment details:\n");
printf("---------------------------------\n");
printf("departmentname departmentID\n");
printf("---------------------------------\n");
for(int i=0;i<5;i++){
fscanf(fptr2,"%s %d",&a.dep[i].deptname,&a.dep[i].deptID);
printf("%s\t   %d\n",a.dep[i].deptname,a.dep[i].deptID);
}
//for(int i=0;i<5;i++){
//while(fread(&a,sizeof(struct admin),1,fptr1))
//{
//fprintf("college name=%s collegelocation=%s",a.clg.name,a.clg.loc);
//}
//}
//for(int i=0;i<5;i++){
//while(fread(&a,sizeof(struct admin),1,fptr2))
//{
//fprintf("department name=%s departmentID=%d",a.dep.deptname,a.dep.deptID);
//}
//}
fclose(fptr1);
fclose(fptr2);
   FILE *fp;
   int i=0;
   fp=fopen("collegedept.txt","w");
   if(fp==NULL)
   {
       printf("\n error opening in a file\n");
       exit(1);
   }
   for(int i=0;i<5;i++)
   {

       fprintf(fp,"%s %s\n",&a.clg[i].name,&a.clg[i].loc);
   }
   for(int i=0;i<5;i++)
   {

       fprintf(fp,"%s %d\n",&a.dep[i].deptname,a.dep[i].deptID);
   }
fclose(fp);
}
