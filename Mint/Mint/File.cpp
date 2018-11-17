//
//  File.cpp
//  Mint
//
//  Created by Jake Trefethen on 11/16/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#include "File.hpp"
#include "Console.hpp"
#include <fstream>
#include <dirent.h>

namespace Mint {
    File::File(const string& s) : Path(s) {}
    File::~File() {}
    
   void File::GetFilesForDirectory(const string& d, vector<File>& files) {
       DIR* dirp = opendir(d.c_str());
       struct dirent * entry;
       while ((entry = readdir(dirp)) != NULL) {
           if( strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0 )
               files.push_back(File(d+"/"+entry->d_name));
       }
       closedir(dirp);
    }
    
    void File::Read(vector<string>& lines) {
        ifstream in(Path);
        string line;
        if (in.is_open()) {
            while ( getline (in,line) ) {
                lines.push_back(line);
            }
            in.close();
        }
    }
    void File::WriteLine(const string& s) {
        ofstream out(Path);
        if (out.is_open())
            out << s << "\n";
    }
}
