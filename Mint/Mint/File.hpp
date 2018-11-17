//
//  File.hpp
//  Mint
//
//  Created by Jake Trefethen on 11/16/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#ifndef File_hpp
#define File_hpp

#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

namespace Mint {
    class File {
    public:
        File(const string& s);
        ~File();
        static void GetFilesForDirectory(const string& d, vector<File>& files);
        void Read(vector<string>& lines);
        void WriteLine(const string& s);
        string Path;
    private:
        
    };
}

#endif /* File_hpp */
