#include<iostream>
using namespace std;
struct Complex {
	int real, img;
}s[2];
void main() {
	int real, img;
	for (int i = 0; i < 2; i++)
	{
		cout << "Enter the " << i + 1 << " real part: "; cin >> s[i].real;
		cout << "Enter the " << i + 1 << " imaginary part: "; cin >> s[i].img;
	
	}
	real = (s[0].real * s[1].real) - (s[0].img * s[1].img);
	img = (s[0].real * s[1].img) + (s[0].img * s[1].real);
	if(img>0)
	cout << "The multiplication of Complex numbers: " << real << " + " << img;
		if(img<0)
			cout << "The multiplication of Complex numbers: " << real << img;

}
