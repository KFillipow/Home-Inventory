#include "../include/inv_functions.h"


void CreateNewStorage(char* StorName)
{
    FILE *fp;

    char AppendStr[100]; 
    const char AppendTxt[4] = ".txt";
    char StorDir[100] = "../storages/";
    
    strncat(StorDir,&StorName,100); //Append name to StorDir
    strncat(StorDir,&AppendTxt,4); //Append .txt to AppendStr
    fp = open(StorDir,"r");
}

void CreateNewItem(char* ItemName, char* StorName)
{
    FILE *fp;
    fp = fopen()
}