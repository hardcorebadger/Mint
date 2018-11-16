//
//  File.cpp
//  Mint
//
//  Created by Jake Trefethen on 11/16/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#include "File.hpp"
#include <fstream>

namespace Mint {
    File::File(const string& s) : _path(s) {}
    File::~File() {}
    
//   void File::GetFilesForDirectory(const string& d, const  vector<File>& files) {
//       DIR* dirp = opendir(name.c_str());
//       struct dirent * dp;
//       while ((dp = readdir(dirp)) != NULL) {
//           files.push_back(dp->);
//       }
//       closedir(dirp);
//    }
    
    vector<string> File::Read() {
        vector<string> lines;
        ifstream in(_path);
        string line;
        if (in.is_open()) {
            while ( getline (in,line) ) {
                lines.push_back(line);
            }
            in.close();
        }
        return lines;
    }
    void File::WriteLine(const string& s) {
        ofstream out(_path);
        if (out.is_open())
            out << s << "\n";
    }
}
