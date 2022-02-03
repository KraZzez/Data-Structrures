#include "studentbinsearch1.h"

#include "ragnarstest.h"
#include <cassert>

#include <iostream>
using namespace std;


const char* nameOfStudent1(){
    return "Ludvig Krantzén";
}


/****************************************************************
ANROP:    bool exist = containedInSortedarray(x, pBegin, pEnd);
VERSION:  ...
UPPGIFT:  Returnerar true omm *p==x för något p i
          intervallet [pBegin, pEnd), dvs pBegin <= p < pEnd
          (observera att pEnd skall peka på första elementet efter arrayen)
OBS:      Alla tal mellan pBegin och pEnd måste vara sorterade i
          stigande ordning
*****************************************************************/
bool containedInSortedarray(int x, const int* pBegin, const int* pEnd)
{
    if(x < *pBegin || x > *(pEnd-1)){
            return false;
        }
    int size = pEnd - pBegin;
    const int *pMid = pBegin + (size/2);
    if(*pMid == x){
        return true;
    }else if(*pMid < x){
        return containedInSortedarray(x, pMid, pEnd);
    }else if(*pMid > x){
        return containedInSortedarray(x, pBegin, pMid);
    }
    return false;
}// contains




void studentsTest1(){

    cout << "Har borde studentens testresultat synas" << endl << endl;

   // TODO din egen testkod som anropar contains här
    int arr[5]={1,2,3,4,6};
    int x = 5;

    bool exist = containedInSortedarray(x, &arr[0], &arr[5]);
    cout << exist << endl;
}
