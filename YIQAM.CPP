#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>
#include<stdlib.h>
#include<fstream.h>
#include<time.h>


//---Global characters and variables---//
char k[30][20],found[20];
int x,col[10],evil=0,dead=0,Yahoo=0,hk=0;
//-------------------------------------//

//---class to enter and return Question---//
class Question11
{
public:
int L;
 char q[800],dt1[20];
void QE()
{
	time_t now = time(0);   // current system date/time

	char* dt = ctime(&now);   // convert in string form

strcpy(dt1,dt);
 gets(q);
 L=strlen(q);
 }
char* time2(){return dt1;}
char* Q1(){return q;}
} Qe;
//-------------------------------------------//

//---class with variables for calculation---//
class kinematics
{public:
 int u1,v1,a1,s1,t1;
 char u[10],v[10],a[20],t[20],vel[20],s[20];
float initial_velocity,final_velocity,accelaration,distance,time;
 kinematics()
 { strcpy(u,"initial");
   strcpy(v,"final");
   strcpy(s,"Distance");
   strcpy(a,"accelaration");
   strcpy(t,"time");
   }
 }k2;
 //--------------------------------------------//

 //---class with login or signup fuctionalities---//
 class account : public Question11
 { char user_name[20],password[20];
   public:
   int Qno;
    char name[20],pass[20];
   void login()
  { system("cls");
  textbackground(WHITE);
  window(30,1,70,120);
   gotoxy(30,5);
  textcolor(LIGHTBLUE);
    cprintf("LOGIN WINDOW");
  gotoxy(23,7);
  cprintf("USER NAME:");
  gotoxy(23,9);
  cprintf("PASSWORD :");
    gotoxy(35,7);
    gets(name);
    gotoxy(35,9);
   gets(pass);
}

  void signup()
  {clrscr();
  textbackground(WHITE);
  window(30,1,70,120);
   gotoxy(30,5);
  textcolor(LIGHTBLUE);
    cprintf("SIGNUP WINDOW");
  gotoxy(23,7);
  cprintf("USER NAME:");
  gotoxy(23,9);
  cprintf("PASSWORD :");
    gotoxy(35,7);
    gets(user_name);
    gotoxy(35,9);
   gets(password);
  }


  char* name1()
 { return user_name;}
  char* pass1()
  {return password;}
  int Qno1(){return Qno;}
  char* name11()
   {return name;}

}a3,a2,a1;
//------------------------------------------//



 //---declaration of functions---//
 void check(char k[]);
 void quest();
 void YesYesYes();
 void read(char b[],int c);
 void hell(char k[]);
 void interface();
 int togetin();
 int damnit();
 void display();
 int proceed();
 int MENU();
 void instruction();
 //-----------------------------//


//---main function---//
 void main()
 { int rt=0;
 clrscr();
 textbackground(BLACK);
 interface();
 clrscr();
 rt=togetin();
  textbackground(3);
  textcolor(0);
  clrscr();
   char ch;
if(rt==1)
{instruction();
while(rt==1)
{ clrscr();
quest();
 rt=proceed();
 if(rt==5)
 rt=MENU();
 } }

 if(rt==2)
 {clrscr();
  gotoxy(30,5);
  cprintf("SEE YOU AGAIN!  (^_^)");
  }
  delay(2000);
  }
//--------------------------------------------------------------------//

//---function to give instructions---//
void instruction()
{clrscr();
 cout<<"\n\t\t\t::INSTRUCTIONS::";
 cout<<"\n\n1.Please use following keywords for better assistance--:";
 cout<<"\n\n  (i) use 'initial ' for defining initial velocity";
  cout<<"\n\n  (ii) use 'final ' for defining final velocity";
  cout<<"\n\n  (iii) use 'distance ' for defining distance";
  cout<<"\n\n  (iv) use 'accelaration ' for defining accelaration";
  cout<<"\n\n  (v) use 'time ' for defining time";
 cout<<"\n\n2. try to input roundoff intiger values, float type is not accepted";
 cout<<"\n\n3. use keys as instructed , try to avoid false inputs";
 cout<<"\n\n\n\t\t KUDOS to our quest for solution";
 cout<<"\n20 seconds to read intructions!";
 delay(20000);
 }

