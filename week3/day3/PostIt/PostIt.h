//
// Created by aaron on 2019. 04. 17..
//

#ifndef POSTIT_POSTIT_H
#define POSTIT_POSTIT_H
#include <iostream>

class PostIt{
public:
    PostIt(std::string backgroundColor, std::string text, std::string textColor);
    PostIt();
    void setbackground(std::string backgroundColor);
    void settext(std::string text);
    void settextcol(std::string textColor);
    std::string getbackground();
    std::string gettext();
    std::string gettextcol();

private:
    std::string _backgroundColor;
    std::string _text;
    std::string _textColor;

};


#endif //POSTIT_POSTIT_H
