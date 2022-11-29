#pragma once // previene definiciones múltiples (igual que guardas)

class Posicion{
    public:
        Posicion();
        Posicion(int, int);
        int getPosX() const;
        int getPosY() const;
        void setPosX(int);
        void setPosY(int);
        int igual(Posicion&);
        void imprime();
    private:
        int posX;
        int posY;
};