#ifndef L517_194_HPP
#define L517_194_HPP
#include "../graph.hpp"

void initialize_search(graph *g);
extern int parent[MAXV + 1];        // Родительская вершина для каждой вершины
void dfs(graph *g, int v);

#endif