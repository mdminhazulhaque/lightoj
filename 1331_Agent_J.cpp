/** 1331 - Agent J */

#include <iostream>
#include <fstream>
#include <cmath>

#define eol "\n"
#define space ' '
#define sqr(x) ((x)*(x))
#define len(var) var.size()

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    //ifstream in("/home/minhaz/1311");
    //cin.rdbuf(in.rdbuf());

    int caseno = 0, cases = 1;

    cin >> cases;

    while(cases--)
    {
        cout << "Case " << ++caseno << ": ";

        double R1, R2, R3;
        cin >> R1 >> R2 >> R3;

        double A, B, C;
        A = R1 + R2;
        B = R3 + R1;
        C = R2 + R3;

        double ang_A, ang_B, ang_C;
        ang_A = acos((sqr(B) + sqr(C) - sqr(A)) / (2 * B * C));
        ang_B = acos((sqr(A) + sqr(C) - sqr(B)) / (2 * A * C));
        ang_C = acos((sqr(B) + sqr(A) - sqr(C)) / (2 * B * A));

        double area_R1, area_R2, area_R3;
        area_R1 = 0.5 * (sqr(R1)) * (ang_C);
        area_R2 = 0.5 * (sqr(R2)) * (ang_B);
        area_R3 = 0.5 * (sqr(R3)) * (ang_A);

        double S = (A + B + C) / 2.0;
        double triangle_area = sqrt(S * (S - A) * (S - B) * (S - C));
        double area_diamond = triangle_area - (area_R1 + area_R2 + area_R3);

        cout << fixed << area_diamond << eol;
    }

    return 0;
}
