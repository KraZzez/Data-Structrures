#include "studentbinsearch2.h"

#include <iostream>

using namespace std;


const char* nameOfStudent2(){
    return "Ludvig Krantzén";
}


// Returnerar pekare till det första tal som är >= x, eller
// pEnd om inget sådant tal finns.
const float* pointerToFirstElementGreaterOrEqualToX(float x, const float* pBegin, const float* pEnd){
    if(pBegin >= pEnd){
        return pEnd;
    }
    if(*pBegin >= x){
        return pBegin;
    }else if(*pBegin < x){
        return pointerToFirstElementGreaterOrEqualToX(x, pBegin+1, pEnd);
    }
    return pEnd;
}






void studentsTest2(){

   cout << "Har borde studentens testresultat synas\n\n";

   // TODO din egen testkod som anropar contains här

   float arr[5]={3,4,1,5,2};
   int size = 5;
   int x = 6;
   const float *firstElement = pointerToFirstElementGreaterOrEqualToX(x,&arr[0],&arr[size]);
   cout << &firstElement << endl;

   cout << "pointerToFirstElementGreaterOrEqualToX doesn't work yet." << endl;
}
