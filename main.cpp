/*********************************\
*                                 *
*    Big Project 1, Exercise 6    *
*        S-A-S Calculator         *
*       @author Kavan Olesh       *
*       @created 2/25/17          *
*                                 *
\*********************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI=3.14159;

double  lengthAB, lengthBC, lengthAC,
        angleA, angleC,                             //Angles in radians
        finalAngleA, finalAngleB, finalAngleC,      //Angles in degrees

        cosC, aCosA,                                //used in calculations
        angleAnumerator, angleAdenominator;         //used in calculations

int main(){

        cout<<"Please enter the length of side A: ";
        cin>>lengthBC;
        cout<<"Please enter the length of side B: ";
        cin>>lengthAC;
        cout<<"And the angle they share: ";
        cin>>finalAngleC;

        angleC=finalAngleC*PI/180;
        cosC=cos(angleC);

        if (cosC<.0001)
        {
            cosC=0;                    //Prevents C++ rounding error in this specific circumstance
        }

        lengthAB=sqrt(pow(lengthBC, 2)+pow(lengthAC, 2)+(-2*lengthBC*lengthAC*cosC));                 //Law of cosines for 3rd side length

        angleAnumerator=(pow(lengthBC, 2)-pow(lengthAC, 2)-pow(lengthAB, 2));
        angleAdenominator=-2*lengthAC*lengthAB;
        aCosA=angleAnumerator/angleAdenominator;                                                      //Angle A, Law of Cosines
        angleA=acos(aCosA);
        finalAngleA=(angleA*180/PI);

        finalAngleB=180-finalAngleA-finalAngleC;

        cout<<"\nYour three triangle sides are:"<<endl
            <<"Side A: "<<fixed<<setprecision(1)<<lengthBC<<endl
            <<"Side B: "<<fixed<<setprecision(1)<<lengthAC<<endl
            <<"Side C: "<<fixed<<setprecision(1)<<lengthAB<<endl;

        cout<<"\nYour three triangle angles are:"<<endl
            <<"Angle A: "<<fixed<<setprecision(1)<<finalAngleA<<endl
            <<"Angle B: "<<fixed<<setprecision(1)<<finalAngleB<<endl
            <<"Angle C: "<<fixed<<setprecision(1)<<finalAngleC<<endl;

    return 0;

}
