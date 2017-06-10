#pragma once

#include "cVector3.h"
#include "cMatrix33.h"

#include <math.h>

class cMatrix44 {

public:

    double				m[4][4];
    cMatrix44();
    cMatrix44(double mat[4][4]);
    cMatrix44(const cMatrix33 &rot, const cVector3 &shift);
    cMatrix44(const float alpha, const float beta, const float R);

    void setGradAlpha(const float alpha, const float beta, const float R);
    void setGradBeta(const float alpha, const float beta, const float R);

    cMatrix44			operator*(const cMatrix44 &mat) const;
    cVector3			operator*(const cVector3 &vec) const;
    void				operator*=(double d);
    void                ones();
        
    void				print();   
	
    inline const double& operator()(std::size_t i, std::size_t j) const { return m[i][j]; }
    inline       double& operator()(std::size_t i, std::size_t j)       { return m[i][j]; }
};



