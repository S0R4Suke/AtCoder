# include <string>
# include <iostream>
# include <cmath>
# include <vector>
using namespace std;

/*
1. 10000x+5000y+1000z=Y
2. x+y+z=N
の時の、x,y,zを求める問題。

2'. z=N-x-y
1'. 10000x+5000y+1000(N-x-y)=Y
    9000x+4000y+1000N=Y

Y,Nはわかってるんだから、
9000x+4000y=Y-1000Nが成立すればok
*/
int main(){
    int N, Y;
    cin >> N >> Y;

    bool found = false;

    for(int x=0;x<=N;x++){
        // 4000で割れないなら次
        if((Y - 1000*N - 9000*x)%4000 != 0){
            continue;
        }

        int y = (Y - 1000*N - 9000*x)/4000;

        // yが負の数、またはN-xより大きい場合は次
        if(y < 0 || y > N-x){
            continue;
        }

        // 9000x+4000y=Y-1000N
        if(9000*x + 4000*y == Y - 1000*N){
            cout << x << " " << y << " " << (N-x-y) << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "-1 -1 -1" << endl;
    }

    return 0;
}
