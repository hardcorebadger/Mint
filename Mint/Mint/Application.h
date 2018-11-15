//
//  Application.hpp
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#ifndef Application_hpp
#define Application_hpp

#include <stdio.h>

namespace Mint {
    
    class Application {
    public:
        Application();
        virtual ~Application();
        void Run();
    };
    
    // to be defined in client
    Application* CreateApplication();
}


#endif /* Application_hpp */
