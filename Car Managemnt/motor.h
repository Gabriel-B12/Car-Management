#ifndef MOTOR_H
#define MOTOR_H

#include <QString>

class motor
{
    float capacitate;
    int putere;
    QString combustibil;
    public:
        motor( float capacitate=0, int putere=0,QString combustibil="")
    {
        this->capacitate=capacitate;
        this->putere=putere;
        this->combustibil=combustibil;
    }
        float getCapacitate(){return capacitate;}
        int getPutere(){return putere;}
        QString getCombustibil(){return combustibil;}

        void setCapacitate(float a){capacitate=a;}
        void setPutere(int a){putere=a;}
        void setCombustibil(QString a){combustibil=a;}
        ~motor()=default;


};


#endif // MOTOR_H
