//
//  AssetManager.hpp
//  Mint
//
//  Created by Jake Trefethen on 11/16/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#ifndef AssetManager_hpp
#define AssetManager_hpp

#include <stdio.h>
#include <map>
#include <string>
#include "Core.hpp"

using namespace std;

namespace Mint {
    class AssetManager {
    public:
        void LoadAssets();
        static MTMesh* GetMesh(const string& name);
    private:
        void ParseMesh(const vector<string>& contents, MTMesh*& m);
        map<string,MTMesh*> _meshes;
    };
}

#endif /* AssetManager_hpp */
