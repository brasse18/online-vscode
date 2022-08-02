#include <iostream>
 
int main(int argc, char *argv[])
{
    double ** noruns = new double * [3];
    noruns[0] = new double [2];
    noruns[0][0] = 0.1;
    noruns[0][1] = 0.1;

    noruns[1] = new double [6];
    noruns[1] = new double [2];
 
    

    std::cout << noruns[0][0] <<    "   "   << noruns[1][0] << " " << noruns[2][0]   << std::endl;
    std::cout <<                    "   "   << noruns[1][1]                          << std::endl;
    std::cout << noruns[0][1] <<    "   "   << noruns[1][2]                          << std::endl;
    std::cout <<                    "   "   << noruns[1][3]                          << std::endl;
    std::cout << noruns[0][2] <<    "   "   << noruns[1][4] << " " << noruns[2][0]   << std::endl;
    std::cout <<                    "   "   << noruns[1][5]                          << std::endl;
    return 0;
}


// compile at https://paiza.io/projects/SYHdy89R-BJG4xET_p004A?language=cpp