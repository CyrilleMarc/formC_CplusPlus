#include <stdio.h>
#include <stdlib.h>

#include <common/common.h>
#include <arbre_binaire/arbre_binaire.h>


int main()
{
	logger_set_current_level(LOG_DEBUG);
	logger_log(LOG_DEBUG, __FUNCSIG__, "");

	Tree * treeOne = joinTree(joinTree(new_Binary_Tree(7), new_Binary_Tree(8), 9), new_Binary_Tree(3), 1);
	display_binary_tree(treeOne);

	freeTree(treeOne);
		
	return 0;
}