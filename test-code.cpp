#include <iostream>
 
int main(int argc, char *argv[])
{
    double * noruns = [3];
    noruns[0] = new double [2];
    noruns[0][0] = 10; 
    
    std::cout << noruns[0][0] << std::endl;
    return 0;
}