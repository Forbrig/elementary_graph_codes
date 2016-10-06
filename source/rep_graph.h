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
	int **adj; //a pointer to the adjacency matrix;
} digraph_m;

digraph_m digraph_matrix_INIT (int v);
int **matrix_init(int vertex, int value);
void show_digraph_m(digraph_m *graph);
