/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PGM.h
 * Author: eleve
 *
 * Created on 22 novembre 2018, 11:56
 */

#ifndef PGM_H
#define PGM_H

class PGM {
public:
    PGM();
    PGM(const PGM& orig);
    virtual ~PGM();
    

    
private:
    //dimensions de l'image
    int largeur;
    int hauteur;
    
    int pixels[taille][taille];
};

#endif /* PGM_H */

