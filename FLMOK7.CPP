

//27/11/17
#include<iomanip.h>
#include<iostream.h>
#include<limits.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include"MOVIE1.CPP"
int uc=1,dc=4,bp=1;   //BP-BACK PATTERN



struct user
{
char un[50];
char pass[50];

int pre;
long psc;
int pl;
int pbx,pby;
int pox,poy;

long sc;
int r;}u1;
void  birdl(int x,int y,int r)
{       setcolor(15);
	setfillstyle(11,YELLOW);
	fillellipse(x,y,5*r,3*r);
	circle(x+(12*r)/5,y-(3*r)/5,2*r/5);
	circle(x+(12*r)/5,y-(3*r)/5,1*r/5);

	setfillstyle(5,RED);
	pieslice(x+(36*r)/5,y,170,190,12*r/5);   //beak
	 pieslice(x-(25*r)/5,y,100,120,3*r);
	 pieslice(x-(25*r)/5,y,140,160,3*r);
	 pieslice(x-(25*r)/5,y,180,200,3*r);
	 pieslice(x-(25*r)/5,y,220,240,3*r);
	 pieslice(x-(25*r)/5,y,260,280,3*r); //tail
	 pieslice(x,y,90,110,13*r/5);
	 pieslice(x,y,130,150,13*r/5);
	 pieslice(x,y,170,190,13*r/5);
	 pieslice(x,y,210,230,13*r/5);}

void bdr()//195,150
{setcolor(15);
setfillstyle(5,9);
rectangle(0,0,20,500);
floodfill(1,1,15);
rectangle(610,0,630,500);
floodfill(620,200,15);
rectangle(0,0,630,20);
floodfill(200,10,15);
rectangle(0,455,630,475);
floodfill(200,465,15); //border
birdl(315,80,5);
setcolor(GREEN);
settextstyle(4,0,8);
outtextxy(1,20," Flappy");
setcolor(YELLOW);
outtextxy(280,20,"  Mokilo");
setcolor(15);
settextstyle(6,0,2);
  outtextxy(400,110,"-The Epic");
      }

void leaderb()
{
cleardevice();
bdr();

ifstream fin("users.dat",ios::binary);
user a,z[100],t;
int i=0;

while(fin.read((char *)&a,sizeof(a)))
{ z[i]=a;
i++;}
fin.close();
int n=i;
for(i=0;i<n-1;i++)
for(int j=0;j<n-1-i;j++)
if(z[j].sc<z[j+1].sc)
{
t=z[j];
z[j]=z[j+1];
z[j+1]=t;
}
setcolor(RED);
settextstyle(7,0,3);
outtextxy(60,150,"S.No");
outtextxy(270,150,"Name");
outtextxy(470,150,"HighScore");
int tor;
if(n>=5)
tor=5;
else
tor=n;

for(i=0;i<tor;i++)
{
gotoxy(10,13+i);
cout<<i+1<<setw(30)<<z[i].un<<"\t\t\t  "<<z[i].sc;
if(i==4)
{int j=i+1;
while(z[j].sc==z[i].sc)
{ gotoxy(10,13+j);
cout<<j+1<<setw(30)<<z[j].un<<"\t\t\t  "<<z[j].sc;
 j++;}
}
 }
setcolor(BLUE);
line(25,150,600,150);

line(25,190,600,190);
line(25,380,600,380);
line(200,150,200,380);
line(450,150,450,380);
line(25,150,25,380);
line(25,150,600,150);
line(25,190,600,190);
line(200,150,200,380);
line(450,150,450,380);
line(600,150,600,380);

}




