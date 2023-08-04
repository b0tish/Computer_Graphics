#include <graphics.h>
#include <stdio.h>
#include <math.h>

void drawellipse(int x, int y, int xm, int ym) {
    putpixel(xm + x, ym + y, 15);
    putpixel(xm + x, ym - y, 15);
    putpixel(xm - x, ym + y, 15);
    putpixel(xm - x, ym - y, 15);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    outtextxy(250,0,"Lab no.3(b) Name RollNo.");

    int x, y, rx,ry, x0 = 0, y0, p0, x1, y1, p1,p2,p3, k = 0;

    printf("Enter the value of x and y: ");
    scanf("%d%d", &x, &y);

    printf("Enter the value of radiuses: ");
    scanf("%d%d", &rx, &ry);

    y0 = ry;
    p0 = ry*ry - rx*rx*ry + 0.25 * rx*rx;
	printf("First Region:");
    printf("\nk\tP(k)\tP(k+1)\tx(k)\tx(k+1)\ty(k)\ty(k+1)\tPlot(x,y)\n");

    do {
        if (p0 < 0) {
            x1 = x0 + 1;
            y1 = y0;
            p1 = p0 + 2*ry*ry*x1+ry*ry;
        }else {
            x1 = x0 + 1;
            y1 = y0 - 1;
            p1 = p0 + 2 * ry*ry*x1-2*rx*rx*y1+ry*ry;
        }
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t(%d,%d)\n", k, p0, p1, x0, x1, y0, y1, x + x0, y + y0);
        drawellipse(x0, y0, x, y);
        p0 = p1;
        x0 = x1;
        y0 = y1;
        k++;

    } while (2*ry*ry*x1 <= 2*rx*rx*y1);
    k=0;
    p2 = pow(ry,2)*pow((x1+0.5),2) + pow(rx,2)*pow((y1-1),2)-pow(rx,2)*pow(ry,2);

    printf("\nSecond Region:");
    printf("\nk\tP(k)\tP(k+1)\tx(k)\tx(k+1)\ty(k)\ty(k+1)\tPlot(x,y)\n");

    do {
        if (p2 <= 0) {
            x1 = x0 + 1;
            y1 = y0 - 1;
            p3 = p2 + 2*ry*ry*x1 - 2*rx*rx*y1 + rx*rx;
        }else {
            x1 = x0;
            y1 = y0 - 1;
            p3 = p2 - 2 * rx*rx*y1+rx*rx;
        }
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t(%d,%d)\n", k, p2, p3, x0, x1, y0, y1, x + x0, y + y0);
        drawellipse(x0, y0, x, y);
        p2 = p3;
        x0 = x1;
        y0 = y1;
        k++;

    } while (y1 != 0);
    getch();
    closegraph();
}

