//
//  EntryPoint.h
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#ifndef EntryPoint_h
#define EntryPoint_h

extern Mint::Application* Mint::CreateApplication();

int main(int argc, char** argv) {
    auto app = Mint::CreateApplication();
    app->Run();
    delete app;
}

#endif /* EntryPoint_h */
