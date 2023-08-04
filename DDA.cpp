#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm,"");
	outtextxy(250,0,"Lab no.2(a) Name RollNo.");
	
	float x,y,xinc,yinc,x1,y1,x2,y2,dx,dy,step;
	printf("Enter the value of x1 and y1: ");
	scanf("%f%f",&x1,&y1);

	printf("Enter the value of x2 and y2: ");
	scanf("%f%f",&x2,&y2);
	 
	dx= x2-x1;
	dy= y2-y1;
	 
	if(dx>=dy)
		step=dx;
	else
		step=dy;
	 
	xinc=dx/step;
	yinc=dy/step;
	 
	x=x1;
	y=y1;
	
	printf("k\tx\ty\t(x,y)\tPlot(x,y)\n");
	for (int i=0;i<=step;i++){
		putpixel(x,y,WHITE);	
		printf("%d\t%.2f\t%.2f\t(%.2f,%.2f)\t(%.0f,%.0f)\n",i,x,y,x,y,roundf(x),roundf(y));
		x = x+xinc;
		y = y+yinc;
	}
	
	getch();
	closegraph();
	return 0; 
}
