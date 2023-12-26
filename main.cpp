
#include <iostream>
#include <pbc.h>

using namespace std;

int main() {
    // define variables
    pairing_t pairing;
    pbc_param_t par;
    element_t g, h;

    // initialization
    pbc_param_init_a_gen(par, 160, 512);
    pairing_init_pbc_param(pairing, par);
    element_init_G2(g, pairing);
    element_init_G1(h, pairing);

    // get random value
    element_random(g);
    element_random(h);

    // print element
    element_printf("g = %B\n",g);
    element_printf("h = %B\n",h);
    return 0;
}