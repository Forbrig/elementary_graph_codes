#include <stdio.h>
#include "rep_graph.h"

void test_digraph_matrix_creation() {
	digraph_m *v;
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
	return;
}
	
	
	


int main () {
	
	//tests
	test_digraph_matrix_creation();
	
	
	return 0;
}
