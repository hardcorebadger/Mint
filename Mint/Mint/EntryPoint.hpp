//
//  EntryPoint.h
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#ifndef EntryPoint_hpp
#define EntryPoint_hpp

#include "Engine.hpp"

using namespace Mint;

extern Application* Mint::CreateApplication();

int main(int argc, char** argv) {
    Application*  app = CreateApplication();
    Mint::Engine::Instance()->Init(app);
    Mint::Engine::Instance()->Run();
    delete app;
}

#endif /* EntryPoint_hpp */
