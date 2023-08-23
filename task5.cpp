#include <bits/stdc++.h>
using namespace std;
class Movie
{
public:
    string name;
    vector<string> showtimes;
    int price;
    vector<vector<bool>> seats;

    void bookTickets(int showtimeId, int row, int startSeat, int numTickets)
    {
        if (row < 1 || row > 10 || startSeat < 1 || startSeat > 50)
        {
            cout << "Invalid Choice" << endl;
            return;
        }

        for (int Offset = 0; Offset < numTickets; Offset++)
        {
            int seat = startSeat + Offset;
            if (seat > 50 || seats[row - 1][seat - 1])
            {
                cout << "Seat already booked" << endl;
                return;
            }
        }

        for (int Offset = 0; Offset < numTickets; ++Offset)
        {
            int seat = startSeat + Offset;
            seats[row - 1][seat - 1] = true;
        }

        cout << "\nTickets booked successfully!" << endl;
        cout << "Movie: " << name << endl;
        cout << "Showtime: " << showtimes[showtimeId] << endl;
        cout << "Seats: ";
        for (int Offset = 0; Offset < numTickets; Offset++)
        {
            int seat = startSeat + Offset;
            cout << "Row " << row << ", Seat " << seat << endl;
        }
        cout << endl;
        cout << "Total Cost: Rs " << price * numTickets << endl;
    }
};

void displayMovies(vector<Movie> &movies)
{
    cout << "\nAvailable Movies:" << endl;
    for (int i = 0; i < movies.size(); ++i)
    {
        cout << i + 1 << ". " << movies[i].name << endl;
    }
}

void displayShowtimes(Movie &movie)
{
    cout << "\nAvailable showtimes for " << movie.name << ":" << endl;
    for (int i = 0; i < movie.showtimes.size(); ++i)
    {
        cout << i + 1 << ". " << movie.showtimes[i] << endl;
    }
}
int main()
{

    Movie movie1, movie2;
    movie1.name = "Gadar 2";
    movie1.showtimes = {"11:00 AM", "3:00 PM", "7:00 PM"};
    movie1.price = 250;
    movie1.seats = vector<vector<bool>>(10, vector<bool>(50, false));

    movie2.name = "OMG 2";
    movie2.showtimes = {"10:00 AM", "2:00 PM"};
    movie2.price = 200;
    movie2.seats = vector<vector<bool>>(10, vector<bool>(50, false));

    vector<Movie> movies = {movie1, movie2};

    cout << "\t\t\t\t\t\t------------------------------------" << endl;
    cout << "\t\t\t\t\t\t    Book your tickets here !!" << endl;
    cout << "\t\t\t\t\t\t------------------------------------" << endl;

    displayMovies(movies);

    int choice;
    cout << "\nSelect a movie : ";
    cin >> choice;
    Movie &selectedMovie = movies[choice - 1];

    displayShowtimes(selectedMovie);

    int showtimeChoice;
    cout << "\nSelect a showtime : ";
    cin >> showtimeChoice;
    int numTickets;
    cout << "\nSelect the number of tickets : ";
    cin >> numTickets;
    int row, startSeat;
    cout << "Select a row (1-10) : ";
    cin >> row;
    cout << "Select a starting seat (1-50) : ";
    cin >> startSeat;

    selectedMovie.bookTickets(showtimeChoice - 1, row, startSeat, numTickets);

    return 0;
}
