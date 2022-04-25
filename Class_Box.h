#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
fstream fileEdit;
string place(int i,int j)
{
    string temp="";
    temp=temp+(char)(j+97);
    temp=temp+(char)(i+49);
    return temp;
}
class Box
{
    public:
    virtual string getType()=0;
    virtual string getName()=0;
    virtual string getPiece()=0;
    virtual string takePiece()=0;
    virtual void possibleMovement(int i,int j)=0;
};
vector<string> possible;
bool verify(string t)
{
    for(int i=0;i<possible.size();i++)
        if(t==possible[i])
            return true;
    return false;
}
Box *board[8][8];

vector<string> Range;
