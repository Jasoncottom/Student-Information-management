 #include<stdio.h>
#include<stdlib.h> 
#include<ctype.h> 
#include<string.h> 
 
 
typedef struct//学号，姓名，年龄，性别，出生年月，地址，电话，E-mail
{
	char num[20];
	char name[20];
	char age[3];
	char sex[5];
	char birth[30];
	char home[50];
	char tel[15];
	char mail[20];
}Student; 
Student stu[80];
 
 
 
int Input(Student stud[],int n)//学生信息录入功能 
{
int i=0; 
char s;
while(s!='n'&&s!='N')
{ 
printf("\t学生学号 :");
scanf("\t%s",stud[n+i].num);
printf("\t学生姓名 :"); 
scanf("\t%s",stud[n+i].name); 
printf("\t学生年龄 :"); 
scanf("\t%s",stud[n+i].age); 
printf("\t学生性别 :"); 
scanf("\t%s",&stud[n+i].sex); 
printf("\t学生生日 :"); 
scanf("\t%s",&stud[n+i].birth);
printf("\t学生住址 :"); 
scanf("\t%s",&stud[n+i].home);
printf("\t学生电话 :"); 
scanf("\t%s",&stud[n+i].tel);
printf("\t学生邮箱 :"); 
scanf("\t%s",&stud[n+i].mail);
printf("还有吗?(Y/N)"); 
scanf("\t%c",&s);
i++;
} 
return(n+i); 
} 
 
void print(Student stud[],int n)//输出学生信息
{
	int i; 
	printf("学号\t   姓名\t 年龄 性别  出生日期\t家庭住址                 电话\t        邮箱\n");
	for(i=1;i<n+1;i++) /*循环输入*/ 
	{ 
		printf("%-10s%-8s%-5s%-5s%-12s%-25s%-15s%-15s\n",stud[i-1].num,stud[i-1].name,stud[i-1].age,stud[i-1].sex,stud[i-1].birth,stud[i-1].home,stud[i-1].tel,stud[i-1].mail); 
	} 
printf("\t\t\t"); 
system("pause"); 
}
 
 
int fnd_by_num(Student stud[],int n) //按学号找人 
{ 
char s[20]; 
int i=0; 
printf("请告诉我TA的学号:");
scanf("%s",s); 
while(strcmp(stud[i].num,s)!=0&&i<n) i++; //查找
if(i==n) 
{ 
printf("\t\t\t没有找到!\n"); //失败
return(n); 
}
printf("学号\t   姓名\t 年龄 性别  出生日期\t家庭住址                 电话\t        邮箱\n");
printf("%-10s%-8s%-5s%-5s%-12s%-25s%-15s%-15s\n",stud[i].num,stud[i].name,stud[i].age,stud[i].sex,stud[i].birth,stud[i].home,stud[i].tel,stud[i].mail); 
}
 
 
int fnd_by_name(Student stud[],int n) //按姓名找人 
{ 
char s[20]; 
int i=0; 
printf("请告诉我TA的姓名:");
scanf("%s",s); 
while(strcmp(stud[i].name,s)!=0&&i<n) i++; //查找判断 
if(i==n) 
{ printf("\t\t\t没有找到!\n"); //失败
return(n); 
}
printf("学号\t   姓名\t 年龄 性别  出生日期\t家庭住址                 电话\t        邮箱\n");
printf("%-10s%-8s%-5s%-5s%-12s%-25s%-15s%-15s\n",stud[i].num,stud[i].name,stud[i].age,stud[i].sex,stud[i].birth,stud[i].home,stud[i].tel,stud[i].mail); 
}
 
