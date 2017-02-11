#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include "cJSON.h"

int main(int argc, const char* argv[])
{
    //创建一个对象
    cJSON * json=cJSON_CreateObject();

    //往对象添加Item
    cJSON_AddItemToObject(json,"name",cJSON_CreateString("牛永旺"));
    cJSON_AddItemToObject(json,"age",cJSON_CreateNumber(24));
    
    //往对象添加数组
    cJSON *array=cJSON_CreateArray();
    cJSON_AddItemToObject(json,"love",array);
    //往数组添加value
    cJSON_AddItemToArray(array,cJSON_CreateString("NBA"));
    cJSON_AddItemToArray(array,cJSON_CreateString("JUMP"));
    cJSON_AddItemToArray(array,cJSON_CreateString("SONG"));

    

    return 0;
}
