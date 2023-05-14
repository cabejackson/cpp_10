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
    }

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
    }
    void Subscribe() {
        SubscribersCount++;
    };
    void Unsubscribe() {
        SubscribersCount--;
    };
};

int main() {

    YoutubeChannel ytChannel("Cur1ousCod3r", "Cabe");
    // ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
    // ytChannel.PublishedVideoTitles.push_back("HTML & CSS for beginners");
    // ytChannel.PublishedVideoTitles.push_back("C++ OOP");
    YoutubeChannel ytChannel2("CodeBeauty", "Saldina");
    //this line below doesn't work in my editor
    // ytChannel.PublishedVideoTitles = {"C++ for beginnners Video 1", "HTML & CSS Video 1", "C++ OOP Video 1"};

    
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Unsubscribe();
    ytChannel.GetInfo();
    ytChannel2.GetInfo();

    return 0;
}