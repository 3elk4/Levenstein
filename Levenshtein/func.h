#ifndef FUNC
#define FUNC

int** allocateMatrix(int lines, int columns);
void deleteMatrix(int*** matrix, int lines);
void printMatrix(int** matrix, int lines, int columns);
int** Levenshtein(char* first, char* second);
int minimum(int x, int y, int z);

#endif // FUNC
