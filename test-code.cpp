#include <iostream>
 
int main(int argc, char *argv[])
{
    double ** noruns = new double * [3];
    noruns[0] = new double [2];
    noruns[0][0] = 0.1;
    noruns[0][1] = 0.1; 
    
    std::cout << noruns[0][0] << std::endl;
    return 0;
}