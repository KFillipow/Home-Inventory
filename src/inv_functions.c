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
    fclose(fp);
}

void CreateNewItem(char* ItemName, char* StorName)
{
    FILE *fp;

    char AppendStr[100]; 
    const char AppendTxt[4] = ".txt";
    char StorDir[100] = "../storages/";

    //TODO check to make sure StorName exists

    strncat(StorDir,&StorName,100); //Append name to StorDir
    strncat(StorDir,&AppendTxt,4); //Append .txt to AppendStr
    fp = open(StorDir,"w");

    fputs(ItemName,fp);//Add item name to StorDie
    fputs("\n", fp); //Add newline
    fclose(fp);
}