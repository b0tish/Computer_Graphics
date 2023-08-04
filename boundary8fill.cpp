#include <graphics.h>

void boundaryfill8(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color && getpixel(x, y) != fill_color)
    {
        putpixel(x, y, fill_color);
        boundaryfill8(x + 1, y, fill_color, boundary_color);
        boundaryfill8(x, y + 1, fill_color, boundary_color);
        boundaryfill8(x - 1, y, fill_color, boundary_color);
        boundaryfill8(x, y - 1, fill_color, boundary_color);
        boundaryfill8(x - 1, y - 1, fill_color, boundary_color);
        boundaryfill8(x - 1, y + 1, fill_color, boundary_color);
        boundaryfill8(x + 1, y - 1, fill_color, boundary_color);
        boundaryfill8(x + 1, y + 1, fill_color, boundary_color);
    }
}

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm,"");
	outtextxy(250,0,"Lab no.4(c) Name RollNo.");
	
	rectangle(200,200,300,300);
    boundaryfill8(205, 205, 2, 15);
	getch();
	closegraph();
	return 0; 
}
