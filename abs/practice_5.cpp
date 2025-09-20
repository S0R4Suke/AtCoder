#include <iostream>
#include <vector>
using namespace std;

int main() {
    int yen500,yen100,yen50, sum, answer = 0;

    cin >> yen500 >> yen100 >> yen50 >> sum;

    yen500 *= 500;
    yen100 *= 100;
    yen50  *= 50;

    for (int i=0;i<=yen500;i+=500) {
        for (int j=0; j<=yen100; j+=100) {
            for (int k=0; k<=yen50; k+=50){
                if(i+j+k == sum) {
                    answer++;
                }
            }
        }
    }
    cout << answer << endl;
    return 0;
}
