#include "hdd.h"
#include "donnees.h"
INODE* createFile(PARTITION* diskPartition, char* file, int* sizeTabInode, int fileSize);
void printFileNumber();
void readFile(PARTITION* diskPartition, char* fileName);
INODE* openFile (PARTITION* diskPartition, char* fileName, int* sizeTabInode);
void writeFile(HARD_DISK* disk, INODE* inode, int nbBytes);
