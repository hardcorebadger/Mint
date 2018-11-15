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
    Sandbox(){}
    ~Sandbox(){}
};

Mint::Application* Mint::CreateApplication() {
    return new Sandbox();
}
