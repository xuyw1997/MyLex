//
// Created by Logan Xu on 2018/11/3.
//

#include "util.h"
static int id = 1;
static int dfaId = 0;
extern
int getId(){
    return id++;
}
int getDFAId(){
    return dfaId++;
}



