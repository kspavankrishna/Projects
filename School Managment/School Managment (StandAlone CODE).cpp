// DRAFT 

// ***NOT FINAL***

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<snap.h>
#include<process.h>
#include<stdlib.h>
#include<string.h>
int main()
{
clrscr();
int choice,st,l,ch,a,b,k,v;
int cho;
long long int passcode;
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
cprintf("Enter the 10 digit passcode : ");
textcolor(WHITE);
cin>>passcode;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
textcolor(CYAN+BLINK);
cprintf("Loading..");
delay(2000);
mainmenu:
clrscr();
if(passcode==9900943027)
{
textcolor(6);
cprintf("                                                         Welcome user");
cout<<endl<<endl<<endl<<endl<<endl<<endl;
textcolor(2);
cprintf("What do you want to do :");
cout<<endl;
textcolor(CYAN);
cprintf("1-> Learn statistics of some important ascepts");
cout<<endl;
cprintf("2-> Search an id");
cout<<endl;
cprintf("3-> Merit Students List");
cout<<endl;
cprintf("4-> Study Salaries and payment informations");
cout<<endl<<endl;
textcolor(BLUE);
cprintf("Enter your choice : ");
choice = getche();
clrscr();
switch(choice)
{
case '1' :{ back1:
	 textcolor(5);
	 cprintf("   Statics");
	 cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	 textcolor(4);
	 cprintf("Which statistics do you want to learn : ");
	 cout<<endl;
	 textcolor(BLUE);
	 cprintf("1-> Number of students over the years");
	 cout<<endl;
	 cprintf("2-> Average Expenditure monthly of the school over the years");
	 cout<<endl;
	 cprintf("3-> annual income of school over the years");
	 cout<<endl<<endl;
	 textcolor(GREEN);
	 cprintf("Enter the choice : ");
	 st = getche();
	 switch(st)
		{
		case '1' :graph1:{
			clrscr();
			 cout<<endl<<endl<<endl;
			 textcolor(YELLOW);
		      cprintf("              ^                                  ");
		      cout<<endl;
		      cprintf("              |                          *       ");
		      cout<<endl;
		      cprintf("         700 -|                                  ");
		      cout<<endl;
		      cprintf("              |                                  ");
		      cout<<endl;
		      cprintf("   ^     600 -|                    *             ");
		      cout<<endl;
		      cprintf("   |          |                                  ");
		      cout<<endl;
		      cprintf("   |     500 -|              *                   ");
		      cout<<endl;
		      cprintf("              |                                  ");
		      cout<<endl;
		      cprintf(" number  400 -|         *                        ");
		      cout<<endl;
		      cprintf("   of         |   *                              ");
		      cout<<endl;
		      cprintf("students 300 -|                                  ");
		      cout<<endl;
		      cprintf("              |                                  ");
		      cout<<endl;
		      cprintf("         200 -|                                  ");
		      cout<<endl;
		      cprintf("              |                                  ");
		      cout<<endl;
		      cprintf("         100 -|                                  ");
		      cout<<endl;
		      cprintf("              |_________________________________>");
		      cout<<endl;
		      cprintf("                 2010  2011  2012  2013  2014    ");
		      cout<<endl;
		      cprintf("                                                 ");
		      cout<<endl;
		      cprintf("                          Years -->              ");
		      cout<<endl;
		      textcolor(9);
		      cprintf("Press 1 to go back , 2 to go to main menu or 3 to exit : ");
		      ch=getche();
		      if(ch=='1')
		      {
		      clrscr();
		      goto back1;
		      }
		      if(ch=='3')
		      {
		      goto exit;
		      }
		      if(ch=='2')
		      {
		      goto mainmenu;
		      }
		      if(ch>'3')
		      {
		      clrscr();
		      gotoxy(x,y);
		      textcolor(5+BLINK);
		      cprintf("   Wrong choice , select properly again ");
		      delay(3000);
		      goto graph1;
		      }}
		      break;
	 case '2' :graph2:{
		clrscr();
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
		      ch=getche();
		      if(ch=='1')
		      {
		      clrscr();
		      goto back1;
		      }
		      if(ch=='3')
		      {
		      goto exit;
		      }
		      if(ch=='2')
		      {
		      goto mainmenu;
		      }
		      if(ch>'3')
		      {
		      clrscr();
		      gotoxy(x,y);
		      textcolor(5+BLINK);
		      cprintf("   Wrong choice , select properly again ");
		      delay(3000);
		      goto graph2;
		      }}
		break;
	 case '3' :  graph3:{
	  clrscr();
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
		      ch=getche();
		      if(ch=='1')
		      {
		      clrscr();
		      goto back1;
		      }
		      if(ch=='3')
		      {
		      goto exit;
		      }
		      if(ch=='2')
		      {
		      goto mainmenu;
		      }
		      if(ch>'3')
		      {
		      clrscr();
		      gotoxy(x,y);
		      textcolor(5+BLINK);
		      cprintf("   Wrong choice , select properly again ");
		      delay(3000);
		      goto graph3;
		      }}
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
}
	 break;
case '2' : mainmenuselect:{
clrscr();
textcolor(CYAN);
cprintf("Searching an ID in the database");
textcolor(3);
cout<<endl<<endl<<endl<<endl<<endl<<endl;
cprintf("Which database do you want to search : ");
cout<<endl<<endl<<endl<<endl;
textcolor(4);
cprintf(" 1. Students Database ");
cout<<endl;
cprintf(" 2. Teachers Database ");
cout<<endl<<endl;
textcolor(1);
cprintf("Enter your choice : ");
k = getche();
clrscr();
switch(k)
{
case '1': mainmenustudent:
	clrscr();
	cout<<"                                                 Classes 1 to 10 only";
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(5);
       cprintf("            Enter the class of student you want to search : ");
       cin>>a;
       clrscr();
       switch(a)
	{
	case '1':{ class1:
		clrscr();
		textcolor(4);
		      cprintf("                                    Class 1 ");
	       cout<<endl;
       textcolor(CYAN);
       cprintf("ID's 1-10 only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(3);
       cout<<"\n           Enter student ID : ";
       cin>>b;
       clrscr();
       switch(b)
       {
	case '1': cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Yashwant CR"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 6  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case '2':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Pavan Sing"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 3"<<endl<<endl;
	cout<<"           Age = 6  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case '3': cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Sushma P"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 6  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '4' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Yogesh P"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 6  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '5' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Varun G"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 6  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case '6' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Vaishnavi T"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 6  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '7' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Varadh R"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 7 "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '8' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Rineeth CR"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 6  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '9' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Raghav N"<<endl<<endl;
	cout<<"           Class = 11 A"<<endl<<endl;
	cout<<"           Roll no = 10"<<endl<<endl;
	cout<<"           Age = 6  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '10' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
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
		goto class1;
	}}
	break;
case  '2' :{class2:
	textcolor(4);
       cprintf("                                    Class 2 ");
       cout<<endl;
       textcolor(CYAN);
       cprintf("ID's 1-10 only");
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("                     Enter student ID : ");
       cin>>b;
       clrscr();
       switch(b)
       {
	case  '1' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Adharsh R"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '2' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Pavan Kumar"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '3' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manish Patel"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 3"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '4' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Shashank K"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '5' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Ashwini P"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '6' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Mahesh T"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '7' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Samyuktha S"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '8' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Ruchira K"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '9' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Trisha N"<<endl<<endl;
	cout<<"           Class = 2 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 7  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '10' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
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
		goto class2;
	}}
	break;
case  '3' :{class3:
	textcolor(4);
       cprintf("                                    Class 3 ");
       cout<<endl;
       textcolor(6);
       cprintf("ID's 1-10 only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("                   Enter student ID : ");
       cin>>b;
       clrscr();
       switch(b)
       {
	case  '1' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Raghu k"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 8  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '2' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Abhishek Kumar"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 8  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '3' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manish Khanna"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 3"<<endl<<endl;
	cout<<"           Age = 8  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '4' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Rithvik K"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 8  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '5' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manasa P"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 8  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '6' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Raju V"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 8  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '7' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Vishnu S"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 8 "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '8' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Shakira Y"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 8  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '9' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Trunan N"<<endl<<endl;
	cout<<"           Class = 3 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 8  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '10' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
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
		goto class3;
	}}
	break;
case  '4' :{class4:
	 textcolor(4);
       cprintf("                                    Class 4 ");
       cout<<endl;
       textcolor(2);
       cprintf("ID's 1-10 only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("                   Enter student ID : ");
       cin>>b;
       clrscr();
       switch(b)
	{
	case  '1'  : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Raghav k"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 9  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '2' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Abhishek Kumar"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '3' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manit Khannan"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 9  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '4' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Rithika K"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 9  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '5' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manoj AP"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 9  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '6' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Ramaraj V"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 9  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  '7' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Vishwas SV"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 9  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '8' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Shilpa R"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 9  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '9' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Tripti P"<<endl<<endl;
	cout<<"           Class = 4 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 9  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '10' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
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
		goto class4;
	}}
	break;
case  '5' : { class5:
  textcolor(4);
       cprintf("                                    Class 5 ");
       cout<<endl;
       textcolor(CYAN);
       cprintf("ID's 1-10 only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("                 Enter student ID : ");
       cin>>b;
       clrscr();
       switch(b)
	{
	case  '1' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Ramu T" <<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '2' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Abhishek Varma"<<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '3' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manoj Khanna"<<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 3"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '4' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Roshan K"<<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '5' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Mansi P"<<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '6' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Rochan V"<<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 11  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '7' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Vishnu S"<<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 11  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '8' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Sheela Y"<<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '9' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Trisha N"<<endl<<endl;
	cout<<"           Class = 5 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 5 ";
	break;
	case  '10' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
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
		goto class5;
	}}
	break;
case  '6' :{class6:
	textcolor(4);
       cprintf("                                    Class 6 ");
       cout<<endl;
       textcolor(CYAN);
       cprintf("ID's 1-10 only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("              Enter student ID : ");
       cin>>b;
       clrscr();
       switch(b)
	{
	case  '1' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Ranan k"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '2' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Mahesh Kumar"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 11   "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  '3' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Suraj Khanna"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"		  Roll no = 3"<<endl<<endl;
	cout<<"           Age = 11  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '4' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Rathore K"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 11  "<<endl<<endl;
	cout<<"           Number of years in this school = 5 ";
	break;
	case  '5' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Kishore L"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 11  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  '6' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Harish V"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 10  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  '7' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Venkat S"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 11  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '8' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Sudeesh N"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '9' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Tarun N"<<endl<<endl;
	cout<<"           Class = 6 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 11  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  '10' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
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
		goto class6;
	}}
	break;
case  '7' :{class7:
	textcolor(4);
       cprintf("                                    Class 7 ");
       cout<<endl;
       textcolor(CYAN);
       cprintf("ID's 1-10 only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("             Enter student ID : ");
       cin>>b;
       clrscr();
       switch(b)
	{
	case  '1' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Rohan P"<<endl<<endl;
	cout<<"           Class = 7A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  '2' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Pavan Kumar"<<endl<<endl;
	cout<<"           Class = 7 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '3' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Satish K"<<endl<<endl;
	cout<<"           Class = 7 A"<<endl<<endl;
	cout<<"           Roll no = 3"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  '4' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Sanjana Rao"<<endl<<endl;
	cout<<"           Class = 7 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 5 ";
	break;
	case  '5' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Prem E"<<endl<<endl;
	cout<<"           Class = 7 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 9 ";
	break;
	case  '6' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Shwetha T"<<endl<<endl;
	cout<<"           Class = 7 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  '7' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Mohammad Ashfaq"<<endl<<endl;
	cout<<"           Class = 7 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 11  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  '8' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Shanti R"<<endl<<endl;
	cout<<"           Class = 7 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '9' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Prem T"<<endl<<endl;
	cout<<"           Class = 7 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 12   "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '10' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
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
		goto class7;
	}}
	break;
case  '8' :{class8:
	textcolor(4);
       cprintf("                                    Class 8 ");
       cout<<endl;
       textcolor(6);
       cprintf("ID's 1-10 only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("              Enter student ID : ");
       cin>>b;
       clrscr();
       switch(b)
	{
	case  '1' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Rekha k"<<endl<<endl;
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  '2' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Abhinav Kumar"<<endl<<endl;
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '3' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manish Sharma";
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 3"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '4' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Raghav T"<<endl<<endl;
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '5' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manit K"<<endl<<endl;
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 5 ";
	break;
	case  '6' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Roja T"<<endl<<endl;
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  '7' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Isanth S"<<endl<<endl;
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  '8' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Vihan Y"<<endl<<endl;
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 12  "<<endl<<endl;
	cout<<"           Number of years in this school = 1  ";
	break;
	case  '9' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Trisha N"<<endl<<endl;
	cout<<"           Class = 8 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '10' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
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
		goto class8;
	}}
	break;
case  '9' :{class9:
	 clrscr();
	textcolor(4);
       cprintf("                                    Class 9 ");
       cout<<endl;
       textcolor(6);
       cprintf("ID's 1-10 only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("                Enter student ID : ");
       cin>>b;
       clrscr();
       switch(b)
       {
	case  '1' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Rithvik k"<<endl<<endl;
	cout<<"           Class = 9 A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 13  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  '2' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Mahesh Kumar"<<endl<<endl;
	cout<<"           Class = 9 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  '3' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manoj Joshi"<<endl<<endl;
	cout<<"           Class = 9 A"<<endl<<endl;
	cout<<"           Roll no = 3"<<endl<<endl;
	cout<<"           Age = 15  "<<endl<<endl;
	cout<<"           Number of years in this school = 10 ";
	break;
	case  '4' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Prithvi Kishan"<<endl<<endl;
	cout<<"           Class = 9 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 6 ";
	break;
	case  '5' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manu T"<<endl<<endl;
	cout<<"           Class = 9 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 5 ";
	break;
	case  '6' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Rohit T"<<endl<<endl;
	cout<<"           Class = 9 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 2 ";
	break;
	case  '7' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Vishwas Rao"<<endl<<endl;
	cout<<"           Class = 9 A "<<endl<<endl;
	cout<<"           Roll no = 7 "<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '8' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Sheela Rani"<<endl<<endl;
	cout<<"           Class = 9 A "<<endl<<endl;
	cout<<"           Roll no = 8 "<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  '9' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Manish Patel"<<endl<<endl;
	cout<<"           Class = 9 A"<<endl<<endl;
	cout<<"           Roll no = 9 "<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
	case  '10' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
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
		goto class9;
	}}
	break;
case  '10' :{class10:
	textcolor(4);
       cprintf("                                    Class 10 ");
       cout<<endl;
       textcolor(3);
       cprintf("ID's 1-10 only");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       textcolor(8);
       cprintf("               Enter student ID : ");
       cin>>b;
       clrscr();
       switch(b)
	{
	case  '1' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Shravani VU"<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 1"<<endl<<endl;
	cout<<"           Age = 16  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '2' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Akash RJ"<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 2"<<endl<<endl;
	cout<<"           Age = 15  "<<endl<<endl;
	cout<<"           Number of years in this school = 6 ";
	break;
	case  '3' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Pranav KSP"<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 3"<<endl<<endl;
	cout<<"           Age = 15  "<<endl<<endl;
	cout<<"           Number of years in this school = 5 ";
	break;
	case  '4' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = BVGS Sai "<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 4"<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 7 ";
	break;
	case  '5' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Vishal HR"<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 5"<<endl<<endl;
	cout<<"           Age = 15  "<<endl<<endl;
	cout<<"           Number of years in this school = 7 ";
	break;
	case  '6' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Tejas I"<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 6"<<endl<<endl;
	cout<<"           Age = 16  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  '7' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Dhruv S"<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 7"<<endl<<endl;
	cout<<"           Age = 16  "<<endl<<endl;
	cout<<"           Number of years in this school = 6 ";
	break;
	case  '8': cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Shanti Y"<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 8"<<endl<<endl;
	cout<<"           Age = 14  "<<endl<<endl;
	cout<<"           Number of years in this school = 1 ";
	break;
	case  '9' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name= Varshini N"<<endl<<endl;
	cout<<"           Class = 10 A"<<endl<<endl;
	cout<<"           Roll no = 9"<<endl<<endl;
	cout<<"           Age = 15  "<<endl<<endl;
	cout<<"           Number of years in this school = 4 ";
	break;
	case  '10' : cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Student name = Akansha G"<<endl<<endl;
	cout<<"           Class =10 A"<<endl<<endl;
	cout<<"           Roll no = 10"<<endl<<endl;
	cout<<"           Age = 15 "<<endl<<endl;
	cout<<"           Number of years in this school = 3 ";
	break;
		default :clrscr();
		 textcolor(RED+BLINK);
		  gotoxy(x,y);
		cprintf("Invalid ID , select again ");
		delay(2000);
		goto class10;
	
	break;

default:textcolor(RED+BLINK);
	gotoxy(x,y);
	cprintf("Wrong class entred , Select again ");
	delay(2000);
	goto mainmenustudent;}}
}
	cout<<endl<<endl<<endl<<endl<<endl;
	textcolor(YELLOW);
cprintf("Press 1 to select different class ");
cprintf("2 to go to select different section 3 to go to mainmenu ");
cprintf("and 4 to exit : ");
	v = getche();
	if(v=='1')
	{
	clrscr();
	goto mainmenustudent;
	}
	else if(v=='2')
	{
	clrscr();
	goto mainmenuselect;
	}
	else if(v=='3')
	{
	clrscr();
	goto mainmenu;
	}
	else if(v=='4')
	{
	clrscr();
	goto exit;
	}
	else
	{
	clrscr();
	gotoxy(x,y);
	textcolor(RED+BLINK);
	cprintf("You have choosen wrong option , program will be exited ! ");
	delay(2000);
	goto exit;
	}

}
case '2':{textcolor(6);
cout<<endl<<endl<<endl<<endl<<endl;
       cprintf("Enter the subjet of the Teacher : ");
       cout<<endl;
       textcolor(3);
       cprintf("  1. Science");
       cout<<endl;
       cprintf("  2. Math");
       cout<<endl;
       cprintf("  3. English");
       cout<<endl;
       cprintf("  4. Social Science");
       cout<<endl;
       cprintf("  5. Hindi/Sanskrit");
       cout<<endl;
       cprintf("  6. Class Teachers");
       cout<<endl;
       cprintf("  7. Princliple and Management Staff ");
       cout<<endl<<endl;
       textcolor(CYAN);
       cprintf("Enter your choice : ");
       a = getche();
       clrscr();
       switch(a)
       {
case '1':science :
	cout<<endl<<endl;
	textcolor(BLUE+BLINK);
       cprintf("          Science teachers       ");
       textcolor(3);
       cout<<endl;
       cprintf("1 to 5 ID");
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       cout<<"          Enter Teacher ID : ";
       cin>>a;
       clrscr();
       switch(a)
       {
	case '1': cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Malthi Patel "<<endl<<endl;
	cout<<"           Classes Taken =9, 10 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
	case '2':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Anjali Sing "<<endl<<endl;
	cout<<"           Classes Taken =7, 8 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
	case '3':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"'           Teacher name=Mallika R "<<endl<<endl;
	cout<<"           Classes Taken =6,7 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
	case '4':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Malthi Patel "<<endl<<endl;
	cout<<"           Classes Taken =3,4,5 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
	case '5':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
	default:
	clrscr();
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Wrong Choice";
	delay(2000);
	goto science;
	}
	break;
case '2': math :
	cout<<endl<<endl;
       cout<<"\n          Math teachers";
       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       cout<<"\n          Enter Teacher ID : ";
       cin>>a;
       clrscr();
       switch(a)
       {
	case '1':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
	case '2':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
	case '3':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
	case '4':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
	case '5':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"          Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
	default:
	clrscr();
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Wrong Choice";
	delay(2000);
	goto math;
	}
	break;
case '3': english :
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       cout<<"\n          English teachers";
       cout<<"\n          enter Teacher ID";
       cin>>a;
       clrscr();
       switch(a)
      {
      case '1':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
      case '2':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
      case '3':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
      case '4':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
      case '5':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
	default:
	clrscr();
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Wrong Choice";
	delay(2000);
	goto english;
	}
	break;
case '4': social :
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       cout<<"\n          Social Science Teachers";
       cout<<"\n          enter Teacher ID";
       cin>>a;
       clrscr();
       switch(a)
      {
      case '1':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
      case '2':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
      case '3':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
      case '4':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
      case '5':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
	default:
	clrscr();
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Wrong Choice";
	delay(2000);
	goto social;
	}
	break;
case '5':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       cout<<"\n          Hindi Teachers";
       cout<<"\n          Enter Teacher ID";
       cin>>a;
       clrscr();
       switch(a)
      {
      case '1':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
      case '2':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
      case '3':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
      case '4':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
      case '5':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           Teacher name=Lalitha HR "<<endl<<endl;
	cout<<"           Classes Taken =1,2 "<<endl<<endl;
	cout<<"           Designation= Subject Teacher";
	break;
	default:
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"           wrong ID";
	}
	break;
case '6':cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
       cout<<"\n          Class Teachers";
       cout<<"\n          Class 1 = Ms. Jubby Jorge       ";
       cout<<"\n          Class 2 = Ms. Pinky Agrawal      ";
       cout<<"\n          Class 3 = Ms. Jostana sheakar       ";
       cout<<"\n          Class 4 = Ms. Anchala Kumari       ";
       cout<<"\n          Class 5 = Ms. Lataha bai      ";
       cout<<"\n          Class 6 = Ms. Sudha jasmine       ";
       cout<<"\n          Class 7 = Ms. Shilha gowda       ";
       cout<<"\n          Class 8 = Ms. Seema guptha       ";
       cout<<"\n          Class 9 = Ms. Sampath kumari       ";
       cout<<"\n          Class 10 = Ms. Kakoli banarji       ";
       break;
case '7':
       cout<<"\n Principle = Mrs. Lalitha Murthy     ";
       cout<<"\n Vice Principle = Mrs. Seema guptha     ";
       cout<<"\n Office Head = Mrs. Munjala phrabas    ";
       cout<<"\n Accountant = Ms. smitha singh     ";
       cout<<"\n Pune = Mr.Venkatapathi balaji     ";
       cout<<"\n Ayamma head = Mrs. Rathamamma " ;
       break;}
}
break;
case '3' :  merit:clrscr(); textcolor(CYAN);
cprintf("Merit students list : ");
cout<<endl<<endl;
	   textcolor(8);
	   cprintf("|---------------|----------------------------------|-----------------|");
	   cout<<endl;
	   cprintf("|_____Year______|______Student Name and Class______|__Percentage %___|");
	   cout<<endl;
	   cprintf("|               |                                  |                 |");
	   cout<<endl;
	   cprintf("|     2010      |   Shabarish Chandra (Class 10)   |      97.73 %    |");
	   cout<<endl;
	   cprintf("|_______________|__________________________________|_________________|");
	   cout<<endl;
	   cprintf("|               |                                  |                 |");
	   cout<<endl;
	   cprintf("|     2011      |   Prashanti Balaji (Class 10)    |      96.54 %    |");
	   cout<<endl;
	   cprintf("|_______________|__________________________________|_________________|");
	   cout<<endl;
	   cprintf("|               |                                  |                 |");
	   cout<<endl;
	   cprintf("|     2012      |   Ashwin Ravishankar(Class 10)   |      96.34 %    |");
	   cout<<endl;
	   cprintf("|_______________|__________________________________|_________________|");
	   cout<<endl;
	   cprintf("|               |                                  |                 |");
	   cout<<endl;
	   cprintf("|     2013      |   Gautham Rajiv (Class 12)       |      98.15 %    |");
	   cout<<endl;
	   cprintf("|_______________|__________________________________|_________________|");
	   cout<<endl;
	   cprintf("|               |                                  |                 |");
	   cout<<endl;
	   cprintf("|     2014      |   Shashank Shankar (Class 11)    |      97.15 %    |");
	   cout<<endl;
	   cprintf("|_______________|__________________________________|_________________|");
	   cout<<endl;
	   cprintf("|               |                                  |                 |");
	   cout<<endl;
	   cprintf("|     2015      |   Shobit Kumar (Class 12)        |      96.12 %    |");
	   cout<<endl;
	   cprintf("|---------------|----------------------------------|-----------------|");
	   cout<<endl;
		      textcolor(4);
		      cprintf("Press 1 to go back to mainmunu or 2 to exit : ");
		      ch=getche();
		      if(ch=='1')
		      {
		      clrscr();
		      goto mainmenu;
		      }
		      if(ch=='2')
		      {
		      goto exit;
		      }
		      if(ch>'3')
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
	 cprintf("Payments and salaries");
	 cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	 textcolor(GREEN);
	 cprintf("Which departments information you want to know : ");
	 cout<<endl;
	 textcolor(9);
	 cprintf("1-> Office staff");
	 cout<<endl;
	 cprintf("2-> Maintanence staff");
	 cout<<endl;
	 cprintf("3-> Teachers");
	 cout<<endl<<endl;
	 textcolor(RED);
	 cprintf("Enter the choice : ");
	 cho = getche();
	 if(cho=='1')
	 {
	 table1:
	  clrscr();
		textcolor(5);
		cprintf("Payments and slaries of office staff : ");
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
	   cprintf("|_________________|___________________________|_____________|");
	   cout<<endl;
	   cprintf("|                 |                           |             |");
	   cout<<endl;
	   cprintf("| Office Assistant|          35000            |     8 %     |");
	   cout<<endl;
	   cprintf("|_________________|___________________________|_____________|");
	   cout<<endl;
	   cprintf("|                 |                           |             |");
	   cout<<endl;
	   cprintf("|   Accountant    |          20000            |     5 %     |");
	   cout<<endl;
	   cprintf("|_________________|___________________________|_____________");
	   cout<<endl;
	   cprintf("|                 |                           |             |");
	   cout<<endl;
	   cprintf("|    Pune         |          15000            |  - (No Tax) |");
	   cout<<endl;
	   cprintf("|-----------------|---------------------------|-------------|");
	   cout<<endl<<endl<<endl;
	   textcolor(RED+BLINK);
		      cprintf("Press 1 to go back , 2 to go to main menu or 3 to exit : ");
		      ch=getche();
		      if(ch=='1')
		      {
		      clrscr();
		      goto back4;
		      }
		      if(ch=='3')
		      {
		      goto exit;
		      }
		      if(ch=='2')
		      {
		      goto mainmenu;
		      }
		      if(ch>'3')
		      {
		      clrscr();
		      gotoxy(x,y);
		      textcolor(5+BLINK);
		      cprintf("   Wrong choice , select properly again ");
		      delay(2000);
		      goto table1;
		      }

	   }
	   if(cho=='2')
	   {
	   table2:
	   clrscr();
	   textcolor(5);
	   cprintf("Payments and salaries of Maintainence staff ");
	   cout<<endl<<endl<<endl<<endl<<endl;
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

	    cout<<endl<<endl<<endl<<endl<<endl;
	   textcolor(RED);
		      cprintf("Press 1 to go back , 2 to go to main menu or 3 to exit : ");
		      ch=getche();
	    if(ch=='1')
		      {
		      clrscr();
		      goto back4;
		      }
		      if(ch=='3')
		      {
		      goto exit;
		      }
		      if(ch=='2')
		      {
		      goto mainmenu;
		      }
		      if(ch>'3')
		      {
		      clrscr();
		      gotoxy(x,y);
		      textcolor(5+BLINK);
		      cprintf("   Wrong choice , select properly again ");
		      delay(2000);
		      goto table2;
		      }

	   }
	   if(cho=='3')
	   {
	   table3:
	   clrscr();
	   textcolor(CYAN);
	   cprintf("Payments and Salaries of Teachers");
	   cout<<endl<<endl<<endl<<endl<<endl<<endl;
	   textcolor(5);
	   cprintf("|--------------------------|---------------------------|-------------|");
	   cout<<endl;
	   cprintf("|_______Department_________|___Per month pay in rupees_|_____Tax %___|");
	   cout<<endl;
	   cprintf("|                          |                           |             |");
	   cout<<endl;
	   cprintf("|     Primary Teachers     |          20000            |     5 %     |");
	   cout<<endl;
	   cprintf("|__________________________|___________________________|_____________|");
	   cout<<endl;
	   cprintf("|                          |                           |             |");
	   cout<<endl;
	   cprintf("|    Secondary Teachers    |          35000            |     8 %     |");
	   cout<<endl;
	   cprintf("|__________________________|___________________________|_____________|");
	   cout<<endl;
	   cprintf("|                          |                           |             |");
	   cout<<endl;
	   cprintf("|  Middle School Teachers  |          40000            |     10 %    |");
	   cout<<endl;
	   cprintf("|__________________________|___________________________|_____________");
	   cout<<endl;
	   cprintf("|                          |                           |             |");
	   cout<<endl;
	   cprintf("|   High School Teachers   |          50000=<          |     15 %    |");
	   cout<<endl;
	   cprintf("|--------------------------|---------------------------|-------------|");
	    cout<<endl<<endl<<endl<<endl<<endl;
	   textcolor(RED+BLINK);
		      cprintf("Press 1 to go back , 2 to go to main menu or 3 to exit : ");
		      ch=getche();
	    if(ch=='1')
		      {
		      clrscr();
		      goto back4;
		      }
		      if(ch=='3')
		      {
		      goto exit;
		      }
		      if(ch=='2')
		      {
		      goto mainmenu;
		      }
		      if(ch>'3')
		      {
		      clrscr();
		      gotoxy(x,y);
		      textcolor(YELLOW+BLINK);
		      cprintf("   Wrong choice , select properly again ");
		      delay(2000);
		      goto table3;
		      }

	   }
	  if(cho>'3')
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
clrscr();
textcolor(YELLOW);
gotoxy(x,y);
cprintf("  Program exited");
textcolor(BLUE+BLINK);
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cprintf("                                                 Greetings from navkis");
delay(4000);
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




