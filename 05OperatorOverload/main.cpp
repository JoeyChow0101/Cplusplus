#include <iostream>

using namespace std;

//M# #M ++a; a++;
// operator#(L);
//L.operator#();

class Complex
{
public:
	Complex(float x = 0, float y = 0)
		:_x(x), _y(y) {}
	void dis()
	{
		cout << "(" << _x << "," << _y << ")" << endl;
	}
	Complex operator-()
	{
		return Complex(-this->_x, -this->_y);
	}
private:
	float _x;
	float _y;
};

int main()
{
	int n = 5;
	cout << n << endl;
	cout << -n << endl;
	cout << -(-n) << endl;

	Complex c(1, 1);
	c.dis();
	Complex t = -(-c);
	t.dis();
	Complex m(2, 2);

	return 0;
}