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
        MTAssetManager.LoadAssets();
        app->Init();
    }
    
    void Engine::Run() {
        while (true) {
            MTApplication->Update();
            MTConsole.Update();
            MTRenderer.Update();
            usleep(TICK);
        }
    }
    
    void Engine::Shutdown() {
        delete MTApplication;
    }
    
    int Engine::Hash(int a, int b) {
        return ((a+b)*(a+b+1)/2)+a;
    }
    
}
