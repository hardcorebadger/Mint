//
//  Core.h
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#ifndef Core_hpp
#define Core_hpp

#include <string>

struct Vector2 {
    int x; int y;
};
struct Vector3 {
    int x; int y; int z;
};
struct CharColor {
    short bg,fg;
};
struct MTChar {
    char Symbol;
    CharColor Color;
};
struct MTLabel {
    std::string val;
    CharColor Color;
};

#endif /* Core_hpp */