void logo(int x ,int y)
{
 rectangle(x-200,y-150,x+200,y+150); //270,230
    ellipse(x,y,307,65,185,100); //front
	ellipse(x,y,125,242,180,100); //back
	 setcolor(15);
	 circle(x+105,y-36,7);

	  circle(x+105,y-36,2);
	setfillstyle(5,RED);

	pieslice(x+230,y,165,195,50);   //beak
	 pieslice(x-180,y,100,120,80);
	 pieslice(x-180,y,140,160,80);
	 pieslice(x-180,y,180,200,80);
	 pieslice(x-180,y,220,240,80);
	 pieslice(x-180,y,260,280,80);
	 pieslice(x,y-10,175,205,75);
	 pieslice(x,y-10,215,245,80);
	 pieslice(x,y-10,260,290,85);
	 pieslice(x,y-10,300,325,90);
	  settextstyle(9,0,5);
 setcolor(GREEN);
 outtextxy(x-100,y-140,"Flappy");
 setcolor(14);
 settextstyle(7,0,8);//7;10
outtextxy(x-100,y+55,"Mokilo");
 setfillstyle(1,BLUE);
  floodfill(0,0,15);
}

void load()
{
for(int i=0;i<540;i++)
{
setcolor(4);
int w=41+i;
 rectangle(40,385,w,400);
 floodfill( 41,386,4);
delay(10);
}
setcolor(1);
bar(300,370,376,379);
}


void intro()
{
  logo(320,200);
  settextstyle(15,0,5);
  outtextxy(300,370,"Loading...");
  load();
  setcolor(14);
  outtextxy(300,370,"Complete");
  setcolor(0);
  outtextxy(370,390,"Press c to continue");
  int yu=0;
  while(1)
 { yu=getch();
   if(yu==99)
   break;}
 }

//------------
void rec(int x,int y)
{ rectangle(x,y,x+123,y+30);}
void recc(int x,int y)
{setcolor(0);
rectangle(x,y,x+123,y+30);}
void menu(int &a,int&b)
{
char ch;int i=0;
while(1)
{
bdr();
setcolor(15);
 rec(a,b);
  settextstyle(1,0,2);
  outtextxy(200,150,"Play Game");
  outtextxy(250,200,"Play Story");
  outtextxy(300,250,"User login");
  outtextxy(350,300,"Controls");
  outtextxy(400,350,"LeaderBoard");
  outtextxy(450,400,"Exit");

 ch=getch();
switch(ch)
{case(72):{recc(a,b);
	   if(b>150)
	   {b-=50;
	    a-=50;}
	   rec(a,b);break;}
 case(80):{recc(a,b);
	   if(b<400)
	   {b+=50;
	   a+=50;}
	   rec(a,b);break;}
 case(13):{i++;break;}
 default:{break;}}

 if(i!=0)
 break;
 }//while
}
int menu2()
{
int i=0,c;
char ch;
int a=210,b=205;
while(1)
{bdr();
setcolor(15);
rectangle(a,b,a+210,b+40);
setcolor(4);

settextstyle(3,0,4); //3,6
outtextxy(220,200,"Sign in");
outtextxy(220,250,"Sign Up");
outtextxy(220,300,"User details");
outtextxy(220,350,"Remove user");
outtextxy(220,400,"Back");

ch=getch();
switch(ch)
{case(72):{setcolor(0);
	   rectangle(a,b,a+210,b+40);  //72 up
	   if(b>205)
	   b-=50;
	   setcolor(15);
	   rectangle(a,b,a+210,b+40);
	     break;}
 case(80):{setcolor(0);
	   rectangle(a,b,a+210,b+40);
	   if(b<405)
	   b+=50;
	   setcolor(15);
	   rectangle(a,b,a+210,b+40);
	   break;}
 case(13):{i++;
	   if(b==205)c=1;
	   if(b==255)c=2;
	   if(b==305)c=3;
	   if(b==355)c=4;
	   if(b==405)c=5;
	   break;}
}//switch
if(i)
{return c;}
}//whille


}



void fwall()
{int i;
setfillstyle(1,BROWN);
for(i=0;i<=600;i+=50)
{
rectangle(i,0,i+50,29);
 floodfill(i+20,20,15); }

  for(i=30;i<=280;i+=50)
 {
 rectangle(605,i,635,i+50);
 floodfill(620,i+20,15); }
   rectangle(605,330,635,340);
 floodfill(620,335,15);}



