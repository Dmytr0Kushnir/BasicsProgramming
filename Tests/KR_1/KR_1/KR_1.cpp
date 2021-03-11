#include <iostream>
using namespace std;

double cos_X(double x, double eps=0.0000001)
{
	double res = 0;
	double el = 1;
	int fact = 2;
	int b = -1;

	res += el;

	do
	{

		el *= ((x * x) / (fact * (fact - 1)));
		fact += 2;

		res += b * el;
		if (b == -1) {
			b = 1;
		}
		else {
			b = -1;
		}

	} while (abs(el) > eps);

	return res;
}

	/*int main() {
	double x = 0;

	cout << "Enter x : ";
	cin >> x;
	cout << "My summa " << cos_X(x) << endl;
	cout << " Real cos x"<< cos(x) << endl;
//	return 0;*/
//}
