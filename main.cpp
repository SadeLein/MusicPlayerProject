#include <iostream>
#include <string>

std::string format_duration(int duration) {
    int minutes = duration / 60; //minutes equal the input duration divided by 60 and showing the integer
    int seconds = duration % 60; //minutes equal the input duration divided by 60 and showing the remainder
    std::string result = std::to_string(minutes) + " minutes and " + std::to_string(seconds) + " seconds"; // what the output for this will be
    return result;
}


void display_song(std::string title, std::string artist, int duration, double volume) {

    // Display information

    std::cout << "I'm forced to play this song by " << artist << ", it's called '"
    << title << "'." << std::endl;
// hi
    // Using if statement to check duration

    std::cout << "It's " << format_duration(duration) << " long." << std::endl;
    std::cout << "Volume: " << volume << std::endl;
}


int main() {

    //declarations of variables

    std::string songTitle;
    std::string songArtist;
    int durationSeconds;
    double volume;

    // Ask for user input

    std::cout << "Enter song title: ";
    std::getline(std::cin, songTitle);

    std::cout << "Enter song artist: ";
    std::getline(std::cin, songArtist);

    std::cout << "Enter song duration in seconds: ";
    std::cin >> durationSeconds;
    std::cin.ignore();

    std::cout << "Enter volume: ";
    std::cin >> volume;

    display_song(songTitle, songArtist, durationSeconds, volume);

    return 0;
}
