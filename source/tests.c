#include <stdio.h>
#include "rep_graph.h"

void test_digraph_matrix_creation() {
	printf("test_digraph_matrix_creation\n");
	_digraph_m *v;
	v = digraph_m_INIT(5); //5x5
	digraph_m_insert(v, 0, 1);
	digraph_m_insert(v, 1, 0);
	
	digraph_m_insert(v, 0, 3);
	digraph_m_insert(v, 3, 0);
	
	digraph_m_insert(v, 1, 2);
	digraph_m_insert(v, 2, 1);
	
	digraph_m_insert(v, 1, 4);
	digraph_m_insert(v, 4, 1);
	
	digraph_m_insert(v, 4, 3);
	digraph_m_insert(v, 3, 4);
	
	digraph_m_show(v);
	
	//removing
	printf("removing edge (4,1) and (4,3)\n");
	digraph_m_remove(v, 4, 1);
	digraph_m_remove(v, 4, 3);
	
	digraph_m_show(v);
	
	return;
}

void test_digraph_adj_creation() {
	printf("test_digraph_adj_creation\n");
	_digraph_adj *v;
	v = digraph_adj_INIT(5); //5 vertex
	
	digraph_adj_insert(v, 0, 1);
	digraph_adj_insert(v, 0, 4);
	digraph_adj_insert(v, 0, 5);
	digraph_adj_insert(v, 0, 10);
	
	digraph_adj_show(v);
}

int main () {
	
	//tests
	//test_digraph_matrix_creation();
	test_digraph_adj_creation();
	
	return 0;
}
