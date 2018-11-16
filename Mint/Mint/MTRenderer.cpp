//
//  MTRenderer.cpp
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#include "MTRenderer.hpp"

namespace Mint {
    MTRenderer::MTRenderer(const char*& chars, const CharColor*& colors, const Vector2*& pos, int size) {
        for (int i = 0; i < size; ++i) {
            _chars.push_back({chars[i],colors[i]});
            _positions.push_back(pos[i]);
        }
    }
}
