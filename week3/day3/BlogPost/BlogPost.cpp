//
// Created by aaron on 2019. 04. 17..
//

#include "BlogPost.h"

BlogPost::BlogPost(std::string _authorName, std::string _title, std::string _text, std::string _publlicationDate) {
    setauthorName(_authorName);
    settitle(_title);
    settext(_text);
    setpublicationDate(_publlicationDate);

}

BlogPost::BlogPost() {

}

void BlogPost::setauthorName(std::string authorName) {
    _authorName = authorName;
}

void BlogPost::settitle(std::string title) {
    _title = title;
}

void BlogPost::settext(std::string text) {
    _text = text;
}

void BlogPost::setpublicationDate(std::string publicationDate) {
    _publicationDate = publicationDate;
}

std::string BlogPost::getauthorName()
{
    return _authorName;
}

std::string BlogPost::gettitle()
{
    return _title;
}

std::string BlogPost::gettext()
{
    return _text;
}

std::string BlogPost::getpublicationDate()
{
    return _publicationDate;
}