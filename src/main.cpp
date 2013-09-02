//
//  main.cpp
//  KickObjLoader
//
//  Created by morten on 8/31/13.
//  Copyright (c) 2013 morten. All rights reserved.
//

#include <iostream>
#include <iostream>
#include "ObjLoad.h"
#include "ObjSave.h"
#include "ObjInterleavedData.h"
#include <glm/ext.hpp>

using namespace std;
using namespace glm;

int main(int argc, const char * argv[])
{
    auto res = kick::loadObjData("/Users/morten/Programmering/cpp/KICK_OBJ_Loader/data", "mesh.obj");
    kick::ObjInterleavedData interleaved{res};
    for (int index : interleaved.indices[0].vertexIndices){
        cout << "Vertex "<<to_string(interleaved.vertex(index)) << endl;
        cout << "Normal "<<to_string(interleaved.normal(index)) << endl;
    }
    // kick::saveObjData(res, "/Users/morten/Programmering/cpp/KickObjLoader/data", "mesh-saved.obj");
    
    return 0;
}

