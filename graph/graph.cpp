//This is the implementation of Graph class
#include "graph.h"
#include <iostream>
#include <vector>

using namespace std;

Graph::Graph ( int m )
{
    nNodes = m;
    name = new matrix (m, std::vector<int>(m));
    for ( int i = 0; i < nNodes; i++ ) 
    {
        for ( int j = 0; j < nNodes; j++ )
        {
              cout<<(name->at(i)).at(j)<<endl;
//            name[i][j] = 0;
//            cout << "name[" << i << "][" << j << "] = "<<name[i][j]<<endl;
        }; 
    };
};


int Graph::addEdge ( int start, int end )
{
    int m, n;

    if ( (start < 1) || (start > nNodes) || (end < 1) || (end > nNodes) )
        return 1;
    m = start -1;
    n = end - 1;
    (name->at(m)).at(n)=1;
    cout<<"   matrix[" << m << "][" << n << "] = "<<(name->at(m)).at(n)<<endl;
    return 0;
};

void Graph::printMatrix()
{
    for ( int i = 0; i < nNodes; i++ ) 
    {
        for ( int j = 0; j < nNodes; j++ )
           cout<<(name->at(i)).at(j)<< " ";
        cout << "\n";
    };
};

