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
    }
    void Update() {
        if (rand()%2 == 0)
            Console::Log("hi");
        if (rand()%2 == 0)
            Console::LogWarning("hi");
        if (rand()%2 == 0)
            Console::LogError("hi");
        Engine::Instance()->MTRenderer.Draw({'f',{0,Color::RED}}, {2,2});
        Engine::Instance()->MTRenderer.Draw({"whats up", {0,Color::BLUE}}, {2,3});
    }
};

Mint::Application* Mint::CreateApplication() {
    return new Sandbox();
}
