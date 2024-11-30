//
// Created by ferran on 22/10/2024.
//

#ifndef SONG_H
#define SONG_H
#include <string>
#include "MediaItem.h"

class Song : public MediaItem {
protected:
public:
private:
    std::string mTitle;
    std::string mArtist;
    std::string mAlbum;
    std::string mGenre;
    std::string mComposer;
    std::string mLyrics;
    std::string mFormat;

    int mDurationInSeconds;
    int mTrackNumber;
    int mDiscNumber;
};



#endif //SONG_H
