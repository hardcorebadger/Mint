//
//  Renderer.hpp
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//
//  handles NCurses directly, abstracts to window and icon primitive level

#ifndef Renderer_h
#define Renderer_h

#include <string>
#include "ncurses.h"
#include <map>
#include "Icon.hpp"
#include "Core.hpp"

using namespace std;

namespace Mint {
        
    class Renderer {
    public:
        void Init();
        void Update();
        void Shutdown();
        void Draw(const Icon& icon, const Vector2& pos);
        int GenerateColorPair(short bg, short fg);
    private:
        int _curColor;
        WINDOW* _window;
    };
}

#endif /* Renderer_hpp */
