#pragma once       //always present in .h files

namespace uiuc {
class Cube { //keyword class followed by the name itself
    public: // all public variables
        double getVolume();
        double getSurfaceArea();
        void setLength(double length);


        private: //all private variables
        double length_;

    }; //always ends with semi colon
}