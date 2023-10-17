#include <common/common.h>
#include <list/single_list.h>

void single_list_init();
void single_list_insert(Liste *list, int newNumber);
void single_list_delete(Liste* list);
void single_list_display(Liste* list);

int main(int argc, char* argv[])
{
  logger_set_current_level(LOG_DEBUG);
  logger_log(LOG_DEBUG, __FUNCSIG__, argv[0]);

  Liste *newList = single_list_init();
  single_list_insert(newList, 4);
  single_list_delete(newList);
  single_list_display(newList);

  return 0;
}