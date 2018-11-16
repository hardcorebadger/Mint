//
//  Icon.cpp
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#include "Chixel.hpp"
#include "Engine.hpp"

namespace Mint {
    Chixel::Chixel(short bg, short fg, char i) : Symbol(i) {
        Colors = Engine::Instance()->MTRenderer.GenerateColorPair(bg,fg);
    }
    Chixel::~Chixel() {}
}
