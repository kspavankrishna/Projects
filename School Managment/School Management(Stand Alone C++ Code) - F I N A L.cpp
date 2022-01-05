// *****F I N A L*****

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<snap.h>
#include<process.h>
#include<stdlib.h>
#include<string.h>
struct pass
{
long double  passcode;
int cho;
}pass;
void graphics()
{
clrscr();
{ cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
textcolor(1);
cout<<"               ";
cprintf("N            N      E E E E E E E     C C C C C C C");
cout<<endl; delay(50 );textcolor(2);  cout<<"               ";
cprintf("N N          N      E                 C            ");
cout<<endl; delay(50 ); textcolor(3); cout<<"               ";
cprintf("N   N        N      E                 C            ");
cout<<endl; delay(50 ); textcolor(4); cout<<"               ";
cprintf("N     N      N	     E                 C            ");
cout<<endl; delay(50 ); textcolor(5); cout<<"               ";
cprintf("N      N     N      E E E E E E E     C            ");
cout<<endl; delay(50 ); textcolor(6); cout<<"               ";
cprintf("N       N    N      E                 C            ");
cout<<endl; delay(50 ); textcolor(7); cout<<"               ";
cprintf("N        N   N      E                 C            ");
cout<<endl; delay(50 ); textcolor(8); cout<<"               ";
cprintf("N         N  N      E                 C            ");
cout<<endl; delay(50 );textcolor(9); cout<<"               ";
cprintf("N          N N      E                 C            ");
cout<<endl; delay(50 ); textcolor(12);cout<<"               ";
cprintf("N            N      E E E E E E E     C C C C C C C");
cout<<endl;
}     delay(500);
clrscr();
}
void exit()
{
graphics();
int x=22,y=12.5;
textcolor(YELLOW);
gotoxy(x,y);
cprintf("End Of Program");
textcolor(CYAN);
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cprintf("                                                 Greetings from navkis");
delay(4000);
}
struct variable
{
int b;
int ch;
int choice;
}va;
int main()
{
clrscr();
int st,l,a,k,v;
{int gdriver = DETECT,gmode;
int z,y,v;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
z=getmaxx()/2;
y=getmaxy()/2;
for(v=30;v<230;v++)
{
setcolor(v/20);
arc(z,y,0,360,v-10);
delay(5);
}
capture("C:\\TC\\Capture\\Capture1.jpg");}
cout<<endl;
clrscr();
textmode(C80);
textcolor(YELLOW+BLINK);
int x=22;
int y=12.5;
cout<<endl<<endl<<endl<<endl<<endl;
cprintf("");cout<<endl ;
cprintf    ("  | ------------------------------------------------------------------------|");cout<<endl;
cprintf    ("  |                                                                         |");cout<<endl  ;
cprintf    ("  |                                                                         |");cout<<endl    ;
cprintf    ("  |                                                                         |");cout<<endl    ;
cprintf    ("  |                                                                         |");cout<<endl    ;
cprintf    ("  |                                                                         |");cout<<endl    ;
cprintf    ("  |                                                                         |");cout<<endl    ;
cprintf    ("  |                                                                         |");cout<<endl    ;
cprintf    ("  |                                                                         |");cout<<endl    ;
cprintf    ("  |                                                                         |");cout<<endl    ;
cprintf    ("  |                                                                         |");cout<<endl    ;
cprintf    ("  |-------------------------------------------------------------------------|");
gotoxy(x,y);
textcolor(RED);
cprintf("WELCOME TO NAVKIS EDUCATIONAL CENTRE");
delay(2000);
clrscr();
back:
textcolor(WHITE);
cprintf("        Access only to school managment and staff");
gotoxy(x,y);
textcolor(RED);
cprintf("Enter the four digit passcode : ");
textcolor(WHITE);
cin>>pass.passcode;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
textcolor(CYAN+BLINK);
cprintf("Loading..");
delay(2000);
mainmenu:
clrscr();
if(pass.passcode==1234)
{
graphics();
textcolor(6);
cprintf("                                                         Welcome user");
cout<<endl<<endl<<endl;
textcolor(10);
cprintf("          - - - - - - - - - - - - - - - - - - - - - - - -");
cout<<endl;
cprintf("                           MAIN  MENU");
cout<<endl;
cprintf("          - - - - - - - - - - - - - - - - - - - - - - - -");
cout<<endl<<endl<<endl;
textcolor(CYAN);
cprintf("       1-> Learn statistics of some important ascepts");
cout<<endl<<endl<<endl;
cprintf("       2-> Search an id");
cout<<endl<<endl<<endl;
cprintf("       3-> View Merit Students List");
cout<<endl<<endl<<endl;
cprintf("       4-> Study Salaries and payment informations");
cout<<endl<<endl<<endl;
textcolor(13);
cprintf("Enter your desired choice : ");
va.choice = getche();
clrscr();
graphics();
switch(va.choice)
{
case '1' : back1:
	 textcolor(10);      cout<<endl<<endl<<endl;
	 cprintf("          - - - - - - - - - - - - - - - - - - - - -");
	 cout<<endl;
	 cprintf("            Statistics of some important ascepts");
	 cout<<endl;
	 cprintf("          - - - - - - - - - - - - - - - - - - - - -");
	 cout<<endl<<endl<<endl;
	 textcolor(4);
	 cprintf("Which statistics do you want to View : ");
	 cout<<endl<<endl<<endl;
	 textcolor(13);
	 cprintf("           1-> Number of students over the years in the school");
	 cout<<endl<<endl<<endl;
	 cprintf("           2-> Average Expenditure monthly of the school over the years");
	 cout<<endl<<endl<<endl;
	 cprintf("           3-> annual income of school over the years");
	 cout<<endl<<endl<<endl<<endl;
	 textcolor(CYAN);
	 cprintf("Enter the choice : ");
	 st = getche();
	 graphics();
	 switch(st)
		{
		case '1' :graph1:
			clrscr();
			cprintf("Number of students over the years in the school : ");
			 cout<<endl<<endl<<endl;
			 textcolor(YELLOW);
		      cprintf("              ^                                  ");
		      cout<<endl;
		      cprintf("              |                                  ");
		      cout<<endl;
		      cprintf("        110  -|                           *    ");
		      cout<<endl;
		      cprintf("              |                                  ");
		      cout<<endl;
		      cprintf("   ^    100  -|                    *             ");
		      cout<<endl;
		      cprintf("   |          |                                  ");
		      cout<<endl;
		      cprintf("   |     90  -|              *                   ");
		      cout<<endl;
		      cprintf("              |                                  ");
		      cout<<endl;
		      cprintf(" number  80  -|         *                        ");
		      cout<<endl;
		      cprintf("   of         |   *                              ");
		      cout<<endl;
		      cprintf("students 60  -|                                  ");
		      cout<<endl;
		      cprintf("              |                                  ");
		      cout<<endl;
		      cprintf("         40  -|                                  ");
		      cout<<endl;
		      cprintf("              |                                  ");
		      cout<<endl;
		      cprintf("         20  -|                                  ");
		      cout<<endl;
		      cprintf("              |_________________________________>");
		      cout<<endl;
		      cprintf("                 2011  2012  2013  2014  2015  ");
		      cout<<endl;
		      cprintf("                                                 ");
		      cout<<endl;
		      cprintf("                          Years -->              ");
		      cout<<endl;
		      textcolor(9);
		      cprintf("Press 1 to go back , 2 to go to main menu or 3 to exit : ");
		      va.ch=getche();
		      if(va.ch=='1')
		      {
		      clrscr();
		      goto back1;
		      }
		      if(va.ch=='3')
		      {
		      goto exit;
		      }
		      if(va.ch=='2')
		      {
		      goto mainmenu;
		      }
		      if(va.ch>'3')
		      {
		      clrscr();
		      gotoxy(x,y);
		      textcolor(5+BLINK);
		      cprintf("   Wrong choice , select properly again ");
		      delay(3000);
		      goto graph1;
		      }
		      break;
	 case '2' :graph2:
		clrscr();textcolor(12);cprintf("Average Expenditure monthly of the school over the years");
		cout<<endl<<endl;
		textcolor(YELLOW);
		cprintf("                               ^                                ");
		cout<<endl;
		cprintf("                      1000000 -|                           *    ");
		cout<<endl;
		cprintf("                               |                                ");
		cout<<endl;
		cprintf("                       900000 -|                                ");
		cout<<endl;
		cprintf("                               |                    *           ");
		cout<<endl;
		cprintf("                       800000 -|                                ");
		cout<<endl;
		cprintf("          ^                    |                                ");
		cout<<endl;
		cprintf("          |            700000 -|                                ");
		cout<<endl;
		cprintf("          |                    |                                ");
		cout<<endl;
		cprintf("Average expenditure    600000 -|              *                 ");
		cout<<endl;
		cprintf(" in rupees monthly             |                                ");
		cout<<endl;
		cprintf("                       500000 -|                                ");
		cout<<endl;
		cprintf("                               |        *                       ");
		cout<<endl;
		cprintf("                       400000 -|  *                             ");
		cout<<endl;
		cprintf("                               |                                ");
		cout<<endl;
		cprintf("                       300000 -|                                ");
		cout<<endl;
		cprintf("                               |_______________________________>");
		cout<<endl;
		cprintf("                                 2010  2011  2012  2013  2014   ");
		cout<<endl;
		cprintf("                                          Years -->             ");
		cout<<endl;
		textcolor(GREEN);
		      cprintf("Press 1 to go back , 2 to go to main menu or 3 to exit : ");
		      va.ch=getche();
		      if(va.ch=='1')
		      {
		      clrscr();
		      goto back1;
		      }
		      if(va.ch=='3')
		      {
		      goto exit;
		      }
		      if(va.ch=='2')
		      {
		      goto mainmenu;
		      }
		      if(va.ch>'3')
		      {
		      clrscr();
		      gotoxy(x,y);
		      textcolor(5+BLINK);
		      cprintf("   Wrong choice , select properly again ");
		      delay(3000);
		      goto graph2;
		      }
		break;
	 case '3' :  graph3:
	  clrscr();textcolor(6);cprintf("Annual income of school over the years");
		      cout<<endl<<endl<<endl<<endl;
		      textcolor(YELLOW);
	    cprintf("                        ^                                ");
	    cout<<endl;
	    cprintf("              45000000 -|                          *     ");
	    cout<<endl;
	    cprintf("                        |                                ");
	    cout<<endl;
	    cprintf("              40000000 -|                                ");
	    cout<<endl;
	    cprintf("     ^                  |                                ");
	    cout<<endl;
	    cprintf("     |        35000000 -|                    *           ");
	    cout<<endl;
	    cprintf("     |                  |                                ");
	    cout<<endl;
	    cprintf("Anual income  30000000 -|             *                   ");
	    cout<<endl;
	    cprintf(" in rupees              |                                ");
	    cout<<endl;
	    cprintf("              25000000 -|                                ");
	    cout<<endl;
	    cprintf("                        |                                ");
	    cout<<endl;
	    cprintf("              20000000 -|        *                       ");
	    cout<<endl;
	    cprintf("                        |                                ");
	    cout<<endl;
	    cprintf("              15000000 -|  *                              ");
	    cout<<endl;
	    cprintf("                        |                                ");
	    cout<<endl;
	    cprintf("              10000000 -|                                ");
	    cout<<endl;
	    cprintf("                        |_______________________________>");
	    cout<<endl;
	    cprintf("                          2010  2011  2012  2013  2014   ");
	    cout<<endl<<endl;
	    cprintf("                                    Years -->            ");
	    cout<<endl;
	    textcolor(GREEN);
		      cprintf("Press 1 to go back , 2 to go to main menu or 3 to exit : ");
		      va.ch=getche();
		      if(va.ch=='1')
		      {
		      clrscr();
		      goto back1;
		      }
		      if(va.ch=='3')
		      {
		      goto exit;
		      }
		      if(va.ch=='2')
		      {
		      goto mainmenu;
		      }
		      if(va.ch>'3')
		      {
		      clrscr();
		      gotoxy(x,y);
		      textcolor(5+BLINK);
		      cprintf("   Wrong choice , select properly again ");
		      delay(3000);
		      goto graph3;
		      }
		      break;
		      default:
		      clrscr();
		      textcolor(5+BLINK);
		      gotoxy(x,y);
		      cprintf("Wrong choice , select properly again ");
		      delay(2000);
		      clrscr();
		      goto back1;
		      }

	 break;
case '2' :  mainmenuselect:
clrscr();
cout<<endl<<endl;
cprintf("                - - - - - - - - - - - - - - - -");
cout<<endl;
cprintf("                        Searching ID ");
cout<<endl;
cprintf("                - - - - - - - - - - - - - - - -");
textcolor(3);
cout<<endl<<endl;
 mainmenustudent:
	clrscr();                    cout<<endl<<endl<<endl<<endl;
	textcolor(12);
	cprintf("                         - - - - - - - - - - - - -");
	cout<<endl;
	cprintf("                            Grades 1 to 10 only");
	cout<<endl;
	cprintf("                         - - - - - - - - - - - - -");
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(13);
       cprintf("               Enter class of student you want to search : ");
       cin>>a;
       clrscr();
       graphics();
       switch(a)
	{
	case 1: class1:
		clrscr();
		textcolor(YELLOW);
		cprintf("                            - - - - - - - - -");
		cout<<endl;
		cprintf("                                  Grade 1 ");
		cout<<endl;
		cprintf("                            - - - - - - - - -");
		cout<<endl;
       textcolor(CYAN);
       cout<<endl<<endl;
       cprintf("1 to 10 ID only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(3);
       cout<<"\n                Enter student ID : ";
       cin>>va.b;
       clrscr();
       textcolor(RED);
       cprintf("                 - - - - - - - - - - - - - -");
       cout<<endl;
       cprintf("                       Student Profile      ");
       cout<<endl;
       cprintf("                 - - - - - - - - - - - - - -");
       switch(va.b)
       {
	case 1: cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Yashwant CR"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 6  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case 2:cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Pavan Sing"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 3"<<endl<<endl;
	cout<<"           Age = 6  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case 3: cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Sushma P"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 6  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  4 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Yogesh P"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 6  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  5 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Varun G"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 6  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case 6 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Vaishnavi T"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 6  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  7 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Varadh R"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 7 "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  8 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Rineeth CR"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 6  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  9 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Raghav N"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 10"<<endl<<endl;
	cout<<"           Age = 6  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  10 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Mohit B"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 11"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
		default :clrscr();
		 textcolor(RED+BLINK);
		  gotoxy(x,y);
		cprintf("Invalid ID , select again ");
		delay(2000);
		clrscr();
		goto class1;
	}
	break;
case  2 :class2:
	textcolor(YELLOW);
		cprintf("                            - - - - - - - - -");
		cout<<endl;
		cprintf("                                  Grade 2 ");
		cout<<endl;
		cprintf("                            - - - - - - - - -");
		cout<<endl;

       textcolor(CYAN);
       cprintf("1 to 10 ID only");
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("                     Enter student ID : ");
       cin>>va.b;
       clrscr();
       textcolor(RED);
       cprintf("                 - - - - - - - - - - - - - -");
       cout<<endl;
       cprintf("                       Student Profile      ");
       cout<<endl;
       cprintf("                 - - - - - - - - - - - - - -");
       switch(va.b)
       {
	case  1 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Adharsh R"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  2 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Pavan Kumar"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  3 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manish Patel"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 3"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  4 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Shashank K"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  5 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Ashwini P"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  6 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Mahesh T"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  7 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Samyuktha S"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  8 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Ruchira K"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  9 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Trisha N"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  10 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Pooja G"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 10"<<endl<<endl;
	cout<<"           Age = 8  "<<endl<<endl;
	cout<<"            Number of years in this school = 1 ";
	break;
		default :clrscr();
		 textcolor(RED+BLINK);
		  gotoxy(x,y);
		cprintf("Invalid ID , select again ");
		delay(2000);
		clrscr();
		goto class2;
	}
	break;
case  3 :class3:
	textcolor(YELLOW);
		cprintf("                            - - - - - - - - -");
		cout<<endl;
		cprintf("                                  Grade 3 ");
		cout<<endl;
		cprintf("                            - - - - - - - - -");
		cout<<endl;
       textcolor(6);
       cprintf("1 to 10 ID only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("                   Enter student ID : ");
       cin>>va.b;
       clrscr();
       textcolor(RED);
       cprintf("                    - - - - - - - - - - - - - -");
       cout<<endl;
       cprintf("                          Student Profile      ");
       cout<<endl;
       cprintf("                    - - - - - - - - - - - - - -");
       switch(va.b)
       {
	case  1 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Raghu k"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 8  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  2 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Abhishek Kumar"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 8  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  3 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manish Khanna"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 3"<<endl<<endl;
	cout<<"           Age = 8  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  4 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Rithvik K"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 8  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  5 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manasa P"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 8  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  6 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Raju V"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 8  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  7 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Vishnu S"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 8 "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  8 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Shakira Y"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 8  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  9 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Trunan N"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 8  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  10 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Pavitra G"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 10"<<endl<<endl;
	cout<<"           Age = 9  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
		default :clrscr();
		 textcolor(RED+BLINK);
		  gotoxy(x,y);
		cprintf("Invalid ID , select again ");
		delay(2000);
		clrscr();
		goto class3;
	}
	break;
case  4 :class4:
	 textcolor(YELLOW);
		cprintf("                            - - - - - - - - -");
		cout<<endl;
		cprintf("                                  Grade 4 ");
		cout<<endl;
		cprintf("                            - - - - - - - - -");
		cout<<endl;
       cout<<endl;
       textcolor(2);
       cprintf("1 to 10 ID only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("                   Enter student ID : ");
       cin>>va.b;
       clrscr();
       textcolor(RED);
       cprintf("                    - - - - - - - - - - - - - -");
       cout<<endl;
       cprintf("                          Student Profile      ");
       cout<<endl;
       cprintf("                    - - - - - - - - - - - - - -");
       switch(va.b)
	{
	case  1  : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Raghav k"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 9  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  2 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Abhishek Kumar"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  3 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manit Khannan"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 9  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  4 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Rithika K"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 9  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  5 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manoj AP"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 9  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  6 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Ramaraj V"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 9  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  7 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Vishwas SV"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 9  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  8 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Shilpa R"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 9  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  9 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Tripti P"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 9  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  10 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Pavitra GP"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 10"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 2  ";
	break;
		default :clrscr();
		 textcolor(RED+BLINK);
		  gotoxy(x,y);
		cprintf("Invalid ID , select again ");
		delay(2000);
		clrscr();
		goto class4;
	}
	break;
case  5 :  class5:
	 textcolor(YELLOW);
		cprintf("                            - - - - - - - - -");
		cout<<endl;
		cprintf("                                  Grade 5 ");
		cout<<endl;
		cprintf("                            - - - - - - - - -");
		cout<<endl;
       cout<<endl;
       textcolor(CYAN);
       cprintf("1 to 10 ID only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("                 Enter student ID : ");
       cin>>va.b;
       clrscr(); textcolor(RED);
       cprintf("                    - - - - - - - - - - - - - -");
       cout<<endl;
       cprintf("                          Student Profile      ");
       cout<<endl;
       cprintf("                    - - - - - - - - - - - - - -");
       switch(va.b)
	{
	case  1 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Ramu T" <<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  2 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Abhishek Varma"<<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  3 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manoj Khanna"<<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 3"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  4 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Roshan K"<<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  5 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Mansi P"<<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  6 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Rochan V"<<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 11  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  7 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Vishnu S"<<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 11  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  8 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Sheela Y"<<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  9 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Trisha N"<<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 5 ";
	break;
	case  10 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Parvathi G"<<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 10"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
		default :clrscr();
		 textcolor(RED+BLINK);
		  gotoxy(x,y);
		cprintf("Invalid ID , select again ");
		delay(2000);
		clrscr();
		goto class5;
	}
	break;
case  6 :class6:
       textcolor(YELLOW);
		cprintf("                            - - - - - - - - -");
		cout<<endl;
		cprintf("                                  Grade 6 ");
		cout<<endl;
		cprintf("                            - - - - - - - - -");
		cout<<endl;
       cout<<endl;
       textcolor(CYAN);
       cprintf("1 to 10 ID only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("              Enter student ID : ");
       cin>>va.b;
       clrscr(); textcolor(RED);
       cprintf("                    - - - - - - - - - - - - - -");
       cout<<endl;
       cprintf("                          Student Profile      ");
       cout<<endl;
       cprintf("                    - - - - - - - - - - - - - -");
       switch(va.b)
	{
	case  1 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Ranan k"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  2 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Mahesh Kumar"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 11   "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  3 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Suraj Khanna"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"		  Roll no = 3"<<endl<<endl;
	cout<<"           Age = 11  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  4 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Rathore K"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 11  "<<endl<<endl;
	cout<<"           Number of years in this school = 5 ";
	break;
	case  5 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Kishore L"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 11  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  6 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Harish V"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  7 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Venkat S"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 11  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  8 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Sudeesh N"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  9 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Tarun N"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 11  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  10 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Parvathi G"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"           Roll no = 10"<<endl<<endl;
	cout<<"           Age = 11  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
		default :clrscr();
		 textcolor(RED+BLINK);
		  gotoxy(x,y);
		cprintf("Invalid ID , select again ");
		delay(2000);
		clrscr();
		goto class6;
	}
	break;
case  7 :class7:
	textcolor(YELLOW);
		cprintf("                            - - - - - - - - -");
		cout<<endl;
		cprintf("                                  Grade 7 ");
		cout<<endl;
		cprintf("                            - - - - - - - - -");
		cout<<endl;
       textcolor(CYAN);
       cprintf("1 to 10 ID only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("             Enter student ID : ");
       cin>>va.b;
       clrscr(); textcolor(RED);
       cprintf("                    - - - - - - - - - - - - - -");
       cout<<endl;
       cprintf("                          Student Profile      ");
       cout<<endl;
       cprintf("                    - - - - - - - - - - - - - -");
       switch(va.b)
	{
	case  1 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Rohan P"<<endl<<endl;
	cout<<"           Class = 7A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  2 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Pavan Kumar"<<endl<<endl;
	cout<<"           Class = 7 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  3 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Satish K"<<endl<<endl;
	cout<<"           Class = 7 A"<<endl<<endl;
	cout<<"           Roll no = 3"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  4 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Sanjana Rao"<<endl<<endl;
	cout<<"           Class = 7 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 5 ";
	break;
	case  5 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Prem E"<<endl<<endl;
	cout<<"           Class = 7 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 9 ";
	break;
	case  6 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Shwetha T"<<endl<<endl;
	cout<<"           Class = 7 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  7 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Mohammad Ashfaq"<<endl<<endl;
	cout<<"           Class = 7 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 11  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  8 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Shanti R"<<endl<<endl;
	cout<<"           Class = 7 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  9 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Prem T"<<endl<<endl;
	cout<<"           Class = 7 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 12   "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  10 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Pooj Gandhi"<<endl<<endl;
	cout<<"           Class = 7 A"<<endl<<endl;
	cout<<"           Roll no = 10"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
		default :clrscr();
		 textcolor(RED+BLINK);
		  gotoxy(x,y);
		cprintf("Invalid ID , select again ");
		delay(2000);
		clrscr();
		goto class7;
	}
	break;
case  8 :class8:
		textcolor(YELLOW);
		cprintf("                            - - - - - - - - -");
		cout<<endl;
		cprintf("                                  Grade 8 ");
		cout<<endl;
		cprintf("                            - - - - - - - - -");
       cout<<endl;
       textcolor(6);
       cprintf("1 to 10 ID only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("              Enter student ID : ");
       cin>>va.b;
       clrscr();textcolor(RED);
       cprintf("                    - - - - - - - - - - - - - -");
       cout<<endl;
       cprintf("                          Student Profile      ");
       cout<<endl;
       cprintf("                    - - - - - - - - - - - - - -");
       switch(va.b)
	{
	case  1 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Rekha k"<<endl<<endl;
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  2 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Abhinav Kumar"<<endl<<endl;
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  3 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manish Sharma";
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 3"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  4 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Raghav T"<<endl<<endl;
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  5 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manit K"<<endl<<endl;
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 5 ";
	break;
	case  6 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Roja T"<<endl<<endl;
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  7 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Isanth S"<<endl<<endl;
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  8 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Vihan Y"<<endl<<endl;
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 1  ";
	break;
	case  9 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Trisha N"<<endl<<endl;
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  10 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Prateeksha G"<<endl<<endl;
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 10"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
		default :clrscr();
		 textcolor(RED+BLINK);
		  gotoxy(x,y);
		cprintf("Invalid ID , select again ");
		delay(2000);
		clrscr();
		goto class8;
	}
	break;
case  9 :class9:
	 clrscr();
       textcolor(YELLOW);
		cprintf("                            - - - - - - - - -");
		cout<<endl;
		cprintf("                                  Grade 9 ");
		cout<<endl;
		cprintf("                            - - - - - - - - -");
       cout<<endl;
       textcolor(6);
       cprintf("1 to 10 ID only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("                Enter student ID : ");
       cin>>va.b;
       clrscr(); textcolor(RED);
       cprintf("                    - - - - - - - - - - - - - -");
       cout<<endl;
       cprintf("                          Student Profile      ");
       cout<<endl;
       cprintf("                    - - - - - - - - - - - - - -");
       switch(va.b)
       {
	case  1 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Rithvik k"<<endl<<endl;
	cout<<"           Class = 9 A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  2 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Mahesh Kumar"<<endl<<endl;
	cout<<"           Class = 9 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  3 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manoj Joshi"<<endl<<endl;
	cout<<"           Class = 9 A"<<endl<<endl;
	cout<<"           Roll no = 3"<<endl<<endl;
	cout<<"           Age = 15  "<<endl<<endl;
	cout<<"           Number of years in this school = 10 ";
	break;
	case  4 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Prithvi Kishan"<<endl<<endl;
	cout<<"           Class = 9 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 6 ";
	break;
	case  5 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manu T"<<endl<<endl;
	cout<<"           Class = 9 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 5 ";
	break;
	case  6 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Rohit T"<<endl<<endl;
	cout<<"           Class = 9 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  7 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Vishwas Rao"<<endl<<endl;
	cout<<"           Class = 9 A "<<endl<<endl;
	cout<<"           Roll no = 7 "<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  8 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Sheela Rani"<<endl<<endl;
	cout<<"           Class = 9 A "<<endl<<endl;
	cout<<"           Roll no = 8 "<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  9 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manish Patel"<<endl<<endl;
	cout<<"           Class = 9 A"<<endl<<endl;
	cout<<"           Roll no = 9 "<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  10 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Pateek U"<<endl<<endl;
	cout<<"           Class = 9 A "<<endl<<endl;
	cout<<"           Roll no = 10"<<endl<<endl;
	cout<<"           Age = 15  "<<endl<<endl;
	cout<<"           Number of years in this school = 2  ";
	break;
	default :clrscr();
		 textcolor(RED+BLINK);
		  gotoxy(x,y);
		cprintf("Invalid ID , select again ");
		delay(2000);
		clrscr();
		goto class9;
	}
	break;
case  10 :class10:    clrscr();
       textcolor(YELLOW);
		cprintf("                            - - - - - - - - - - -");
		cout<<endl;
		cprintf("                                  Grade 10 ");
		cout<<endl;
		cprintf("                            - - - - - - - - - - -");
       cout<<endl;
       textcolor(3);
       cprintf("1 to 10 ID only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("               Enter student ID : ");
       cin>>va.b;
       clrscr();textcolor(RED);
       cprintf("                    - - - - - - - - - - - - - -");
       cout<<endl;
       cprintf("                          Student Profile      ");
       cout<<endl;
       cprintf("                    - - - - - - - - - - - - - -");
       switch(va.b)
	{
	case  1 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Shravani VU"<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 16  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  2 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Akash RJ"<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 15  "<<endl<<endl;
	cout<<"           Number of years in this school = 6 ";
	break;
	case  3 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Pranav KSP"<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 3"<<endl<<endl;
	cout<<"           Age = 15  "<<endl<<endl;
	cout<<"           Number of years in this school = 5 ";
	break;
	case  4 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = BVGS Sai "<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 7 ";
	break;
	case  5 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Vishal HR"<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 15  "<<endl<<endl;
	cout<<"           Number of years in this school = 7 ";
	break;
	case  6 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Tejas I"<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 16  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  7 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Dhruv S"<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 16  "<<endl<<endl;
	cout<<"           Number of years in this school = 6 ";
	break;
	case  8 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Shanti Y"<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  9 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Varshini N"<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 15  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  10 : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Akansha G"<<endl<<endl;
	cout<<"           Class =10 A"<<endl<<endl;
	cout<<"           Roll no = 10"<<endl<<endl;
	cout<<"           Age = 15 "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
		default :clrscr();
		 textcolor(RED+BLINK);
		  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		  cprintf("                          - - - - - - - - - - - - - - - -");
		  cout<<endl;
		  cprintf("                             Invalid ID , select again ");
		  cout<<endl;
		  cprintf("                          - - - - - - - - - - - - - - - -");
		delay(2000);
		clrscr();
		goto class10;
	}
	break;

default:textcolor(RED+BLINK);
	clrscr();
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cprintf("                           - - - - - - - - - - - - - - - - - - - -");
	cout<<endl;
	cprintf("                              Wrong class entred , Select again ");
	cout<<endl;
	cprintf("                           - - - - - - - - - - - - - - - - - - - - ");
	delay(2000);
	goto mainmenustudent;
}cout<<endl<<endl<<endl<<endl<<endl;
	textcolor(YELLOW);
cprintf("Press 1 to select different class ");
cprintf("2 to go to mainmenu ");
cprintf("and 3 to exit : ");
	v = getche();
	if(v=='1')
	{
	clrscr();
	goto mainmenustudent;
	}
	if(v=='2')
	{
	clrscr();
	goto mainmenu;
	}
	if(v=='3')
	{
	clrscr();
	goto exit;
	}
	else
	{
	clrscr();
	int aa=17;
	gotoxy(aa,y);
	textcolor(RED);
	cprintf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
	cout<<endl;
	cprintf(" You have choosen wrong option , program will be exited ! ");
	cout<<endl;
	cprintf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
	delay(2000);
	goto exit;
	}

break;
case '3' :  merit:clrscr(); textcolor(CYAN);
cprintf("Merit students list : ");
cout<<endl<<endl;
	   textcolor(13);
	   cprintf("|---------------|----------------------------------|-----------------|");
	   cout<<endl;
	   cprintf("|_____Year______|______Student Name and Class______|__Percentage %___|");
	   cout<<endl;
	   cprintf("|               |                                  |                 |");
	   cout<<endl;
	   cprintf("|     2010      |   Shabarish Chandra (Class 10)   |      97.73 %    |");
	   cout<<endl;
	   cprintf("|---------------|----------------------------------|-----------------|");
	   cout<<endl;
	   cprintf("|               |                                  |                 |");
	   cout<<endl;
	   cprintf("|     2011      |   Prashanti Balaji (Class 10)    |      96.54 %    |");
	   cout<<endl;
	   cprintf("|---------------|----------------------------------|-----------------|");
	   cout<<endl;
	   cprintf("|               |                                  |                 |");
	   cout<<endl;
	   cprintf("|     2012      |   Ashwin Ravishankar(Class 10)   |      96.34 %    |");
	   cout<<endl;
	   cprintf("|---------------|----------------------------------|-----------------|");
	   cout<<endl;
	   cprintf("|               |                                  |                 |");
	   cout<<endl;
	   cprintf("|     2013      |   Gautham Rajiv (Class 12)       |      98.15 %    |");
	   cout<<endl;
	   cprintf("|---------------|----------------------------------|-----------------|");
	   cout<<endl;
	   cprintf("|               |                                  |                 |");
	   cout<<endl;
	   cprintf("|     2014      |   Shashank Shankar (Class 11)    |      97.15 %    |");
	   cout<<endl;
	   cprintf("|---------------|----------------------------------|-----------------|");
	   cout<<endl;
	   cprintf("|               |                                  |                 |");
	   cout<<endl;
	   cprintf("|     2015      |   Shobit Kumar (Class 12)        |      96.12 %    |");
	   cout<<endl;
	   cprintf("|---------------|----------------------------------|-----------------|");
	   cout<<endl<<endl;
		      textcolor(4);
		      cprintf("Press 1 to go back to mainmunu or 2 to exit : ");
		      va.ch=getche();
		      if(va.ch=='1')
		      {
		      clrscr();
		      goto mainmenu;
		      }
		      if(va.ch=='2')
		      {
		      goto exit;
		      }
		      if(va.ch>'3')
		      {
		      clrscr();
		      gotoxy(x,y);
		      textcolor(5+BLINK);
		      cprintf("   Wrong choice , select properly again ");
		      delay(2000);
		      goto merit;
		      }
break;
case '4' : back4:
textcolor(BLUE);
	 cprintf("                       - - - - - - - - - - - - -");
	 cout<<endl;
	 cprintf("                         Payments and salaries");
	 cout<<endl;
	 cprintf("                       - - - - - - - - - - - - -");
	 cout<<endl<<endl<<endl<<endl<<endl<<endl;
	 textcolor(GREEN);
	 cprintf("Which departments information you want to know : ");
	 cout<<endl<<endl<<endl;
	 textcolor(9);
	 cprintf("                1-> Office staff");
	 cout<<endl<<endl<<endl;
	 cprintf("                2-> Maintanence staff");
	 cout<<endl<<endl<<endl;
	 cprintf("                3-> Teachers");
	 cout<<endl<<endl<<endl<<endl;
	 textcolor(RED);

	 cprintf("Enter the choice : ");
	 pass.cho = getche();
	 graphics();
	 if(pass.cho=='1')
	 {
	 table1:
	  clrscr();
		textcolor(5);
		cprintf("               - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
		cout<<endl;
		cprintf("                         Payments and slaries of office staff         ");
		cout<<endl;
		cprintf("               - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
		   cout<<endl<<endl<<endl<<endl<<endl<<endl;
		   textcolor(2);
	   cprintf("|-----------------|---------------------------|-------------|");
	   cout<<endl;
	   cprintf("|__Desgination____|___Per month pay in rupees_|_____Tax %___|");
	   cout<<endl;
	   cprintf("|                 |                           |             |");
	   cout<<endl;
	   cprintf("|   Office head   |          50000            |     10 %    |");
	   cout<<endl;
	   cprintf("|-----------------|---------------------------|-------------|");
	   cout<<endl;
	   cprintf("|                 |                           |             |");
	   cout<<endl;
	   cprintf("| Office Assistant|          35000            |     8 %     |");
	   cout<<endl;
	   cprintf("|-----------------|---------------------------|-------------|");
	   cout<<endl;
	   cprintf("|                 |                           |             |");
	   cout<<endl;
	   cprintf("|   Accountant    |          20000            |     5 %     |");
	   cout<<endl;
	   cprintf("|-----------------|---------------------------|-------------");
	   cout<<endl;
	   cprintf("|                 |                           |             |");
	   cout<<endl;
	   cprintf("|    Pune         |          15000            |  - (No Tax) |");
	   cout<<endl;
	   cprintf("|-----------------|---------------------------|-------------|");
	   cout<<endl<<endl<<endl;
	   textcolor(RED);
		      cprintf("Press 1 to go back , 2 to go to main menu or 3 to exit : ");
		      va.ch=getche();
		      if(va.ch=='1')
		      {
		      clrscr();
		      goto back4;
		      }
		      if(va.ch=='3')
		      {
		      goto exit;
		      }
		      if(va.ch=='2')
		      {
		      goto mainmenu;
		      }
		      if(va.ch>'3')
		      {
		      clrscr();
		      gotoxy(x,y);
		      textcolor(5+BLINK);
		      cprintf("   Wrong choice , select properly again ");
		      delay(2000);
		      goto table1;
		      }

	   }
	   if(pass.cho=='2')
	   {
	   table2:
	   clrscr();
	   textcolor(5);
	   cprintf("                   - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
	   cout<<endl;
	   cprintf("                          Payments and salaries of Maintainence staff ");
	   cout<<endl;
	   cprintf("                   - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
	   cout<<endl<<endl<<endl;
	   textcolor(CYAN);
	   cprintf("|---------------|--------------------------|----------------|");
	   cout<<endl;
	   cprintf("|_Designation___|__Per month pay in rupees_|______Tax_%_____|");
	   cout<<endl;
	   cprintf("|               |                          |                |");
	   cout<<endl;
	   cprintf("| House keeping |      6000 - 13000        |    - (No Tax)  |");
	   cout<<endl;
	   cprintf("|_______________|__________________________|________________|");
	   cout<<endl;
	   cprintf("|               |                          |                |");
	   cout<<endl;
	   cprintf("| Bus drivers   |          80000           |    - (No Tax)  |");
	   cout<<endl;
	   cprintf("|_______________|__________________________|________________|");
	   cout<<endl;
	   cprintf("|               |                          |                |");
	   cout<<endl;
	   cprintf("|   Gardner     |          6000            |    - (No Tax)  |");
	   cout<<endl;
	   cprintf("|_______________|__________________________|________________|");
	   cout<<endl;
	   cprintf("|               |                          |                |");
	   cout<<endl;
	   cprintf("|   Security    |          9000            |    - (No Tax)  |");
	   cout<<endl;
	   cprintf("|---------------|--------------------------|----------------|");

	    cout<<endl<<endl<<endl;
	   textcolor(RED);
		      cprintf("Press 1 to go back , 2 to go to main menu or 3 to exit : ");
		      va.ch=getche();
	    if(va.ch=='1')
		      {
		      clrscr();
		      goto back4;
		      }
		      if(va.ch=='3')
		      {
		      goto exit;
		      }
		      if(va.ch=='2')
		      {
		      goto mainmenu;
		      }
		      if(va.ch>'3')
		      {
		      clrscr();
		      gotoxy(x,y);
		      textcolor(5+BLINK);
		      cprintf("   Wrong choice , select properly again ");
		      delay(2000);
		      goto table2;
		      }

	   }
	   if(pass.cho=='3')
	   {
	   table3:
	   clrscr();
	   textcolor(CYAN);
	   cprintf("                   - - - - - - - - - - - - - - - - - - - - -");
	   cout<<endl;
	   cprintf("                      Payments and Salaries of Teachers");
	   cout<<endl;
	   cprintf("                   - - - - - - - - - - - - - - - - - - - - -");
	   cout<<endl<<endl<<endl<<endl;
	   textcolor(5);
	   cprintf("|--------------------------|---------------------------|-------------|");
	   cout<<endl;
	   cprintf("|_______Department_________|___Per month pay in rupees_|_____Tax %___|");
	   cout<<endl;
	   cprintf("|                          |                           |             |");
	   cout<<endl;
	   cprintf("|     Primary Teachers     |          20000            |     5 %     |");
	   cout<<endl;
	   cprintf("|--------------------------|---------------------------|-------------|");
	   cout<<endl;
	   cprintf("|                          |                           |             |");
	   cout<<endl;
	   cprintf("|    Secondary Teachers    |          35000            |     8 %     |");
	   cout<<endl;
	   cprintf("|--------------------------|---------------------------|-------------|");
	   cout<<endl;
	   cprintf("|                          |                           |             |");
	   cout<<endl;
	   cprintf("|  Middle School Teachers  |          40000            |     10 %    |");
	   cout<<endl;
	   cprintf("|--------------------------|---------------------------|-------------");
	   cout<<endl;
	   cprintf("|                          |                           |             |");
	   cout<<endl;
	   cprintf("|   High School Teachers   |          50000            |     15 %    |");
	   cout<<endl;
	   cprintf("|--------------------------|---------------------------|-------------|");
	    cout<<endl<<endl<<endl;
	   textcolor(RED);
		      cprintf("Press 1 to go back , 2 to go to main menu or 3 to exit : ");
		      va.ch=getche();
	    if(va.ch=='1')
		      {
		      clrscr();
		      goto back4;
		      }
		      if(va.ch=='3')
		      {
		      goto exit;
		      }
		      if(va.ch=='2')
		      {
		      goto mainmenu;
		      }
		      if(va.ch>'3')
		      {
		      clrscr();
		      gotoxy(x,y);
		      textcolor(YELLOW+BLINK);
		      cprintf("   Wrong choice , select properly again ");
		      delay(2000);
		      goto table3;
		      }

	   }
	  if(pass.cho>'3')
	   {
	   clrscr();
		      textcolor(5+BLINK);
		      gotoxy(x,y);
		      cprintf("Wrong choice , select properly again ");
		      delay(2000);
		      clrscr();
		      goto back4;

	  }

break;
default:textcolor(5+BLINK);
gotoxy(x,y);
cprintf("Wrong choice , select properly again");
delay(2000);
goto mainmenu;
}
getch();
}
else
{
wrong:
textcolor(5);
cprintf("  Wrong password ! ") ;
textcolor(RED+BLINK);
gotoxy(x,y);
textmode(C80);
textcolor(RED+BLINK);
cprintf("        ACCESS DENIED");
cout<<endl<<endl<<endl<<endl<<endl<<endl;
textcolor(2);
cprintf("press 1 to go back and 2 to exit : ");
l=getche();
if(l=='1')
{
clrscr();
goto back;
}
else if(l=='2')
{
exit:
exit();
}
else
{
clrscr();
gotoxy(x,y);
textcolor(RED+BLINK);
cprintf("Wrong choice , select again ");
delay(2000);
clrscr();
goto wrong;
}
}
return 0;
}