void  clearl(int x,int y,int r)
{
 setcolor(uc);//8
     setfillstyle(1,uc);//8,1
	fillellipse(x,y,5*r,3*r);
	circle(x+(12*r)/5,y-(3*r)/5,2*r/5);
	circle(x+(12*r)/5,y-(3*r)/5,1*r/5);
	 pieslice(x+(36*r)/5,y,170,190,12*r/5);   //beak
	 pieslice(x-(25*r)/5,y,100,120,3*r);
	 pieslice(x-(25*r)/5,y,140,160,3*r);
	 pieslice(x-(25*r)/5,y,180,200,3*r);
	 pieslice(x-(25*r)/5,y,220,240,3*r);
	 pieslice(x-(25*r)/5,y,260,280,3*r); //tail
	 pieslice(x,y,90,110,13*r/5);
	 pieslice(x,y,130,150,13*r/5);
	 pieslice(x,y,170,190,13*r/5);
	 pieslice(x,y,210,230,13*r/5);}



void obs4(int x,int y)
 { setcolor(15);
   rectangle(0,0,635,340);
   for(int i=620;i>=0 ;i-=20)
  line(i,335,i,340);
   rectangle(x+1,30,x+50,y);
   rectangle(x-5,y,x+55,y+20);
//   arc(x+25.5,y,180,360,24.5);
   rectangle(x+1,y+110,x+50,330);
   rectangle(x-5,y+90,x+55,y+110);
//   arc(x+25.5,y+120,0,180,24.5);
   setfillstyle(bp,uc);//8,1
   floodfill(60,30,15); //2,3
 }
   void clear4(int x,int y)
 { setcolor(15);
   setfillstyle(1,dc),
   rectangle(0,340,635,490);//dbk
   rectangle(10,350,155,400);//score
   rectangle(395,350,625,397);//life
   rectangle(10,425,155,445);//esc
   floodfill(300,350,15);//down

   rectangle(0,0,635,340);
   setcolor(uc);
   for(int i=620;i>=0 ;i-=20)
   line(i,335,i,340);
   rectangle(x+1,30,x+50,y);
   rectangle(x-5,y,x+55,y+20);
//  arc(x+25.5,y,180,360,24.5);
   rectangle(x+1,y+110,x+50,330);
   rectangle(x-5,y+90,x+55,y+110);
// arc(x+25.5,y+120,0,180,24.5);
   setfillstyle(bp,uc);//8,1
   floodfill(60,30,15); //2,3
 }

void savgm(user &u)
{ fstream f("users.dat",ios::binary|ios::in|ios::out);
	     user t;
	     while( f.read((char*)&t,sizeof(t)) )
	    { if(!strcmp(t.un,u.un))
	       {
		f.seekg((int)(-sizeof(u)),ios::cur);
		f.write((char*)&u,sizeof(u));
		}
	    }
  f.close();
}


