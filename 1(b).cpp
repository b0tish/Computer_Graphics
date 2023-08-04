#include <graphics.h>

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm,"");
	outtextxy(250,0,"Lab no.1(b) Name RollNo.");
	
	//House
	line(100, 100, 150, 50);
    line(150, 50, 200, 100);
    line(150, 50, 350, 50);
    line(350, 50, 400, 100);
    rectangle(100, 100, 200, 200);
    rectangle(200, 100, 400, 200);
    rectangle(130, 130, 170, 200);
    rectangle(250, 120, 350, 180);
	
	//Car
	line(0, 300, 210, 300);
    line(50 , 300, 75, 270);
	line(75, 270, 150 , 270);
    line(150 , 270, 165 , 300);
    line(0 , 300, 0 , 330);
    line(210 , 300, 210, 330);
    
    circle(65 , 330, 15);
    circle(65 , 330, 2);

    circle(145, 330, 15);
    circle(145, 330, 2);

    line(0 , 330, 50 , 330);
    
    line(80, 330, 130 , 330);
    
    line(210 , 330, 160, 330);
    
    line(0 , 300, 210 , 300);
    line(50 , 300, 75 , 270);
    line(75 , 270, 150 , 270);
    line(150 , 270, 165 , 300);
    line(0 , 300, 0 , 330);
    line(210 , 300, 210 , 330);
    
    circle(65 , 330, 15);
    circle(65 , 330, 2);
    
    circle(145 , 330, 15);
    circle(145 , 330, 2);
    
    line(0 , 330, 50 , 330);
    
    line(80 , 330, 130 , 330);
    
    line(210 , 330, 160 , 330);
    
    
    //Stickman
    circle(500,150,50);
    line(500,200,500,400);
    line(500,250,400,280);
    line(500,250,600,275);
    line(500,400,450,480);
    line(500,400,550,480);
	getch();
	closegraph();
	return 0; 
}
