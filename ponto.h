class ponto{
private:
    float x, y;

public:
    // construtor
    ponto();
    ponto(float x, float y);

    float dist();

    // sets
    void setX(float Px);
    void setY(float Py);

    // gets
    float getX();
    float getY();
};
