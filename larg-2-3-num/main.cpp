#include <iostream>

using namespace std;

int main()
{
    int x[6] = {110,22,8787,9090,23,45};
    int fis, sec,thir;
    fis = sec = thir = INT_MIN;
    for(int i=0; i<6; i++)
    {
        if (fis < x[i])
        {
            thir = sec;
            sec = fis;
            fis = x[i];
        }
        else if (sec < x[i])
        {
            thir = sec;
            sec = x[i];
        }
        else if(thir < x[i])
        {
            thir = x[i];
        }
    }
    cout << fis << " " << sec << " " << thir ;
}
