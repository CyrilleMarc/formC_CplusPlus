#pragma once

typedef struct Tree
{
	int number;
	struct Tree *tleft;
	struct Tree *tright;
	struct Tree* parent;

} Tree;

Tree* new_Binary_Tree(int number);
int freeTree(Tree* tree);
Tree* joinTree(Tree* left, Tree* right, int node);
void display_binary_tree(Tree* tree);