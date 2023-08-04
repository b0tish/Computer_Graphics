#include <graphics.h>

void boundaryfill4(int x,int y, int fill_color, int boundary_color){
	 if(getpixel(x, y) != boundary_color && getpixel(x, y) != fill_color){
        putpixel(x, y, fill_color);
        boundaryfill4(x + 1, y, fill_color, boundary_color);
        boundaryfill4(x, y + 1, fill_color, boundary_color);
        boundaryfill4(x - 1, y, fill_color, boundary_color);
        boundaryfill4(x, y - 1, fill_color, boundary_color);
    }
}

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm,"");
	outtextxy(250,0,"Lab no.4(b) Name RollNo.");
	
	circle(250,250,50);
	
	boundaryfill4(255,255,4,15);
	getch();
	closegraph();
	return 0; 
}
