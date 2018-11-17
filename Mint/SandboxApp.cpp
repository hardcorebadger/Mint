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
    Sandbox() {}
    ~Sandbox(){}
    void Init() {
    }
    void Update() {
        Engine::Instance()->MTRenderer.Draw(*AssetManager::GetMesh("Assets/fish.mtmesh"), {4,4});
        Engine::Instance()->MTRenderer.Draw(*AssetManager::GetMesh("Assets/whale.mtmesh"), {13,7});
    }
};

Mint::Application* Mint::CreateApplication() {
    return new Sandbox();
}
