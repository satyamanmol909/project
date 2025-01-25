#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

// User class representing each user in the social network
class User {
public:
    string name;
    vector<User*> friends;
    vector<string> messages;

    User(const string& name) : name(name) {}

    // Add a friend
    void addFriend(User* newFriend) {
        friends.push_back(newFriend);
        cout << name << " is now friends with " << newFriend->name << "." << endl;
    }

    // Send a message to another user
    void sendMessage(User* recipient, const string& message) {
        recipient->messages.push_back(name + ": " + message);
        cout << "Message sent from " << name << " to " << recipient->name << ": " << message << endl;
    }

    // View received messages
    void viewMessages() const {
        if (messages.empty()) {
            cout << name << " has no messages." << endl;
        } else {
            cout << name << "'s messages:" << endl;
            for (const string& msg : messages) {
                cout << msg << endl;
            }
        }
    }

    // List friends
    void listFriends() const {
        if (friends.empty()) {
            cout << name << " has no friends." << endl;
        } else {
            cout << name << "'s friends:" << endl;
            for (const User* friendUser : friends) {
                cout << friendUser->name << endl;
            }
        }
    }
};

// SocialNetwork class to manage users and their interactions
class SocialNetwork {
public:
    unordered_map<string, User*> users;

    // Add a new user to the network
    void addUser(const string& userName) {
        if (users.find(userName) == users.end()) {
            users[userName] = new User(userName);
            cout << "User " << userName << " has been added." << endl;
        } else {
            cout << "User " << userName << " already exists." << endl;
        }
    }

    // Connect two users as friends
    void addFriendship(const string& user1, const string& user2) {
        if (users.find(user1) != users.end() && users.find(user2) != users.end()) {
            users[user1]->addFriend(users[user2]);
            users[user2]->addFriend(users[user1]); // Friendship is mutual
        } else {
            cout << "One or both users do not exist." << endl;
        }
    }

    // Send a message from one user to another
    void sendMessage(const string& sender, const string& recipient, const string& message) {
        if (users.find(sender) != users.end() && users.find(recipient) != users.end()) {
            users[sender]->sendMessage(users[recipient], message);
        } else {
            cout << "One or both users do not exist." << endl;
        }
    }

    // View messages of a user
    void viewMessages(const string& userName) const {
        if (users.find(userName) != users.end()) {
            users.at(userName)->viewMessages();
        } else {
            cout << "User " << userName << " does not exist." << endl;
        }
    }

    // List friends of a user
    void listFriends(const string& userName) const {
        if (users.find(userName) != users.end()) {
            users.at(userName)->listFriends();
        } else {
            cout << "User " << userName << " does not exist." << endl;
        }
    }

    ~SocialNetwork() {
        for (auto& pair : users) {
            delete pair.second; // Free allocated memory for each user
        }
    }
};

int main() {
    SocialNetwork network;

    network.addUser("Alice");
    network.addUser("Bob");
    network.addUser("Charlie");

    network.addFriendship("Alice", "Bob");
    network.addFriendship("Alice", "Charlie");

    network.sendMessage("Alice", "Bob", "Hello Bob!");
    network.sendMessage("Bob", "Alice", "Hi Alice!");

    network.viewMessages("Alice");
    network.viewMessages("Bob");

    network.listFriends("Alice");

    return 0;
}
