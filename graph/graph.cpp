//This is the implementation of Graph class
#include "graph.h"
#include <iostream>
#include <vector>

using namespace std;

Graph::Graph ( unsigned int m )
{
    nNodes = m;
	vector <int> visited;
	vector <int> q;
    name = new matrix (nNodes, std::vector<int>(nNodes));
    for ( unsigned int i = 0; i < nNodes; i++ ) 
    {
        for ( unsigned int j = 0; j < nNodes; j++ )
              cout<<(name->at(i)).at(j)<<endl;
    };
};


int Graph::addEdge ( unsigned int start, unsigned int end )
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
    for ( unsigned int i = 0; i < nNodes; i++ ) 
    {
        for ( int unsigned j = 0; j < nNodes; j++ )
           cout<<(name->at(i)).at(j)<< " ";
        cout << "\n";
    };
};

int Graph::BFS(unsigned int n)
{
	if ( (n < 1) || (n > nNodes) )
		return 1;

	cout << "The Breadth First Traversal path from " << n << " is: "<<endl;

	q.push_back(n-1);

	while (visited.size() < nNodes)
	{
		for (unsigned int j = 0; j < nNodes; j++)
		{
			if (((name->at(q.front())).at(j) == 1) && !isVisited(j) && !isQueued(j))
			{
				q.push_back(j);
				//cout << "push " << j << " into q" << endl;
			};
		};
		visited.push_back(q.front());
		//cout << "Push " << q.front() << " into visited" << endl;
		cout << "Next node is: " << q.front()+1 << " "<<endl;
		q.erase(q.begin());
		if (q.size() == 0)
			return 1;
	};
	cout << "\n";
	return 0;
};

bool Graph::isVisited(int n)
{
	for (unsigned int i = 0; i < visited.size(); i++)
	{
		if (visited.at(i) == n)
			return true;
	};
	return false;
};

bool Graph::isQueued(int n)
{
	for (unsigned int i = 0; i < q.size(); i++)
	{
		if (q.at(i) == n)
			return true;
	};
	return false;
};