#include "PodcastPlayer.h"

void AudioPlayer::play(const Episode& m,ostream& ost){
    ost<<m.getAudio()<<endl;
}

void VideoPlayer::play(const Episode& m,ostream& ost){
    AudioPlayer::play(m,ost);
    
    string line;

    //Listing out the path of the file that will be read from
    ifstream infile(m.getVideoFile());
    
    if(!infile){
        cout<<"Error: could not open file"<<endl;
        exit(1);
    }

    while(getline(infile,line)){
        cout<<line<<endl;
    }

    infile.close();
}