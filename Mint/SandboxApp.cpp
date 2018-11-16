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
    Chixel i;
    Sandbox() {}
    ~Sandbox(){}
    void Init() {
        i = Chixel(3,4,'f');
    }
    void Update() {
        Engine::Instance()->MTRenderer.Draw(i, Vector2{2,2});
    }
};

Mint::Application* Mint::CreateApplication() {
    return new Sandbox();
}
