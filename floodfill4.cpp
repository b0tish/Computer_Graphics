#include <graphics.h>

void floodfill4(int x,int y, int fill_color, int old_color){
	 if(getpixel(x, y) == old_color){
        putpixel(x, y, fill_color);
        floodfill4(x + 1, y, fill_color, old_color);
        floodfill4(x, y + 1, fill_color, old_color);
        floodfill4(x - 1, y, fill_color, old_color);
        floodfill4(x, y - 1, fill_color, old_color);
    }
}

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm,"");
	outtextxy(250,0,"Lab no.4(d) Name RollNo.");
	
	setfillstyle(1,2);
	circle(250,250,50);
	floodfill(250,250,15);
	
	floodfill4(255,255,4,2);

	getch();
	closegraph();
	return 0; 
}


