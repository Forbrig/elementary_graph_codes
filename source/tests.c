#include <stdio.h>
#include "rep_graph.h"

int main () {
	digraph_m *v;
	v = digraph_m_INIT(5); //5x5
	show_digraph_m(v);



	return 0;
}
