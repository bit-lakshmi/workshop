#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<dos.h>

void main()
      {
	int r,x,y,pk,xc,yc;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	cout<<"enter the radius:";
	cin>>r;
	cout<<"entre the centre point";
	cin>>xc>>yc;
	clrscr();
	x=0;
	y=r;
	pk=1-r;
	while(x<=y)
	{
		putpixel(360+x,360+y,5);
		putpixel(360+y,360+x,5);
		putpixel(360-x,360+y,5);
		putpixel(360+x,360-y,5);
		putpixel(360+y,360-x,5);
		putpixel(360-y,360+x,5);
		putpixel(360-x,360-y,5);
		putpixel(360-y,360-x,5);

		if(pk<0)
		 {  x=x+1;
		 y=y;
		 pk=pk+2*x+1;
		 }
		 else
		 { x=x+1;
		 y=y-1;
		 pk=pk+2*x-2*y+1;
		 }
		 }
		 getch();
		 closegraph();
		 }
