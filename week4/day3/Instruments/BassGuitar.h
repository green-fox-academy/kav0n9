//
// Created by aaron on 2019. 04. 24..
//

#ifndef INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_BASSGUITAR_H


#include "StringedInstruments.h"

class BassGuitar : public StringedInstruments {
public:
    BassGuitar(int numberOfStrings);
    BassGuitar();
    void sound() override;

};


#endif //INSTRUMENTS_BASSGUITAR_H
