# include <string>
# include <iostream>
# include <cmath>
# include <vector>
using namespace std;

// 7.の使い回し（降順->昇順）
void quick_sort(vector<int> &list, int first, int last) {
    int x;

    x = list[(first + last) / 2];
    int i = first;
    int j = last;

    while (true)
    {
        while (list[i] < x)i++;
        while (list[j] > x)j--;

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
    int N,answer = 0;
    cin >> N;

    vector<int> omochi(N);
    for (int i=0; i<N; i++){
        cin >> omochi[i];
    }

    quick_sort(omochi, 0, N-1);

    for(int i=1; i<=N; i++){
        if(omochi[i] != omochi[i-1]) {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
