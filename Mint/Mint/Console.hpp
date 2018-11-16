//
//  Console.hpp
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#ifndef Console_hpp
#define Console_hpp

#include <stdio.h>
#include "Core.hpp"
#include <string>
#include <vector>

using namespace std;

namespace Mint {
    class Console {
    public:
        Console();
        static void Log(const string& s);
        static void LogWarning(const string& s);
        static void LogError(const string& s);
        void Update();
    private:
        CharColor _logColor,_warningColor,_errorColor;
        vector<MTLabel> _logBuffer;
    };
}

#endif /* Console_hpp */
