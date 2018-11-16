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
    MTMesh r;
    Sandbox() {}
    ~Sandbox(){}
    void Init() {
        char ch[] = {'a','b','c'};
        CharColor cc[] = {{Color::YELLOW,Color::RED},{0,Color::BLUE},{Color::YELLOW,Color::GREEN}};
        Vector2 v[] = {{0,0},{1,1},{2,2}};
        r = MTMesh(ch,cc,v,3);
    }
    void Update() {
        Engine::Instance()->MTRenderer.Draw(r, {4,4});
        Engine::Instance()->MTRenderer.Draw({"whats up", {0,Color::BLUE}}, {2,3});
    }
};

Mint::Application* Mint::CreateApplication() {
    return new Sandbox();
}
