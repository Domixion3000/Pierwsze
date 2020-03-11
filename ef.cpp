#include <iostream>
#include <fstream>
#define N 1300000
using namespace std;
bool tab[N];
void sito()
{

    for(int i=2; i*i<=N;i++)
    {
        if (tab[i]==0)
        {
            for(int j=i*i; j<N;j+=i)
            {
                tab[j]=1;
            }
        }
    }

}
int main()
{
    ofstream out;
    out.open ("twins.cpp");
    sito();
    for(int i=2; i<N;i++)
    {
        if(tab[i]==0)
        {
        out<<i<<",";
        }
    }
    ifstream in;
    in.open("twins.cpp")
    return 0;
}