void Sort_by_num(Student stud[],int n) //按学号排序
{ 
int i,j,s; 
char t[10]; 
for(i=0;i<n-1;i++) /*冒泡法排序*/ 
for(j=0;j<n-1-i;j++) 
if(strcmp(stud[j].num,stud[j+1].num)>0) 
{
strcpy(t,stud[j+1].num); 
strcpy(stud[j+1].num,stud[j].num); 
strcpy(stud[j].num,t); //学号 
 
strcpy(t,stud[j+1].name); 
strcpy(stud[j+1].name,stud[j].name); 
strcpy(stud[j].name,t); //姓名 
 
strcpy(t,stud[j+1].age); 
strcpy(stud[j+1].age,stud[j].age); 
strcpy(stud[j].age,t); //年龄 
 
strcpy(t,stud[j+1].sex); 
strcpy(stud[j+1].sex,stud[j].sex); 
strcpy(stud[j].sex,t); //性别 
 
strcpy(t,stud[j+1].birth); 
strcpy(stud[j+1].birth,stud[j].birth); 
strcpy(stud[j].birth,t); //生日 
 
strcpy(t,stud[j+1].home); 
strcpy(stud[j+1].home,stud[j].home); 
strcpy(stud[j].home,t); //住址 
 
strcpy(t,stud[j+1].tel); 
strcpy(stud[j+1].tel,stud[j].tel); 
strcpy(stud[j].tel,t); //电话 
 
strcpy(t,stud[j+1].mail); 
strcpy(stud[j+1].mail,stud[j].mail); 
strcpy(stud[j].mail,t); //邮箱 
 
} 
printf("\n\n排序完成!\n\n");
printf("学号\t   姓名\t 年龄 性别  出生日期\t家庭住址                 电话\t        邮箱\n");
	for(i=1;i<n+1;i++) /*循环输入*/ 
	{ 
		printf("%-10s%-8s%-5s%-5s%-12s%-25s%-15s%-15s\n",stud[i-1].num,stud[i-1].name,stud[i-1].age,stud[i-1].sex,stud[i-1].birth,stud[i-1].home,stud[i-1].tel,stud[i-1].mail); 
	} 
	
}
 
 
void Sort_by_name(Student stud[],int n) //按姓名排序
{ 
int i,j,s; 
char t[10]; 
for(i=0;i<n-1;i++) /*冒泡法排序*/ 
for(j=0;j<n-1-i;j++) 
if(strcmp(stud[j].name,stud[j+1].name)>0) 
{
strcpy(t,stud[j+1].num); 
strcpy(stud[j+1].num,stud[j].num); 
strcpy(stud[j].num,t); //学号 
 
strcpy(t,stud[j+1].name); 
strcpy(stud[j+1].name,stud[j].name); 
strcpy(stud[j].name,t); //姓名 
 
strcpy(t,stud[j+1].age); 
strcpy(stud[j+1].age,stud[j].age); 
strcpy(stud[j].age,t); //年龄 
 
strcpy(t,stud[j+1].sex); 
strcpy(stud[j+1].sex,stud[j].sex); 
strcpy(stud[j].sex,t); //性别 
 
strcpy(t,stud[j+1].birth); 
strcpy(stud[j+1].birth,stud[j].birth); 
strcpy(stud[j].birth,t); //生日 
 
strcpy(t,stud[j+1].home); 
strcpy(stud[j+1].home,stud[j].home); 
strcpy(stud[j].home,t); //住址 
 
strcpy(t,stud[j+1].tel); 
strcpy(stud[j+1].tel,stud[j].tel); 
strcpy(stud[j].tel,t); //电话 
 
strcpy(t,stud[j+1].mail); 
strcpy(stud[j+1].mail,stud[j].mail); 
strcpy(stud[j].mail,t); //邮箱 
 
} 
printf("\n\n排序完成!\n\n");
printf("学号\t   姓名\t 年龄 性别  出生日期\t家庭住址                 电话\t        邮箱\n");
	for(i=1;i<n+1;i++) /*循环输入*/ 
	{ 
		printf("%-10s%-8s%-5s%-5s%-12s%-25s%-15s%-15s\n",stud[i-1].num,stud[i-1].name,stud[i-1].age,stud[i-1].sex,stud[i-1].birth,stud[i-1].home,stud[i-1].tel,stud[i-1].mail); 
	} 
	
}
 
