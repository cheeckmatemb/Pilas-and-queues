#pragma once
#include <ostream>
using namespace std;

class Vagon {
private:
    bool asientos[40];
    bool clase;
public:
    Vagon();
    Vagon(bool clase);
    bool getAsiento(int ind);
    void setAsiento(int ind);
    bool getClase();
    void setClase(bool clase);
    void ocupar();
    void asientosOcupados();
    int  contarOcupados();
    friend ostream& operator<<(ostream&, Vagon&);
};
