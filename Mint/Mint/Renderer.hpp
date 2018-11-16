//
//  Renderer.hpp
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//
//  handles NCurses directly, abstracts to window and icon primitive level
//  https://jonasjacek.github.io/colors/ to check colors

#ifndef Renderer_h
#define Renderer_h

#include <string>
#include "ncurses.h"
#include <panel.h>
#include <set>
#include "Core.hpp"

using namespace std;

namespace Mint {
        
    class Renderer {
    public:
        void Init();
        void Update();
        void Shutdown();
        void Draw(const MTChar& c, const Vector2& pos, unsigned short pid = 0);
        void Draw(const MTLabel& l, const Vector2& pos, unsigned short pid = 0);
        int ColorPair(CharColor c);
    private:
        WINDOW* _window;
        PANEL* _panel;
        WINDOW* _console;
        PANEL* _cPanel;
        int _width,_height;
        set<int> _colors;
    };
    
}

#endif /* Renderer_hpp */
