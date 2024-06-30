#ifndef SEARCH_H
#define SEARCH_H

#include <iostream>
#include "defs.h"
#include "Episode.h"
using namespace std;

class Search{
    friend ostream& operator<<(ostream& ost, Search& s);

    public:
        virtual bool matches(const Episode* episode)=0;
        virtual void print(ostream& ost)=0;

};


class H_Search:public virtual Search{

    public:
        H_Search(const string& host);
        virtual void print(ostream& ost);
        virtual bool matches(const Episode* episode);

    protected:
        const string host; 
};

class C_Search:public virtual Search{
     public:
        C_Search(const string& category);
        virtual bool matches(const Episode* episode);
        virtual void print(ostream& ost);

     protected:
        const string category;
        
};

class HorC_Search:public H_Search, public C_Search{
    public:
        HorC_Search(const string& host, const string& category);
        virtual bool matches(const Episode* episode);
        virtual void print(ostream& ost);

    protected:
        const string host;
        const string category;
};


#endif