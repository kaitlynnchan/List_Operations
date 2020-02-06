// Kaitlynn Chan, 2020/01/16
#include "dsexceptions.h"
#include "List.h"
#include "Vector2.h"

#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main( )
{

    // Instantiation of timers, start and end
    clock_t start, end ;
    const int N = 10;

    // output
	cout << "Program: [part2]\n";
	cout << "Type of Elements: [double]\nNumber of Elements: [" << N << "]\nTime units: [milliseconds]\n";

	// Insertion of Vector
    Vector<double> v1;
    start = clock( );
    for( double i = N - 1; i > 0; --i )
    {
        v1.push_front( i );
    }
    end = clock( );
    cout << "Time for Vector Insertion: [" << ( end - start )/((double)CLOCKS_PER_SEC/1000) << "]" << endl;

	// Insertion of List
    List<double> lst1;
    start = clock( );
    for( double i = N - 1; i > 0; --i )
    {
        lst1.push_front( i );
    }
    end = clock( );
    cout << "Time for List Insertion: [" << ( end - start )/((double)CLOCKS_PER_SEC/1000) << "]" << endl;

    // Visiting of Vector
    start = clock( );
    v1.visitAll();
    end = clock( );
    cout << "Time for Vector Visiting: [" << ( end - start )/((double)CLOCKS_PER_SEC/1000) << "]" << endl;

    // Visiting of List
    start = clock( );
    lst1.visitAll();
    end = clock( );
    cout << "Time for List Visiting: [" << ( end - start )/((double)CLOCKS_PER_SEC/1000) << "]" << endl;

    return 0 ;
}


