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
};


int Graph::addEdge ( unsigned int start, unsigned int end )
{
    int m, n;

    if ( (start < 1) || (start > nNodes) || (end < 1) || (end > nNodes) )
        return 1;
    m = start -1;
    n = end - 1;
    (name->at(m)).at(n)=1;
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

void Graph::clear()
{
	q.clear();
	visited.clear();
	parentOfVisited.clear();
};

// Breadth - first search(vertex n)
// 1. Let us start search at vertex n
// 2. Mark all vertices as unvisited
//    visited.clear() 
// 3. Mark n as visited
//    visited.push_back(n);
// 4. Add n in queue
// 5. while not queue empty do
//    begin
//      for all vertices j adjacent to i do
//        begin
//          if (not visited[j] = 1)
//            Add j in queue
//          visited[j] = 1
//        end
//      i = delete from queue
//    end
//  6. stop

int Graph::BFS(unsigned int n)
{
	if ( (n < 1) || (n > nNodes) )
		return 1;

	clear();

	cout << "The Breadth First Traversal path from " << n << " is: "<<endl;

	visited.push_back(n-1);
	cout << n << " ";
    q.push_back(n-1);

	while (!(q.size()==0))
	{
		for (unsigned int j = 0; j < nNodes; j++)
		{
			if (((name->at(q.front())).at(j) == 1) && !isVisited(j))
			{
				q.push_back(j);
				visited.push_back(j);
				cout << j+1 << " ";
			};
		};
		q.erase(q.begin());
	};
	cout << endl;
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

bool Graph::isInParentOfVisited(int n)
{
	for (unsigned int i = 0; i < parentOfVisited.size(); i++)
	{
		if (parentOfVisited.at(i) == n)
			return true;
	};
	return false;
};

// Depth - first search(vertex n)
// 1. Let us start search at vertex n
// 2. Mark all vertices as unvisited
//    visited.clear() 
// 3. Mark n as visited
//    visited.push_back(n);
// 4. Add n in stack
// 5. while not stack empty do
//    begin
//      pop up vertice i
//      for all vertices j adjacent to i do
//        begin
//          if (not visited[j] = 1)
//            DFS();
//        end
//    end
//  6. stop

int Graph::DFS(unsigned int n)
{
	if ((n < 1) || (n > nNodes))
		return 1;

	cout << n << " ";

	visited.push_back(n - 1);
	q.push_back(n - 1);
	unsigned popup = q.back();
	while (!(q.size() == 0))
	{	
		q.erase(q.begin()+q.size()-1);
		for (unsigned int j = 0; j < nNodes; j++)
			if (((name->at(popup)).at(j) == 1) && !isVisited(j))
				DFS(j+1);
	};
	return 0;
};

// Shorted path length (vertex s, vertex d)
// 1. Let us start at vertex s
// 2. Mark all vertices as unvisited
//    visited.clear() 
// 3. Mark s as visited
//    visited.push_back(s);
// 4. Add s in queue
// 5. shortedlength = 0;
// 6. while not queue empty do
//    begin
//      if finish exploring all nodes at current level
//        begin
//          shortedlength++;
//          prepare to explore nodes at next level;
//        end
//      i = delete from queue
//      for all vertices j adjacent to i do
//        begin
//          if (not visited[j] = 1)
//            Add j in queue
//            increase num of nodes to explore at nextlevel by 1
//            visited[j] = 1
//            if (j = d) 
//              begin
//                print shortestlength;
//                break;
//              end
//        end
//        decrease num of nodes to explore at curlevel by 1
//    end
//  6. stop

int Graph::SPL(unsigned int s, unsigned int d)
{
	int shortestlength = 0;
	unsigned dequeued = 0, curlevel = 0, nextlevel = 0;
	unsigned m, n;

	if ((s < 1) || (s > nNodes) || (d < 1) || (d > nNodes))
		return -1;				// if start or destination out of bound

	if (s == d)
		return 0;				// length is zero, if start is the same as destination

	clear();					// reset visited and q vectors
	
	q.push_back(s - 1);			// enqueue start s
	visited.push_back(s - 1);	// mark start s as visited

	curlevel = 0;					// no vertex to traverse at current level
	nextlevel = 1;					// 1 vertex to traverse at next level

	while (!(q.size() == 0))
	{
		if (curlevel == 0)			// when no vertex to traverse at current level, go to next level
		{
			shortestlength++;		// length increase by 1
			curlevel = nextlevel;	// the num of nodes just added will be tranverse now
			nextlevel = 0;			// reset the num of nodes at next level
		};

		dequeued = q.front();		// dequeue the 1st element in q
		q.erase(q.begin());			// dequeue the 1st element in q

		for (unsigned int j = 0; j < nNodes; j++)
		{
			if (((name->at(dequeued)).at(j) == 1) && !isVisited(j))  // if find an unvisted adjacent node of the 1st element
			{
				q.push_back(j);		//enqueue j to q
				nextlevel++;		//increase nextlevel counter by 1

				visited.push_back(j);	// mark j as visited
				if (!isInParentOfVisited(dequeued)) 
					parentOfVisited.push_back(dequeued);	// record parent node of this visited node

				if (j == d - 1)		// if j is the destination, return the length
				{
					cout << "The path contains:";
					n = visited.back();

					while (parentOfVisited.size() > 0)
					{
						m = parentOfVisited.back();
						parentOfVisited.pop_back();

						if ( (name->at(m)).at(n) == 1) 
						{
							cout << n+1 << " ";
							n = m;
						};
					};
					cout << s << " ";
					cout << '\n';
					return shortestlength;
				};
			};
		};
		curlevel--;					// finished exploring adjacent nodes for 1 node at current level, decrease curlevel counter by 1
	};

	return -1;						// if never meet destination d
};