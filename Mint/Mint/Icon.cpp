//
//  Icon.cpp
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#include "Icon.hpp"
#include "Engine.hpp"

namespace Mint {
    Icon::Icon(short bg, short fg, char i) : Symbol(i) {
        Colors = Engine::Instance()->MTRenderer.GenerateColorPair(bg,fg);
    }
    Icon::~Icon() {}
}
