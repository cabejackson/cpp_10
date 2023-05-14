#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel {
public: //access modifier, but private by default
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    //constructor
    YoutubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }
};

int main() {

    YoutubeChannel ytChannel("Cur1ousCod3r", "Cabe");
    ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
    ytChannel.PublishedVideoTitles.push_back("HTML & CSS for beginners");
    ytChannel.PublishedVideoTitles.push_back("C++ OOP");
    YoutubeChannel ytChannel2("CodeBeauty", "Saldina");
    //this line below doesn't work in my editor
    // ytChannel.PublishedVideoTitles = {"C++ for beginnners Video 1", "HTML & CSS Video 1", "C++ OOP Video 1"};

    cout << "Name: " << ytChannel.Name << endl; 
    cout << "Owner Name: " << ytChannel.OwnerName << endl; 
    cout << "Subscribers Count: " << ytChannel.SubscribersCount << endl; 
    cout << "Videos: " << endl;
    //these lines below trigger a warning in my editor
    for (string videoTitle : ytChannel.PublishedVideoTitles) {
        cout << videoTitle << endl;
    }

    cout << "Name: " << ytChannel2.Name << endl; 
    cout << "Owner Name: " << ytChannel2.OwnerName << endl; 
    cout << "Subscribers Count: " << ytChannel2.SubscribersCount << endl; 

    return 0;
}