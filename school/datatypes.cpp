#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int g_iRandNum = 0;

const double PI = 3.14159;


int main(){
    // data types
    bool bMarried = true;
    char chMyGrade = 'A';
    unsigned short int u16Age = 34;
    short int siWeight = 200;
    int nDays = 7;
    long lBigNum = 11000000;
    float fPi = 3.14259;
    double dbBigFloat = 1.11111111111111111;
    long double ldPi = 3.14259;
    // auto whatWillIBe = true;

    // std::cout << "Min bool " << 
    //         std::numeric_limits<bool>::min() << "\n";
    
    // std::cout << "Max bool " << 
    //         std::numeric_limits<bool>::max() << "\n";

    std::cout << "int size " << sizeof(int) << "\n";

    return 0;
}