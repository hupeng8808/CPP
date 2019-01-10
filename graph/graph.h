//This is declaration of graph class
#include <vector>

typedef std::vector< std::vector<int> > matrix; 

class Graph
{
    private:
        int nNodes;
        int nEdges;
        matrix *name;

    public:
        Graph(int);
        int addEdge(int, int);
        void printMatrix();
};
