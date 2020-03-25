#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void  mok2(int x,int y)
	{

	setfillstyle(11,YELLOW);
	fillellipse(x,y,50,30);
	circle(x-25,y-7,3);
	circle(x-25,y-7,1);

	setcolor(15);
	setfillstyle(5,RED);
	pieslice(x-70,y,340,360,20);   //beak
	pieslice(x-70,y,0,20,20);   //beak
	 pieslice(x+50,y,80,60,30);
	 pieslice(x+50,y,40,20,30);
	 pieslice(x+50,y,340,360,30);
	 pieslice(x+50,y,320,300,30);
	 pieslice(x+50,y,280,260,30);
	 pieslice(x,y,90,70,20);
	 pieslice(x,y,50,30,20);
	 pieslice(x,y,10,0,20);
	 pieslice(x,y,350,359,20);
	 pieslice(x,y,330,310,20);}
void  birdl2(int x,int y,int r)
{
setcolor(15);
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

void br2(int x,int y)
{
arc(x,y-160,305,235,100);
 rectangle(x-40,y-79,x-30,y-19);
 rectangle(x-20,y-79,x-10,y-19);
 rectangle(x,y-79,x+10,y-19);
 rectangle(x+20,y-79,x+30,y-19);
 line(x-57,y-79,x-67,y);
 line(x+57,y-79,x+67,y);
line(x-67,y,x-13,y);
line(x+67,y,x+13,y);
circle(x-50,y-180,20);
circle(x+45,y-180,20); //skull
 circle(x,y,13);  //face
 arc(x-5,y-2,60,130,6); //leye
 circle(x-5,y-2,2);//eye
  arc(x+5,y-2,60,130,6);//reye
 circle(x+5,y-2,2);
//line(x-13,y+5,x-17,y+5); //nose
 // line(x-17,y+5,x-13,y-5); //nose
  arc(x,y+12,0,180,9);
  arc(x,y+12.5,0,180,9);
  arc(x,y+13,0,180,9);
  arc(x,y+15,60,130,7);
 // arc(x-13,y+13,10,90,9);
 //arc(x-13,y+14,10,90,9);
 //arc(x-13,y+15,10,90,9);
 // arc(x-13,y+16,10,90,9);
 // arc(x-13,y+17,10,90,9);
 // arc(x-13,y+18,10,90,9);
  rectangle(x-5,y+15,x+5 ,y+60);//body
  rectangle(x-10,y+40,x+30,y+55);//gun
  line(x+30,y+40,x+60,y+35);
  line(x+30,y+55,x+60,y+62);
  line(x+60,y+35,x+60,y+62);
  rectangle(x-40,y+40,x-10,y+45);//gun
 line(x-5,y+15,x-20,y+40); //  l.hand

 line(x+5,y+15,x+30,y+40);  // r.hand
 line(x-20,y+40,x-10,y+40); //lower l arm
  line(x+7,y+57,x+30,y+40);//lower r  arm
 rectangle(x-2,y+60,x-8,y+100); //
 rectangle(x+2,y+60,x+8,y+100);  // leg
 rectangle(x-2,y+100,x-15,y+105);
 rectangle(x+2,y+100,x+15,y+105);
 rectangle(x-150,y+115,x+150,y+170);
 setcolor(15);
 settextstyle(4,0,7);
 outtextxy(x-130,y+100,"Bird Ravi");
  setcolor(4);
  setfillstyle(1,4);
 floodfill(x-(x-10),2,15);}
 void br3(int x,int y)
{ setcolor(15);
 circle(x,y,13);  //face
 arc(x-5,y-2,60,150,6);
 circle(x-5,y-2,2);//eye
//line(x-13,y+5,x-17,y+5); //nose
 // line(x-17,y+5,x-13,y-5); //nose
  arc(x-13,y+12,10,90,9);

  rectangle(x-5,y+15,x+5 ,y+60);//body
  rectangle(x-10,y+40,x+30,y+55);//gun
  line(x+30,y+40,x+60,y+35);
  line(x+30,y+56,x+60,y+62);
  line(x+60,y+35,x+60,y+62);//
  rectangle(x-40,y+40,x-10,y+45);//gun
 line(x-5,y+15,x-20,y+40); //  l.hand

 line(x+5,y+15,x+30,y+40);  // r.hand
 line(x-20,y+40,x-10,y+40); //lower l arm
  line(x+7,y+57,x+30,y+40);//lower r  arm
 rectangle(x-2,y+60,x-8,y+100); //
 rectangle(x+2,y+60,x+8,y+100);  // leg
 rectangle(x-2,y+100,x-15,y+105);
 rectangle(x+2,y+100,x+15,y+105);
}


void br(int x,int y)
{ setcolor(15);
 circle(x,y,13);  //face
 arc(x-5,y-2,60,150,6);
 circle(x-5,y-2,2);//eye
//line(x-13,y+5,x-17,y+5); //nose
 // line(x-17,y+5,x-13,y-5); //nose
  arc(x-13,y+12,10,90,9);

  rectangle(x-5,y+15,x+5 ,y+60);//body
  rectangle(x-10,y+40,x+30,y+55);//gun
  line(x+30,y+40,x+60,y+35);
  line(x+30,y+57,x+60,y+62);
  line(x+60,y+35,x+60,y+62);
  rectangle(x-40,y+40,x-10,y+45);//gun
 line(x-5,y+15,x-20,y+40); //  l.hand

 line(x+5,y+15,x+30,y+40);  // r.hand
 line(x-20,y+40,x-10,y+40); //lower l arm
  line(x+7,y+57,x+30,y+40);//lower r  arm
 rectangle(x-2,y+60,x-8,y+100); //
 rectangle(x+2,y+60,x+8,y+100);  // leg
 rectangle(x-2,y+100,x-15,y+105);
 rectangle(x+2,y+100,x+15,y+105);
 setfillstyle(4,0);
 rectangle(x+30,y-80,x+50,y+55);//gun2
floodfill(x+40,y+20,15);
 rectangle(x+10,y-60,x+50,y-80);
 floodfill(x+40,y-62,15);
 floodfill(x+12,y-78,15);

 line(x+10,y-80,x+10,y-100);
 circle(x+10,y-90,5);

 rectangle(x-10,y-80,x+10,y-73);
 floodfill(x,y-76,15);

}
void mok1(int x,int y)
	{ setcolor(15);
	setfillstyle(11,YELLOW);
	fillellipse(x,y,50,30);
	circle(x+25,y-7,3);
	circle(x+25,y-7,1);

	setfillstyle(5,RED);
	pieslice(x+70,y,170,190,20);   //beak
	 pieslice(x-50,y,100,120,30);
	 pieslice(x-50,y,140,160,30);
	 pieslice(x-50,y,180,200,30);
	 pieslice(x-50,y,220,240,30);
	 pieslice(x-50,y,260,280,30);
	 pieslice(x,y,180,200,20);
	 pieslice(x,y,220,240,25);
	 pieslice(x,y,260,280,30);
	 pieslice(x,y,300,320,30);}


 void egg(int x,int y)
 { setcolor(6);
	arc(x,y,220,330,56);
	arc(x,y,220,330,54);
	arc(x,y,220,330,52);
	arc(x,y,220,330,50);
	arc(x,y,220,330,48);
	arc(x,y,220,330,46);
	arc(x,y,220,330,44);
	arc(x,y,220,330,42);//nest
	setfillstyle(1,WHITE);
	fillellipse(x,y+41,10,7);
	fillellipse(x+15,y+38,10,7);
	fillellipse(x-15,y+38,10,7);
}



void tree(int x,int y)
{ //0,150
 setcolor(WHITE);
  setfillstyle(8,6);
  rectangle(1,170,30,500); //bark
  floodfill(2,200,15);
  line(30,270,200,240);//branch
  line(30,240,100,250);
  line(100,250,170,243);
  line(170,243,210,270);
  floodfill(32,255,15);
  setcolor(WHITE);
 setfillstyle(1,GREEN);
circle(x,y-36,55);
floodfill(x,y-36,15);
 circle(x+30,y-100,100);
floodfill(x+30,y-100,15);
 circle(x+50,y-10,45);
 floodfill(x+50,y,15);

setfillstyle(1,1);
floodfill(300,100,15);
 rectangle(30,-1,650,390);//sky
 setfillstyle(1,BROWN);
rectangle(30,390,650,500);
 floodfill(300,400,15);
	}//for story


 void mov()
{
cleardevice();
int a=0,b=150;
setfillstyle(8,4);
rectangle(0,0,20,500);
floodfill(1,1,15);
rectangle(610,0,630,500);
floodfill(620,200,15);
rectangle(0,0,630,20);
floodfill(200,10,15);
rectangle(0,455,630,475);
floodfill(200,465,15); //border

setcolor(RED);
settextstyle(4,0,8.5);

  outtextxy(1,30,"  Flappy Mokilo");
  setcolor(1);
  settextstyle(1,0,3);
  outtextxy(390,120,"-The Epic");
 int g=0,p=1,q=4;

 while(g<=10)
 { setcolor(15);
  ellipse(315,300,0,360,250,140);
  line(160,410,315,255);
  line(315,255,305,340);
  line(305,340,470,190);
  birdl2(220,250,10);
  br3(410,310);
  setfillstyle(1,p);
  floodfill(100,250,15);
  setfillstyle(1,q);
  floodfill(400,400,15);
  setfillstyle(1,q);
  circle(310,298,27);
  floodfill(315,298,15);
     setfillstyle(1,p);
   floodfill(305,298,15);
  setcolor(q);
  settextstyle(1,0,4.5);
  outtextxy(290,275,"V");
  setcolor(p);
  settextstyle(1,0,4.5);
  outtextxy(315,275,"S");
  int ty=p;
  p=q;
  q=ty;
  g++;
  delay(250);
}

delay(2000);
 cleardevice();
setcolor(15);
settextstyle(3,0,2);
outtextxy(220,30,"\tTHE STORY:");
outtextxy(220,45,"\t--------");
outtextxy(5,100,"\n\n\tLong long ago in the ancient city of Aviana,there lived");
delay(1000);
outtextxy(1,150,"\n\nthe peaceful race of bird species named MOKILO.Known for ");
delay(1000);
outtextxy(1,200,"\n\ntheir unharming attitude and peace full existence,and");
delay(1000);
outtextxy(1,250,"\n\nand also it was believed that their eggs and magical");
delay(1000);
outtextxy(1,300,"\n\npowers and also ofcource its nutrients.");
delay(6000); //5000
cleardevice();
rectangle(620,20,630,405);
settextstyle(1,0,5);
outtextxy(475,27,"AVIANA");
rectangle(470,25,620,85);
tree(a,b);
mok1(110,360);
delay(100);
mok1(130,230);
delay(100);
mok2(500,360);
delay(100);
mok2(400,250);
delay(100);
mok1(300,170);
delay(100);
mok2(260,330);
delay(3000);//5000
cleardevice();
settextstyle(3,0,2);
outtextxy(220,30,"\tTHE STORY:");
outtextxy(220,45,"\t--------");
settextstyle(1,0,4);
outtextxy(70,100,"Their Peace was undisturbed");
delay(1000);
settextstyle(1,0,6);
outtextxy(5,275,"UNTIL THE ENTRY OF.....");
delay(2500);
cleardevice();
br2(300,260);
delay(2500);
cleardevice();


setcolor(15);
settextstyle(3,0,2);
outtextxy(220,30,"\tTHE STORY:");
outtextxy(220,45,"\t--------");
outtextxy(70,120,"\n\n\t\tHe hunted Mokilo's and especially their eggs");
delay(1000);
outtextxy(5,170,"\nFor he had the dezire to attain magical powers to ");
delay(1000);
outtextxy(5,220,"\nbecome stronger and to have little unhatched mokiloites");
delay(1000);
outtextxy(5,270,"\nin his meal.Hence he hunted them mercilessly...");
delay(5500); //5000
cleardevice();
int r=570,s=285;//shoot
 br(r,s);
 tree(a,b);
 egg(a+130,b+40);
mok1(a+130,b+40);
 delay(1500);
 int ch=1,j,i;
if(ch);
 {
 for( i=560,j=205;i>=130;i-=5)
 { circle(i,j,5);
   delay(20);}
 }
 delay(100);
cleardevice();
  if(i<=130)
 {int r=570,s=285;
 br(r,s);
 tree(a,b);
 egg(130,190);
 setcolor(0);
 arc(155,350,180,361,20);
 mok1(130,360);
 }
 delay(1500);
 cleardevice();
 settextstyle(3,0,2);
outtextxy(220,30,"\tTHE STORY:");
outtextxy(220,45,"\t--------");
outtextxy(70,120,"\n\n\t\tSubmerged in the sea of sadness they did");
delay(1000);
outtextxy(5,170,"\n\nnot know what to do.Then the Mokilo's found that the");
delay(1000);
outtextxy(5,220,"\n\nonly way to save little Moklilotes was to war against");
delay(1000);
outtextxy(5,270,"\n\nBird Ravi. ");
delay(1000);
outtextxy(5,310,"\n\n Help them to save their little one's ");
delay(500);
settextstyle(2,0,5);
outtextxy(350,350,"\nPress c to continue.");
int c=0;
while(1)
{c=getch();
 if(c==99)
 break;}

 }



  //story function ends
