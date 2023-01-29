#include<windows.h>
#include<mmsystem.h>
#include<iostream>
#include<stdio.h>
#include<dirent.h>
#include<graphics.h>
#include<string>
#include<cmath>
#include <ctime>
#include <iterator>
#include <map>

using namespace std;

string convert(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
    return s;
}

string lokmep = "http://epaper.lokmat.com/";
string loksep = "https://epaper.loksatta.com/";
string sakep = "http://epaper.esakal.com/";
string navbhep = "https://epaper.navbharattimes.com/";
string bhasep = "https://epaper.bhaskar.com/";

string ibnlok = "https://www.youtube.com/channel/UCrcpw88HvKJ0skdsHniCJtQ";
string abpnew = "https://www.youtube.com/channel/UCH7nv1A9xIrAifZJNvt7cgA";
string tv9mah = "https://www.youtube.com/user/Tv9MaharashtraLive";
string aajtak = "https://www.youtube.com/channel/UCt4t-jeY85JegMlZ-E5UWtA";
string indiatv = "https://www.youtube.com/user/IndiaTV";
string abphi = "https://www.youtube.com/user/abpnewstv";

int main()
{
    char inp[100];

//    system("COLOR 46");
    map<string, string> mapTalk; map<string, string> mapTalk2; map<string, string> mapOpenAppl; map<string, int> mapDoMany; map<string, string> mapDoSear;

    mapTalk.insert(pair<string, string>("Hii" , "hi.wav")); mapTalk.insert(pair<string, string>("Hello" , "hello.wav")); mapTalk.insert(pair<string, string>("What is your name?" , "myname.wav")); mapTalk.insert(pair<string, string>("How are you?" , "iamfine.wav"));
    mapTalk.insert(pair<string, string>("I am fine" , "nice.wav")); mapTalk.insert(pair<string, string>("Could you made dinner for me?", "cantcook.wav")); mapTalk.insert(pair<string, string>("Give your intro", "intro.wav")); mapTalk.insert(pair<string, string>("Open google" , "opengoogle.wav" ));
    mapTalk.insert(pair<string, string>("Open MS Word" , "openword.wav")); mapTalk.insert(pair<string, string>("Open ppt" , "openppt.wav")); mapTalk.insert(pair<string, string>("Open excel" , "openexcel.wav")); mapTalk.insert(pair<string, string>("Open Netbeans" , "opennetbeans.wav")); mapTalk.insert(pair<string, string>("Open chrome", "openchrome.wav"));
    mapTalk.insert(pair<string, string>("Open notepad++", "openedit.wav")); mapTalk.insert(pair<string, string>("Open codeblocks", "opencodebloc.wav")); mapTalk.insert(pair<string, string>("Open MS Access", "openacc.wav"));
    mapTalk.insert(pair<string, string>("Show tech news" , "loadtech.wav" )); mapTalk.insert(pair<string, string>("Open udemy" , "loadudemy.wav"));
    mapTalk.insert(pair<string, string>("Open my mail" ,"personalmail.wav")); mapTalk.insert(pair<string, string>("Open classroom" , "classroom.wav")); mapTalk.insert(pair<string, string>("Download movies", "downloadmovies.wav")); mapTalk.insert(pair<string, string>("Download songs", "downloadsongs.wav"));
    mapTalk.insert(pair<string, string>("Open vierp", "vierp.wav")); mapTalk.insert(pair<string, string>("Open volp",  "volp.wav")); mapTalk.insert(pair<string, string>( "Download books",  "downloadbooks.wav"));
    mapTalk.insert(pair<string, string>("Open youtube", "openyoutube.wav")); mapTalk.insert(pair<string, string>("Live cricket match score" ,"livescore.wav")); mapTalk.insert(pair<string, string>("Play match highlight" , "matchhigh.wav"));
    mapTalk.insert(pair<string, string>( "Play sports video", "watchspor.wav")); mapTalk.insert(pair<string, string>("Open android studio", "openandroid.wav")); mapTalk.insert(pair<string, string>("What kind of task you can do?", "thingsdo.wav"));
    mapTalk.insert(pair<string, string>("Open caos folder", "openfolder.wav")); mapTalk.insert(pair<string, string>("Open dcan folder", "openfolder.wav")); mapTalk.insert(pair<string, string>("Open oops folder", "openfolder.wav")); mapTalk.insert(pair<string, string>("Open ds folder", "openfolder.wav"));
    mapTalk.insert(pair<string, string>("Open caos lec", "meetcaos.wav")); mapTalk.insert(pair<string, string>("Open caos tut", "meetcaos.wav")); mapTalk.insert(pair<string, string>("Open caos lab", "meetcaos.wav"));
    mapTalk.insert(pair<string, string>("Open ds tut", "meetds.wav")); mapTalk.insert(pair<string, string>("Open ds lab", "meetds.wav")); mapTalk.insert(pair<string, string>("Open dcan lec", "meetdcan.wav"));
    mapTalk.insert(pair<string, string>("Open dcan tut", "meetdcan.wav")); mapTalk.insert(pair<string, string>("Open dcan lab", "meetdcan.wav")); mapTalk.insert(pair<string, string>("Open ds lec", "meetds.wav"));
    mapTalk.insert(pair<string, string>("Open oops lec", "meetoops.wav")); mapTalk.insert(pair<string, string>("Open oops tut", "meetoops.wav")); mapTalk.insert(pair<string, string>("Open oops lab", "meetoops.wav"));
    mapTalk.insert(pair<string, string>("Open my vit mail", "vitmail.wav"));
    mapTalk2.insert(pair<string, string>("Open google and search" , "searchgoogle.wav"));
    mapTalk2.insert(pair<string, string>("Open youtube and search" , "openyoutube.wav"));
    mapTalk2.insert(pair<string, string>("Open amazon and search" , "onamz.wav"));
    mapTalk2.insert(pair<string, string>("Open flipkart and search" , "onflip.wav"));
    mapTalk2.insert(pair<string, string>("Download software" , "downloadsoft.wav"));
    mapTalk2.insert(pair<string, string>("I want to watch movie", "playmovie.wav"));
    mapTalk2.insert(pair<string, string>("I want to read news", "enewspaper.wav")); mapTalk2.insert(pair<string, string>("I want to watch news",  "opennewsch.wav")); mapTalk2.insert(pair<string, string>("Play songs",  "playsongs.wav"));


    mapOpenAppl.insert(pair<string, string>("Open google" , "https://www.google.com/" )); mapOpenAppl.insert(pair<string, string>("Open MS Word" , "C:\\Program Files\\Microsoft Office\\Office16\\WINWORD.EXE")); mapOpenAppl.insert(pair<string, string>("Open ppt" , "C:\\Program Files\\Microsoft Office\\Office16\\POWERPNT.EXE"));
    mapOpenAppl.insert(pair<string, string>("Open excel" , "C:\\Program Files\\Microsoft Office\\Office16\\EXCEL.EXE")); mapOpenAppl.insert(pair<string, string>("Open Netbeans" , "C:\\Program Files\\NetBeans 8.2\\bin\\netbeans.exe")); mapOpenAppl.insert(pair<string, string>("Open chrome", "C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe"));
    mapOpenAppl.insert(pair<string, string>("Open notepad++", "C:\\Program Files (x86)\\Notepad++\\notepad++.exe")); mapOpenAppl.insert(pair<string, string>("Open codeblocks", "D:\\VIT CLG\\codeblocks-17.12mingw-nosetup\\codeblocks.exe")); mapOpenAppl.insert(pair<string, string>("Open MS Access", "C:\\Program Files\\Microsoft Office\\Office16\\MSACCESS.EXE"));
    mapOpenAppl.insert(pair<string, string>("Open android studio", "C:\\Program Files\\Android\\Android Studio2\\bin\\studio64.exe")); mapOpenAppl.insert(pair<string, string>("Open caos folder", "D:\\VIT CLG\\CA&OS"));
    mapOpenAppl.insert(pair<string, string>("Open dcan folder", "D:\\VIT CLG\\DCAN")); mapOpenAppl.insert(pair<string, string>("Open oops folder", "D:\\VIT CLG\\OOPS")); mapOpenAppl.insert(pair<string, string>("Open ds folder", "D:\\VIT CLG\\DS"));
    mapOpenAppl.insert(pair<string, string>("Open caos lec", "https://meet.google.com/hwq-mqef-ewm?authuser=1&pli=1")); mapOpenAppl.insert(pair<string, string>("Open caos tut", "https://meet.google.com/hwq-mqef-ewm?authuser=1&pli=1")); mapOpenAppl.insert(pair<string, string>("Open caos lab", "https://meet.google.com/hwq-mqef-ewm?authuser=1&pli=1")); mapOpenAppl.insert(pair<string, string>("Open ds lec", "https://meet.google.com/qnx-rvwj-sgx?authuser=1&pli=1"));
    mapOpenAppl.insert(pair<string, string>("Open ds tut", "https://meet.google.com/dti-wubn-fih?authuser=1&pli=1")); mapOpenAppl.insert(pair<string, string>("Open ds lab", "https://meet.google.com/qnx-rvwj-sgx?authuser=1&pli=1")); mapOpenAppl.insert(pair<string, string>("Open dcan lec", "https://meet.google.com/tmc-imzs-rag?authuser=1&pli=1"));
    mapOpenAppl.insert(pair<string, string>("Open dcan tut", "https://meet.google.com/ufn-uuaf-drt?authuser=1&pli=1")); mapOpenAppl.insert(pair<string, string>("Open dcan lab", "https://meet.google.com/ugw-drjd-sqy?authuser=1&pli=1"));
    mapOpenAppl.insert(pair<string, string>("Open oops lec", "https://meet.google.com/ozp-cjab-vwg?authuser=1&pli=1")); mapOpenAppl.insert(pair<string, string>("Open oops tut", "https://meet.google.com/ozp-cjab-vwg?authuser=1&pli=1")); mapOpenAppl.insert(pair<string, string>("Open oops lab", "https://meet.google.com/wfx-uusp-kzx?authuser=1&pli=1"));
    mapOpenAppl.insert(pair<string, string>("Show tech news" , "https://thehackernews.com/?m=1" )); mapOpenAppl.insert(pair<string, string>("Open udemy" , "https://www.udemy.com/home/my-courses/learning/")); mapOpenAppl.insert(pair<string, string>("Open my vit mail", "https://mail.google.com/mail/u/1/?ogbl#inbox"));
    mapOpenAppl.insert(pair<string, string>("Open my mail" ,"https://mail.google.com/mail/u/0/?tab=rm&ogbl#inbox")); mapOpenAppl.insert(pair<string, string>("Open classroom" , "https://classroom.google.com/u/1/h")); mapOpenAppl.insert(pair<string, string>("Download movies", "https://themoviesflix.io/"));
    mapOpenAppl.insert(pair<string, string>("Download songs", "https://mp3quack.lol/")); mapOpenAppl.insert(pair<string, string>("Open vierp", "https://learner.vierp.in/home")); mapOpenAppl.insert(pair<string, string>("Open volp",  "https://classroom.volp.in/learner/my-courses"));
    mapOpenAppl.insert(pair<string, string>( "Download books",  "https://www.pdfdrive.com/")); mapOpenAppl.insert(pair<string, string>("Open youtube", "https://www.youtube.com/")); mapOpenAppl.insert(pair<string, string>("Live cricket match score" ,"https://www.cricbuzz.com/"));
    mapOpenAppl.insert(pair<string, string>("Play match highlight" , "https://www.hotstar.com/in/sports/cricket")); mapOpenAppl.insert(pair<string, string>( "Play sports video", "https://www.hotstar.com/in/sports"));
    mapOpenAppl.insert(pair<string, string>("Download ppt template" , "https://www.slidescarnival.com/" ));
    mapOpenAppl.insert(pair<string, string>("Open facebook" , "https://www.facebook.com/" ));
    mapOpenAppl.insert(pair<string, string>("Open insta" , "https://www.instagram.com/" ));
    mapOpenAppl.insert(pair<string, string>("Open whatsapp" , "https://web.whatsapp.com/" ));
    mapOpenAppl.insert(pair<string, string>("Open twitter" , "https://twitter.com/home" ));


    mapDoMany.insert(pair<string, int>("I want to watch movie", 20)); mapDoMany.insert(pair<string, int>("I want to read news", 21)); mapDoMany.insert(pair<string, int>("I want to watch news",  22)); mapDoMany.insert(pair<string, int>("Play songs",  23));

    mapDoSear.insert(pair<string, string>("Open google and search" , "https://www.google.com/search?gs_ssp=eJzj4tTP1TdIqcpJqjBg9OLILMrPU8hNzAMASJ8Gyg&q="));
    mapDoSear.insert(pair<string, string>("Open youtube and search" , "https://www.youtube.com/results?search_query="));
    mapDoSear.insert(pair<string, string>("Open amazon and search" , "https://www.amazon.in/s?k="));
    mapDoSear.insert(pair<string, string>("Open flipkart and search" , "https://www.flipkart.com/search?q="));
    mapDoSear.insert(pair<string, string>("Download software" , "https://filehippo.com/search/?q="));

    cout<<endl;cout<<endl;
    time_t tmNow;
    tmNow = time(NULL);
    struct tm t = *localtime(&tmNow);
    cout<<"Current Date: "<<t.tm_mday<<" / "<<t.tm_mon+1<<" / "<<t.tm_year+1900;

    cout<<endl;cout<<endl;
    cout<<"Current Time: "<<t.tm_hour<<" O'Clock : "<<t.tm_min<<" min : "<<t.tm_sec<<" sec";

    cout<<endl;cout<<endl;cout<<endl;
    cout<<"********************************  MY CHATBOT  *************************************"<<endl;

    PlaySound(TEXT("hellokkwelcome.wav"),NULL,SND_SYNC);
    cout<<endl;cout<<endl;cout<<"-- GIVE ME TASK TO PERFORM --"<<endl;

    PlaySound(TEXT("givemetasl.wav"),NULL,SND_SYNC);
    cout<<endl;cout<<endl;

    while(1)
    {
    cout<<endl;cout<<endl;
    gets(inp);

    map<string, string>::iterator itr;
    map<string, int>::iterator itr1;

    for (itr = mapTalk.begin(); itr != mapTalk.end(); ++itr)
    {
         if(convert(itr->first) == convert(inp))
         {
              PlaySound(TEXT(itr->second.c_str()),NULL,SND_SYNC);
         }
     }

    for (itr = mapOpenAppl.begin(); itr != mapOpenAppl.end(); ++itr)
    {
     if(convert(itr->first) == convert(inp))
     {
       ShellExecute(0, "open", itr->second.c_str(), NULL,NULL,SW_SHOWNORMAL);
     }

    }
         for (itr = mapTalk2.begin(); itr != mapTalk2.end(); ++itr)
        {
         if(convert(itr->first) == convert(inp))
         {
              PlaySound(TEXT(itr->second.c_str()),NULL,SND_SYNC);
         }
        }



        for (itr = mapDoSear.begin(); itr != mapDoSear.end(); ++itr)
        {
            if(convert(itr->first) == convert(inp))
             {
                 char getSearData[20];
                 cout<<endl;cout<<"-- Enter what you want to search --"<<endl;cout<<endl;
                 PlaySound(TEXT("ensear.wav"),NULL,SND_SYNC);
                 gets(getSearData);
                 string searData;
                 searData = itr->second+getSearData;
                 ShellExecute(0, "open", searData.c_str(), NULL,NULL,SW_SHOWNORMAL);
             }

        }

    for (itr1 = mapDoMany.begin(); itr1 != mapDoMany.end(); ++itr1)
    {
         if(convert(itr1->first) == convert(inp))
         {
            if(itr1->second == 20)
            {//Start of if movie
               int ch;
               do{//Start of do-while movie
                    cout<<endl;cout<<"--- SELECT MOVIE TYPE ---"<<endl;cout<<endl;
                    cout<<"1 . BollyWood"<<endl;cout<<"2 . HollyWood"<<endl;cout<<"3 . Exit"<<endl;
                    cout<<endl;cout<<"Enter your choice please: "<<endl;cout<<endl;
                    cin>>ch;
                    cout<<endl;
                    switch(ch)//Switch of movie
                    {
                        case 1:
                            int ch1;
                            do{//Start of do-while bolly
                                cout<<endl;cout<<"--- SELECT MODE ---"<<endl;cout<<endl;
                                cout<<"1 . Movie"<<endl;cout<<"2 . OTT Web Series"<<endl;cout<<"3.  Exit"<<endl;cout<<endl;
                                cout<<"Enter your choice please: "<<endl;cout<<endl;
                                cin>>ch1;
                                cout<<endl;
                                switch(ch1)
                                {//Start of switch bolly movie
                                    case 1:
                                        int bmch;//Bolly movie choice
                                        do{//Start of do-while bolly movie list
                                                cout<<endl;cout<<"--- SELECT MOVIE ---"<<endl;cout<<endl;
                                                cout<<"1. Chhalang "<<endl;cout<<"2. Chhichhore"<<endl;cout<<"3. Asuran"<<endl;cout<<"4. KGF"<<endl;cout<<"5. LUDO"<<endl;
                                                cout<<"6. Master"<<endl;cout<<"7. Naanum Rowdydhaan"<<endl;cout<<"8. Soorarai Pottru"<<endl;cout<<"9. V "<<endl;cout<<"10. Karnan"<<endl;cout<<"11. Exit"<<endl;
                                                cout<<endl;cout<<"Enter your choice please: "<<endl;cout<<endl;
                                                cin>>bmch;
                                                cout<<endl;
                                                switch(bmch)
                                                {//Start Switch of bolly movie list
                                                    case 1:
                                                        ShellExecute( NULL,"open","D:\\movie\\Bollywood\\Chhalaang.mkv",NULL,NULL,SW_NORMAL);
                                                        break;
                                                    case 2:
                                                        ShellExecute( NULL,"open","D:\\movie\\Bollywood\\Chhichhore.mkv",NULL,NULL,SW_NORMAL);
                                                        break;
                                                    case 3:
                                                        ShellExecute( NULL,"open","D:\\movie\\Bollywood\\Asuran.mkv",NULL,NULL,SW_NORMAL);
                                                        break;
                                                    case 4:
                                                        ShellExecute( NULL,"open","D:\\movie\\Bollywood\\KGF.mkv",NULL,NULL,SW_NORMAL);
                                                        break;
                                                    case 5:
                                                        ShellExecute( NULL,"open","D:\\movie\\Bollywood\\Ludo.mkv",NULL,NULL,SW_NORMAL);
                                                        break;
                                                    case 6:
                                                        ShellExecute( NULL,"open","D:\\movie\\Bollywood\\Master.mkv",NULL,NULL,SW_NORMAL);
                                                        break;
                                                    case 7:
                                                        ShellExecute( NULL,"open","D:\\movie\\Bollywood\\Naanum Rowdydhaan.mkv",NULL,NULL,SW_NORMAL);
                                                        break;
                                                    case 8:
                                                        ShellExecute( NULL,"open","D:\\movie\\Bollywood\\Soorarai Pottru.mkv",NULL,NULL,SW_NORMAL);
                                                        break;
                                                    case 9:
                                                        ShellExecute( NULL,"open","D:\\movie\\Bollywood\\V.mkv",NULL,NULL,SW_NORMAL);
                                                        break;
                                                    case 10:
                                                        ShellExecute( NULL,"open","D:\\movie\\Bollywood\\Karnan.mp4",NULL,NULL,SW_NORMAL);
                                                        break;
                                                    case 11:
                                                        break;
                                                    default:
                                                        cout<<"Invalid Choice... Please Enter Again.. :) "<<endl;
                                                }//End Switch of bolly movie list

                                                }while(bmch != 11);//End of do-while bolly movie list
                                                break; //Break of bolly movie list

                                                case 2: //Case of Bolly OTT
                                                    int bsch;
                                                    do//Start of Do-while of bolly OTT
                                                    {
                                                        cout<<endl;cout<<"--- SELECT WEB SERIES ---"<<endl;cout<<endl;
                                                        cout<<"1. Chacha Vidhayak Hain Humare S01"<<endl;cout<<"2. Chacha Vidhayak Hain Humare S02"<<endl;cout<<"3. Family Man S01"<<endl;cout<<"4. Mirzapur S01"<<endl;
                                                        cout<<"5. Mirzapur S02"<<endl;cout<<"6. Sacred Games S01"<<endl;cout<<"7. Sacred Games S02"<<endl;cout<<"8. Family Man S02"<<endl;cout<<"9. Exit"<<endl;
                                                        cout<<endl;cout<<"Enter your choice please: "<<endl;cout<<endl;
                                                        cin>>bsch;
                                                        cout<<endl;
                                                        switch(bsch)
                                                        { //Start of switch OTT movie
                                                            case 1:
                                                                ShellExecute( NULL,"open","D:\\movie\\Chacha Vidhayak Hain Humare S01",NULL,NULL,SW_NORMAL);
                                                                break;
                                                            case 2:
                                                                ShellExecute( NULL,"open","D:\\movie\\Chacha Vidhayak Hain Humare S02",NULL,NULL,SW_NORMAL);
                                                                break;
                                                            case 3:
                                                                ShellExecute( NULL,"open","D:\\movie\\Family Man",NULL,NULL,SW_NORMAL);
                                                                break;
                                                            case 4:
                                                                ShellExecute( NULL,"open","D:\\movie\\Mirzapur S01\\Mirzapur01",NULL,NULL,SW_NORMAL);
                                                                break;
                                                            case 5:
                                                                ShellExecute( NULL,"open","D:\\movie\\Mirzapur 2",NULL,NULL,SW_NORMAL);
                                                                break;
                                                            case 6:
                                                                ShellExecute( NULL,"open","D:\\movie\\Sacred Games S1",NULL,NULL,SW_NORMAL);
                                                                break;
                                                            case 7:
                                                                ShellExecute( NULL,"open","D:\\movie\\Sacred Games S02",NULL,NULL,SW_NORMAL);
                                                                break;
                                                            case 8:
                                                                ShellExecute( NULL,"open","D:\\movie\\Family Man 2",NULL,NULL,SW_NORMAL);
                                                                break;
                                                            case 9:
                                                                break;
                                                            default:
                                                                cout<<"Invalid Choice... Please Enter Again.. :) "<<endl;
                                                            }//End of switch OTT movie
                                                        }while(bsch != 9);//End of Do-while of bolly OTT
                                                break;  //Break of Bolly OTT

                                                case 3: //Case for exit bolly movie choice
                                                   break;
                                                default:
                                                    cout<<"Invalid Choice... Please Enter Again.. :) "<<endl;

                                                }//End of switch bolly movie
                                        }while(ch1 != 3);//End of do-while bolly
                            break;//Case 1 break (Bolly)

                        case 2: //Case of Main Holly
                            int hch;
                            do{
                            cout<<endl;cout<<"--- SELECT MODE OF MOVIES ---"<<endl;cout<<endl;
                            cout<<"1. Action"<<endl;cout<<"2. Horror"<<endl;cout<<"3. Movie Series"<<endl;cout<<"4. Exit"<<endl;
                            cout<<endl;cout<<"Enter your choice please: "<<endl;cout<<endl;
                            cin>>hch;
                            cout<<endl;
                            switch(hch)
                            {//Start of holly main switch
                                case 1: //Case of Action holly
                                    int hmch;
                                    do{//Start do-while of holly action
                                        cout<<endl;cout<<"--- SELECT ACTION MOVIE ---"<<endl;cout<<endl;
                                        cout<<"1. 6 Underground"<<endl;cout<<"2. Avatar"<<endl;cout<<"3. Charlies Angels"<<endl;cout<<"4. Dolittle"<<endl;cout<<"5. Extraction"<<endl;
                                        cout<<"6. Godzilla vs King Kong"<<endl;cout<<"7. Project Power"<<endl;cout<<"8. Public Enemies "<<endl;cout<<"9. The Hitmans BodyGuard"<<endl;cout<<"10. The Old Guard"<<endl;cout<<"10. The Old Guard"<<endl;cout<<"11. Exit"<<endl;
                                        cout<<endl;cout<<"Enter your choice please: "<<endl;cout<<endl;
                                        cin>>hmch;
                                        cout<<endl;
                                        switch(hmch)
                                        {//Start of Action movie switch
                                            case 1:
                                                ShellExecute( NULL,"open","D:\\movie\\Other Hollywood\\6 Underground.mkv",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 2:
                                                ShellExecute( NULL,"open","D:\\movie\\Other Hollywood\\Avatar.mkv",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 3:
                                                ShellExecute( NULL,"open","D:\\movie\\Other Hollywood\\Charlies Angels.mkv",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 4:
                                                ShellExecute( NULL,"open","D:\\movie\\Other Hollywood\\Dolittle.mkv",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 5:
                                                ShellExecute( NULL,"open","D:\\movie\\Other Hollywood\\Extraction.mkv",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 6:
                                                ShellExecute( NULL,"open","D:\\movie\\Other Hollywood\\GodzillavsKong.mkv",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 7:
                                                ShellExecute( NULL,"open","D:\\movie\\Other Hollywood\\Project Power.mkv",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 8:
                                                ShellExecute( NULL,"open","D:\\movie\\Other Hollywood\\Public Enemies.mkv",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 9:
                                                ShellExecute( NULL,"open","D:\\movie\\Other Hollywood\\The Hitmans BodyGuard.mkv",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 10:
                                                ShellExecute( NULL,"open","D:\\movie\\Other Hollywood\\The Old Guard.mkv",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 11:
                                                break;
                                            default:
                                                cout<<"Invalid Choice... Please Enter Again.. :) "<<endl;

                                        }//End of Action movie switch

                                    }while(hmch != 11);//End do-while of holly action

                                break;//Break of Action holly

                                case 2: //Case of horror movies
                                    int hhch;
                                    do
                                    {//Start of Do-while of horror movie
                                        cout<<endl;cout<<"--- SELECT HORROR MOVIE ---"<<endl;cout<<endl;
                                        cout<<"1. Annabelle"<<endl;cout<<"2. Dark Shadow"<<endl;cout<<"3. IT Chap1"<<endl;cout<<"4. IT Chap2"<<endl;cout<<"5. The Nun"<<endl;cout<<"6. Exit"<<endl;
                                        cout<<endl;cout<<"Enter your choice please: "<<endl;cout<<endl;
                                        cin>>hhch;
                                        cout<<endl;
                                        switch(hhch)//Start of switch horror movie
                                        {
                                            case 1:
                                                ShellExecute( NULL,"open","D:\\movie\\Horror\\Annabelle.mkv",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 2:
                                                ShellExecute( NULL,"open","D:\\movie\\Horror\\Dark Shadows.mkv",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 3:
                                                ShellExecute( NULL,"open","D:\\movie\\Horror\\IT Chap1.mkv",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 4:
                                                ShellExecute( NULL,"open","D:\\movie\\Horror\\IT Chap2.mkv",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 5:
                                                ShellExecute( NULL,"open","D:\\movie\\Horror\\The Nun.mkv",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 6:
                                                break;
                                            default:
                                                cout<<"Invalid Choice... Please Enter Again.. :) "<<endl;
                                            } //End of switch horror movie
                                    }while(hhch != 6);//End of Do-while of horror movie
                                break;// Breal of horror movie

                                case 3://Case of holly movie series
                                    int hmssch;
                                    do{//Start of do-while holly movie series
                                        cout<<endl;cout<<"--- SELECT MOVIE SERIES ---"<<endl;cout<<endl;
                                        cout<<"1. AVENGERS MOVIES"<<endl;cout<<"2. Bad Boys"<<endl;cout<<"3. DC"<<endl;cout<<"4. Fast And Furious"<<endl;cout<<"5. HARRY POTTER"<<endl;
                                        cout<<"6. John Wick"<<endl;cout<<"7. Piratres Of The Caribbean"<<endl;cout<<"8. Resident Evil"<<endl;cout<<"9. Sherlock Holmes"<<endl;cout<<"10. TWILIGHT"<<endl;cout<<"11. Exit"<<endl;
                                        cout<<endl;cout<<"Enter your choice please: "<<endl;cout<<endl;
                                        cin>>hmssch;
                                        cout<<endl;
                                        switch(hmssch)
                                        {//Switch of holly movies series
                                            case 1:
                                                ShellExecute( NULL,"open","D:\\movie\\AVENGERS MOVIES",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 2:
                                                ShellExecute( NULL,"open","D:\\movie\\Bad Boys",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 3:
                                                ShellExecute( NULL,"open","D:\\movie\\DC",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 4:
                                                ShellExecute( NULL,"open","D:\\movie\\Fast And Furious",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 5:
                                                ShellExecute( NULL,"open","D:\\movie\\HARRY POTTER",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 6:
                                                ShellExecute( NULL,"open","D:\\movie\\John Wick",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 7:
                                                ShellExecute( NULL,"open","D:\\movie\\POC",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 8:
                                                ShellExecute( NULL,"open","D:\\movie\\Resident Evil",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 9:
                                                ShellExecute( NULL,"open","D:\\movie\\Sherlock Holmes",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 10:
                                                ShellExecute( NULL,"open","D:\\movie\\TWILIGHT",NULL,NULL,SW_NORMAL);
                                                break;
                                            case 11:
                                                break;
                                            default:
                                                cout<<"Invalid Choice... Please Enter Again.. :) "<<endl;
                                        }//End switch of holly movies series
                                    }while(hmssch != 11);//End of do-while holly movie series
                                break;//Break of holly movie series

                                                        case 4://Exit of holly movie mode

                                                        break;
                                                    }//End of holly main switch
                                                    }while(hch != 4);
                                                    break;//break of Main Holly

                                                case 3: //Break for Exit
                                                    break;
                                                default:
                                                    cout<<"Invalid Choice... Please Enter Again.. :) "<<endl;
                                              }//End of switch movie
                                   }while(ch != 3);//End of d-while movie
                                }//End of if movie

            else if(itr1->second == 21)
            {//Start else-if of read news main
                int nch;
                do{//Start do-while of read news channel
                    cout<<endl;cout<<"--- SELECT E-NEWS PAPER LANGUAGE ---"<<endl;cout<<endl;
                    cout<<"1. Marathi"<<endl;cout<<"2. Hindi"<<endl;cout<<"3. Exit"<<endl;
                    cout<<endl;cout<<"Enter your choice please: "<<endl;cout<<endl;
                    cin>>nch;
                    cout<<endl;
                    switch(nch)
                    {//Start switch main of read news
                        case 1:
                            int mrnech;
                            do{//Start do-while of marathi news paper
                                cout<<endl;cout<<"--- SELECT MARATHI E-NEWS PAPER ---"<<endl;cout<<endl;
                                cout<<"1. Lokmat"<<endl;cout<<"2. Loksatta"<<endl;cout<<"3. Sakal"<<endl;cout<<"4. Exit"<<endl;
                                cout<<endl;cout<<"Enter your choice please: "<<endl;cout<<endl;
                                cin>>mrnech;
                                cout<<endl;
                                switch(mrnech)
                                {//Start switch of marathi news paper
                                case 1:
                                    ShellExecute(0, "open", lokmep.c_str(), NULL,NULL,SW_SHOWNORMAL);
                                    break;
                                case 2:
                                    ShellExecute(0, "open", loksep.c_str(), NULL,NULL,SW_SHOWNORMAL);
                                    break;
                                case 3:
                                    ShellExecute(0, "open", sakep.c_str(), NULL,NULL,SW_SHOWNORMAL);
                                    break;
                                case 4:
                                    break;
                                default:
                                    cout<<"Invalid Choice... Please Enter Again.. :) "<<endl;
                                }//End switch of marathi news paper
                            }while(mrnech!=4);//End do-while of marathi news paper
                        break;
                        case 2://Case of hindi read news paper
                            int hinech;
                            do{//Start do-while of hindi read news paper
                                cout<<endl;cout<<"--- SELECT MARATHI E-NEWS PAPER ---"<<endl;cout<<endl;
                                cout<<"1. Navbharat times"<<endl;cout<<"2. Bhaskar"<<endl;cout<<"3. Exit"<<endl;
                                cout<<endl;cout<<"Enter your choice please: "<<endl;cout<<endl;
                                cin>>hinech;
                                cout<<endl;
                                switch(hinech)
                                {
                                case 1:
                                    ShellExecute(0, "open", navbhep.c_str(), NULL,NULL,SW_SHOWNORMAL);
                                    break;
                                case 2:
                                    ShellExecute(0, "open", bhasep.c_str(), NULL,NULL,SW_SHOWNORMAL);
                                    break;
                                case 3:
                                    break;
                                default:
                                    cout<<"Invalid Choice... Please Enter Again.. :) "<<endl;
                                }
                            }while(hinech!=3);//End do-while of hindi read news paper
                            break;
                        case 3:
                            break;

                        default:
                            cout<<"Invalid Choice... Please Enter Again.. :) "<<endl;
                        }//Start switch main of read news
                        }while(nch!=3);//End do-while of read news channel

            }//End else-if of read news main

            else if(itr1->second == 22)
            {//start Else- if of watch news main
               int wnch;
                do{//start do-while of watch news main
                    cout<<endl;cout<<"--- SELECT NEWS LANGUAGE ---"<<endl;cout<<endl;
                    cout<<"1. Marathi"<<endl;cout<<"2. Hindi"<<endl;cout<<"3. Exit"<<endl;
                    cout<<endl;cout<<"Enter your choice please: "<<endl;cout<<endl;
                    cin>>wnch;
                    cout<<endl;
                    switch(wnch)
                    {//start Switch for watch news main
                        case 1: //Case for watch marathi news
                            int wmrnech;
                            do{//Start of do-while of marathi news channel
                                cout<<endl;cout<<"--- SELECT NEWS CHANNEL ---"<<endl;cout<<endl;
                                cout<<"1. IBN Lokmat"<<endl;cout<<"2. ABP Majha"<<endl;cout<<"3. TV9 Maharashtra"<<endl;cout<<"4. Exit"<<endl;
                                cout<<endl;cout<<"Enter your choice please: "<<endl;cout<<endl;
                                cin>>wmrnech;
                                cout<<endl;
                                switch(wmrnech)
                                {//Start of switch of marathi news channel
                                    case 1:
                                        ShellExecute(0, "open", ibnlok.c_str(), NULL,NULL,SW_SHOWNORMAL);
                                        break;
                                    case 2:
                                        ShellExecute(0, "open", abpnew.c_str(), NULL,NULL,SW_SHOWNORMAL);
                                        break;
                                    case 3:
                                        ShellExecute(0, "open", tv9mah.c_str(), NULL,NULL,SW_SHOWNORMAL);
                                        break;
                                    case 4:
                                        break;
                                    default:
                                        cout<<"Invalid Choice... Please Enter Again.. :) "<<endl;

                                }//End of switch of marathi news channel
                          }while(wmrnech != 4);//End of do-while of marathi news channel
                        break;//break for watch marathi news

                        case 2: //Case for watch hindi news
                            int whinech;
                            do{//Start of do-while of hindi news channel
                                cout<<endl;cout<<"--- SELECT NEWS CHANNEL ---"<<endl;cout<<endl;
                                cout<<"1. Aaj Tak"<<endl;cout<<"2. India TV"<<endl;cout<<"3. ABP News"<<endl;cout<<"4. Exit"<<endl;
                                cout<<endl;cout<<"Enter your choice please: "<<endl;cout<<endl;
                                cin>>whinech;
                                cout<<endl;
                                switch(whinech)
                                {
                                case 1:
                                    ShellExecute(0, "open", aajtak.c_str(), NULL,NULL,SW_SHOWNORMAL);
                                    break;
                                case 2:
                                    ShellExecute(0, "open", indiatv.c_str(), NULL,NULL,SW_SHOWNORMAL);
                                    break;
                                case 3:
                                    ShellExecute(0, "open", abphi.c_str(), NULL,NULL,SW_SHOWNORMAL);
                                    break;
                                case 4:
                                    break;
                                default:
                                    cout<<"Invalid Choice... Please Enter Again.. :) "<<endl;
                                }
                            }while(whinech!=4);//End of do-while of hindi news channel

                        break;//break for watch hindi news

                        case 3: //Case for exit
                        break;//break for exit

                        default:
                            cout<<"Invalid Choice... Please Enter Again.. :) "<<endl;
                    }//end Switch for watch news main
                }while(wnch != 3);//end do-while of watch news main
            }//end Else- if of watch news main

            else if(itr1->second == 23)
            {//start else if of songs
                int songch;
                do{//start do-while of main songs choice
                cout<<endl;cout<<"--- SELECT SONGS LANGUAGE ---"<<endl;cout<<endl;
                cout<<"1. Hindi"<<endl;cout<<"2. English"<<endl;cout<<"3. Exit"<<endl;
                cout<<endl;cout<<"Enter your choice please: "<<endl;cout<<endl;
                cin>>songch;
                cout<<endl;
                switch(songch)
                {//Start of songs main switch
                   case 1: //case for main hindi songs
                        int hinsonch;
                        do{//start of do-while loop of hindi songs
                            cout<<endl;cout<<"--- SELECT HINDI SONG ---"<<endl;cout<<endl;
                            cout<<"1. Bhar Do Jholi Meri"<<endl;cout<<"2. Jeena Jeena"<<endl;cout<<"3. Jeene Laga Hoon"<<endl;cout<<"4. Kaise Hua"<<endl;cout<<"5. Kun Faya Kun"<<endl;
                            cout<<"6. Pehli Nazar Mein"<<endl;cout<<"7. Rang Jo Lagyo "<<endl;cout<<"8. Tera Hone Laga Hoon"<<endl;cout<<"9. Tu Jaane Na"<<endl;cout<<"10. Tu Chahiye"<<endl;cout<<"11. Exit"<<endl;
                            cout<<endl;cout<<"Enter your choice please: "<<endl;cout<<endl;
                            cin>>hinsonch;
                            cout<<endl;
                            switch(hinsonch)
                            {//Start switch of hindi songs
                                case 1:
                                    ShellExecute( NULL,"open","D:\\SongS\\Hindi\\Bhar Do Jholi Meri.mp3",NULL,NULL,SW_NORMAL);
                                    break;
                                case 2:
                                    ShellExecute( NULL,"open","D:\\SongS\\Hindi\\Jeena Jeena.mp3",NULL,NULL,SW_NORMAL);
                                    break;
                                case 3:
                                    ShellExecute( NULL,"open","D:\\SongS\\Hindi\\Jeene Laga Hoon.mp3",NULL,NULL,SW_NORMAL);
                                    break;
                                case 4:
                                    ShellExecute( NULL,"open","D:\\SongS\\Hindi\\Kaise Hua.mp3",NULL,NULL,SW_NORMAL);
                                    break;
                                case 5:
                                    ShellExecute( NULL,"open","D:\\SongS\\Hindi\\Kun Faya Kun.mp3",NULL,NULL,SW_NORMAL);
                                    break;
                                case 6:
                                    ShellExecute( NULL,"open","D:\\SongS\\Hindi\\Pehli Nazar Mein.mp3",NULL,NULL,SW_NORMAL);
                                    break;
                                case 7:
                                    ShellExecute( NULL,"open","D:\\SongS\\Hindi\\Rang Jo Lagyo.mp3",NULL,NULL,SW_NORMAL);
                                    break;
                                case 8:
                                    ShellExecute( NULL,"open","D:\\SongS\\Hindi\\Tera Hone Laga Hoon.mp3",NULL,NULL,SW_NORMAL);
                                    break;
                                case 9:
                                    ShellExecute( NULL,"open","D:\\SongS\\Hindi\\Tu Chahiye.mp3",NULL,NULL,SW_NORMAL);
                                    break;
                                case 10:
                                    ShellExecute( NULL,"open","D:\\SongS\\Hindi\\Tu Jaane Na.mp3",NULL,NULL,SW_NORMAL);
                                    break;
                                case 11:
                                    break;
                                default:
                                    cout<<"Invalid Choice... Please Enter Again.. :) "<<endl;
                            }//End switch of hindi songs
                        }while(hinsonch != 11);//end of do-while loop of hindi songs
                   break; //break for main hindi songs

                   case 2:  //case for main english songs
                        int engsonch;
                        do{//Start of do-while of english songs
                        cout<<endl;cout<<"--- SELECT ENGLISH SONG ---"<<endl;cout<<endl;
                        cout<<"1. 7 rings"<<endl;cout<<"2. Alone"<<endl;cout<<"3. Attention"<<endl;cout<<"4. Bad guy"<<endl;cout<<"5. Faded"<<endl;cout<<"6. I Can t Get Enough"<<endl;
                        cout<<"7. Love Me Like You Do"<<endl;cout<<"8. On My Way"<<endl;cout<<"9. Perfect "<<endl;cout<<"10. Play Date"<<endl;cout<<"11. Exit"<<endl;
                        cout<<endl;cout<<"Enter your choice please: "<<endl;cout<<endl;
                        cin>>engsonch;
                        cout<<endl;
                        switch(engsonch)
                        {//Start of english song switch
                            case 1:
                                ShellExecute( NULL,"open","D:\\SongS\\English\\7 rings.mp3",NULL,NULL,SW_NORMAL);
                                break;
                            case 2:
                                ShellExecute( NULL,"open","D:\\SongS\\English\\Alone.mp3",NULL,NULL,SW_NORMAL);
                                break;
                            case 3:
                                ShellExecute( NULL,"open","D:\\SongS\\English\\Attention.mp3",NULL,NULL,SW_NORMAL);
                                break;
                            case 4:
                                ShellExecute( NULL,"open","D:\\SongS\\English\\Bad guy.mp3",NULL,NULL,SW_NORMAL);
                                break;
                            case 5:
                                ShellExecute( NULL,"open","D:\\SongS\\English\\Faded.mp3",NULL,NULL,SW_NORMAL);
                                break;
                            case 6:
                                ShellExecute( NULL,"open","D:\\SongS\\English\\I Can t Get Enough.mp3",NULL,NULL,SW_NORMAL);
                                break;
                            case 7:
                                ShellExecute( NULL,"open","D:\\SongS\\English\\Love Me Like You Do.mp3",NULL,NULL,SW_NORMAL);
                                break;
                            case 8:
                                ShellExecute( NULL,"open","D:\\SongS\\English\\On My Way.mp3",NULL,NULL,SW_NORMAL);
                                break;
                            case 9:
                                ShellExecute( NULL,"open","D:\\SongS\\English\\Perfect.mp3",NULL,NULL,SW_NORMAL);
                                break;
                            case 10:
                                ShellExecute( NULL,"open","D:\\SongS\\English\\Play Date.mp3",NULL,NULL,SW_NORMAL);
                                break;
                            case 11:
                                break;
                            default:
                                cout<<"Invalid Choice... Please Enter Again.. :) "<<endl;
                                    }//End of english song switch
                        }while(engsonch != 11);//End of do-while of english songs
                   break;//break for main english songs

                   case 3://case for main songs exit
                         break;//break for main songs exit

                   default:
                        cout<<"Invalid Choice... Please Enter Again.. :) "<<endl;
                }//End of songs main switch
                }while(songch != 3);//start do-while of main songs choice
            }//end else if of songs
         }

    }
    if(convert("Restart pc") == convert(inp))       //Check input
    {
         system("C:\\Windows\\System32\\shutdown -r -t 0");
    }

    else if(convert("Shutdown pc") == convert(inp))       //Check input
    {
     system("C:\\Windows\\System32\\shutdown -s -t 0");
    }

    else if(convert("exit") == convert(inp))       //Check input
    {
        PlaySound(TEXT("bye.wav"),NULL,SND_SYNC);
        exit(0);
    }
    }
    return 0;
}
