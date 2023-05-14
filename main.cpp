#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel {
public: //access modifier, but private by default
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

};

int main() {

    YoutubeChannel ytChannel;
    //assign values to Name, OwnerName, etc. properties
    ytChannel.Name = "Cur1ousCod3r";
    ytChannel.OwnerName = "Cabe";
    ytChannel.SubscribersCount = 1800;
    //this line below doesn't work in my editor
    // ytChannel.PublishedVideoTitles = {"C++ for beginnners Video 1", "HTML & CSS Video 1", "C++ OOP Video 1"};

    cout << "Name: " << ytChannel.Name << endl; 
    cout << "Owner Name: " << ytChannel.OwnerName << endl; 
    cout << "Subscribers Count: " << ytChannel.SubscribersCount << endl; 
    // cout << "Videos: " << endl;
    //these lines below don't work in my editor
    // for (string videoTitle: ytChannel.PublishedVideoTitles) {
    //     cout << videoTitle << endl;
    // }

    //setup for why constructors and class methods are useful
    //not very DRY
    YoutubeChannel ytChannel2;
    //assign values to Name, OwnerName, etc. properties
    ytChannel2.Name = "CodeBeauty";
    ytChannel2.OwnerName = "Saldina";
    ytChannel2.SubscribersCount = 2000;

    cout << "Name: " << ytChannel2.Name << endl; 
    cout << "Owner Name: " << ytChannel2.OwnerName << endl; 
    cout << "Subscribers Count: " << ytChannel2.SubscribersCount << endl; 

    return 0;
}