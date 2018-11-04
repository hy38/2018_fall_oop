#include <iostream>
#include "RectanglePattern.h"
using namespace std;

RectanglePattern::RectanglePattern(){   }
RectanglePattern::RectanglePattern(int x, int y){ length = x; width = y; }

void RectanglePattern::set_length(int x){
    length = x;
}
void RectanglePattern::set_width(int y){
    width = y;
}
int RectanglePattern::patternHelper(int l, int w){ 

    if(w < 0) return 0;

    for(int i=0; i<l; i++)
        cout << get_pattern();
        
    cout << endl;

    patternHelper(l, w-1);  //  Recursive call

    return 0;
}   
void RectanglePattern::printPattern(){
    if(length < 0 || width < 0) cout << "Invalid size!" << endl << endl;
    else{
        cout << "The Rectangle Pattern: (length = "<< length << ": width = " << width << ")" << endl;
        patternHelper(length, width);   //  calls patternHelper(length, width)
        cout << endl;
    }
}