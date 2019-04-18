//
// Created by aaron on 2019. 04. 17..
//

#include "PostIt.h"

PostIt::PostIt(std::string backgroundColor, std::string text, std::string textColor)
{
setbackground(backgroundColor);
settext(text);
settextcol(textColor);

}

PostIt::PostIt() {

}

void PostIt::setbackground(std::string backgroundColor)
{
    _backgroundColor = backgroundColor;
}

void PostIt::settext(std::string text)
{
    _text = text;
}

void PostIt::settextcol(std::string textColor)
{
    _textColor = textColor;
}

std::string PostIt::getbackground()
{
    return _backgroundColor;
}

std::string PostIt::gettext()
{
    return _text;
}

std::string PostIt::gettextcol()
{
    return _textColor;
}



