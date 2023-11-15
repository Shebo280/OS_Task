#include <iostream>

using namespace std;

int main(){
    cout << "Choose the right answer:" << endl;
    cout << "Who is the king?" << endl;
    cout << "1- Mohamed Shehab" << endl;
    cout << "2- Mohamed Samy" << endl;
    cout << "3- Shebo" << endl;
    cout << "4- All of the above" << endl;
    int x; cin >> x;
    while(x!=4){
        cout << "Wrong answer try again: "; cin >> x;
    }
    cout << "Correct answer :)";
    return 0;
}