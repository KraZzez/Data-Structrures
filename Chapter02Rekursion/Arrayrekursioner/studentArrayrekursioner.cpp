
#include "studentArrayrekursioner.h"
#include <cassert>
#include <iostream>
#include <random>

using namespace std;


std::string nameOfStudent(){
    return "Ludvig Krantzén";  // TODO andra till ditt namn!
}



float sum(const float *pBegin, const float *pEnd){
    if (pBegin >= pEnd)
        return 0;
    return *pBegin + sum(pBegin+1, pEnd);
return 0;
}


void fillValue(float value,  float *pBegin,  float *pEnd){


}

bool hasValueInRange(float min, float max, const float *pBegin, const float *pEnd){
    if(pBegin >= pEnd){
        return false;
    }
    if(*pBegin >= min && *pBegin <= max){
        return true;
    }else{
        return hasValueInRange(min, max, pBegin+1, pEnd);
    }
}

int numberOfValuesInRange(float min, float max, const float *pBegin, const float *pEnd){
    int i = 0;
    if(pBegin >= pEnd){;
        return 0;
    }else if(*pBegin >= min && *pBegin <= max){
        i++;
    }
    return i + numberOfValuesInRange(min, max, pBegin+1, pEnd);
}



void studentTest(){

    float arr[5]={3,4,1,5,2};
    int size = 5;

    float summa = sum(&arr[0], &arr[size]);
    cout << "sum: " << summa << endl << endl;

    float hasValue = hasValueInRange(2,4,&arr[0], &arr[size]);
    cout << "hasValueInRange: ";
    if(hasValue == 1){
        cout << "Yes!" << endl << endl;
    }else if(hasValue == 0){
        cout << "No!" << endl << endl;
    }

    float antal = numberOfValuesInRange(2,4,&arr[0], &arr[size]);
    cout << "numberOfValuesInRange: " << antal << endl << endl;


}


// ------------


