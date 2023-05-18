#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel {
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName;
    int ContentQuality;
public: //access modifier, but private by default
    //constructor
    YoutubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
    };

    void setName(string name) {
        Name = name;
    };
    string getName(){
        return Name;
    };
    void setOwnerName(string ownerName) {
        OwnerName = ownerName;
    };
    string getOwnerName() {
        return OwnerName;
    };

    //class method
    void GetInfo() {
        cout << "Name: " << Name << endl; 
        cout << "Owner Name: " << OwnerName << endl; 
        cout << "Subscribers Count: " << SubscribersCount << endl; 
        cout << "Videos: " << endl;
        //these lines below trigger a warning in my editor
        for (string videoTitle : PublishedVideoTitles) {
            cout << videoTitle << endl;
        }
    };
    void Subscribe() {
        SubscribersCount++;
    };
    void Unsubscribe() {
        if (SubscribersCount > 0)
            SubscribersCount--;
    };
    void PublishVideo(string title) {
        PublishedVideoTitles.push_back(title);
    };
    void CheckAnalytics() {
        if (ContentQuality < 5)
            cout << Name << " has bad quality content." << endl;
        else
            cout << Name << " has great content!" << endl;
    };
};

class CookingYoutubeChannel: public YoutubeChannel {
public:
    CookingYoutubeChannel(string name, string ownerName):YoutubeChannel(name, ownerName) {
    };

    void Practice() {
        cout << OwnerName << " is practicing cooking, learning new recipies, experimenting with spices... " << endl;
        ContentQuality++;
    };

};

class SingersYoutubeChannel: public YoutubeChannel {
public:
    //constructor
    SingersYoutubeChannel(string name, string ownerName): YoutubeChannel(name, ownerName) {

    };
    void Practice() {
        cout << OwnerName << " is taking singing classes, learning new songs, learning how to dance... " << endl;
        ContentQuality++;
    };
};

int main() {

    CookingYoutubeChannel cookingYtChannel("Amy's Kitchen", "Amy");
    SingersYoutubeChannel singersYtChannel("Shante Sings", "Shante");

    cookingYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();

    YoutubeChannel* yt1 = &cookingYtChannel;
    YoutubeChannel* yt2 = &singersYtChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();


    return 0;
};