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
//        static void GetFilesForDirectory(const string& d, const vector<File>& files);
        vector<string> Read();
        void WriteLine(const string& s);
    private:
        string _path;
    };
}

#endif /* File_hpp */
