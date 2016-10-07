//A graph can generally be represented by two forms: list of adjacencies or matrix of adjacency.
//Any of these two models are aplicable in directed graphs or simple graphs.

//When |E| = |V| ('=' = approximated) we use matrix;
//When |E| < |V|² ('<' = much smaller than) we use adjacency;

//Our implementation will be to directed graphs.

#define _vertex int

//the structure of an matrix graph 
typedef struct digraph_matrix {
	int vertex; //number of vertices
	int edges; //number of edges
	int **matrix; //a pointer to the pointer of adjacency matrix;
} digraph_m;

//functions to matrix graph
digraph_m *digraph_m_INIT(int v);
int **matrix_init(int vertex, int value);
void digraph_m_insert(digraph_m *graph, _vertex v, _vertex w);
void digraph_m_remove(digraph_m *graph, _vertex v, _vertex w);
void digraph_m_show(digraph_m *graph);
digraph_m * dfs_graph_m(digraph_m * graph, _vertex root);



typedef struct digraph_adjacency {
	int vertex; //number of vertices
	int edges; //number of edges
	int **adj; //a pointer to the pointer of adjacency matrix;
} digraph_adj;
