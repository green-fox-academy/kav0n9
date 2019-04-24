//
// Created by aaron on 2019. 04. 24..
//

#ifndef INSTRUMENTS_STRINGEDINSTRUMENTS_H
#define INSTRUMENTS_STRINGEDINSTRUMENTS_H


#include "Instruments.h"

class StringedInstruments: public Instruments {
public:
    StringedInstruments(int numberOfStrings);
    StringedInstruments();
    virtual void sound() = 0;
    void play() override;

protected:
    int _numberOfStrings;
};


#endif //INSTRUMENTS_STRINGEDINSTRUMENTS_H
