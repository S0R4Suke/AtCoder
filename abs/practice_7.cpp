# include <string>
# include <iostream>
# include <cmath>
# include <vector>
using namespace std;

// 参考: https://cod-aid.com/atcoder/algorithm/quick-sort
void quick_sort(vector<int> &list, int first, int last) {
    int x;

    x = list[(first + last) / 2];
    int i = first;
    int j = last;

    while (true)
    {
        while (list[i] > x)i++;
        while (list[j] < x)j--;

        if (i >= j) break;

        int tmp = list[i];
        list[i] = list[j];
        list[j] = tmp;

        i++;
        j--;
    }
    
    if (first < i-1) {
        quick_sort(list, first, i-1);
    }
    if (last > j+1) {
        quick_sort(list, j+1, last);
    }
}

int main(){
    int N, aliceScore = 0 , bobScore = 0;
    cin >> N;

    vector<int> card(N);
    for (int i=0; i<N; i++){
        cin >> card[i];
    }

    quick_sort(card, 0, N-1);

    for(int i=1; i<=N; i++){
        if(i%2 != 0) {
            aliceScore += card[i-1];
        } else {
            bobScore += card[i-1];
        }
    }

    cout << (aliceScore - bobScore) << endl;

    return 0;
}
