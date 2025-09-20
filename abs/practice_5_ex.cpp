// 愚直に全探索で解いてしまって計算量の無駄が凄まじいので、ちょっと改良する

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int yen500,yen100,yen50, sum, answer = 0;

    cin >> yen500 >> yen100 >> yen50 >> sum;

    // 合計金額を超えるような金額については計算の必要がない。
    for (int i = 0; i <= min(yen500, sum/500); i++) {
        for (int j = 0; j <= min(yen100, (sum - 500*i)/100); j++) {
            // 500円玉と100円玉の枚数が確定した時点で、50円玉の枚数は確定する
            int nokori = sum - (500*i + 100*j);
            if (nokori % 50 == 0 && nokori / 50 <= yen50) answer++;
        }
    }

    cout << answer << endl;
    return 0;
}
