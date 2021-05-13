#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

struct Vector2
{
	float x, y;
	Vector2(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	float len()
	{
		return sqrt(pow(x, 2) + pow(y, 2));
	}
};


void main()
{
	Vector2 myvect(2, -4);
	cout << "Length: " << myvect.len();
}