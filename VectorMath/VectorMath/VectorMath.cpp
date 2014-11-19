// VectorMath.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Vector2.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Vector2 v1 = Vector2(10, 4);
	Vector2 v2 = Vector2(3, 7);

	// addition
	cout << "Addition Test" << endl;
	v1 = v1 + v2;
	cout << "v1 + v2" << endl;
	cout << v1.x << ", " << v1.y << endl;

	//subtraction
	cout << "subtraction Test" << endl;
	v1.x = 10, v1.y = 4;
	v1 = v1 - v2;
	cout << "v1 - v2" << endl;
	cout << v1.x << ", " << v1.y << endl;
	
	// scalar multiplication
	cout << "scalar Test" << endl;
	v1.x = 10, v1.y = 4;
	v1 = v1 * 3.14;
	cout << "v1 * 3.14" << endl;
	cout << v1.x << ", " << v1.y << endl;

	// vector multiplication
	cout << "vector multiplication" << endl;
	v1.x = 10, v1.y = 4;
	v1 = v1 * v2;
	cout << "v1 * v2" << endl;
	cout << v1.x << ", " << v1.y << endl;

	// Magnitude
	cout << "Magnitude" << endl;
	v1.x = 10, v1.y = 4;
	cout << v1.Magnitude() << endl;

	// Get normal
	cout << "Normalized vecor" << endl;
	v1.x = 10, v1.y = 4;
	v1.Normalise();
	cout << v1.x << ", " << v1.y << endl;

	// Distance between vectors


	// Dot Product

	system("Pause");
	return 0;
}

