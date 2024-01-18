// Complete the Song class which represents a song on a streaming service.
// Given Code
#include <iostream>
using namespace std;

class Song {
  
  //add class definitions below this line



  //add class definitions above this line
  
//DO NOT EDIT CODE BELOW THIS LINE

  private:
    string artist;
    string title;
    string album;
    int play_count = 0;
    const double pay_rate = 0.001;
    double money_earned = 0;
    
    void UpdatePlayCount() {
      play_count++;
    }
  
    void UpdateMoneyEarned() {
      money_earned = play_count * pay_rate;
    }
};

int main() {

  Song my_song("Led Zeppelin", "Ten Years Gone", "Physical Graffiti");
  cout << my_song.GetArtist() << endl;
  cout << my_song.GetTitle() << endl;
  cout << my_song.GetAlbum() << endl;
  cout << my_song.GetPlayCount() << endl;
  cout << my_song.GetPayRate() << endl;
  cout << my_song.GetMoneyEarned() << endl;
  my_song.SetArtist("Michael Jackson");
  my_song.SetTitle("Beat It");
  my_song.SetAlbum("Thriller");
  my_song.Play(1000000);
  my_song.Stats();
  
  return 0;
  
}

//DO NOT EDIT CODE ABOVE THIS LINE
// Requirements
Complete the Song class that includes all necessary getter and setter functions for each class attribute
There should be a total of 6 getter functions
There should be a total of 3 setter functions
play_count, pay_rate and money_earned do not have setter functions because they are initialized to 0 or 0.001 when a Song object is instantiated
Include a class function Play that takes in an int parameter and calls UpdatePlayCount and UpdateMoneyEarned that number of times
Include a class function Stats that prints all of the class attributes according to their declaration order
Include the appropriate access modifier(s) in your class
// DO NOT edit the specified code section in your source file or you might not receive credit for your work!
// Expected Output
Led Zeppelin
Ten Years Gone
Physical Graffiti
0
0.001
0
Michael Jackson
Beat It
Thriller
1000000
0.001
1000

// Solved Code
#include <iostream>
using namespace std;

class Song {
private:
    string artist;
    string title;
    string album;
    int play_count = 0;
    const double pay_rate = 0.001;
    double money_earned = 0;

public:
    // Constructor
    Song(string new_artist, string new_title, string new_album)
        : artist(new_artist), title(new_title), album(new_album) {}

    // Getter functions
    string GetArtist() const {
        return artist;
    }

    string GetTitle() const {
        return title;
    }

    string GetAlbum() const {
        return album;
    }

    int GetPlayCount() const {
        return play_count;
    }

    double GetPayRate() const {
        return pay_rate;
    }

    double GetMoneyEarned() const {
        return money_earned;
    }

    // Setter functions
    void SetArtist(string new_artist) {
        artist = new_artist;
    }

    void SetTitle(string new_title) {
        title = new_title;
    }

    void SetAlbum(string new_album) {
        album = new_album;
    }

    // Other member functions
    void UpdatePlayCount() {
        play_count++;
    }

    void UpdateMoneyEarned() {
        money_earned = play_count * pay_rate;
    }

    void Play(int times) {
        for (int i = 0; i < times; i++) {
            UpdatePlayCount();
            UpdateMoneyEarned();
        }
    }

    void Stats() const {
        // Displaying the statistics
        cout << GetArtist() << endl;
        cout << GetTitle() << endl;
        cout << GetAlbum() << endl;
        cout << GetPlayCount() << endl;
        cout << GetPayRate() << endl;
        cout << GetMoneyEarned() << endl;
    }
};

int main() {

  Song my_song("Led Zeppelin", "Ten Years Gone", "Physical Graffiti");
  cout << my_song.GetArtist() << endl;
  cout << my_song.GetTitle() << endl;
  cout << my_song.GetAlbum() << endl;
  cout << my_song.GetPlayCount() << endl;
  cout << my_song.GetPayRate() << endl;
  cout << my_song.GetMoneyEarned() << endl;
  my_song.SetArtist("Michael Jackson");
  my_song.SetTitle("Beat It");
  my_song.SetAlbum("Thriller");
  my_song.Play(1000000);
  my_song.Stats();
  
  return 0;
  
}

//DO NOT EDIT CODE ABOVE THIS LINE
