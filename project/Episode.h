#ifndef EPISODE_H
#define EPISODE_H

#include <string>
#include <iostream>
using namespace std;

class Episode{

    friend ostream& operator<<(ostream& ost, const Episode& episode);

    public: 
        Episode(const string& podcastTitle, const string& host, const string& episodeTitle,const string& category, const string& audio, const string& videoFile);    
        const string& getPodcastTitle() const;
        const string& getHost() const;
        const string& getEpisodeTitle() const;
        const string& getCategory() const;
        const string& getAudio() const;
        const string& getVideoFile() const;
        void print(ostream& ost) const;

    private:
        const string podcastTitle;
        const string host;
        const string episodeTitle;
        const string category;
        const string audio;
        const string videoFile;
};

#endif