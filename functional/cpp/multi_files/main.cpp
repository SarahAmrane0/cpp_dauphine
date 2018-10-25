
#include "discount_factor.hpp"
#include "bond_pricer.hpp"
int main(int argc, char* argv[])
{
    // Uncomment the following line
    double df = discount_factor(0.04, 1.5);
    std::cout << df << std::endl;
    return 0;
}

static int check= 1; 
