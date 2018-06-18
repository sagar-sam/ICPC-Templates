#include <iostream>

using namespace std;

void initialize( int Arr[ ], int N)
{
    for(int i = 0;i<N;i++)
    {
    	Arr[ i ] = i ;
    	size[ i ] = 1;
    }
}

int root (int Arr[ ] ,int i)
{
	if(Arr[i]!=i)
		Arr[i]=root(Arr, Arr[i]);
    return Arr[i];
}

bool find(int A,int B)
{
    if( root(A)==root(B) )       //if A and B have the same root, it means that they are connected.
	    return true;
    else
    	return false;
}


void unio(int Arr[ ],int size[ ],int A,int B)
{
    int root_A = root(A);
    int root_B = root(B);
    if(size[root_A] < size[root_B ])
    {
	    Arr[ root_A ] = Arr[root_B];
    	size[root_B] += size[root_A];
    }
    else
    {
	    Arr[ root_B ] = Arr[root_A];
    	size[root_A] += size[root_B];
    }

}

int main()
{
	
}