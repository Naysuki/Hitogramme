//
//  main.cpp
//  Partiel2017
//
//  Created by Anthony Nomezine on 08/12/2018.
//  Copyright © 2018 Nomezine. All rights reserved.
//

#include <iostream>
#include "Histogramme.hpp"
using namespace std;

int main() {
    
    double *notes=new double[6];
    notes [0]=9;
    notes [1]=9;
    notes [2]=12;
    notes [3]=17;
    notes [4]=11;
    notes [5]=15;
    
    Histogramme resultats(0,20,4,notes,6);
    
    resultats.affichage();

    
    return 0;
}
