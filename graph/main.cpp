//This is the main program
#include "graph.h"
#include <iostream>

using namespace std;

int main()
{
    int m, n, start, end;
	unsigned int starting;
    Graph *mygraph;
  
    cout << "How many nodes in the graph?"<<endl;
    cin >> m;
    mygraph = new Graph(m);     

    cout << "How many edges in the graph?" << endl;
    cin >> n;
 
    for ( int i = 0; i < n; i ++ ) {
        cout << "Type in start and end of the edge:" << endl;
        cin >> start;
        cout << "start =" << start << endl;
        cin >> end;
        cout << "end =" << end << endl;
        mygraph->addEdge(start, end); 
        cout << "after addEdge" <<endl;
    };

    cout << "The graph's adjacency matrix is:" << endl;
    mygraph->printMatrix();
	cout << "From which node do you want to start traverse?" << endl;
	cin >> starting;
	mygraph->BFS(starting);
};
