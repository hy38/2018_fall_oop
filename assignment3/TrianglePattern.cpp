#include <iostream>
#include "TrianglePattern.h"
using namespace std;

TrianglePattern::TrianglePattern(){ }
TrianglePattern::TrianglePattern(int x) { height = x; }
void TrianglePattern::set_height(int x){
    height = x;
}
int TrianglePattern::patternHelper(int h){

    if (h == 0)
        return 0;

    for (int i = 0; i < h; i++)
        cout << get_pattern();
    
    cout << endl;

    patternHelper(h - 1);   //  Recursive call

    return 0;
}
void TrianglePattern::printPattern(){
    if(height < 0) cout << "Invalid size!" << endl;
    else{
        cout << "The Right Triangle Pattern: ( height = "<< height << " )" << endl;
        patternHelper(height);  //  calls patternHelper(height)
        cout << endl << endl;
    }
}