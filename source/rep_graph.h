//A graph can generally be represented by two forms: list of adjacencies or matrix of adjacency.
//Any of these two models are aplicable in directed graphs or simple graphs.

//When |E| = |V| ('=' = approximated) we use matrix;
//When |E| < |V|² ('<' = much smaller than) we use adjacency;

//Our implementation will be to directed graphs.

//this definition is because each vertex will be called by a number. Ex: 1, 2, 3...
#define _vertex int

//the structure of a matrix graph 
typedef struct digraph_matrix {
	int vertex; //number of vertices
	int edges; //number of edges
	int **matrix; //pointer to the pointer of adjacency matrix;
} _digraph_m;

//functions to matrix graph
_digraph_m *digraph_m_INIT(int v);
int **matrix_init(int vertex, int value);
void digraph_m_insert(_digraph_m *graph, _vertex v, _vertex w);
void digraph_m_remove(_digraph_m *graph, _vertex v, _vertex w);
void digraph_m_show(_digraph_m *graph);
_digraph_m * dfs_graph_m(_digraph_m * graph, _vertex root);

//the structure of a list graph

//the adjacency list is a vector of nodes, here nodes are the vertex.
//each node v of the vector contains a pointer to another node w that has an edge v to w.
typedef struct node_adj { 
   _vertex w;
   struct node_adj *next; 
} _node;

typedef struct digraph_adjacency {
	int vertex; //number of vertices
	int edges; //number of edges
	_node **adj; //pointer to the pointer of adjacency list vector;
} _digraph_adj;

_node *new_node(_vertex w, _node *next);
