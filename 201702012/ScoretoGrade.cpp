#include <iostream>
using namespace std;

int main(void){
    int score;

    cin >> score;
    if(score >= 100){
        cout<<"your grade is A"<<endl;
    }
    else if(score<100 && 90 <= score){
        cout << "your grade is B" << endl;
    }
    else if(score<90 && 80 <= score){
        cout << "your grade is C" << endl;
    }
    else if(score<80 && 70 <= score){
        cout << "your grade is D" << endl;
    }
    else{
        cout << "your grade is F" << endl;
    }
}