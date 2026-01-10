#include<iostream>
using namespace std;

int main() {

    cout<<"EXAMPLE-1"<<endl;

    int day;
    cout<<"Enter the Number:";
    cin>>day;

    switch(day){
        case 1:{
            cout<<"Monday"<<endl;
            break;
        }

        case 2:{
            cout<<"Tuesday"<<endl;
            break;
        }

        case 3:{
            cout<<"Wednesday"<<endl;
            break;
        }

        case 4:{
            cout<<"Thursday"<<endl;
            break;
        }

        case 5:{
            cout<<"Friday"<<endl;
            break;
        }

        case 6:{
            cout<<"Saturday"<<endl;
            break;
        }

        case 7:{
            cout<<"Sunday"<<endl;
            break;
        }

        default:{
            cout<<"Invalid Day"<<endl;
            break;
        }
    }

    cout<<"EXAMPLE-2"<<endl;

    int month;
    cout<<"Enter the Number:";
    cin>>month;

    switch(month){
        case 1:{
            cout<<"January"<<endl;
            break;
        }

        case 2:{
            cout<<"February"<<endl;
            break;
        }

        case 3:{
            cout<<"March"<<endl;
            break;
        }

        case 4:{
            cout<<"April"<<endl;
            break;
        }

        case 5:{
            cout<<"May"<<endl;
            break;
        }

        case 6:{
            cout<<"June"<<endl;
            break;
        }

        case 7:{
            cout<<"July"<<endl;
            break;
        }

        case 8:{
            cout<<"August"<<endl;
            break;
        }

        case 9:{
            cout<<"September"<<endl;
            break;
        }

        case 10:{
            cout<<"October"<<endl;
            break;
        }

        case 11:{
            cout<<"November"<<endl;
            break;
        }

        case 12:{
            cout<<"December"<<endl;
            break;
        }

        default:{
            cout<<"Invalid Month"<<endl;
            break;
        }
    }

    return 0;
}