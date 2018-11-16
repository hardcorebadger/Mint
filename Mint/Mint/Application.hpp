//
//  Application.hpp
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#ifndef Application_h
#define Application_h

namespace Mint {
    
    class Application {
    public:
        Application();
        virtual ~Application();
        virtual void Init();
        virtual void Update();
    };
    
    // to be defined in client
    Application* CreateApplication();
}


#endif /* Application_hpp */
