#include "iostream"
#include "cstdlib"
using namespace std;
int main()
{
	struct Test
	{	
		char a;
		int b;
		double c;
	};
	Test A;
	cout<<sizeof(A)<<endl;
	system("pause");
}
