#include "Class_BlackQueen.h"

class Empty : public Box
{
    string name =" ___ ";
    string type ="NA";
public:
    string getName()
    {
        return name;
    }
    string getType()
    {
        return type;
    }
    void possibleMovement(int i, int j)
    {

    }
    string getPiece()
    {
        return "NA";
    }
    string takePiece()
    {
        return " ";
    }
    static void swa(char &a,char &b)
    {
        char temp =a;
        a=b;
        b=temp;
    }
};
