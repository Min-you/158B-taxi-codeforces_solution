#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;

int main(){
    ll n;
    // get the number of groups
    cin >> n;
    int c = 0;
    int s = 0;
    // get the number of students
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        s += temp;
    }
    //divide the students according the amount a car can hold 
    if (s%4 == 0){
        s = s/4;
    }
    else {
        s = s/4;
        s++;
    }
    cout << s << endl;
}