//---function for conformation of values---//
int proceed()
{ char ch,mm;  int tog;
cout<<"\n\n\n________________________________________________________________________________";
 cout<<"\n\t\t\tIf the values i have understood is correct\n\t\tthen please enter 'y' else if i'm wrong please enter 'n'\n\t\t\t  your choice please :-";
 ch=getch();

 switch(ch)
 { case 'y':{  clrscr();
	    cout<<"PLEASE WAIT....";
	     for(int i=0;i<15;i++)
	     {
	      sound(50*random(100));
		delay(75);
	       nosound();
	       }
	     YesYesYes();
	     cout<<"\n\n\n*If you want to end press 'E':\n*If you want to enter new question enter 'N':";
	     cout<<"\n*If you want to go to menu press 'M':";
	     mm=getch();
	     if(mm=='E'||mm=='e')
	      return 2;
	     else if(mm=='N'||mm=='n')
	      return 1;
	      else if(mm=='m'||mm=='M')
	      return 5;
	      else
	      {cout<<"\n\n\t\twrong! choice! returning to menu!";
	      delay(1000);
	      return 5;}
	      }

   case 'n':{ clrscr();
	      tog=damnit();
	     clrscr();
	      return tog;}

   default :{ clrscr();
	     cout<<"\n WRONG CHOICE!!!";
	     delay(500);
	     clrscr();
	     return 1;
	     }
    }
  }
//--------------------------------------------------//

//---funtion to handle if question is not understood---//
int damnit()
{
  cout<<"\n\n\nsorry!! try to re-enter the question as instructed!";
  delay(1000);

 cout<<" \n\n getting back to MENU BOARD!, please wait!";
 delay(1000);
  return 5;

}
//------------------------------------------------------------//


//---function for displaying questions entered---/
void display()
{clrscr();  int len;
char qes[800],name2[20],time5[20],ch1;
 fstream qh("Quests.txt",ios::in|ios::out|ios::app);
while(qh.read((char*)&a3,sizeof(a3)))
{ clrscr();
  cout<<"\t\t ::HISTORY OF QUESTION ENTERED:;";
  strcpy(qes,a3.Q1());
  cout<<"\nQuestion-";
  puts(qes);
  len=strlen(qes);
  strcpy(time5,a3.time2());
  cout<<"\nQuestion entered at::";puts(time5);
   cout<<"\n\n\n*press 'N' for next:\n*Press 'A' to see the answer:";
  ch1=getch();
  if(ch1=='a'||ch1=='A')
  { read(qes,len);
    YesYesYes();
    cout<<"\n*press any key to return back to menu:";
    getch();
    break;
   }
   else if(ch1=='N'|ch1=='n');
   else
   { cout<<"\n wrong choice! getting back to menu!";
   delay(1000);
    break;}
 }
 qh.close();
}
 //----------------------------------------------------//

//---function for menu---//
int MENU()
{ EFG: char ch1; int qm;
  clrscr();
   cout<<"\n\t\t\t--MENU BOARD--\n";
  cout<<"\t\n\n\t*if you want to see previous Questions press 'L'\n\t*to enter new question press 'N'";
  cout<<"\n\t*if you want to exit press 'E'";
   ch1=getch();

   if(ch1=='L'||ch1=='l')
  { clrscr();
   display();
   goto EFG;
   }
   else if(ch1=='n'||ch1=='N')
   {return 1;}
   else if(ch1=='e'||ch1=='E')
   {return 2;}
   else
   {cout<<"\nWRONG CHOICE! wait!!";
    delay(1000);
    clrscr();
    cout<<"ENTER AGAIN!";
    goto EFG;
   }
 }
