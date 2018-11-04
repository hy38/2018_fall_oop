#include <iostream>
#include "ShapePattern.h"
using namespace std;

ShapePattern::ShapePattern(){ pattern = '*'; }  //  set default pattern to '*'
void ShapePattern::set_pattern(char c){
    pattern = c;
}
char ShapePattern::get_pattern() const{
    return pattern;
}
 void ShapePattern::printPattern(){     }