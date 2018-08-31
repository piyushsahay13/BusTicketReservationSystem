//**********************************************************
//                          HEADER FILES USED
//**********************************************************
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<process.h>
#include<string.h>
#include<stdio.h>
void menu();
void create();
void edit();
void search();
void list();
void exit();
static l=0;
//**********************************************************
//             STRUCTURE USED IN THE PROGRAM
//**********************************************************
struct student
{
char name[20];
int age;
int standard;
char number[11];
char address[100];
int id;
int roll_number;
}student[20];
int x=20,y=10,i,k,f;
static j=0;
//**********************************************************
//              PASSWORD CHECK PROGRAMMING
//**********************************************************
void main()
{
clrscr();
cout<<"                        Welcome To Student Directory                 ";
    gotoxy(x,y+5);
    cout<<"\nInitializing please wait.......";
    for(long double j=0;j<5000000;j++)
    {menu();}
getch();
}
//**********************************************************
//              FUNCTION TO GET MENU
//**********************************************************
void menu()
{
clrscr();
int choice;
cout<<"$$$$$$$$$$$$$$$$$$$$ Welcome To Student Directory$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n\n\n\n\n\n\n";
cout<<"\t\t\t=============================================\n\n\n\t\t\t\t\tMENU\n\n\n\n";

gotoxy(x,y+5);
cout<<" \n\t\t\t\t\t1: Create a record\n ";
cout<<"\t\t\t\t\t2: Edit a record\n ";
cout<<"\t\t\t\t\t3: List all record\n ";
cout<<"\t\t\t\t\t4: Search a record\n ";
cout<<"\t\t\t\t\t5: Exit\n ";
cout<<"\t\t\t=============================================";
cout<<"\n\n\n\n\n\n\n\nEnter the choice = ";
cin>>choice;
if(choice==1)
create();
if(choice==2)
edit();
if(choice==3)
list();
if(choice==4)
search();
if(choice==5)
exit();

}
//**********************************************************
//              FUNCTION TO INSERT RECORDS
//**********************************************************
void create()
{
clrscr();
  cout<<"Enter the name of the student = ";
  gets(student[l].name);
  cout<<"Enter the age of the student = ";
  cin>>student[l].age;
  cout<<"Enter the standard of the student = ";
  cin>>student[l].standard;
  cout<<"Enter the mobile number of the student = ";
  gets( student[l].number);
  cout<<"Enter the address of the student = ";
  gets(student[l].address);
  cout<<"Enter the id of the student = ";
  cin>>student[l].id;
  cout<<"Enter the roll_number of the student = ";
  cin>>student[l].roll_number;
  l++;
  getch();
  menu();
}
//**********************************************************
//              FUNCTION TO EDIT RECORDS
//**********************************************************
void edit()
{        clrscr();
  cout<<"Enter the vlue of pos = ";
  cin>>k;
  cout<<"Enter the name of the student = ";
  gets(student[k-1].name);
  cout<<"Enter the age of the student = ";
  cin>>student[k-1].age;
  cout<<"Enter the standard of the student = ";
  cin>>student[k-1].standard;
  cout<<"Enter the number of the student = ";
  gets(student[k-1].number);
  cout<<"Enter the address of the student = ";
  gets(student[k-1].address);
  cout<<"Enter the id of the student = ";
  cin>>student[k-1].id;
  cout<<"Enter the roll_number of the student = ";
  cin>>student[k-1].roll_number;
  getch();
menu();
}
//**********************************************************
//              FUNCTION TO SEARCH RECORDS
//**********************************************************
void search()
{clrscr();
int flag=0,f=0,c=0;

char ch;
cout<<"enter students name first letter to find = ";
ch=getchar();
i=0;
	   for(i=0;i<20;i++)
      {
	      if (student[i].name[0]==ch)
	      {
 cout<<"\n\n\n\n\nName\tAge\tStandard\tNumber\tAddress\t     Id\tRoll Number\n\n\n\n\n" ;
  cout<<student[i].name;
  cout<<"\t";
  cout<<student[i].age;
    cout<<"\t";
  cout<<student[i].standard;
    cout<<"\t";
  cout<<student[i].number;
    cout<<"\t";
  cout<<student[i].address;
    cout<<"\t";
  cout<<student[i].id;
    cout<<"\t";
  cout<<student[i].roll_number;
    cout<<"\n\n";
    flag=1;
    if (i==c+3)
    {
    char ch;
    cout<<"press c to continue....";
    cin>>ch;
    if (ch=='c')
    {
  clrscr();
    continue;
    }
    else
    menu();
    }

    }


			}
    getch();

  if(flag==0)
  {
   cout<<"The entered id don't exist";
   getch();
  }
menu();

}
//**********************************************************
//              FUNCTION TO LIST RECORDS
//**********************************************************
void list()
{
clrscr();
cout<<"Name\tAge\tStandard\tNumber\tAddress\t     Id\tRoll Number\n\n\n\n\n" ;
 for( i=0;i<20;i++)
 {
  cout<<student[i].name;
  cout<<"\t";
  cout<<student[i].age;
    cout<<"\t";
  cout<<student[i].standard;
    cout<<"\t";
  cout<<student[i].number;
    cout<<"\t";
  cout<<student[i].address;
    cout<<"\t";
  cout<<student[i].id;
    cout<<"\t";
  cout<<student[i].roll_number;
    cout<<"\n\n";
    if (i==10)
    {
    char ch;
    cout<<"press c to continue....";
    cin>>ch;
    if (ch=='c')
    {
  clrscr();
    continue;
    }
    else
    menu();
    }
  }
 getch();
menu();
}
//**********************************************************
//              FUNCTION TO EXIT PROGRAM
//**********************************************************
void exit()
{
clrscr();
char ch;
cout<<"Do u really want to exit\n\n\n\n"<<"\t\t\tenter (y or n) for yes or no= ";
cin>>ch;
if(ch=='y')
exit(0);
else
menu();
}
