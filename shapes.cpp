#include <graphics.h>

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm,"");
	outtextxy(250,0,"Lab no.1(a) Name RollNo.");
	//Line
	line(15,75,100,120);
	outtextxy(40,125,"Line");
	//Arc
	arc(100,125,10,90,75);
	outtextxy(125,125,"Arc");
	//Circle
	circle(250,100,50);
	outtextxy(230,150,"Circle");
	//Ellipse
	ellipse(400,120,0,360,50,100);
	outtextxy(380,225,"Ellipse");
	//Rectangle
	rectangle(470,100,550,130);
	outtextxy(480,140,"Rectangle");
	//Square
	rectangle(15,200,65,250);
	outtextxy(15,260,"Square");
	//Triangle
	outtextxy(225,350,"Triangle");
	line(150, 250, 300, 250);  
	line(150, 250, 250, 350);
	line(300, 250, 250, 350);
	//Shatkona
	outtextxy(475,400,"Shatkona");
	line(450, 350, 550, 350);
	line(450, 350, 500, 250);  
    line(550, 350, 500, 250);
    
    line(450, 290, 550, 290);
    line(450, 290, 500, 390);
    line(550, 290, 500, 390); 
    
	getch();
	closegraph();
	return 0; 
}
