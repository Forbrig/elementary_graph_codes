#include <stdio.h>
#include <stdlib.h> //alloc functions
#include "rep_graph.h"

//the edges in our matrix are named 0, 1, 2, ..., n.
/*
the matrix line x column is represented this way

    0  1  2  3  ...  n
0:  0  0  0  0  ...  0
1:  0  0  0  0  ...  0
2:  0  0  0  0  ...  0
.
.
.
n:  0  0  0  0  ...  0

*/

//this function allocate a matrix graph with V vertices and 0 edges
_digraph_m *digraph_m_INIT(int v) {
	_digraph_m *graph = malloc(sizeof *graph);
	graph->edges = 0;
	graph->vertex = v;
	graph->matrix = matrix_init(graph->vertex, 0);
	return graph;
}

//matrix of adjacency: allocate a matrix with vertex * vertex '[vertex][vertex]' and put 'value' in all positions.
int **matrix_init(int vertex, int value) {
	int i, j;
	int **matrix = malloc(vertex * sizeof(int*)); //vertex lines
	for (i = 0; i < vertex; i++) {
		matrix[i] = malloc(vertex * sizeof (int)); //vertex columns
		for (j = 0; j < vertex; j++) {
			matrix[i][j] = value;
		}
	}
	return matrix; //pointer to the matrix of adjacency
}

//pass as argument the graph and the 2 vertex (v and w) that we wanna add an edge
//caution: if you dont wanna add an edge to the vertex itself
void digraph_m_insert(_digraph_m *G, _vertex v, _vertex w) {
	if (G->matrix[v][w] == 0) {
		G->matrix[v][w] = 1;
		G->edges++; //add the total of edges
	}
	return;
}

//remove the edge vw of the vertex v and w if it has
void digraph_m_remove(_digraph_m *graph, _vertex v, _vertex w) {
	if (graph->matrix[v][w] == 1) {
		graph->matrix[v][w] = 0;
		graph->edges--; //add the total of edges
	}
	return;
}

//print the digraph in matrix form
//needs an upgrade to print the vertex name on the column
void digraph_m_show(_digraph_m *graph) {
	int i, j;
	printf("The graph matrix is\n");
	for (i = 0; i < graph->vertex; i++) {
		printf("%d: ", i); //lines
		for(j = 0; j < graph->vertex; j++) {
			printf("%d ", graph->matrix[i][j]); //column
		}
		printf("\n");
	}
	return;
}

//graph adjacency functions

//creates a pointer node to represent the adjacency
_node *NEWnode(_vertex w, _node *next) {
   _node *a = malloc(sizeof(_node));
   a->w = w;
   a->next = next;
   return a;
}
