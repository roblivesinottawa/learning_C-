#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int g_iRandNum = 0;

const double PI = 3.14159;

int main(){
// testing the precision of a float data type
float fBigFloat = 1.1111111111;
double fBigFloat2 = 1.1111111111;
float fFloatSum = fBigFloat + fBigFloat2;


printf("fFloatSum Precision : %.10f\n", fFloatSum);




return 0;

}

