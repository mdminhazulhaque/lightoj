/** 1433 - Minimum Arc Distance */

#include <stdio.h>
#include <math.h>

int main()
{
    int caseno = 0, cases = 1;

    scanf("%d", &cases);

    while(cases--)
    {
        double Ox, Oy, Ax, Ay, Bx, By;

        scanf("%lf %lf %lf %lf %lf %lf", &Ox, &Oy, &Ax, &Ay, &Bx, &By);

        double r = sqrt((Ox-Ax)*(Ox-Ax) + (Oy-Ay)*(Oy-Ay));
        double AB = sqrt((Bx-Ax)*(Bx-Ax) + (By-Ay)*(By-Ay));

        /** @link http://en.wikipedia.org/wiki/Arc_(geometry)
        theta = 1 - AB^2 / 2r^2
        **/

        double theta = acos(1.00 - pow(AB/r, 2)/2);

        double s = r * theta;

        printf("Case %d: %lf\n", ++caseno, s);
    }

    return 0;
}
