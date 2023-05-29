#ifndef __SONG_H__
#define __SONG_H__

#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include "priority_queue.h"

using namespace std;

class Song {
  public:
    std::string artist,title;
    int count;

    Song() { }
    Song(const Song &s) : artist(s.artist), title(s.title), count(s.count) { }
    Song(std::string artist,std::string title,int count) :  artist(artist), title(title), count(count) { }

    friend std::ostream& operator<<(std::ostream &out,const Song &s) {
      return out << "Artist: " << s.artist << " Title: " << s.title << " count: " << s.count;
    }

};

//  you have to write something below this line
class sellArtistSong {
public:
    bool operator()(const Song &lhs,const Song &rhs){
        std::string a1,a2,s1,s2;
        int c1,c2;
        a1 = lhs.artist;
        a2 = rhs.artist;
        s1 = lhs.title;
        s2 = rhs.title;
        c1 = lhs.count;
        c2 = rhs.count;
        if (c1 != c2) return c1 < c2;
        else {
            if (a1!=a2) return a1 > a2;
            else {
                return s1 > s2;
            }
        }
    }
    //return false;
};

class artistSongSell {
public:
    bool operator()(const Song &lhs,const Song &rhs){
        std::string a1,a2,s1,s2;
        int c1,c2;
        a1 = lhs.artist;
        a2 = rhs.artist;
        s1 = lhs.title;
        s2 = rhs.title;
        c1 = lhs.count;
        c2 = rhs.count;
        if (a1 != a2) return a1 > a2;
        else {
            if (s1!=s2) return s1 > s2;
            else {
                return c1 > c2;
            }
        }
    }
    //return false;
};
//  you *MIGHT* have to change the declaration of pq1 and pq2
CP::priority_queue<Song,artistSongSell> pq1;
CP::priority_queue<Song,sellArtistSong> pq2;

#endif
