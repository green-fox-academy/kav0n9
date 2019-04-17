//
// Created by aaron on 2019. 04. 17..
//

#ifndef BLOGPOST_BLOGPOST_H
#define BLOGPOST_BLOGPOST_H


#include <iostream>

class BlogPost {
public:
    BlogPost(std::string authorName, std::string title, std::string text, std::string publlicationDate);

    BlogPost();

    void setauthorName(std::string authorName);

    void settitle(std::string title);

    void settext(std::string text);

    void setpublicationDate(std::string publicationDate);

    std::string getauthorName;
    std::string gettitle;
    std::string gettext;
    std::string getpublicationDate;

private:
    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _publicationDate;

};


#endif //BLOGPOST_BLOGPOST_H
