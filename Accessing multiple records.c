#include <stdio.h>
#include <stdlib.h>
struct college
{
char name[100];
char loc[100];
}clg;
struct department
{
char deptname[20];
}dep;
struct admin
{
struct college clg;
struct department dep;
};
int main()
{
FILE *fptr1,*fptr2;
struct admin a;
fptr1=fopen("coll.txt","r");
fptr2=fopen("dep.txt","r");
if(fptr1==NULL && fptr2==NULL)
{
printf("error in opening file\n");
exit(1);
}
for(int i=0;i<6;i++){
printf("college details\n");
printf("---------------------\n");
fscanf(fptr1,"%s %s",&a.clg.name,&a.clg.loc);
printf("%s %s\n",a.clg.name,a.clg.loc);
}
for(int i=0;i<6;i++){
printf("...................................\n");
printf("department name\n");
fscanf(fptr2,"%s",&a.dep.deptname);
printf("%s",a.dep.deptname);}
for(int i=0;i<5;i++){
         while(fread(&a,sizeof(struct admin),1,fptr1))
{
fprintf("college name=%s collegelocation=%s",a.clg.name,a.clg.loc);
}
fclose(fptr1);}
for(int i=0;i<5;i++){
          while(fread(&a,sizeof(struct admin),1,fptr2))
{
fprintf("department name=%s",a.dep.deptname);}
fclose(fptr1);
fclose(fptr2);
}
}
void search(struct Admin *ptr)
{
int id;
printf("enter the id for searching: ");
scanf("%d",&id);
for(int i=0;i<2;i++)
{


printf("record found\n");
printf("%s %s\n",a.clg.name,a.clg.loc);
};
printf("\n");
return;
}
}
printf("record not found");
}
void update(struct admin *ptr)
{
int id;
char name1[255];
printf("enter the id for searching: ");
scanf("%d",&id);
for(int i=0;i<2;i++)
{
printf("record found\n");
printf("enter the name to update: \n");
scanf("%s",&name1);
strcpy(ptr->s[i].name,name1);
printf("details after update: ");
printf("%d ",ptr->s[i].id);
printf("%s ",ptr->s[i].name);
printf("%s ",ptr->s[i].address);
printf("\n");
return;
}
}
printf("record not found");
}

void writefile(struct Admin *ptr)
{
FILE *fptr;
int i=0;
fptr=fopen("studentdept.txt","w");
if (fptr == NULL)
{
printf("\nError opening File\n\n");
exit (1);
}
for(int i=0;i<2;i++)
{
fprintf(fptr, "%d %s %s\n", ptr->s[i].id,&ptr->s[i].name,&ptr->s[i].address);
}

 for(int i=0;i<2;i++)
{
fprintf(fptr, "%s %s %d\n", &ptr->d[i].id,&ptr->d[i].name,ptr->d[i].students);
}

fclose(fptr);
}

void main()
{
struct admin ;
struct admin *ptr=NULL;
collegedetails(ptr);
departmentdetails(ptr);
//search(ptr);
//update(ptr);
writefile(ptr);
}
