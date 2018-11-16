//
//  SandboxApp.cpp
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#include <stdio.h>
#include "Mint.h"

class Sandbox : public Mint::Application {
public:
    MTChar i;
    Sandbox() {}
    ~Sandbox(){}
    void Init() {
        i = MTChar{'f',CharColor{6,9}};
        Engine::Instance()->MTConsole.Log("hi");
        Engine::Instance()->MTConsole.LogWarning("hi");
        Engine::Instance()->MTConsole.LogError("hi");
    }
    void Update() {
        if (rand()%2 == 0)
        Engine::Instance()->MTConsole.Log("hi");
        if (rand()%2 == 0)
        Engine::Instance()->MTConsole.LogWarning("hi");
        if (rand()%2 == 0)
        Engine::Instance()->MTConsole.LogError("hi");
        Engine::Instance()->MTRenderer.Draw(i, Vector2{2,2});
    }
};

Mint::Application* Mint::CreateApplication() {
    return new Sandbox();
}