long game(int life,int si,user &u,int rl)
{long score=0;
char sa;
int x=320,y=250,level=0,s=2,l=0,tr=0;//tr if to prevent to printing of to
				   //an obstacle below 222 wen continuing
int temp1,e=0;
int msg=1;
for( level=1;(level<=INT_MAX)&&(life>0);level++) //game starts,f1\
{  e=0;

    temp1=0;//this is to take care whether a player has hit an obstacle in an entire

  int x2,y2,y3;
  void (*fm)(int,int)=obs4;
  void (*fmc)(int,int)=clear4;
  void (*fa)(int,int)=obs4;
  void (*fac)(int,int)=clear4;

  for(int i=0;i<9&&life>0;i++)//f2
  {
  if(l)
    {x=320;y=250;
     birdl(x,y,5);
     clearl(x,y,5);}

	 if(rl&&level==1&&i==0)
	 {tr++;
	  x2=u.pox;y2=u.poy;
	  life=u.pl;
	  }


	else
       { randomize();
	x2=550;
	int re=rand()%2;
	if(re)
	y2=80+(rand()%3)*50;
	else
	y2=80-(rand()%3)*20;
       }

	setcolor(15);
		settextstyle(2,0,5);//2,1
	  outtextxy(14,424,"PRESS ESC TO EXIT.");
	  int P[8]={395,350,625,350,625,397,395,397};
	setfillstyle(1,0);
	  fillpoly(4,P);
	  outtextxy(397,350,"LIFE:");



	  for(int v=439,f=1;f<=life;f++,v+=76) //lifedisplay
	   {birdl(v,380,4);}




	  int S[8]={10,350,155,350,155,400,10,400};
       setfillstyle(1,0);
	  fillpoly(4,S);


	  char Scr[6];

	  outtextxy(14,350,"SCORE:");

	  if(rl&&level==1&&i==0)
	   {score=u.psc;}

	  itoa(score,Scr,10);
	    outtextxy(20,365,Scr);
	  int T[8]={395,420,625,420,625,460,395,460};
	  setfillstyle(1,0);
	  fillpoly(4,T);
	 outtextxy(397,420,"User Name:");
	 if(si)
	  outtextxy(397,435,u.un);
	  else
	  outtextxy(397,435,"No signin in.");


	score += 1;




	 int dash=1;
	while(x2>=220)//obs3,wh3
	 {
	   fwall();
	   fmc(x2,y2);
	   x2-=s;
	   fm(x2,y2);

	 if(e&&x2>=220&&!tr)
	   {
	   int x1=x2-330;
	   fac(x1,y3);
	   x1-=s;
	   fa(x1,y3);
	   }


	   birdl(x,y,5);

	  if(rl&&level==1&&i==0&&dash)
	{
	  settextstyle(2,0,8);
	   setfillstyle(1,0);
	  fillpoly(4,S);

	   for(int ti=3;ti>=1;ti--)
	 {char cd[5];
	 itoa(ti,cd,10);
	 outtextxy(75,350,cd);
	 delay(1500);
	 fillpoly(4,S);
	}
		settextstyle(2,0,5);//2,1
	 outtextxy(14,350,"SCORE:");
	  outtextxy(20,365,Scr);

	}

	 dash=0;
	   char ch;
		if(kbhit())
		{
			birdl(x,y,5);
			ch=getch();
			switch(ch) {
			case 27: exit(0);
			break;
			case 32:clearl(x,y,5); //up arrow 72,space 32
				if(y-30>30)
					y=y-12;
				birdl(x,y,5);

			break;
			case 80:clearl(x,y,5);
				if(y+30<340)
					y=y+5;
				birdl(x,y,5);

			break;
			case 's': if(si)
				 {u.psc=score;
				 u.pl=life;
				 u.pre=1;
				 u.pbx=x;
				 u.pby=y;
				 u.pox=x2;
				 u.poy=y2;
				  savgm(u1);
				  sa='s';  }
				  break;

			case 'q': setcolor(BLACK);
				  settextstyle(8,0,5);
				  outtextxy(170,160,"Game Paused");
				  for(int h=0;h<1000000;h++)
				  if(kbhit())
				  {setcolor(BLUE);
				  settextstyle(8,0,5);
				  outtextxy(170,160,"Game Paused");
				  break;}
}//noer switch
		} //if(kh)
else
 {
  delay(15);
  clearl(x,y,5);
  if(y<320)
  y+=1;
  birdl(x,y,5);
	 }
     float X=fabs(x2-x),X2=fabs(x2+30-x);

    if(X<=37||X2<=40||y>=320)
       if(y-15<=y2+20||y+15>=y2+93||y>=320)
       {
	       temp1++;

	       life =life-1;
	       l=1;
	       if(score>0)
	       score--;
	       delay(3000);
	       cleardevice();
	       break;}//ifc3
       else
       {l=0;}

	 if(x2+s==220)
	{ fmc(x2,y2);}
	      if(sa=='s')
	      break;
	      tr=0;
	     }//wh3

	    if(!temp1)
	    e++;
	    else
	    break;
	   y3=y2;

	   if(sa=='s')
	   break;

 }//f2
//msg=level;

 if(sa=='s')
 break;
if(!temp1)
{
 int xt=220;
 while(xt>=-55)
{
 fac(xt,y3);
  xt-=s;
 fa(xt,y3);
}
s++;
}


  } //game loop ends...,f1,comes out if life 0 or player wins
return score;
}//game fun




