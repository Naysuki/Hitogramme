//
//  Histogramme.cpp
//  Partiel2017
//
//  Created by Anthony Nomezine on 08/12/2018.
//  Copyright © 2018 Nomezine. All rights reserved.
//

#include "Histogramme.hpp"
#include<vector>
#include<iostream>
using namespace std;

/* CONSTRUCTEURS */
Histogramme::Histogramme(){
   m_nbInter=0;
   m_max=0;
   m_min=0;
   m_nbData=0;
   m_vecInter=new double[m_nbInter];
    m_data=new double[m_nbData];
}


Histogramme::Histogramme(double min, double max, int nbInter)
//:m_min(min),m_max(max),m_nbInter(nbInter),m_nbData(nbData){}
{
    m_nbInter=nbInter;
    m_max=max;
    m_min=min;
    m_nbData=0;
    m_vecInter=new double[m_nbInter];
    m_data=new double[m_nbData];
    
    
}


Histogramme::Histogramme(double min, double max, int nbInter, double* data, int nbData){
    m_nbInter=nbInter;
    m_max=max;
    m_min=min;
    m_data=new double[m_nbData];
    m_nbData=nbData;
    m_vecInter=new double[m_nbInter];
}

Histogramme::Histogramme(Histogramme const& hist):m_nbData(hist.m_nbData),m_vecInter(hist.m_vecInter),m_data(hist.m_data),m_nbInter(hist.m_nbInter),m_max(hist.m_max),m_min(hist.m_min){}
/*DESTRUCTEURS */

Histogramme::~Histogramme()
{
    for (int i=0;i<m_nbData;i++)
    {
        m_data[i]=0;
    }
        delete m_data;
    for (int i=0;i<m_nbInter;i++)
    {
        m_vecInter[i]=0;
    }
        delete m_vecInter;

}
// Ajouter les données dans mon histogramme
void Histogramme::entData(int nbData)
{
    m_nbData=nbData;
    for (int i=0;i<nbData;i++)
    {
        cout<<"Entrez un résultat :"<<endl;
        int data(0);
        cin >> data ;
        m_data[i]=data;
        
    }
}
// AFFICHER L'HISTOGRAMME

void Histogramme::affichage()
{
    for (int i=0; i<m_nbInter; i++)
    {
        m_vecInter[i]=0;
    }
    for(int i=0;i<m_nbData;i++)
    {
        m_vecInter[(int)ceil(((m_data[i]-m_min)*m_nbInter)/(m_max-m_min))-1]++;
        
    }
    for (int i=0; i<m_nbInter; i++)
    {
        cout << "< "<<m_min+i*((m_max-m_min)/m_nbInter)<<" , "<<m_min+(i+1)*((m_max-m_min)/m_nbInter)<<"] "<<m_vecInter[i]<<endl;
    }
    
}









