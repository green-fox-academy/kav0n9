//
// Created by aaron on 2019. 04. 24..
//

#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H


#include "StringedInstruments.h"

class Violin : public StringedInstruments {
public:
    Violin(int numberOfStrings);
    Violin();
    void sound() override;

};


#endif //INSTRUMENTS_VIOLIN_H
