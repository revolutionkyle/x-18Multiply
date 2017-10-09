#include<vector>
#include<string>
#include<iostream>
using namespace std;
const int SIZE = 12;
int main()
{
vector < vector <int> > multTable;

for(int row = 0; row < SIZE; row++)
{   for(int col = 0 ; col < SIZE; col++)
    {
         multTable[row][col] = row*col;
         
    }
}
cout<< multTable[0][0] << endl;

return 0;
}

 
