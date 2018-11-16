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

#define SHOW_CONSOLE 1

struct Vector2 {
    int x; int y;
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

#endif /* Core_hpp */
