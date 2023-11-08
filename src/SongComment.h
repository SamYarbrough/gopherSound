#ifndef GOPHERSOUND_SONGCOMMENT_H
#define GOPHERSOUND_SONGCOMMENT_H

#include <string>

class SongComment {
private:
    std::string comment;

public:
    SongComment();

    static bool isUnderLengthLimit(std::string);
    
    void setComment(std::string);
    std::string getComment();
};

SongComment::SongComment() { comment = ""; }

bool SongComment::isUnderLengthLimit(std::string com) { return com.length() <= 65536; }

void SongComment::setComment(std::string com) { comment = com; }
std::string SongComment::getComment() { return comment; }

#endif