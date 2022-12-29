#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;

void dda(int x1, int y1,int x2, int y2){
	float dx= x2-x1;
	float dy= y2-y1;
	
	float step,x=x1,y=y1;
	if( abs(dx)>abs(dy)){
		step=abs(dx);
		}
	else{
		step=abs(dy);
		}
	float xin,yin;
	xin=dx/step;
	yin=dy/step;
	
	for(int i=0;i<=step;i++){
		putpixel(round(x),round(y),RED);
		x+=xin;
		y+=yin;
		}
	}
	
void drawcircle(int xc,int yc,int x, int y){
	putpixel(xc+x,yc+y,RED);
	putpixel(xc-x,yc+y,RED);
	putpixel(xc+x,yc-y,RED);
	putpixel(xc-x,yc-y,RED);
	
	putpixel(xc+y,yc+x,RED);
	putpixel(xc-y,yc+x,RED);
	putpixel(xc+y,yc-x,RED);
	putpixel(xc-y,yc-x,RED);
	}
	
void circle(int xc,int yc, int r){
	int x=0, y=r;
	int d=3-2*r;
	drawcircle(xc,yc,x,y);
	while(y>=x)
	{
		x++;
		if(d>0){
			y--;
			d=d+4*(x-y)+10;
			}
		else
			d=d+4*x+6;
		drawcircle(xc,yc,x,y);
		delay(50);
		}
	}
	
int main()
{
	int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,NULL);
	int x1,y1,x2,y2;
	dda(50,50,50,150);
	dda(50,150,250,150);
	dda(250,150,250,50);
	dda(50,100,150,50);
	dda(150,50,250,100);
	dda(250,100,150,150);
	dda(150,150,50,100);
	dda(250,50,50,50);
	circle(150,100,45);
	delay(10000);
	closegraph();
	return 0;
	}
	
	
