
#include <iostream>
using namespace std;

int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;
   
    int oneOvenTime = (n / k + (n % k != 0)) * t;
    int twoOvensTime;

    t > d ? twoOvensTime = d : twoOvensTime = t-1;
    
    while (n > 0) {
        twoOvensTime++;
        if (twoOvensTime % t == 0) {
            n -= k;
        }
        if((twoOvensTime -d)%t==0&& twoOvensTime - d > 0) {
            n -= k;
        }
    }
    if (oneOvenTime > twoOvensTime) {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
