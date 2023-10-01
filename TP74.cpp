#include <iostream>
#include <vector>
using namespace std;

vector<int> SonPrimos(vector<int> V, int n);
void MostrarVector(vector<int> V);

int main()
{
	vector<int> a;
    int suma, n;
    cout<<"Ingrese numero: ";
    cin>>n;
	a=SonPrimos(a, n);
	MostrarVector(a);
	return 0;
}

vector<int> SonPrimos(vector<int> V, int n)
{
    for (int i=2; i<=n; i++)
    {
        bool flag=true;
        for (int j=2; j<i; j++)
        {
            if (i%j==0)
            {
                flag=false;
                j=i;
            }
        }
        if (flag)
        {
            V.push_back(i);
        }
    }
    return V;
}

void MostrarVector(vector<int> V)
{
	int i;
	
	for( i=0; i<V.size(); i++ )
	{
	
	cout<<V[i]<<"/";
	}
		cout<<endl;
}