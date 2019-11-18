// ICPC Pacific Northwest Regionals
// Division 1 Problem D
// Michael Peters, The Triple Threads (Gonzaga University)

#include <iostream>
using namespace std;

int main(){

    int a, b;
    int count = 0; //count flag

    cin >> a;
    cin >> b;

    while(a != b){
        if(a < b){
            a++;
            count++;
        }
        else{
            if(a % 2 == 0){
                a = a / 2;
                count++;
            }
            else{
                a++;
                count++;
            }
        }
    }
    cout << count;

    return 0;
}
