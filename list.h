typedef struct _list List;

List* createList();

void listAppend(List* list, char* key, int value);
int listGet(List* list, char* key);
void listSet(List* list, char* key, int value);
int listExist(List* list, char* key);
void listPrint(List* list);