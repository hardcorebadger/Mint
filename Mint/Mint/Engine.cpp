//
//  Engine.cpp
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#include "Engine.hpp"
#include <iostream>
#include <unistd.h>

using namespace std;

namespace Mint {
    
    //  static access points

    static Engine* EngineInstance = NULL;
    
    Engine* Engine::Instance() {
        if (!EngineInstance)
            EngineInstance = new Engine();
        return EngineInstance;
    }
    
    // engine
    
    Engine::Engine() {
    }
    
    Engine::~Engine() {
    }
    
    void Engine::Init(Application * app) {
        MTApplication = app;
        MTRenderer.Init();
        app->Init();
    }
    
    void Engine::Run() {
        while (true) {
            MTApplication->Update();
            MTRenderer.Update();
            usleep(14000);
        }
    }
    
    void Engine::Shutdown() {
        delete MTApplication;
    }
    
}
