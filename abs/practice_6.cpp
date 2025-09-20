# include <string>
# include <iostream>
# include <cmath>
using namespace std;

/*
1. N,A,Bを取得
2. iを1〜Nとする
3. %10で1の位を取得
4. i/10>1なら、10で割った後に、3.の手順を行い、次の桁を取得
5. そうして取得した各桁の数字の合計値がA以上B以下であれば、iを答えに足す。
*/
int main(){
    int N,A,B,answer=0;

    // 1.
    cin >> N >> A >> B;

    // 2.
    for (int i=1;i<=N;i++) {
        // 3-4.
        int tmp_i = i;
        int tmp_sum = 0;

        while (tmp_i != 0) {
            tmp_sum += tmp_i % 10;
            tmp_i /= 10;
        }
        // 5.
        if (tmp_sum >= A && tmp_sum <= B) answer += i;
    }

    cout << answer;
    return 0;
}
