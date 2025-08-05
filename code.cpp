#include <iostream>
using namespace std;

int main() {
    
    float pencil , pen , eraser , total;
    
    cout<<"Enter Pencil Rs = ";
    cin>>pencil;

    cout<<"Enter Pen Rs = ";
    cin>>pen;

    cout<<"Enter Eraser Rs = ";
    cin>>eraser;

    total = (pen + pencil + eraser)+0.18;

    cout<<"Your Total Amount = "<<total<<endl;
    
    return 0;
}