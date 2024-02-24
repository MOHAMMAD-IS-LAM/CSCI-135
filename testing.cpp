#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int g_curr_size = 2;
int g_number_of_songs = 0;

string *g_song_names = new string[g_curr_size];
string *g_artist_names = new string[g_curr_size];
int *g_song_durations = new int[g_curr_size];
string *g_genres = new string[g_curr_size];

void allocateNew()
{
    string* f_song_names = new string[g_curr_size * 2];
    int* f_song_durations = new int[g_curr_size * 2];
    string* f_artist_names = new string[g_curr_size * 2];
    string* f_genres = new string[g_curr_size * 2];

    for (int i = 0; i < g_curr_size; i++) {
        g_song_names[i] = f_song_names[i];
        g_artist_names[i] = f_artist_names[i];
        g_song_durations[i] = f_song_durations[i];
        g_genres[i] = f_genres[i];
    }

}

int main ()
{
    ifstream fin("someting.txt");
    if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
    }

    string line;

    while (getline(fin, line)) {

        if (g_number_of_songs == g_curr_size) {
            allocateNew();
            g_curr_size = g_curr_size * 2;
        }

        int end_point = line.find(":");
        int dash_point = line.find("-");
        int second_dash = line.rfind("-");

        string song_name = line.substr(0, end_point);
        string artist_names = line.substr(end_point + 1, (dash_point - end_point) - 1);
        string genre = line.substr(dash_point + 1, second_dash);


        g_song_names[g_number_of_songs] = song_name;
        g_artist_names[g_number_of_songs] = artist_names;
        g_genres[g_number_of_songs] = genre;

        g_number_of_songs++;

    }

    for (int i = 0; i < g_number_of_songs; i++) {
        cout << g_song_names[i] << "    " << g_artist_names[i] << "    " << g_genres[i] << "     " << endl;
    }
    return 0;
}

void readSongs(string filename)
{
    ifstream fin(filename);
    if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
    }

    string line, song_name, artist_name, genre, duration;

    while (getline(fin, line)) {

        if (g_number_of_songs == g_curr_size) {
            allocateNew();
            g_curr_size = g_curr_size * 2;
        }

        int end_point = line.find(":");
        int dash_point = line.find("-");
        int second_dash = line.rfind("-");
        int space = line.rfind(" ");

        string song_name = line.substr(0, end_point);
        string artist_names = line.substr(end_point + 1, dash_point);
        string genre = line.substr(dash_point + 1, second_dash);
        string duration_prelims = line.substr(second_dash + 1, space);
        int duration = stoi(duration_prelims);


        g_song_names[g_number_of_songs] = song_name;
        g_artist_names[g_number_of_songs] = artist_names;
        g_song_durations[g_number_of_songs] = duration;
        g_genres[g_number_of_songs] = genre;

        g_number_of_songs++;

    }

    for (int i = 0; i < g_number_of_songs; i++) {
        cout << g_song_names[i] << "    " << g_artist_names[i] << "    " << g_song_durations[i] << "     " << g_genres[i] << "     " << endl;
    }




    string line, song_name, artist_name, genre, duration_prelims;
    int duration;

    while (getline(fin, line)) {

        if (g_number_of_songs == g_curr_size) {
            allocateNew();
            g_curr_size = g_curr_size * 2;
        }

        getline(fin, song_name, ':');
        getline(fin, artist_name, '-');
        getline(fin, genre, '-');
        getline(fin, duration_prelims, ' ');

        duration = stoi(duration_prelims);


        g_song_names[g_number_of_songs] = song_name;
        g_artist_names[g_number_of_songs] = artist_name;
        g_song_durations[g_number_of_songs] = duration;
        g_genres[g_number_of_songs] = genre;

        g_number_of_songs++;

    }