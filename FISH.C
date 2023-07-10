#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

int main()
{
	int gd=DETECT,gm,y=0,x=0,a,b,c;
	int rad=0;
	int start=0,end=90;

initgraph(&gd,&gm,"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32");
	if(graphresult()!=grOk)
	{
		printf("Main unable to load graph");
		exit(1);
	}

	while(!kbhit())
	{
		cleardevice();
		start-=54;
		end-=54;
		if(x<340-rad)
			x+=5;
		else
			x=0;

		setlinestyle(DOTTED_LINE,5,2);
		setfillstyle(1,0);
		bar3d(0,100,420,290,20,1);
		setcolor(6);
		arc(x,180,30,150,50);
		arc(x,130,210,330,50);
		ellipse(x+20,115,90,270,10,20);
		ellipse(x+20,115,90,270,13,23);
		line(x-42,155,x-80,130);
		line(x-42,155,x-80,180);
		line(x-80,180,x-80,130);
		circle(x+20,150,5);
		circle(x+60,155,7);
		circle(x+63,130,5);
		circle(x+66,110,3);
		x++;
		b=30;
		c=200;
		for(a=1;a<=7;a++)
		{
			setcolor(9);
			ellipse(b,c,180,360,30,10);
			ellipse(b,c-20,180,360,30,10);
			ellipse(b,c-40,180,360,30,10);
			ellipse(b,c-60,180,360,30,10);
			ellipse(b,c-80,180,360,30,10);
			ellipse(b,c+20,180,360,30,10);
			ellipse(b,c+40,180,360,30,10);
			ellipse(b,c+60,180,360,30,10);
			b=b+60;
		}
		setcolor(4);
		delay(100);
	}

	closegraph();
	getch();
	return 0;
}

