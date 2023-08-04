#include <graphics.h>
#include <stdio.h>
#include <math.h>

void drawcircle(int x, int y, int xm, int ym) {
    putpixel(xm + x, ym + y, 15);
    putpixel(xm + y, ym + x, 15);
    putpixel(xm + x, ym - y, 15);
    putpixel(xm + y, ym - x, 15);
    putpixel(xm - x, ym + y, 15);
    putpixel(xm - y, ym + x, 15);
    putpixel(xm - x, ym - y, 15);
    putpixel(xm - y, ym - x, 15);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    outtextxy(250,0,"Lab no.3(a) Name RollNo.");

    int x, y, r, x0 = 0, y0, p0, x1, y1, p1, k = 0;

    printf("Enter the value of x and y: ");
    scanf("%d%d", &x, &y);

    printf("Enter the value of radius: ");
    scanf("%d", &r);

    y0 = r;
    p0 = 1 - r;

    printf("\nk\tP(k)\tP(k+1)\tx(k)\tx(k+1)\ty(k)\ty(k+1)\tPlot(x,y)\n");

    do {
       

        if (p0 < 0) {
            x1 = x0 + 1;
            y1 = y0;
            p1 = p0 + 2 * x1 + 1;
        } else {
            x1 = x0 + 1;
            y1 = y0 - 1;
            p1 = p0 + 2 * x1 - 2 * y1 + 1;
        }
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t(%d,%d)\n", k, p0, p1, x0, x1, y0, y1, x + x0, y + y0);
        drawcircle(x0, y0, x, y);
        p0 = p1;
        x0 = x1;
        y0 = y1;
        k++;

    } while (x0 <= y0);
    getch();
    closegraph();
}

