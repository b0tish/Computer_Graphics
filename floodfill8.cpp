#include <graphics.h>

void floodfill8(int x,int y, int fill_color, int old_color){
	 if(getpixel(x, y) == old_color){
        putpixel(x, y, fill_color);
        floodfill8(x + 1, y, fill_color, old_color);
        floodfill8(x, y + 1, fill_color, old_color);
        floodfill8(x - 1, y, fill_color, old_color);
        floodfill8(x, y - 1, fill_color, old_color);
        floodfill8(x - 1, y - 1, fill_color, old_color);
        floodfill8(x - 1, y + 1, fill_color, old_color);
        floodfill8(x + 1, y - 1, fill_color, old_color);
        floodfill8(x + 1, y + 1, fill_color, old_color);
    }
}

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm,"");
	outtextxy(250,0,"Lab no.4(e) Name RollNo.");
	
	setfillstyle(1,2);
	rectangle(250,250,300,300);
	floodfill(251,251,15);
	
	floodfill8(255,255,4,2);

	getch();
	closegraph();
	return 0; 
}
