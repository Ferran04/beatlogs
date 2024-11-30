//
// Created by ferra on 22/10/2024.
//

#ifndef SONGCONTAINER_H
#define SONGCONTAINER_H
#include <Song.h>
#include <string>
#include <vector>

class SongContainer {
protected:
    /*A SongContainer is, by definition a container with a bunch of songs
     * may it be a:
     *      - Release
     *      - Playlist
     */
    std::vector<Song*> pSongs;
public:
private:
};

#endif //SONGCONTAINER_H