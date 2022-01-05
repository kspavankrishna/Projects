#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip.h>
class data
{
public:
char name[20];
char mobnum[10];
char address[50];
int ID;
int passcode1[5];
int passcode2[5];
int a;
void patientdata();
void showdata();
void exitprog();
void transition();
void introductionofme();
}obj,obj1;
void data :: introductionofme()
{
textbackground(WHITE);
textcolor(RED);
cout<<"\n\n\t\t\t";
cprintf("COMPUTER PROJECT FOR CLASS 12");
cout<<"\n\n\t\t\t";
cprintf("         2016-2017           ");
cout<<"\n\n\n\n";
textbackground(BLACK);textcolor(CYAN);cout<<"\t\t      ";
cprintf("HANDBOOK APP FOR GRADE 12 STUDENTS");
textcolor(WHITE);
cout<<"\n\n\n\n\t";textcolor(GREEN);cprintf("Presented by :");
cout<<"\n\n\tName :";textcolor(BROWN);cprintf(" Pavan Krishna");
cout<<"\n\n\tClass :";textcolor(BROWN);cprintf(" 12");
cout<<"\n\n\tRoll Number :";textcolor(BROWN);cprintf(" 06");
cout<<"\n\n\tSchool :";textcolor(BROWN);cprintf(" Navkis Educational Centre");
cout<<"\n\n\tArea :";textcolor(BROWN);cprintf("Gokula, Bangalore-560054");
cout<<"\n\t\t\t\t\t\t   Press any key to continue..";
getch();
clrscr();
}
void data::exitprog()
{ clrscr();
  cout<<"\n\n\n\n\n\n\n\n\n\n";textcolor(3);
  cprintf("   ######  ##  ##  ######  ###    ##  ##  ##    ##      ##  #######  ##   ##");
  cout<<endl;textcolor(11);
  cprintf("     ##    ##  ##  ##  ##  ## #   ##  ## ##      ##    ##   ##   ##  ##   ##");
  cout<<endl;textcolor(2);
  cprintf("     ##    ######  ##  ##  ##  #  ##  ###         ##  ##    ##   ##  ##   ##");
  cout<<endl;textcolor(10);
  cprintf("     ##    ######  ######  ##   # ##  ###           ##      ##   ##  ##   ##");
  cout<<endl;textcolor(4);
  cprintf("     ##    ##  ##  ##  ##  ##    ###  ## ##         ##      ##   ##  ##   ##");
  cout<<endl;textcolor(5);
  cprintf("     ##    ##  ##  ##  ##  ##     ##  ##  ##        ##      #######  #######");
  delay(3000);
  clrscr();
	 cout<<"\n\n\n\n\n\n\t\t\t\t";
	 textcolor(5);
	 cprintf("Thanks a lot for using this application");
	 textcolor(7);
	 cout<<"\n\n\n\n\t";
	 cprintf("Greetins from 'STUDY TODAY'");
	 textcolor(14);
	 cout<<"\n\n\n\n\n\n\t\t\t\t\t";
	 cprintf("Applicaion will exit in : ");
	 for(int e=10;e>=0;e--)
	 {
	 gotoxy(67,17);
	 cout<<e;
	 delay(1000);
	 if(e==0)
	 {
	 cout<<"\n\n\n\n\n\t\t";
	 textcolor(7);
	 cprintf("HAVE A WONDER FULL DAY !!");
	 delay(2000);
	 exit(0);
	 }
	 }
}
void data::patientdata()
{
cout<<"\n\n\n\n\n\t";
cout<<"Enter your name : ";
gets(name);
cout<<"\n\n\n\tEnter your mobile number : +91 ";
gets(mobnum);
cout<<"\n\n\n\tEnter your house adress : ";
gets(address);
cout<<"\n\n\n\tChoose Unique ID upto 5 Digits : ";
cin>>ID;
pass:
cout<<"\n\n\n\tEnter a 5 Digit Passcode to secure your account : ";
for(int k=0;k<5;k++)
{
passcode1[k]=getch();
cout<<"*";
}
cout<<"\n\n\tEnter your passcode again : ";
for(int kk=0;kk<5;kk++)
{
passcode2[kk]=getch();
cout<<"*";
}
int mark=0;
for(int t=0;t<5;t++)
{
if(passcode1[t]!=passcode2[t])
{
cout<<"\n\n\tThe two passcodes do not match Enter again";
clrscr();
goto pass;
}
else
{mark=1;}
}
if(mark==1)
{cout<<"\nThe two passwords match";
clrscr();
int crdtype;
cout<<"\n\n\n\t\t\tThank you ";
cout<<"\n\n\t\tYou are just one step away from your subscription ";
payment:
vad:
cout<<"\n\n\n\t\tEnter your mode of payment : ";
cout<<"\n\n\t1. Credit card";
cout<<"\n\n\t2. Debit card";
cout<<"\n\n\t3. Bypass im admin";
cout<<"\n\n\tEnter choice : ";
cin>>crdtype;
if(crdtype==1)
{
char crdname[20];char crdnum[16];int date;
clrscr();
cout<<"\tVISA , MASTER CARD and AMERICAN EXPRESS !";
cout<<"\t------------------------------------------";
cout<<"\n\n\n\n\tName on card : ";
gets(crdname);
cout<<"\n\n\n\tCard number : ";
for(int f=0;f<16;f++)
{
crdnum[f]=getche();
if(f==3||f==7|f==11)
cout<<"-";
}char agg;
cout<<"\n\n\tEnter Expirey date : ";cin>>date;
cout<<"\n\n\n\t20000 For the whole year agree(y/n) : ";
cin>>agg;
if(agg=='y'||agg=='Y')
cout<<"Payment successfull ! Thank you for chosing us ";
else
{cout<<"Thank you please return ";}
//goto handbook;
}
else if(crdtype==2)
{
cout<<"\n\n\n\n\t\tSorry not avaliabe try another mode of payment !";
goto payment;
}
else if(crdtype==3)
{
char code[4];
cout<<"\n\n\tEnter the code : ";
gets(code);
if(strcmp(code,"0000")==0)
cout<<"\n\n\n\tWelcome sir ! Account has been created";
else{
cout<<"\n\n\n\n\t\tWrong code";goto vad;}
}
else
{clrscr();cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\tWrong option !!";goto vad;}
}
}
void data::showdata()
{
cout<<"\n\n\n\n\n\t";
cout<<"\n\t\tName : ";puts(name);
cout<<"\n\t\tMobile number : +91 ";puts(mobnum);
cout<<"\n\t\tHouse adress : ";puts(address);
cout<<"\n\t\tUnique ID : "<<ID;
cout<<"\n\t\tYour Passcode (encrypted) : *****";
}void view() // to view all records in order to be deleted
{
 cout<<"\n\n";
fstream f;
f.open("patient.dat",ios::in|ios::out|ios::ate|ios::app|ios::binary);
char ans;
f.seekg(0);
int ctr=0;
while(f.read((char *)&obj,sizeof(obj)) )
{
ctr=ctr+1;
if(ctr==8)
{
getchar();
clrscr();
ctr=0;
}
obj.showdata();
if(f.eof()==1)
{
break;
}
}
f.close();
}
void data :: transition()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\t\t";
cout<<char(219)<<char(223)<<char(223)<<char(223)<<char(223);
cout<<char(223)<<char(223)<<char(223)<<char(223)<<char(223);
cout<<char(223)<<char(223)<<char(223)<<char(223)<<char(223)<<char(223);
cout<<char(223)<<char(223)<<char(223)<<char(223)<<char(223)<<char(223);
cout<<char(223)<<char(223)<<char(223)<<char(223)<<char(223)<<char(223);
cout<<char(223)<<char(223)<<char(223)<<char(223)<<char(223)<<char(223);
cout<<char(223)<<char(223)<<char(223)<<char(223)<<char(223)<<char(223);
cout<<char(223)<<char(223);cout<<char(219);
cout<<"\n\t\t"<<char(219)<<"                                         "<<char(219);
cout<<"\n\t\t"<<char(219)<<"                                         "<<char(219);
cout<<"\n\t\t"<<char(219)<<"                                         "<<char(219);
cout<<"\n\t\t"<<char(219)<<"                                         "<<char(219);
cout<<"\n\t\t"<<char(219)<<"                                         "<<char(219);
cout<<"\n\t\t"<<char(219)<<"                                         "<<char(219);
cout<<"\n\t\t"<<char(219)<<"                                         "<<char(219);
cout<<"\n\t\t"<<char(219)<<"                                         "<<char(219);
cout<<"\n\t\t"<<char(223)<<char(223)<<char(223)<<char(223);
cout<<char(223)<<char(223)<<char(223)<<char(223)<<char(223);
cout<<char(223)<<char(223)<<char(223)<<char(223)<<char(223)<<char(223);
cout<<char(223)<<char(223)<<char(223)<<char(223)<<char(223)<<char(223);
cout<<char(223)<<char(223)<<char(223)<<char(223)<<char(223)<<char(223);
cout<<char(223)<<char(223)<<char(223)<<char(223)<<char(223)<<char(223);
cout<<char(223)<<char(223)<<char(223)<<char(223)<<char(223)<<char(223);
cout<<char(223)<<char(223)<<char(223)<<char(223);
gotoxy(20,13);    textcolor(1);
cout<<"\t";cprintf("     S");delay(300);textcolor(2);cprintf("T");delay(300);textcolor(4);cprintf("U");delay(300);textcolor(4);cprintf("D");delay(300);textcolor(10);
cprintf("Y");delay(300);textcolor(12);cprintf("     T");delay(300);textcolor(14);cprintf("O");delay(300);textcolor(7);cprintf("D");delay(300);textcolor(2);
cprintf("A");delay(300);textcolor(14);cprintf("Y");delay(300);
gotoxy(1,25);
for(int i=0;i<79;i++)
{
cout<<char(240);
delay(10);
}
gotoxy(1,1);
for(int j=0;j<79;j++)
{
cout<<char(240);
delay(10);
}
clrscr();
}
void main()
{
void introduction();
clrscr();
char s;
obj.introductionofme();
introduction();
int ch;fullmain:
obj.transition();clrscr();
cout<<"\n\n\n\n\n\n\n\n\t\t\t Enter your Role : ";
cout<<"\n\n\t\t1. Admin";
cout<<"\n\n\t\t2. Student";
cout<<"\n\n\t\t3. Other than Students - Parents and Teachers";
cout<<"\n\n\t\t4. Try the FREE TRIAL now !!";
cout<<"\n\n\t\t5. Exit";
cout<<"\n\n\n\tEnter your choice (1-3) : ";
cin>>ch;
switch(ch)
{
case 1 : z:
obj.transition();
{clrscr();
fstream f;
f.open("patient.dat",ios::in|ios::out|ios::app|ios::ate|ios::binary);
cout<<"\n\t ==============================================================\n";
cout<<"\t\t\t\t Sudent Database ";
cout<<"\n\t ==============================================================\n";
cout<<"\n\t 1 . Enter new Student ";
cout<<"\n\n\n\t 2 . View Student Details";
cout<<"\n\n\n\t 3 . Modify Student Details";
cout<<"\n\n\n\t 4 . Search Student Details";
cout<<"\n\n\n\t 5 . Delete Student Details";
cout<<"\n\n\n\t 6 . Exit ";
int a;
cout<<"\n\n\n\tEnter your Choice:";
f.seekg(0);
cin>>a;
char x;
switch (a)
{
case 1: clrscr();
	fstream f;
	f.open("patient.dat",ios::in|ios::out|ios::ate|ios::app|ios::binary);
	char ans;
	obj.patientdata();
	f.write((char *)&obj,sizeof(obj));
	getch();
	break;
case 2: {
	cout<<"\n\n";
	fstream f;
	f.open("patient.dat",ios::in|ios::out|ios::ate|ios::app|ios::binary);
	// cout<<"\n\n";
	char ans;
	f.seekg(0);
	int ctr=0;
	while(f.read((char *)&obj,sizeof(obj)) )
	{
	ctr=ctr+1;
	if(ctr==8)
	{
	getchar();
	clrscr();
	ctr=0;
	}
	obj.showdata();
	if(f.eof()==1)
	{
	break;
	}
	}
	f.close();
	}
	getch();
	break;
case 3: {
	int modflag=0;
	clrscr();
	char name[20];
	char mobnum[10];
	char address[50];
	int ID;
	int passcode1[5];
	int passcode2[5];
	ifstream mod("patient.dat",ios::in|ios::nocreate);
	ofstream output("tempatient.dat",ios::out);
	cout<<"\n";
	cout<<"\n ******************************************************************************\n";
	cout<<"\n                  Modify Student Database       \n";
	cout<<"\n ******************************************************************************\n";
	cout<<"\n Enter Student Name  :";
	gets(name);
	while(!mod.eof())
	{ mod.read((char *)&obj,sizeof(obj));
	if((strcmp(obj.name,name)==0) && (modflag==0))
	{
	obj.showdata();
	cout<<endl;
	cout<<endl;
	cout<<"\n \t      Enter New Database" ;
	cout<<"\n\n\n\n\n\t";
	cout<<"Enter your name : ";
	gets(name);
	cout<<"\n\n\n\tEnter your mobile number : +91 ";
	gets(mobnum);
	cout<<"\n\n\n\tEnter your house adress : ";
	gets(address);
	cout<<"\n\n\n\tChoose Unique ID upto 5 Digits : ";
	cin>>ID;
	pass:
	cout<<"\n\n\n\tEnter a 5 Digit Passcode to secure your account : ";
	for(int k=0;k<5;k++)
	{
	passcode1[k]=getch();
	cout<<"*";
	}
	cout<<"\n\n\tEnter your passcode again : ";
	for(int kk=0;kk<5;kk++)
	{
	passcode2[kk]=getch();
	cout<<"*";
	}
	int mark=0;
	for(int t=0;t<5;t++)
	{
	if(passcode1[t]!=passcode2[t])
	{
	cout<<"\n\n\tThe two passcodes do not match Enter again";
	clrscr();
	goto pass;
	}
	else
	{mark=1;}
	}
	if(mark==1)
	{cout<<"\nThe two passwords match";}
	output.write((char*)&obj1,sizeof(obj1));
	modflag++;
	}
	if(!(strcmp(obj.name,name)==0))
	output.write((char*)&obj,sizeof(obj));
	}
	mod.close();
	output.close();
	remove("patient.dat");
	rename("tempatient.dat","patient.dat");
	}
	break;
case 4:{  int flag=0;
	clrscr();
	fstream f;
	char name[20];
	char mobnum[10];
	char address[50];
	int ID;
	f.open("patient.dat",ios::in|ios::binary);
	cout<<"\n";
	cout<<"\n ******************************************************************************\n";
	cout<<"\n                  Search Student Database       \n";
	cout<<"\n ******************************************************************************\n";
	cout<<"\n Enter Student Name  :";
	gets(name);
	do
	{ f.read((char *)&obj,sizeof(obj));
	if(f.eof()==1) {break;}
	if(strcmp(obj.name,name)==0)
	{
	cout<<"\n\n\n\n\n\t";
	cout<<"\n\n\t\tName : "<<obj.name;
	cout<<"\n\n\n\t\tMobile number : +91 "<<obj.mobnum;
	cout<<"\n\n\n\t\tHouse adress : "<<obj.address;
	cout<<"\n\n\n\t\tUnique ID : "<<obj.ID;
	cout<<"\n\n\n\t\tYour Passcode (encrypted) : *****";
	getchar();
	cout<<endl;
	strcpy(obj.name,name);
	obj.a=a;
	int l=f.tellg();
	f.close();
	f.open("patient.dat",ios::out|ios::binary|ios::ate);
	f.seekg(l-sizeof(obj));
	getch();
	break;
	}
	else if(!(strcmp(obj.name,name)==0))
	{
	flag=1;
	}
	}while(f);
	if(flag==1) cout<<"\n Records Not Found ";
	f.close();
	}
	break;

/* CASE 5: DELETE */

case 5:char case5_name[20];
	view();
	ifstream del1("patient.dat",ios::in|ios::nocreate);
	ofstream del2("tempatient.dat",ios::out);
	
	cout<<"\n Enter Patient Name to be deleted :";
	gets(case5_name);
	while(!del1.eof())
	{
	del1.read((char *)&obj,sizeof(obj));
	if(!(strcmp(obj.name,case5_name)==0))
	del2.write((char*)&obj,sizeof(obj));
	}
	del1.close();
	del2.close();
	remove("patient.dat");
	rename("tempatient.dat","patient.dat");
	cout<<"\n Records deleted";
	view();
	getch();
	break;
/*Exit*/
case 6: exit(1);
	break;
default: clrscr();cout<<"\n\n\n\n\n\n\n\n\t\t\tWrong input \n";
	 break;
}
}
getch();
cout<<"\n\n\n\n\tDo yo want to go to back (1) or to mainmenu (2) : ";
int choicee;
cin>>choicee;
if(choicee==1)
goto z;
else if(choicee==2)
goto fullmain;
else{clrscr();
cout<<"Wrong option";}
		 break;

	case 2 :  clrscr();fstream f;	char name[20];int flag=0;
	f.open("patient.dat",ios::in|ios::binary);
	cout<<"\n Enter Your Name : ";
	gets(name);

	 f.read((char *)&obj,sizeof(obj));
	//if(f.eof()==1) {break;}
	if(strcmp(obj.name,name)==0)
	{
	hell:
	studentmenu:
	
	obj.transition();
	clrscr();
	gotoxy(2,2);
	cout<<"\tWelcome back "<<name;
	int option;	
	cout<<"\n\n\t\t\tMAIN MENU";
	cout<<"\n\n\t\t1. Important Questions from previous Question papers";
	cout<<"\n\n\t\t2. MCQ's";
	cout<<"\n\n\t\t3. Important Logics and Things which you miss";
	cout<<"\n\n\t\t4. Physiological boosting";
	cout<<"\n\n\t\t5. Account Details";
	cout<<"\n\n\t\t6. 24/7 Support and Help";
	cout<<"\n\n\t\t7. Exit";
	cout<<"\n\n\tEnter your option (1-6) student "<<name<<" : ";
	cin>>option;
	switch(option)
	{
	
	case 1 :	 submenu1:
	 		clrscr();
		 textcolor(2);
		 cout<<"\t\t\t\t   ";
		 cprintf("STUDY TODAY");
		 gotoxy(67,1);
		 textcolor(14);
		 int subch;
		 cout<<"\n\n\n\t\t\tSUBMENU FOR SUBJECT";
		 cout<<"\n\n\n\t\t1. Mathematics";
		 cout<<"\n\n\n\t\t2. Physics";
		 cout<<"\n\n\n\t\t3. Chemistry";
		 cout<<"\n\n\n\t\t4. Computer";
		 cout<<"\n\n\n\tEnter your choice (1-4) : ";
		 cin>>subch;
		 int men;
		 if(subch==1)
		 {clrscr();
		 cout<<"\n 1. If f : {1, 3} -> {1, 2, 5} and g : {1, 2, 5} -> {1, 2, 3, 4} be given by f = {(1, 2), (3, 5)}, g = {(1, 3), (2, 3), (5, 1)},Write down gof.";
		 cout<<"\n\n2. If sin–1x > cos–1x, then x belongs to which interval?";
		 cout<<"\n\n3. Use matrix method to solve the following system of equations : 5x – 7y = 2, 7x – 5y = 3.";
		 cout<<"\n\n4. Find the derivative of loge (sin x) w.r.t. loga (cos x)";
		 cout<<"\n\n5. Find the intervals in which the function f(x) = 2x 3 – 15x 2 + 36x + 1 is strictly increasing or decreasing. Also find the points on which the tangents are parallel to x-axis.";
		 cout<<"\n\n6. A and B throw a die alternatively till one of them throws a ‘6’ and wins the game. Find their respective probabilities of winning, if A starts the game.";
		 cout<<"\n\n\n\nFor any more questios or help please log on to www.studytodaythebest.com or contact our coustmer care team";
		 cout<<"\n\n\n\tPress(1) to exit,(2) to go to submenu,(3) to mainmenu : ";
		 cin>>men;
		 if(men==1)
		 {obj.exitprog();}
		 else if(men==2)
		 {goto submenu1;}
		 else if(men==3)
		 {goto studentmenu;}
		 else
		 {clrscr();cout<<"\n\n\n\n\n\n\n\tWrong option program will exit";delay(2000);obj.exitprog();}
		 }
		 else if(subch==2)
		 {
		 clrscr();
		 cout<<"\n    1. With the help of an example show that Farad is a very large unit of capacitance. ";
		 cout<<"\n\n   2. If the e.m.f of the driving cell be decreased. What will be the effect on the position of zero deflection in a potentiomenter ?";
		 cout<<"\n\n   3. What is the shape of the fringes in youngs double slit experiment ?";
		 cout<<"\n\n   4. How does the energy band gap vary,when doped with a pentavalent impurity ?";
		 cout<<"\n\n   5. The divisions marked on an A.C ammeter are not equally spaced.Why ?";
		 cout<<"\n\n   6. What is the significance of the Q factor in an Series LCR circut ?";
		 cout<<"\n\n\n\nFor any more questios or help please log on to www.studytodaythebest.com or contact our coustmer care team";
		 cout<<"\n\n\tPress(1) to exit,(2) to go to submenu,(3) to mainmenu : ";
		 cin>>men;
		 if(men==1)
		 {obj.exitprog();}
		 else if(men==2)
		 {goto submenu1;}
		 else if(men==3)
		 {goto studentmenu;}
		 else
		 {clrscr();cout<<"\n\n\n\n\n\n\n\tWrong option program will exit";delay(2000);obj.exitprog();}
		 }
		 else if(subch==3)
		 {clrscr();
		 cout<<"\n   1. Define all the defects.";
		 cout<<"\n\n   2. Why mercury Cell gives constant voltage ?";
		 cout<<"\n\n   3. How is lake test for aluminium ion based upon adsorption ?";
		 cout<<"\n\n   4. Bond dissociation enthalpy of F2 is less than that of Cl2. Why?";
			 cout<<"\n\n   5. Write the limitations of Valence Bond Theory.";
		 cout<<"\n\n   6. Why do amines act as nucleophiles? Give example of a reaction in which methylamine acts as a nucleophile.";
			 cout<<"\n\n\n\nFor any more questios or help please log on to www.studytodaythebest.com or contact our coustmer care team";
		 cout<<"\n\n\n\tPress(1) to exit,(2) to go to submenu,(3) to mainmenu : ";
		 cin>>men;
		 if(men==1)
		 {obj.exitprog();}
		 else if(men==2)
		 {goto submenu1;}
			 else if(men==3)
		 {goto studentmenu;}
		 else
		 {clrscr();cout<<"\n\n\n\n\n\n\n\tWrong option program will exit";delay(2000);obj.exitprog();}}
		 else if(subch==4)
		 {clrscr();
		 cout<<"\n   1. Convert the following infix expression to its equivalent Postfix expression, showing the stack contents for each step of conversion.";
				cout<<"\t\tX / Y + U* (V + W)";
		 cout<<"\n\n   2. What is operator overloading with methods ? Illustrate with the help of an example using a C++ code.  ";
		 cout<<"\n\n   3. Differentiate between ftp and http. ";
		 cout<<"\n\n   4. What is Worm ? How is it removed ? ";
		 cout<<"\n\n   5. What is a spam mail ? ";
		 cout<<"\n\n   6. Write a stack program to illustrate Data structures.";
		 cout<<"\n\n\n\n\nFor any more questios or help please log on to www.studytodaythebest.com or contact our coustmer care team";
		 cout<<"\n\n\n\tPress(1) to exit,(2) to go to submenu,(3) to mainmenu : ";
		 cin>>men;
		 if(men==1)
		 {obj.exitprog();}
		 else if(men==2)
		 {goto submenu1;}
		 else if(men==3)
		 {goto studentmenu;}
		 else
		{clrscr();cout<<"\n\n\n\n\n\n\n\tWrong option program will exit";delay(2000);obj.exitprog();}}
		 else
		 {clrscr();
		 cout<<"\n\n\n\n\n\n\n\n\n\t\t\tWrong Option enter again !";
		 delay(2000);
		 goto submenu1;}
		 break;

	case 2 : clrscr();
	         cout<<"\n\n\n\n\tMCQ's database has crashed come again later ! ";
		 delay(2000);
		 goto studentmenu;
		 break;

	case 3 : clrscr();cout<<"\n\n\n\n\n\n\t\t\tUnder construction come back later ";
		 delay(3000);
	 	 goto studentmenu;
		 break;

	case 4 : clrscr();
		 cout<<"\n\n\n\n\n\n\n\n\n\n\tBE BRAVE";
		 cout<<"\n\n\n\n\n\n\n\tDont fear any subject ! Just feel its easy and start practising with";
	 	cout<<" all your determinatioon and concentration, you will definitely win";
		 getch();
	 	goto studentmenu;
		break;

	case 5 : {  int flag=0;
	clrscr();
	fstream f;
	char name[20];
	char mobnum[10];
	char address[50];
	int ID;
	f.open("patient.dat",ios::in|ios::binary);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n Enter Student Name  :";
	gets(name);
	do
	{ f.read((char *)&obj,sizeof(obj));
	if(f.eof()==1) {break;}
	if(strcmp(obj.name,name)==0)
	{
	cout<<"\n\n\n\n\n\t";
	cout<<"\n\n\t\tName : "<<obj.name;
	cout<<"\n\n\n\t\tMobile number : +91 "<<obj.mobnum;
	cout<<"\n\n\n\t\tHouse adress : "<<obj.address;
	cout<<"\n\n\n\t\tUnique ID : "<<obj.ID;
	cout<<"\n\n\n\t\tYour Passcode (encrypted) : *****";
	getchar();
	cout<<endl;
	strcpy(obj.name,name);
	int l=f.tellg();
	f.close();
	f.open("patient.dat",ios::out|ios::binary|ios::ate);
	f.seekg(l-sizeof(obj));
	getch();
	break;
	}
	else if(!(strcmp(obj.name,name)==0))
	{
	flag=1;
	}
	}while(f);
	if(flag==1) cout<<"\n Records Not Found ";
	f.close();
	}
		break;


	case 6 : clrscr();
			 cout<<"\n\n\n\n\n\t\t\t24/7 Support and Help";
			 cout<<"\n\n\n\tToll Free number : 9900943027";
			 cout<<"\n\n\n\tEmail to us at : studytoday@gmail.com";
			 cout<<"\n\n\n\tOur website link : www.studytodaythebest.com";
			 cout<<"\n\n\n\n\n\tForany further questions or help please contact our coustmer care at "<<"\n"<<"\t +1 497 82 3341";
			 getch();
			 goto hell;



	case 7 : obj.exitprog();
		break;
	default : cout<<"Wrong choice !! ";
		  goto hell;break;
}
goto hell;

	}

else
{cout<<"\n Records Not Found ";}


	f.close();
		 
			break;

	case 3 : clrscr();someone:
	 	 obj.transition();
		 cout<<"\n\n\t\tWelcome To the world of Studies !!";
		 cout<<"\n\n\n\n\n\n\t\tMENU";
		 cout<<"\n\n\t\t1. 24/7 Support and Help";
		 cout<<"\n\n\t\t2. Comments,Complaints and Suggesstions";
		 cout<<"\n\n\t\t3. Go back";
		 cout<<"\n\n\tEnter your choice : ";
		 int chh;
		 cin>>chh;
		 switch(chh)
		 {

		
		case 1 : clrscr();
			 cout<<"\n\n\n\n\n\t\t\t24/7 Support and Help";
			 cout<<"\n\n\n\tToll Free number : 9900943027";
			 cout<<"\n\n\n\tEmail to us at : studytoday@gmail.com";
			 cout<<"\n\n\n\tOur website link : www.studytodaythebest.com";
			 cout<<"\n\n\n\n\n\tForany further questions or help please contact our coustmer care at "<<"\n"<<"\t +1 497 82 3341";
			 getch();
			 goto someone;
			 break;
		case 2 : clrscr();
			 char na[20];char no[10];char comment[100];
			 cout<<"\n\n\n\n\tPlease feel free to Drop your comments below if you ";
			 cout<<"\thave any complaints,suggestions or queries to make";
			 cout<<"\n\n\n\n\n\tEnter your name : ";
			 gets(na);
			 cout<<"\n\n\tEnter your mobile number : +91 ";
			 gets(no);
			 cout<<"\n\n\n\n\tComment [100 characters] : ";
			 gets(comment);
			 cout<<"\n\n\n\t\tThank you for your help to serve you better ";
			 delay(2000);
			 goto someone;
			 break;
	 	 case 3 : clrscr();
	 		  goto fullmain;




		 default : clrscr();cout<<"\n\n\n\n\n\n\n\n\n\t\t\tWrong option !";delay(2000);
			   goto someone;

		 }
		 break;
case 4 :  Subject:obj.transition();
	 clrscr();
	 int ch1;
	 cout<<"\n\n\n\t\t-----------------------------------";
	 cout<<"\n\t\t Select your subject from the menu";
	 cout<<"\n\t\t-----------------------------------";
	 cout<<"\n\n\t1. Mathematics";
	 cout<<"\n\n\t2. Physics";
	 cout<<"\n\n\t3. Computer";
	 cout<<"\n\n\t4. Chemistry";
	 cout<<"\n\n\t5. Go back";
	 cout<<"\n\n\n\t\tEnter your choice : ";
	 cin>>ch1;
		if(ch1==1)
		{back1:
		clrscr();
		textcolor(10);
		 cout<<"\n\t\t\t";cprintf("-------------");
		 cout<<"\n\t\t\t";cprintf("MAIN CONCEPTS");
		 cout<<"\n\t\t\t";cprintf("--------------");
		 textcolor(6);
		 cout<<"\n\n\t";
		 cprintf("1. Types of relations and binary operations");
		 cout<<"\n\n\t";
		 cprintf("2. Inverse Tringonometric Formulas and method of solving problems");
		 cout<<"\n\n\t";
		 cprintf("3. Operations,transpose and EO of a matrix");
		 cout<<"\n\n\t";
		 cprintf("4. Minors,cofactors,adjoint and Inverse functions on matrixs");
		 cout<<"\n\n\t";
		 cprintf("5. Continuity and Differentiability -> methods and formulas");
		 cout<<"\n\n\t";
		 cprintf("6. Application of derrivatives -> maxima and minima     !!And much more with the full version!!");
		 getch();
		 cout<<"\n\n";textcolor(3);
		 cprintf("Press 1 to go exit , 2 to go to different subject : ");
		 cin>>ch;
		 if(ch==1)
		 {obj.exitprog();}
		 else if(ch==2)
		 {goto Subject;}
		 else
		 {clrscr();
		 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tInvalid choice ! CHOOSE AGAIN";
		 delay(2000);
		 clrscr();
		 goto back1; }
		 obj.exitprog();
		}
		else if(ch1==2)
		{back2:
		clrscr();
		textcolor(10);
		 cout<<"\n\t\t\t";cprintf("-------------");
		 cout<<"\n\t\t\t";cprintf("MAIN CONCEPTS");
		 cout<<"\n\t\t\t";cprintf("--------------");
		 textcolor(6);
		 cout<<"\n\n\t";
		 cprintf("1. Electrostatics full volume");
		 cout<<"\n\n\t";
		 cprintf("2. Ray Optics -> Ray diagrams,Optical instruments");
		 cout<<"\n\n\t";
		 cprintf("3. Wave optics -> Definitions");
		 cout<<"\n\n\t";
		 cprintf("4. Communication -> Definitions");
		 cout<<"\n\n\t";
		 cprintf("5. Semiconductor electronics -> p-n junc");
		 cout<<"\n\n\t";
		 cprintf("6. Atoms and nuclii -> Relation derrivations      !!And much more with the full version!!");
		 getch();
		 cout<<"\n\n";textcolor(3);cprintf("Press 1 to go exit , 2 to go to different subject : ");
		 cin>>ch;
		 if(ch==1)
		 {obj.exitprog();}
		 else if(ch==2)
		 {goto Subject;}
		}
		else if(ch1==3)
		{back3:
		clrscr();
		textcolor(10);
		 cout<<"\n\t\t\t";cprintf("-------------");
		 cout<<"\n\t\t\t";cprintf("MAIN CONCEPTS");
		 cout<<"\n\t\t\t";cprintf("--------------");
		 textcolor(6);
		 cout<<"\n\n\t";
		 cprintf("1. Revision tour concepts");
		 cout<<"\n\n\t";
		 cprintf("2. Data File handling -> Creating Deleting,etc");
		 cout<<"\n\n\t";
		 cprintf("3. SQL commands - > * very important *");
		 cout<<"\n\n\t";
		 cprintf("4. Networking concepts");
		 cout<<"\n\n\t";
		 cprintf("5. Pointers -> * Understand and read concepts *");
		 cout<<"\n\n\t";
		 cprintf("6. Stacks ,inked Lists and Ques        !!And much more with the full version!!");
		 getch();
		 cout<<"\n\n";textcolor(3);cprintf("Press 1 to go exit , 2 to go to different subject : ");
		 cin>>ch;
		 if(ch==1)
		 {obj.exitprog();}
		 else if(ch==2)
		 {goto Subject;}
		 else
		 {clrscr();
		 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tInvalid choice ! CHOOSE AGAIN";
		 delay(2000);
		 clrscr();
		 goto back3; }
		 obj.exitprog();
		}
		else if(ch1==4)
		{back4:
		clrscr();
		textcolor(10);
		 cout<<"\n\t\t\t";cprintf("-------------");
		 cout<<"\n\t\t\t";cprintf("MAIN CONCEPTS");
		 cout<<"\n\t\t\t";cprintf("--------------");
		 textcolor(6);
		 cout<<"\n\n\t";
		 cprintf("1. Orgaic Chemistary -> Full 5 chap. ");
		 cout<<"\n\n\t";
		 cprintf("2. Surface chemistary -> derrivations");
		 cout<<"\n\n\t";
		 cprintf("3. Metallurgy -> Refining of all metals");
		 cout<<"\n\n\t";
		 cprintf("4. Peroid table -> p,d and f block variations");
		 cout<<"\n\n\t";
		 cprintf("5. Coordination Compounds - > nomenclature");
		 cout<<"\n\n\t";
		 cprintf("6. Solutions - > Colloid and its properties   !!And much more with the full version!!");
		 getch();
		 cout<<"\n\n";textcolor(3);cprintf("Press 1 to go exit , 2 to go to different subject : ");
		 cin>>ch;
		 if(ch==1)
		 {obj.exitprog();}
		 else if(ch==2)
		 {goto Subject;}
		 else
		 {clrscr();
		 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tInvalid choice ! CHOOSE AGAIN";
		 delay(2000);
		 clrscr();
		 goto back4; }
		 obj.exitprog();
		}
		else if(ch1==5)
		{
		goto fullmain;
		}
		else
		{
		clrscr();
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tInvalid choice ! CHOOSE AGAIN";
		delay(2000);
		clrscr();
		goto Subject;
		}
	 break;

	 case 5 : clrscr();
		  obj.exitprog();
		  break;
default : clrscr();cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tWrong Option ";
	  delay(2000);
	  goto fullmain;
}
getch();
}
void introduction()
{
for(int ii=0;ii<5;ii++)
{
cout<<"\n\n\n\n\n\n\t";
textcolor(2+BLINK);
cprintf("BEST APP FOR CLASS 12 !");
textcolor(5);
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t  ";
cprintf("STUDY TODAY");
textcolor(3);
cout<<"\n\n\n\n       ";
cprintf("Examination papers,MCQ's,Important Concepts and much more");
gotoxy(35,10);
textcolor(ii+1);
cprintf("+----------+");
cout<<"\n\t\t\t\t";cprintf("  |  ^    ^  |");
cout<<"\n\t\t\t\t";cprintf("  |  |    |  |");
cout<<"\n\t\t\t\t";cprintf("  | >+-12-+< |");
cout<<"\n\t\t\t\t";cprintf("  |  |    |  |");
cout<<"\n\t\t\t\t";cprintf("  +----------+");
textcolor(WHITE);
gotoxy(1,1);
for(int d=1;d<=80;d++)
{
delay(10);
if(d==80||d==1)
cout<<"+";
else
textcolor(d);
cprintf("-");
}
for(int aa=2;aa<=24;aa++)
{gotoxy(80,aa);
delay(10);
if(aa==24)
cout<<"+";
else
textcolor(aa);
cprintf("|");
}
if(ii==4)
{cout<<"Press any ket to continue...";
getch();}
else
{clrscr();}
}
clrscr();
}