//------------------------------------------------------------//

 //---function to keep account---//

 int togetin()
  {ABC:
   clrscr();
    char ch,g;
    fstream f("account.txt",ios::app|ios::out|ios::in);
   cout<<"\t\t\t:::LETS GET STARTED:::";
   cout<<"\n\n\tIf you are a already an user please choose 'l' to login.";
   cout<<"\n\n\tIf you are new choose 's' to signup for new account";
   ch=getch();
   if(ch=='l'||ch=='L')
   { char k[20],k2[20];int t=0,kal;

   { a1.login();
   while( f.read((char *)&a2,sizeof(a2)))
   {
   strcpy(k,a2.name1());
    strcpy(k2,a2.pass1());
    if(strcmp(k,a1.name)==0)
    if(strcmp(k2,a1.pass)==0)
    t=1;
   }
   f.close();
   clrscr();
   if(t==1)
  { kal=MENU();
   return kal;
   }
   else
   {cout<<"your account or password couldn't match!!!\n\nlogin again!!    please wait!";
   delay(3000);}
   goto ABC;
   }  }
   else if(ch=='s'||ch=='S')
   {  a1.signup();      int kal;
   f.write((char *)&a1,sizeof(a1));
   f.close();
   kal=MENU();
   return kal;
   }
   else
   { cout<< " wrong";
   return 2;  }

   }
//----------------------------------------------//



 //---Interface function---//
 void interface()
 {
 char name[20];
 clrscr();
  textcolor(10);
  clrscr();
  gotoxy(35,8);
  cprintf("HI !!!");
  delay(2000);
  clrscr();
  gotoxy(34,8);
  cprintf(" I AM YIQAM !");
  delay(2000);
  clrscr();
  gotoxy(30,8);
  cprintf(" I WILL BE ASSISTING YOU.");
  gotoxy(3,9);
  cprintf("\nTO GET TO THE SOLUTIONS FOR QUESTIONS RELATED TO 3 EQUATIONS OF MOTION!");
  delay(5000);
  clrscr();
 }
 //-----------------------------//

 //---function to know the quantity to be found---//
 void Oh_yeah(char k[])
 {  kinematics k3;
    { int aa=strcmpi(k,k3.u);
     int bb=strcmpi(k,k3.v);
     int cc=strcmpi(k,k3.a);
     int dd=strcmpi(k,k3.t);
     int ff=strcmpi(k,k3.s);
     if(aa==0)
  { strcpy(found,"initial");
   cout<<endl<<"-you want to find initial velocity-";
   }
 else if(bb==0)
    {  strcpy(found,"final");
     cout<<endl<<"-you want to find final velocity-" ;
    }
    else if(cc==0)
    { strcpy(found,"accelaration");
    cout<<endl<<"-you want to find accelaration-";
    }
      else if(dd==0)
      {   strcpy(found,"time");
      cout<<endl<<"-you want to find time taken-";
      }
	else if(ff==0)
	{    strcpy(found,"distance");
	cout<<endl<<"-you want to find distance covered-";
	}
	}
}
//--------------------------------------------------------------------//

//---function to enter question---//
void quest()
{
 cout<<"\n\t\t\tPlease  Enter Your Question";
 cout<<"\n\t\t\t---------------------------\n";
 cout<<"\n\t\t     (please enter values in SI units)\n";
 fstream qq("Quests.txt",ios::in|ios::out|ios::app);
  a1.dt1;
  a1.QE();
 qq.write((char*)&a1,sizeof(a1));
 qq.close();
 cout<<"\n________________________________________________________________________________";
 cout<<"\nHERE IS WHAT I UNDERSTOOD--";
 read(a1.q,a1.L);
 }
//-------------------------------------------------------------//


//---funtion to seprate words---//
 void read(char b[],int c)
 {   int g;
 int j=0,e=0;
  for(int i=0;i<c;i++)
    {
    int a=b[i];
     if(a!=32)
    {
      k[j][e]=b[i];
      e++;
    }
    else
    if(j>0)
    {
    j++; e=0;}

    else
      {
       j++;
	  e=0;
       }
}    x=j+1;

for( g=0;g<x;g++)
{hell(k[g]);
   }
for( g=0;g<x;g++)
{
   int llen=strlen(k[g]);
 for(int i=0;i<llen;i++)
     { if(k[g][i]=='w')
      { if(k[g][i+1]=='h'&&k[g][i+2]=='a'&&k[g][i+3]=='t')
	 { ::Yahoo=1;}  }
     if(k[g][i]=='f')
       { if(k[g][i+1]=='i'&&k[g][i+2]=='n'&&k[g][i+3]=='d')
	 {::Yahoo=1;}
	 }
	if(k[g][0]=='i'&&k[g][1]=='f')
	 { ::Yahoo=0;}
	 if(k[g][0]=='w'&&k[g][1]=='h'&&k[g][2]=='i'&&k[g][3]=='c'&&k[g][4]=='h')
	 { ::Yahoo=0;}
	 }


if(Yahoo==0)
  check(k[g]);
 else
  Oh_yeah(k[g]);
    }
}
//--------------------------------------------------------------------//


