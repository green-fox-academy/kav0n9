//
// Created by aaron on 2019. 04. 24..
//

#ifndef INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_ELECTRICGUITAR_H


#include "StringedInstruments.h"

class ElectricGuitar : public StringedInstruments {
public:
    ElectricGuitar(int numberOfStrings);
    ElectricGuitar();
    void sound() override;

};


#endif //INSTRUMENTS_ELECTRICGUITAR_H
