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
public: //access modifier, but private by default
    //constructor
    YoutubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
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
};

class CookingYoutubeChannel: public YoutubeChannel {
public:
    CookingYoutubeChannel(string name, string ownerName):YoutubeChannel(name, ownerName) {
    };

    void Practice() {
        cout << OwnerName << " is practicing cooking, learning new recipies, experimenting with spices... " << endl;
    };

};

class SingersYoutubeChannel: public YoutubeChannel {
public:
    //constructor
    SingersYoutubeChannel(string name, string ownerName): YoutubeChannel(name, ownerName) {

    };
    void Practice() {
        cout << OwnerName << " is taking singing classes, learning new songs, learning how to dance... " << endl;
    };
};

int main() {

    CookingYoutubeChannel cookingYtChannel("Amy's Kitchen", "Amy");
    SingersYoutubeChannel singersYtChannel("Shante Sings ", "Shante");

    cookingYtChannel.Practice();
    singersYtChannel.Practice();

    return 0;
};