void signin(user &u)
{
 int i,j=0;
 char A[50],B[50];
 ifstream fin;
 do{
 fin.open("users.dat",ios::binary);
 cleardevice();
 i=0;
 bdr();
 setcolor(15);
  if(j)
 {  gotoxy(30,13);
    cout<<"Enter a existing username."; }
   gotoxy(30,15);
   cout<<"Username: ";
   gotoxy(41,15);
   gets(A);
   while( fin.read((char*)&u,sizeof(u)) )
   {if(!strcmp(u.un,A))
   {i++;break;}
}
fin.close();
j++;}while(!i);

j=0;
do
{
i=0;
cleardevice();
bdr();
setcolor(15);
gotoxy(30,15);
cout<<"Username: ";
gotoxy(41,15);
puts(u.un);
if(j)
{gotoxy(30,17);
cout<<"Incorect password.Try again.";
strcpy(B,NULL);}
gotoxy(30,19);
cout<<"Password:";
gotoxy(41,19);
char s ;
int it=0, iy=0;

do
{s=getch();
 if(s!=13)
{ cout<<'*';
  B[iy]=s;
  iy++;   }
else
{it=1;B[iy]='\0';
}
}while(!it&&strlen(B)!=0);
//gets(B);
if(!strcmp(u.pass,B))
i++;
j++;
}while(!i);

cleardevice();
bdr();
setcolor(15);
gotoxy(30,15);
cout<<"Username: ";
gotoxy(41,15);
puts(u.un);

gotoxy(30,19);
cout<<"Password:";
gotoxy(41,19);
for(int ik=0;ik<strlen(B);ik++)
cout<<'*';
gotoxy(30,21);
cout<<"User signed in successfully.";
}//fn

void login(user &u)
{ int i,j=0;
char A[50];
ifstream fin;
ofstream fout("Users.dat",ios::binary|ios::app);
do{
fin.open("users.dat",ios::binary);
cleardevice();
i=0;
bdr();

if(j)
{ gotoxy(25,13);
  cout<<"User name already exists.Enter a different name"; }

gotoxy(30,15);
cout<<"Username: ";
gotoxy(41,15);
gets(A);
user temp;
while( fin.read((char*)&temp,sizeof(temp)) )
 {
    if(!strcmp(temp.un,A))
    {i++;break;}
 } j++;
fin.close();
}while(i);
fin.close();

strcpy(u.un,A);
cleardevice();
bdr();
gotoxy(30,15);
cout<<"Username: ";
gotoxy(41,15);
puts(u.un);
gotoxy(30,18);
cout<<"Password(only txt):";
gotoxy(51,18);
gets(u.pass);
u.sc=0;
u.r=0;
u.pre=0;
fout.write((char*)&u,sizeof(u));
fout.close();
}

void writescr(int sco,user u)
{ fstream f("users.dat",ios::binary|ios::in|ios::out);
	     user t;
	     while( f.read((char*)&t,sizeof(t)) )
	    { if(!strcmp(t.un,u.un))
	       {if(t.sc<sco)
		t.sc=sco;
		f.seekg((int)(-sizeof(t)),ios::cur);
		f.write((char*)&t,sizeof(t));
		}
	    }
  f.close();
}

