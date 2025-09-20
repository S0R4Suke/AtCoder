# include <string>
# include <iostream>
# include <cmath>
using namespace std;

int main(){
    char s;
    int count = 0;

    for (int i=0; i<3; i++){
        cin >> s;
        
        if(s == '1'){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
