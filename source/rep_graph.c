#include <stdio.h>
#include <stdlib.h> //alloc functions
#include "rep_graph.h"

//this function allocate a matrix graph with V vertices and 0 edges
digraph_m digraph_m_INIT(int v) {
	digraph_m * graph = malloc(sizeof *graph);
	graph->edges = 0;
	graph->vertex = v;
	graph->adj = matrix_init(graph->vertex, 0);
	return *graph;
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
	return matrix; //pointer to the matrix of adjacenci
}

//print the digraph in matrix form
void show_digraph_m(digraph_m *graph) {
	_vertex i, j;
	for (i = 0; i < graph->vertex; i++) {
		printf("%d: ", i); //lines
		for(j = 0; j < graph->vertex; i++) {
			printf("%d", j); //column
		}
		printf("\n");
	}
}

