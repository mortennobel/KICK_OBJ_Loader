//
//  ObjInterleavedData.h
//  KickObjLoader
//
//  Created by morten on 9/2/13.
//  Copyright (c) 2013 morten. All rights reserved.
//

#pragma once
#include <iostream>
#include <vector>
#include <string>

namespace kick {
    struct ObjInterleavedIndex {
        std::string materialName;
        std::vector<int> vertexIndices;
    };
    
    struct ObjInterleavedData {
        std::vector<float> interleavedData;
        std::vector<ObjInterleavedIndex> indices;
    };
}