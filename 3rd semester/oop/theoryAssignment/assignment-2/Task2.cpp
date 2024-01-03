#include <iostream>
using namespace std;
class Movie{
    char* moveName;
    char* genre;
    char* director;
    int releaseYear;
    static int  TotalMovies;
    public:
    friend class Ticket;
        Movie(char name[],char director[],char genrep[],int releaseYear){
            this->moveName=new char [100];
            this->director=new char [100];
            this->genre=new char [100];
            int iterator=0;
            while (name[iterator]!='\0')
            {
                this->moveName[iterator]=name[iterator];
                iterator++;
            }
            this->moveName[iterator]='\0';
            iterator=0;
            while (genrep[iterator]!='\0')
            {
                this->genre[iterator]=genrep[iterator];
                iterator++;
            }
            this->genre[iterator]='\0';
            iterator=0;
            while (director[iterator]!='\0')
            {
                this->director[iterator]=director[iterator];
                iterator++;
            }
            this->director[iterator]='\0';
            this->releaseYear=releaseYear;
            this->TotalMovies++;
        }
        void display(){
            cout<<"Movie Name : "<<this->moveName<<endl;
            cout<<"Director : "<<this->director<<endl;
            cout<<"Genre : "<<this->genre<<endl;
            cout<<"Release Year : "<<this->releaseYear<<endl;
        }
};
class Ticket{
    int ticketID;
    char* movie;
    int seatNumber;
    static int TotalTickets;
    public:
        
        Ticket(int TicketID, Movie& movie,int seatNumber){
           this->ticketID=TicketID;
           this->movie=movie.moveName;
           this->seatNumber=seatNumber;
           TotalTickets++;
        }
        void displayTicketDetails(){
            cout<<"\nTicket Details for movie ticket with id "<<this->ticketID<<endl;
            cout<<"Movie Name : "<<this->movie<<endl;
            cout<<"Seat Number : "<<this->seatNumber<<endl;
        }
        static void TotalTicketsSold(){
            cout<<"Total Tickets Sold : "<<TotalTickets<<endl;
        }
};
int Ticket::TotalTickets;
int Movie::TotalMovies;
int main(){
    Movie m1("Inception","Christopher Nolan","Sci-fi",2010);
    Movie m2("The Shanshawk Redemption","Frank Darabont","Drama",1994);
    Ticket t1(101,m1,2);
    Ticket t2(102,m2,5);
    t1.displayTicketDetails();
    t2.displayTicketDetails();
}