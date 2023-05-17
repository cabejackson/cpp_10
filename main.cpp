#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel {
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

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

int main() {

    return 0;
};