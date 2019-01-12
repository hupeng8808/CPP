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

    public:
        Graph(unsigned int);
        int addEdge(unsigned int, unsigned int);
        void printMatrix();
		int BFS(unsigned int);
		bool isVisited(int);
		bool isQueued(int);
};