void deluser()
{ifstream fin2("users.dat",ios::binary);
 ofstream fout2("new.dat",ios::binary);
 user x,a;
 signin(x);
 while(fin2.read((char*)&a,sizeof(a)))
 {if(strcmp(a.un,x.un))
  fout2.write((char*)&a,sizeof(a));
 }
 fin2.close();
 fout2.close();
 remove("users.dat");
 rename("new.dat","users.dat");
 gotoxy(30,23);
 cout<<"User Deleted";
}


void userdet()
{ifstream fin4("users.dat",ios::binary);
 user h,f;
 signin(h);



 cleardevice();
 bdr();
setcolor(15);
 settextstyle(8,0,2);
 outtextxy(235,120,"USER DETAILS:");
char Sc[10],PSc[10],Ps[10];
settextstyle(3,0,1);
outtextxy(200,170,"\nUser Name     :");outtextxy(400,170,h.un);
itoa(h.sc,Sc,10);
outtextxy(200,210,"\nHigh Score     :");outtextxy(400,210,Sc);
if(h.pre==1)
{itoa(h.psc,PSc,10);strcpy(Ps,"Saved");}
else
{strcpy(PSc,"NIL");strcpy(Ps,"NIL");}
outtextxy(200,250,"\nProgress Status:");outtextxy(400,250,Ps);
outtextxy(200,290,"\nProgress Score:");outtextxy(400,290,PSc);

fin4.close();   }//usdet