int del_a_student(Student stud[],int n) //删除学生信息 
{ 
char s[20]; 
int i=0,j; 
printf("请告诉我TA的学号:");
scanf("%s",s); 
while((strcmp(stud[i].num,s)!=0)&&i<n) i++; //查找
if(i==n) 
{ printf("\t\t\t没有找到!\n"); //失败
return(n); 
}
 
for(j=i;j<n-1;j++) /*删除操作*/ 
{ 
strcpy(stud[j].num,stud[j+1].num); 
strcpy(stud[j].name,stud[j+1].name);
strcpy(stud[j].age,stud[j+1].age); 
strcpy(stud[j].sex,stud[j+1].sex); 
strcpy(stud[j].birth,stud[j+1].birth); 
strcpy(stud[j].home,stud[j+1].home); 
strcpy(stud[j].tel,stud[j+1].tel); 
strcpy(stud[j].mail,stud[j+1].mail); 
} 
printf("	成功删除信息!\n"); /*返回成功信息*/ 
return(n-1); 
} 
 
 
void WritetoText(Student stud[],int n) //写入到文件
{
int i=0; 
FILE *fp;
char filename[20];
printf("输入文件名:"); 
scanf("%s",filename); 
if((fp=fopen(filename,"w"))==NULL)
{ 
printf("无法打开\n"); 
system("pause"); 
return; 
} 
fprintf(fp,"%d\n",n); 
while(i<n) 
{ 
fprintf(fp,"%-10s%-8s%-5s%-5s%-12s%-25s%-15s%-15s\n",stud[i].num,stud[i].name,stud[i].age,stud[i].sex,stud[i].birth,stud[i].home,stud[i].tel,stud[i].mail); 
i++; 
} 
fclose(fp); 
printf("成功!\n"); 
} 
 
 
int AddfromText(Student stud[],int n) /*从文件中读入数据*/ 
{ 
int i=0,num; 
FILE *fp; /*定义文件指针*/ 
char filename[20]; /*定义文件名*/ 
printf("请输入文件名:"); 
scanf("%s",filename); /*输入文件名*/ 
if((fp=fopen(filename,"rb"))==NULL) /*打开文件*/ 
{ 
printf("无法打开文件\n"); /*打开失败信息*/ 
system("pause"); 
return(n); 
} 
fscanf(fp,"%d",&num); /*读入总记录量*/ 
while(i<num) /*循环读入数据*/ 
{ 
fscanf(fp,"%s%s%s%s%s%s%s%s",stud[i].num,stud[i].name,stud[i].age,stud[i].sex,stud[i].birth,stud[i].home,stud[i].tel,stud[i].mail); 
i++; 
} 
n+=num; 
fclose(fp); /*关闭文件*/ 
printf("成功录入数据"); 
system("pause"); 
return(n); 
} 
 
 
 
 
void menu()//菜单界面 
{
	printf("*****************Welcome*****************\n\n");
	printf("		0.退出系统\n");
	printf("		1.录入信息\n");
	printf("		2.浏览信息\n");
	printf("		3.按学号查找信息\n");
	printf("		4.按姓名查找信息\n");
	printf("		5.按学号排序\n");
	printf("		6.按姓名排序\n");
	printf("		7.增加信息\n");
	printf("		8.删除信息\n");
	printf("		9.保存到文件\n\n");
	printf("*****************************************\n");
	
}
 
 
int main()//主函数 
{
	int n;
	while(1)
	{
	menu(); //菜单 
	int c=0,n;
	int d=0;
	scanf("%d",&c);
	switch(c)
	{ 
		case 0:
			system("pause");
			exit(0);
			break;
		case 1:
			printf("-------------------录入信息------------------\n");
			printf("手动录入请按1、从文件读取请按2\n");
			scanf("%d",&d);
			if(d==1)
			n=Input(stu,n);
			if(d==2)
			n=AddfromText(stu,n);
			break;
		case 2:
			printf("-------------------浏览信息------------------\n");
			print(stu,n);
			break;
		case 3:
			printf("------------------按学号查找------------------\n");
			fnd_by_num(stu,n);
			break;
		case 4:
			printf("------------------按姓名查找------------------\n");
			fnd_by_name(stu,n);
			break;
		case 5:
			printf("------------------按学号排序------------------\n");
			Sort_by_num(stu,n);
			break;
		case 6:
			printf("------------------按姓名排序------------------\n");
			Sort_by_name(stu,n);
			break;
		case 7:
			printf("------------------增加信息------------------\n");
			n=Input(stu,n); 
			break;
		case 8:
			printf("------------------删除信息------------------\n");
			n=del_a_student(stu,n);
			break;
		case 9:
			printf("------------------保存到文件------------------\n");
			WritetoText(stu,n);
			break;
		default:
			printf("你想干嘛？没这个功能，重新选一下吧") ;
			system("pause"); 
			break;
	}
	system("pause");
	system("cls");//清空上一回车的东西； 
	}
	return 0;
}