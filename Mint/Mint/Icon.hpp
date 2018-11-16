//
//  Icon.hpp
//  Mint
//
//  Created by Jake Trefethen on 11/15/18.
//  Copyright © 2018 Jake Trefethen. All rights reserved.
//

#ifndef Icon_hpp
#define Icon_hpp

#include <stdio.h>

namespace Mint {
    struct Icon {
        Icon(){}
        Icon(short bg, short fg, char i);
        ~Icon();
        char Symbol;
        int Colors;
    };
}

#endif /* Icon_hpp */