int menu4(int m)
{
int i=0,c;
char ch;
int a=120,b=250;
while(1)
{bdr();
setcolor(15);
rectangle(a,b,a+170,b+40);
setcolor(4);

settextstyle(3,0,4); //3,6
if(m==1)
{outtextxy(130,250,"LoadGame");
outtextxy(340,250,"NewGame");}
else
{outtextxy(130,250,"Continue");
outtextxy(340,250,"Exit");}


ch=getch();
switch(ch)
{case(75):{setcolor(0);
	   rectangle(a,b,a+170,b+40);  //72 up
	   if(a>120)
	   a-=210;
	   setcolor(15);
	   rectangle(a,b,a+170,b+40);
	     break;}
 case(77):{setcolor(0);
	   rectangle(a,b,a+170,b+40);
	   if(a<330)
	   a+=210;
	   setcolor(15);
	   rectangle(a,b,a+170,b+40);
	   break;}
 case(13):{i++;
	   if(a==120)c=1;
	   if(a==330)c=2;
	   break;}
}//switch
if(i)
{return c;}
}//whille


}
void main()
 {
  int si=0;
  int gdriver=DETECT,gmode;
	  initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
  int a=195,b=150;
  long score;
 //window(1,1,80,30);


  char choice,m,k;

intro();

do{
cleardevice();
k='n';
a=195;b=150;
menu(a,b);
cleardevice();
switch(b)
{
case(150):{
	   if(si)
	   { int ut=0,fq=0;
	      if(u1.pre)
	       {fq++;
		ut=menu4(1);
		cleardevice();
		if(ut==1)
		score=game(3,si,u1,1);}

	    if(!fq||ut==2)
	    score=game(3,si,u1,0);
	    writescr(score,u1);   }


	    else
	   {score=game(3,0,u1,0);}
	   cleardevice();
	   setcolor(15);
	   settextstyle(1,0,6);
	   outtextxy(190,200,"GAME OVER");
	   sleep(3);
	   cleardevice();
	   bdr();
	   outtextxy(200,130,"Scorecard");
	   gotoxy(30,25);
	   cout<<"Your score is:"<<score;
	   int yt=menu4(2);
	   if(yt==1)
	   {k='y';si=0;}

	   bdr();
	   break;}//case150
case(200):{ sleep(1);
	    cleardevice();
	    mov();
	    cleardevice();
	    k='y';break;}

case(250):{ifstream fin4("users.dat",ios::binary);
	    int h1=0;
	    int c=menu2();
	    if(c==1)
	   { fin4.open("users.dat",ios::binary);
	    fin4.seekg(0,ios::end);
	    h1=fin4.tellg();
	    fin4.close();
	    if(!h1)
	    {cleardevice();
	     bdr();
	     settextstyle(8,0,3);
	     outtextxy(95,250,"Users database does not exist.");
	     outtextxy(95,300,"Signup for creating the account");
	    }
	    else
	   {cleardevice();
	    signin(u1);
	   si=1;//sign in counter
	     }

	    }//if 1
	   else if(c==2)
	   {cleardevice();
	   login(u1);
	    si=2;
	    gotoxy(30,21);
	    cout<<"Welcome ";puts(u1.un);}
	   else if(c==3)
	   {fin4.open("users.dat",ios::binary);
	    fin4.seekg(0,ios::end);
	    h1=fin4.tellg();
	    fin4.close();
	    if(!h1)
	    {cleardevice();
	     bdr();
	     settextstyle(8,0,3);
	     outtextxy(95,250,"Users database does not exist.");
	     outtextxy(95,300,"Signup for creating the account");
	    }
	    else
	    { cleardevice();
	    userdet();}


	    }//if3
	    else if(c==4)
	   { fin4.open("users.dat",ios::binary);
	    fin4.seekg(0,ios::end);
	    h1=fin4.tellg();
	    fin4.close();
	    if(!h1)
	    {cleardevice();
	     bdr();
	     settextstyle(8,0,3);
	     outtextxy(95,250,"Users database does not exist.");
	     outtextxy(95,300,"Signup for creating the account");
	    }
	    else
	    {cleardevice();
	    deluser();
	    ifstream fin3("users.dat",ios::binary);
	    user xy;int jk=0;
	     while(fin3.read((char*)&xy,sizeof(xy)))
	     { if(!strcmpi(xy.un,u1.un))
	     jk++;
	     }
	    fin3.close();
	    if(!jk)
	    si=0;
	      }
	      }//if3
	    else if(c==5)
	   {cleardevice();
	    k='y';
	    break;
	    }
	    gotoxy(30,24);
	    cout<<"Press y or Y to continue.";
	    while(1)
	    {k=getch();
	    if(k=='y'||k=='Y')
	    break;
	    }
	      break;}
case(300):{
setcolor(15);
settextstyle(3,0,1);
outtextxy(220,30,"\tControls:");
outtextxy(220,45,"\t-------");
outtextxy(50,120,"\nSPACE BAR - UP");
outtextxy(50,150,"\nDOWN ARROW - DOWN");
outtextxy(50,180,"\n's'-TO SAVE PROGRESS(IF SIGNED IN)");
outtextxy(50,210,"\n'q'-PAUSE");
outtextxy(220,230,"\tINSTRUCTION:");
outtextxy(220,250,"\t---------");
outtextxy(50,280,"\nHelp warrior moklilo to escape the obstacles");
outtextxy(48,310,"\nNote: Obstacles emit waves that affects mokilo.So dont go too");
outtextxy(50,340,"\n      close to them!!!.:-)");
gotoxy(30,25);
cout<<"Press y or Y to continue.";
while(1)
{k=getch();
if(k=='y'||k=='Y')
break;
}
cleardevice();
break;}
case(350):{ cleardevice();
	   leaderb();
	   gotoxy(30,25);
	   cout<<"Press y or Y to continue.";
	 while(1)
	 {k=getch();
	if(k=='y'||k=='Y')
	break;
	   }   break;}
case(400):{exit(0);}
default:{cout<<"Menu Error."<<"\nEnter a valid option next time"<<"\nThank You.";
	 delay(1500);
	 k='n';
	 break;}
  }//switch

 } while(k=='y'||k=='Y');
delay(2000);

/*int es=0;
while(1)
{es=getch();
 if(es==27)
  break;
 }    */

}//main()