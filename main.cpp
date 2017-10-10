#include<vector>
#include<string>
#include<iostream>
using namespace std;
const int SIZE = 13;
int main()
{ vector < vector < int > > multTable;
  multTable.resize(SIZE);
  for(int i =0; i <= SIZE; i++)
  {     
        multTable[i].resize(SIZE);
  }

  for(int j = 0; j< SIZE; j++)
  {   for(int l = 0; l <SIZE; l++)
      {
       multTable[j][l] = j*l;
      }

  }
  for(int i = 0; i < SIZE; i++)
  { for(int j=0; j < SIZE; j++)
    {   
     cout <<" " << multTable[i][j] <<" ";
    }
    cout << endl;
  }


return 0;
}

 
