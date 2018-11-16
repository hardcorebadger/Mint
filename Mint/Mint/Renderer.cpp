//
//  Renderer.cpp
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#include "Renderer.hpp"
#include "Engine.hpp"
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
        start_color();
        getmaxyx(stdscr, _height, _width);
        _window = newwin(_height, _width, 0, 0);
        werase(_window);
        wrefresh(_window);
        int i = SHOW_CONSOLE == 1 ? 10 : 0;
        _console = newwin(i, _width, _height-i, 0);
        _panel = new_panel(_window);
        _cPanel = new_panel(_console);
    }
    
    void Renderer::Update(){
        wrefresh(_window);
        werase(_window);
        wrefresh(_console);
        werase(_console);
    }
    
    void Renderer::Shutdown(){
        endwin();
    }
    
    void Renderer::Draw(const MTChar& c, const Vector2& pos, unsigned short pid) {
        WINDOW* w = pid == 0 ? _window : _console;
        wattron(w,COLOR_PAIR(ColorPair(c.Color)));
        mvwaddch(w, pos.y, pos.x, c.Symbol);
        wattroff(w,COLOR_PAIR(ColorPair(c.Color)));
    }
    
    void Renderer::Draw(const MTLabel& l, const Vector2& pos, unsigned short pid) {
        WINDOW* w = pid == 0 ? _window : _console;
        wattron(w,COLOR_PAIR(ColorPair(l.Color)));
        mvwprintw(w,pos.y,pos.x,l.val.c_str());
        wattroff(w,COLOR_PAIR(ColorPair(l.Color)));
    }
    
    void Renderer::Draw(const MTMesh& m, const Vector2& pos, unsigned short pid) {
        for (int i = 0; i < m.Chars.size(); i++) {
            Draw(m.Chars[i], m.Positions[i]+pos);
        }
    }

    int Renderer::ColorPair(CharColor c) {
        int h = Engine::Instance()->Hash(c.bg,c.fg);
        if (_colors.find(h) != _colors.end())
            return h;
        init_pair(h, c.fg, c.bg);
        _colors.insert(h);
        return h;
    }
}
