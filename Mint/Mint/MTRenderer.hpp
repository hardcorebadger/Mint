//
//  MTRenderer.hpp
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#ifndef MTRenderer_hpp
#define MTRenderer_hpp

#include <stdio.h>
#include <vector>
#include "Core.hpp"
namespace Mint {
    struct MTRenderer {
        MTRenderer(const char*& chars, const CharColor*& colors, const Vector2*& pos, int size) {
            for (int i = 0; i < size; ++i) {
                _chars.push_back({chars[i],colors[i]});
                _positions.push_back(pos[i]);
            }
        }
        std::vector<MTChar> _chars;
        std::vector<Vector2> _positions;
    };
}
#endif /* MTRenderer_hpp */
