/*****
「全体を割る」方式
******/
// # include <string>
// # include <iostream>
// # include <cmath>
// # include <vector>
// using namespace std;

// int main(){
//     int N,count=0;

//     cin >> N;

//     vector<int> intList(N);

//     for (int i=0;i<N;i++) {
//         cin >> intList[i];
//     }

//     while (true) {
//         bool odd = false;
//         for (int i=0; i<N; i++) {
//             if(intList[i] % 2 != 0){
//                 odd = true;
//             }
//         }

//         if(odd) {
//             break;
//         }

//         for (int i=0; i<N; i++) {
//             intList[i] /= 2;
//         }
//         count++;
//     }

//     cout << count << endl;
//     return 0;
// }

/*****
「要素ごとに2で割れる回数を数える」方式
******/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int answer = 1e9; // 十分大きい数

    for (int x : A) { // 拡張for文（https://cpprefjp.github.io/lang/cpp11/range_based_for.html）
        int count = 0;
        while (x % 2 == 0) {
            x /= 2;
            count++;
        }
        answer = min(answer, count);
    }

    cout << answer << endl;
}
