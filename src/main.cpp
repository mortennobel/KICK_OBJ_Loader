//
//  main.cpp
//  KickObjLoader
//
//  Created by morten on 8/31/13.
//  Copyright (c) 2013 morten. All rights reserved.
//

#include <iostream>

#include "ObjLoad.h"
#include "ObjSave.h"

int main(int argc, const char * argv[])
{

    // insert code here...
    auto res = kick::loadObjData("/Users/morten/Programmering/cpp/KickObjLoader/data", "mesh.obj");
    
    kick::saveObjData(res, "/Users/morten/Programmering/cpp/KickObjLoader/data", "mesh-saved.obj");
    
    return 0;
}

