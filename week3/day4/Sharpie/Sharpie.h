//
// Created by aaron on 2019. 04. 18..
//

#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H


class Sharpie {
public:
    Sharpie(std::string color, float width);
    Sharpie();

    void setColor(std::string color);
    void setWidth(float width);
    void setinkAmount(float inkAmount);

    std::string getcolor();

    float getwidth();

    float getinkAmount();

    void use();

private:
    std::string _color;
    float _width;
    float _inkAmount;

};



#endif //SHARPIE_SHARPIE_H