//---function to assign the values to the keywords---//
 void check(char k[])
 {kinematics k1;

   { int aa=strcmpi(k,k1.u);
     int bb=strcmpi(k,k1.v);
     int cc=strcmpi(k,k1.a);
     int dd=strcmpi(k,k1.t);
     int ff=strcmpi(k,k1.s);


     if(aa==0)
  { k2.initial_velocity=col[dead];
   cout<<endl<<" Initial velocity=="<<k2.initial_velocity;
   ::dead++; k2.u1=1;
   }
 else if(bb==0)
    {k2.final_velocity=col[dead];
     cout<<endl<<" final velocity=="<<k2.final_velocity;
    ::dead++;  k2.v1=1;
    }
    else if(cc==0)
    {
    k2.accelaration=col[dead];
    cout<<endl<<" accelaration=="<<k2.accelaration;
    ::dead++;         k2.a1=1;
    }
      else if(dd==0)
      {k2.time=col[dead];
      if(k2.time>=0)
      {cout<<endl<<" time taken=="<<k2.time;
      ::dead++;          k2.t1=1;}
      else
      { cout<<"\ntime can't be negative!!;"; k2.time=-1*k2.time;
      cout<<endl<<"(taking positive value) time taken=="<<k2.time;
      ::dead++;         k2.t1=1;
      }

      }
	else if(ff==0)
	{k2.distance=col[dead];
	cout<<endl<<" distance covered =="<<k2.distance;
	 ::dead++;              k2.s1=1;
	}
}
 }
//------------------------------------------------------------------//

//---function to change char to int---//
void hell(char k[])
{ int bfg=k[0];
   char ch[20]; int m=0;

if(bfg==45&&k[1]>='0'&&k[1]<='9')
{int l=strlen(k);
 int arr[10],j=0,number=0;
  for(int i=1;i<l;i++)
  {   if(k[i]=='.')
   m=1;
    if(m==0)
   {
   int d=k[i];
     if(d>=48&&d<=57)
    { arr[j]=d==48?0:(d-48);
      j++;} }


  for(i=0;i<j;i++)
  { number=arr[i]+(number*10);}
  ::col[evil]=0-number;
  ::evil++;  }  }


else if(k[0]>='0'&&k[0]<='9')
{ int l=strlen(k);
 int arr[10],j=0,number=0;
  for(int i=0;i<l;i++)
  {  if(k[i]=='.')
   m=1;
    if(m==0)
   {int d=k[i];
   if(d>=48&&d<=57)
    { arr[j]=d==48?0:(d-48);
      j++;} }}

  for(i=0;i<j;i++)
  { number=arr[i]+(number*10);}
  ::col[evil]=number;
  ::evil++;
	   }
}
//---------------------------------------------------------------//


