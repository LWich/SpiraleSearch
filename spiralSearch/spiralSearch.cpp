#include "spiralSearch.h"
int spiralSearch(int size, int* mas, int element){
	int* center = new int(0);
	int* step = new int(1);
	int* num = new int(0);
	int* index = new int;
	if (size % 2 == 0) *center = size / 2 + 1;
	else if (size % 2 != 0) *center = size / 2;
	*index = *center;
	for (int i = 0; i < size; ++i){
		if (*num % 2 != 0){
			*index = *index - *step;
			++* step;
			++* num;
		}
		else if (*num % 2 == 0){
			*index = *index + *step;
			++* num;
			++* step;
		}
		if (mas[*index] == element) break;
		else continue;
	}
	delete num;
	delete step;
	delete center;
	return *index;
}
