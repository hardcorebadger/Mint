//
//  Console.cpp
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#include "Console.hpp"
#include "Engine.hpp"

namespace Mint {
    Console::Console() {
        _logColor = {0,Color::WHITE};
        _warningColor = {0,Color::YELLOW};
        _errorColor = {0,Color::RED};
    }
    void Console::Log(const string& s) {
        _logBuffer.push_back(MTLabel{"[Log]: "+s,_logColor});
    }
    void Console::LogWarning(const string& s) {
        _logBuffer.push_back(MTLabel{"[Warning]: "+s,_warningColor});
    }
    void Console::LogError(const string& s) {
        _logBuffer.push_back(MTLabel{"[Error]: "+s,_errorColor});
    }
    void Console::Update() {
        int i = 0;
        for (int l = (int)_logBuffer.size()-1; l >= 0; --l) {
            if (i > 10)
                break;
            if (l < 0)
                break;
            Engine::Instance()->MTRenderer.Draw(_logBuffer[l], Vector2{0,i}, 1);
            i++;
        }

    }
}
