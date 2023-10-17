#include <common/common.h>
#include <list/single_list.h>

int main(int argc, char* argv[])
{
	logger_set_current_level(LOG_DEBUG);
	logger_log(LOG_DEBUG, __FUNCSIG__, argv[0]);

	Liste* newList = single_list_init();
	single_list_insert(newList, 4);
	single_list_display(newList);  
	single_list_delete(newList); 

	return 0;
}
