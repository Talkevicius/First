#include <iostream>
#include <iomanip>

using namespace std;
const string CRfv = "rezultatai.txt";

int Ivesti();
void Fibonaci(int n);
void Fibonaci(int n, int & a, int & b, int & sum);
void atvFibonaci(int n,int a,int b,int sum);
int main()
{
	int a = 1;int b = 1;int sum = 1;
	int n = Ivesti();
	Fibonaci(n,a,b,sum);
	atvFibonaci(n,a,b,sum);
	return 0;
}

int Ivesti()
{
	int n;
	cout << "Iveskite sveika skaiciu" << endl;
	cin >> n;

	return n;
}

void Fibonaci(int n,int & a, int & b, int & sum)
{
	
	
	cout << a << " " << b << " ";
	for (int i = 0; i < n; i++)
	{
		sum = a+b;
		b = a;
		a = sum;
		
		cout << sum << " ";
	}
	cout << " " << endl;
	

}

void atvFibonaci(int n, int a, int b, int sum)
{
	cout << a << " " << b << " ";
	for (int i = 0; i < n; i++)
	{
		sum = a - b;
		a = b;
		b = sum;

		cout << abs(sum) << " ";
	}


}