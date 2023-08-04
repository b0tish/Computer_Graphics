#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    outtextxy(250,0,"Lab no.4(a) Name RollNo.");

    int x0,x1,y1,y0;

	printf("Enter the value of x0 and y0:");
    scanf("%d%d",&x0,&y0);
    printf("Enter the value of x1 and y1:");
    scanf("%d%d",&x1,&y1);
    rectangle(x0,y0,x1,y1);
    for (int i = y0; i<=y1; i++){
    	for (int j=x0;j<=x1;j++){
    		putpixel(i,j,2);
		}
	}
    getch();
    closegraph();
}

