#include <iostream>
#include <random>
#include "studentIdentiskaAnrop.h"
#include <assert.h>

using namespace std;



float minimum(const float *pBegin, const float *pEnd){
    // Min kod skall ändras i uppdraget!

    assert( pEnd-pBegin > 0 );
    if (pEnd - pBegin == 1)
        return *pBegin;
    const float minstAvResten = minimum(pBegin+1, pEnd);
    if (*pBegin <  minstAvResten )
        return *pBegin;
    else return  minstAvResten;

}

void studentsTest(){
    // om du vill kan du skriva testkod här
}



void timingExperiment(){
    cout << R"(
    timingExperiment.
    funktionen "minimum" kommer att anropas efter att du tryckt på return.
    )" ;



    // Nedanstående tre kodrader skapar en slumptalsgenerator
    // se https://en.cppreference.com/w/cpp/numeric/random/uniform_real_distribution
    //random_device rd;
    mt19937 generator(108);
    uniform_real_distribution<> distr(0.0, 10.0);

    std::cout << '\n';


    const int size = 32;
    float arr[size];
    for (int i=0; i<size; ++i)
        arr[i] = distr(generator);

    cout << "Tryck return nu:";
    cin.ignore(INT_MAX, '\n');

    float m = minimum(arr, arr+size);

    cout << "Färdig, och minsta talet var " << m << endl;
}



