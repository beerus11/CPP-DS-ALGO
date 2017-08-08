#include<iostream>
#include<list>
using namespace std;
class Graph{
	int numVertices;
	list *adjList;
	public :
	Graph(int V);
	void addEdge(int src,int dest);
}
Graph::Graph(int vertices){
	numVertices=vertices;
	adjList= new list[vertices];
}

void Graph::addEdge(int src, int dest){
	adjList[src].push_front(dest);
}

int main(){
	Graph g(4);
	g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
 
    return 0;
}