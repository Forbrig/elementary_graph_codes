//A graph can generally be represented by two forms: list of adjacencies or matrix of adjacency.
//Any of these two models are aplicable in directed graphs or simple graphs.

//When |E| = |V| ('=' = approximated) we use matrix;
//When |E| < |V|² ('<' = much smaller than) we use adjacency;

//Our implementation will be to directed graphs.

#include <stdlib.h> //alloc functions

#define _vertex int

//the structure of an matrix graph 
typedef struct digraph_matrix {
	int vertex; //number of vertices
	int edges; //number of edges
	int **adj; //a pointer to the adjacency matrix;
} digraph_m;


//this function allocate a matrix graph with V vertices and 0 edges
digraph_matrix digraph_matrix_INIT (int v) {
	digraph_matrix graph = malloc(sizeof *graph);
	graph->edges = 0;
	graph->vertex = v;
	graph->adj = matrix_init(graph->vertex, 0);
	return graph;
}

//matrix of adjacency: allocate a matrix with vertex * vertex '[vertex][vertex]' and put 'value' in all positions.
int **matrix_init(int vertex, int value) {
	_vertex i, j;
	int **matrix = malloc(vertex * sizeof(int*)); //vertex lines
	for (i = 0; i < vertex; i++) {
		matrix[i] = malloc(vertex * sizeof (int)); //vertex columns
		for (j = 0; j < vertex; j++) {
			matrix[i][j] = value;
		}
	}
}

