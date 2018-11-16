//
//  Renderer.cpp
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#include "Renderer.hpp"
#include <unistd.h>
#include <iostream>

namespace Mint {
        
    void Renderer::Init(){
        initscr();
        curs_set(0);
        initscr();
        cbreak();
        keypad(stdscr, true);
        
        if(!has_colors()) {   endwin();
            printf("Your terminal does not support color\n");
            exit(1);
        }
        _curColor = -1;
        start_color();
        int h = 10, w = 10, x = 0, y = 0;
        _window = newwin(h, w, y, x);
        werase(_window);
        wrefresh(_window);
    }
    
    void Renderer::Update(){
        wrefresh(_window);
        werase(_window);
    }
    
    void Renderer::Shutdown(){
        endwin();
    }
    
    void Renderer::Draw(const Chixel& icon, const Vector2& pos) {
        wattron(_window,COLOR_PAIR(icon.Colors));
        mvwaddch(_window, pos.y, pos.x, icon.Symbol);
        wattroff(_window,COLOR_PAIR(icon.Colors));
    }

    int Renderer::GenerateColorPair(short bg, short fg) {
        _curColor++;
        init_pair(_curColor, fg, bg);
        return _curColor;
    }
}