//---funtion to display solution---//
void YesYesYes()
{
 clrscr();
 window(0,0,350,100);
 textcolor(7);
 textbackground(8);
cprintf("\nQuestion:");
cputs(a1.q);
 cout<<"\n\n\nsolution:";
     int aa=strcmpi(found,k2.u);
     int bb=strcmpi(found,k2.v);
     int cc=strcmpi(found,k2.a);
     int dd=strcmpi(found,k2.t);
     int ff=strcmpi(found,k2.s);
   if(dd==0)
   {if(k2.a1==1&&k2.u1==1&&k2.v1==1)
   { cout<<"\nUsing first equation of motion:-";
     cout<<"\n\n\t v=u+a*t \n =>\t t=(v-u)/a ";
     cout<<"\n\nOn putting values -";
     cout<<"\n\n\tt=("<<k2.final_velocity<<"-"<<k2.initial_velocity<<")/"<<k2.accelaration;
     k2.time=(k2.final_velocity-k2.initial_velocity)/k2.accelaration;
     cout<<"\n\n therefore,\n\t time taken =="<<k2.time<<" sec";
     }
     else
     cout<<"!!! NOT ENOUGH INPUT !!!";
  }
   else if(cc==0)
   {if(k2.v1==1&&k2.u1==1&&k2.t1==1)
    { cout<<"\nUsing first equation of motion:-";
      cout<<"\n\n\t v=u+a*t \n=>\t a=(v-u)/t";
      cout<<"\n\nOn putting values -";
      cout<<"\n\n\t a=("<<k2.final_velocity<<"-"<<k2.initial_velocity<<")/"<<k2.time;
      k2.accelaration=(k2.final_velocity-k2.initial_velocity)/k2.time;
      cout<<"\n\n therefore,\n\t accelaration =="<<k2.accelaration<<" m/s*s";
      }
     else  if(k2.u1==1&&k2.s1==1&&k2.t1==1)
      {cout<<"\nUsing second equation of motion:-";
       cout<<"\n\n\t s=u*t+(a*t*t)/2  \n=>\t a=2(s-u*t)/t*t";
       cout<<"\n\nOn putting values -";
       cout<<"\n\n\t a=2("<<k2.distance<<"-"<<k2.initial_velocity<<"*"<<k2.time<<")/"<<k2.time<<"*"<<k2.time;
       k2.accelaration=2*(k2.distance-(k2.initial_velocity*k2.time))/(k2.time*k2.time);
       cout<<"\n\n therefore,\n\t accelaration =="<<k2.accelaration<<" m/s*s";
       }
     else  if(k2.v1==1&&k2.u1==1&&k2.s1==1)
      {cout<<"\nUsing third equation of motion:-";
      cout<<"\n\n\t v*v=u*u+2*a*s\n=>\t a=((v*v)-(u*u))/2*s";
      cout<<"\n\nOn putting values -";
      cout<<"\n\n\t a=(("<<k2.final_velocity<<"*"<<k2.final_velocity<<")-("<<k2.initial_velocity<<"*"<<k2.initial_velocity<<"))/2*"<<k2.distance;
      k2.accelaration=((k2.final_velocity*k2.final_velocity)-(k2.initial_velocity*k2.initial_velocity))/(2*k2.distance)
      ;
      cout<<"\n\n therefore,\n\t accelaration =="<<k2.accelaration<<" m/s*s";
      }
      else
      {cout<<"!!! NOT ENOUGH INPUT !!!";}
  }
  else if(aa==0)
  { if(k2.v1==1&&k2.a1==1&&k2.t1==1)
     { cout<<"\nUsing frist equation of motion:-";
      cout<<"\n\n\t v=u+a*t \n=>\t u=v-a*t";
      cout<<"\n\nOn putting values -";
      cout<<"\n\n\t u="<<k2.final_velocity<<"-("<<k2.accelaration<<"*"<<k2.time<<")";
      k2.initial_velocity=k2.final_velocity-(k2.accelaration*k2.time);
      cout<<"\n\n therefore,\n\t initial velocity =="<<k2.initial_velocity<<" m/s";
      }
     else if(k2.s1==1&&k2.t1==1&&k2.a1==1)
     { cout<<"\nUsing second equation of motion:-";
      cout<<"\n\n\t s=u*t+(a*t*t)/2 \n=>\t u=(2*s-(a*t*t))/2*t";
      cout<<"\n\nOn putting values -";
      cout<<"\n\n\t u=(2*"<<k2.distance<<"-("<<k2.accelaration<<"*"<<k2.time<<"*"<<k2.time<<"))/2*"<<k2.time;
      k2.initial_velocity=(2*k2.distance-(k2.accelaration*k2.time*k2.time))/(2*k2.time);
      cout<<"\n\n therefore,\n\t initial velocity =="<<k2.initial_velocity<<" m/s";
      }
      else if(k2.s1==1&&k2.v1==1&&k2.a1==1)
     { cout<<"\nUsing third equation of motion:-";
      cout<<"\n\n\t v*v=u*u+2*a*s\n \t     ___________\n=>\t u=_/ v*v-2*a*s";
      cout<<"\n\nOn putting values -";
      cout<<"\n\n\t     ____________";
      cout<<"\n\t u=_/"<<k2.final_velocity<<"*"<<k2.final_velocity<<"-2*"<<k2.accelaration<<"*"<<k2.distance;
      float sst=(k2.final_velocity*k2.final_velocity)-(2*k2.accelaration*k2.distance);
      k2.initial_velocity=sqrt(sst);
      cout<<"\n\n therefore,\n\t initial velocity =="<<k2.initial_velocity<<" m/s";
      }
       else
      {cout<<"!!! NOT ENOUGH INPUT !!!";}
      }
      else if(bb==0)
  { if(k2.u1==1&&k2.a1==1&&k2.t1==1)
     { cout<<"\nUsing frist equation of motion:-";
      cout<<"\n\n\t v=u+a*t" ;
      cout<<"\n\nOn putting values -";
      cout<<"\n\n\t v="<<k2.initial_velocity<<"+("<<k2.accelaration<<"*"<<k2.time<<")";
      k2.final_velocity=k2.initial_velocity+(k2.accelaration*k2.time);
      cout<<"\n\n therefore,\n\t final velocity =="<<k2.final_velocity<<" m/s";
      }
      else if(k2.s1==1&&k2.u1==1&&k2.a1==1)
     { cout<<"\nUsing third equation of motion:-\n";
      cout<<"\t    __________   ";
      cout<<"\n\t v=_/ u*u+2*a*s;";
      cout<<"\n\nOn putting values -";
      cout<<"\n\n\t     ____________";
      cout<<"\n\t v=_/"<<k2.initial_velocity<<"*"<<k2.initial_velocity<<"+2*"<<k2.accelaration<<"*"<<k2.distance;
      float sst=(k2.initial_velocity*k2.initial_velocity)+(2*k2.accelaration*k2.distance);
      k2.final_velocity=sqrt(sst);
      cout<<"\n\n therefore,\n\t final velocity =="<<k2.final_velocity<<" m/s";
      }
	 else
      {cout<<"!!! NOT ENOUGH INPUT !!!";}
      }
      else if(ff==0)
      { if(k2.t1==1&&k2.u1==1&&k2.a1==1)
      { cout<<"\nUsing second equation of motion:-";
      cout<<"\n\n\t s=u*t+(a*t*t)/2 ";
      cout<<"\n\nOn putting values -";
      cout<<"\n\t s="<<k2.initial_velocity<<"*"<<k2.time<<"+("<<k2.accelaration<<"*"<<k2.time<<"*"<<k2.time<<")/2";
      k2.distance=k2.initial_velocity*k2.time+(k2.accelaration*k2.time*k2.time)/2;
      cout<<"\n\n therefore,\n\t distance covered =="<<k2.distance<<" m";
      }
       else if(k2.u1==1&&k2.v1==1&&k2.a1==1)
     { cout<<"\nUsing third equation of motion:-";
      cout<<"\n\n\t v*v=u*u+2*a*s\n  => \t s=(v*v-u*u)/2*a ";
      cout<<"\n\nOn putting values -";
      cout<<"\n\t s=("<<k2.final_velocity<<"*"<<k2.final_velocity<<"-"<<k2.initial_velocity<<"*"<<k2.initial_velocity<<")/2"<<k2.accelaration;
      k2.distance=(k2.final_velocity*k2.final_velocity-k2.initial_velocity*k2.initial_velocity)/2*k2.accelaration;
	cout<<"\n\n therefore,\n\t distance covered =="<<k2.distance<<" m";}
	else
      {cout<<"!!! NOT ENOUGH INPUT !!!";}
      }
  }
//----------------------------------------------------------------------------------------------------------------------------------------------------//
