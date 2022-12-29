#include <iostream>
#include <graphics.h>
#include <math.h>
using namespace std;

void move(int j, int h, int &x, int &y)
{
    if (j == 1)
        y -= h;
    else if (j == 2)
        x += h;
    else if (j == 3)
        y += h;
    else if (j == 4)
        x -= h;
    lineto(x, y);
}

void hilbert(int r, int d, int l, int u, int i, int h, int &x, int &y)
{   if (i > 0)
    {
        i--;
        hilbert(d, r, u, l, i, h, x, y);
        move(r, h, x, y);
        hilbert(r, d, l, u, i, h, x, y);
        move(d, h, x, y);
        hilbert(r, d, l, u, i, h, x, y);
        move(l, h, x, y);
        hilbert(u, l, d, r, i, h, x, y);
    }
}

int main()
{
    int i, x1, y1;
    int x, y, h = 10, r = 2, d = 3, l = 4, u = 1;
    cout << "\nGive the value of i: ";
    cin >> i;
    cout<<"\nGive the values for x,y:";
    cin>>x>>y;
    int gm, gd = DETECT;
    initgraph(&gd, &gm, NULL);
    moveto(x, y);
    hilbert(r, d, l, u, i, h, x, y);
    delay(10000);
    closegraph();
    return 0;
}
