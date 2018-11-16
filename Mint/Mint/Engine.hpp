//
//  Engine.hpp
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#ifndef Engine_hpp
#define Engine_hpp

#include <stdio.h>
#include "Renderer.hpp"
#include "Application.hpp"

namespace Mint {
    class Engine {
    public:
        Engine();
        ~Engine();
        static Engine* Instance();
        void Init(Application* app);
        void Shutdown();
        void Run();
        Renderer MTRenderer;
        Application* MTApplication;
    };
}

#endif /* Engine_hpp */
