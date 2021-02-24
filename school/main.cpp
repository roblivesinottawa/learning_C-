#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

// this program will output arguments typed on terminal
using namespace std;


int main(int argc, char** argv){

    std::cout << "Hello World" << std::endl;

    if(argc != 1){
        std::cout << "you entered " << argc <<
                " arguments\n";
    }

    for(int i = 0; i < argc; ++i){
        std::cout << argv[i] << "\n";
    }

    return 0;
}