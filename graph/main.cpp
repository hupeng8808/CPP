//This is the main program
#include "graph.h"
#include <iostream>

using namespace std;

int main()
{
    int m, n, start, end;
	unsigned int startpoint, destination;
    Graph *mygraph;
  
    cout << "How many nodes in the graph?"<<endl;
    cin >> m;
    mygraph = new Graph(m);     

    cout << "How many edges in the graph?" << endl;
    cin >> n;
 
    for ( int i = 0; i < n; i ++ ) {
        cout << "Type in start and end of the edge:" << endl;
        cin >> start;
        cin >> end;
        mygraph->addEdge(start, end); 
    };

    cout << "The graph's adjacency matrix is:" << endl;
    mygraph->printMatrix();
	
	cout << "From which node do you want to start traverse?" << endl;
	cin >> startpoint;
	mygraph->BFS(startpoint);

	cout << "The Depth First Traversal path is: " << endl;
	mygraph->clear();
	mygraph->DFS(startpoint);

	cout << "\n";
	cout << "Check shortest path length from: " << endl;
	cin >> startpoint;
	cout << "to :" << endl;
	cin >> destination;
	cout << "The shorted path length is: "<<mygraph->SPL(startpoint, destination)<<endl;
	return 0;
};
