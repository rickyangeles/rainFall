//
//  main.cpp
//  rain
//
//  Created by Ricky Cabrera on 9/18/19.
//  Copyright © 2019 Ricky Cabrera. All rights reserved.
//

#include <iostream>

int main() {

    //Variables
    std::string m, m1, m2, m3;
    double r1, r2, r3, tr, ar;
    
    std::cout << "What is the first month? ";
    std::cin  >> m1;
    std::cout << "How much did it rain in " << m1 << "? ";
    std::cin  >> r1;
    std::cout << "What is the second month? ";
    std::cin  >> m2;
    std::cout << "How much did it rain in " << m2 << "? ";
    std::cin  >> r2;
    std::cout << "What is the third month? ";
    std::cin  >> m3;
    std::cout << "How much did it rain in " << m3 << "? ";
    std::cin  >> r3;
    
    tr = r1 + r2 + r3;
    ar = tr / 3;
    
    std::cout << "Total Rain: " << tr << std::endl;
    std::cout << "Average Rain: " << ar;
    
    return 0;
}
