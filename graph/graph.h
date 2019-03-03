//This is declaration of graph class
#include <vector>

typedef std::vector< std::vector<int> > matrix; 

class Graph
{
    private:
        unsigned int nNodes;
        int nEdges;
        matrix *name;
		std::vector<int> visited;
		std::vector<int> q;
		std::vector<int> currentPath;

    public:
        Graph(unsigned int);
        int addEdge(unsigned int, unsigned int);
        void printMatrix();
		int BFS(unsigned int); // print Breadth First Search path
		int DFS(unsigned int); //print Deep First Search path
		int SPL(unsigned int, unsigned int); // return Shortest Path Length
		bool isVisited(int);
		void clear();
};
