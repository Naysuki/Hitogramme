//
//  Histogramme.hpp
//  Partiel2017
//
//  Created by Anthony Nomezine on 08/12/2018.
//  Copyright © 2018 Nomezine. All rights reserved.
//

#ifndef Histogramme_hpp
#define Histogramme_hpp

#include <stdio.h>
#include<vector>
#include<iostream>




class Histogramme {
public:
    
    int getNbInter( ){
        std::cout<<m_nbInter<<std::endl;
        return (m_nbInter); // RENVOIE LE NOMBRE D'INTERVAL
    }
    // AJOUTER DES VALEURS A L'HISTOGRAMME
    void entData(int nbData);
    
    // CONSTRUCTEURS
    Histogramme();
    Histogramme(double min, double max, int nbinter);
    Histogramme(double min, double max, int nbInter, double* data, int nbData);
    Histogramme(Histogramme const&  Histoacopier);
    
    //DESTRUCTEURS
    ~Histogramme();
    
    //COPIE
    
    
    // AFFICHAGE DE L'HISTOGRAMME
    void affichage();
  
private:
      //ATTRIBUTS
    int m_nbData;
    double m_min;
    double m_max;
    int m_nbInter;
    double *m_data;
    double *m_vecInter;
};
#endif /* Histogramme_hpp */
