#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm,"");
	outtextxy(250,0,"Lab no.2(b) Name RollNo.");
	
	float m;
	int x1,y1,x2,y2,dx,dy,temp,p,xk,yk,pk,x,y;
	printf("Enter the value of x1 and y1: ");
	scanf("%d%d",&x1,&y1);

	printf("Enter the value of x2 and y2: ");
	scanf("%d%d",&x2,&y2);
	 
	m = (y2-y1) / (x2-x1);
	dx = abs(x2 - x1);
	dy = abs(y2 - y1);
	x = x1;
	y = y1;	
		
	if (abs(m) >= 1.00){
		p = 2*dx-dy;
		for (int i = 0;i<=dy-1;i++){
			if (p <= 0){
				xk = x ;
				yk = y - 1;
				pk = p + 2*dx;
			}else{
				xk = x + 1;
				yk = y - 1;
				pk = p + 2*dx - 2*dy;
			}
			printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t(%d,%d)\n",i,p,pk,x,xk,y,yk,xk,yk);
			putpixel(xk,yk,15);
			x = xk;
			y = yk;
			p = pk;
		}	
	}else{
		p = 2*dy - dx;
		for (int i = 0;i<=dx-1;i++){
		
			if (p < 0){
				xk = x + 1;
				yk = y;
				pk = p + 2*dy;
			}else{
				xk = x + 1;
				yk = y + 1;
				pk = p + 2*dy - 2*dx;
			}
			printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t(%d,%d)\n",i,p,pk,x,xk,y,yk,xk,yk);
			x = xk;
			y = yk;
			p = pk;
		}	
	}
	getch();
	closegraph();
	return 0; 
}
