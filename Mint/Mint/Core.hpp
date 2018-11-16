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
#include <vector>

#define SHOW_CONSOLE 1
#define TICK 140000

struct Vector2 {
    int x; int y;
    friend Vector2 operator+(Vector2 lhs, const Vector2& rhs) {
        return Vector2{lhs.x+rhs.x, lhs.y+rhs.y};
    }
};
struct Vector3 {
    int x; int y; int z;
};
enum Color {
    BLACK = 0,
    MAROON = 1,
    GREEN = 2,
    OLIVE = 3,
    NAVY = 4,
    PURPLE = 5,
    TEAL = 6,
    SILVER = 7,
    GREY = 8,
    RED = 9,
    LIME = 10,
    YELLOW = 11,
    BLUE = 12,
    FUCHSIA = 13,
    AQUA = 14,
    WHITE = 15
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
struct MTMesh {
    MTMesh(){}
    MTMesh(const char* chars, const CharColor* colors, const Vector2* pos, int size) {
        for (int i = 0; i < size; ++i) {
            Chars.push_back({chars[i],colors[i]});
            Positions.push_back(pos[i]);
        }
    }
    std::vector<MTChar> Chars;
    std::vector<Vector2> Positions;
};

#endif /* Core_hpp */
