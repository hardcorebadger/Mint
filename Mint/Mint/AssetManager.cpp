//
//  AssetManager.cpp
//  Mint
//
//  Created by Jake Trefethen on 11/16/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#include "Engine.hpp"
#include "AssetManager.hpp"
#include "File.hpp"
#include <iostream>
#include <sstream>

namespace Mint {
    void AssetManager::LoadAssets() {
        vector<File> assetFiles;
        File::GetFilesForDirectory("Assets", assetFiles);
        for (int i = 0; i < assetFiles.size(); ++i) {
            // assume all meshes for now
            vector<string> contents;
            assetFiles[i].Read(contents);
            MTMesh* m = NULL;
            ParseMesh(contents, m);
            _meshes[assetFiles[i].Path] = m;
        }
        char buff[100];
        sprintf(buff, "Mint successfully loaded %lu assets.", assetFiles.size());
        Console::Log(buff);
    }
    
    void AssetManager::ParseMesh(const vector<string>& contents, MTMesh*& m) {
        vector<MTChar> Chars;
        vector<Vector2> Positions;
        int line = 0;
        int meshHeight = stoi(contents[line]);
        int x = 0, y = 0;
        vector<char> characters;
        for (line = 1; line < meshHeight+1; ++line) {
            for(const char& c : contents[line]) {
                characters.push_back(c);
                Positions.push_back({x,y});
                ++x;
            }
            ++y;
            x = 0;
        }
        int i = 0;
        for (; line < meshHeight+1+characters.size(); ++line) {
            istringstream iss(contents[line]);
            vector<string> split((istream_iterator<std::string>(iss)),std::istream_iterator<std::string>());
            Chars.push_back({characters[i],{(short)stoi(split[0]), (short)stoi(split[1])}});
            ++i;
        }
        m = new MTMesh(Chars,Positions);
    }
    
    MTMesh* AssetManager::GetMesh(const string& name) {
        return Engine::Instance()->MTAssetManager._meshes[name];
    }
}
