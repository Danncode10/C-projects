#include <iostream>
using namespace std;

class bus{
public:
    string x[2][20] = {
            {
                "A1", "A2",
                "A3", "A4",
                "A5", "A6",
                "A7", "A8",
                "A9", "A10",
                "A11", "A12",
                "A13", "A14",
                "A15", "A16",
                "A17", "A18",
                "A19", "A20"
            },
            {
                "B1", "B2",
                "B3", "B4",
                "B5", "B6",
                "B7", "B8",
                "B9", "B10",
                "B11", "B12",
                "B13", "B14",
                "B15", "B16",
                "B17", "B18",
                "B19", "B20"
            }
        };
    
    string orig[2][20] = {
            {
                "A1", "A2",
                "A3", "A4",
                "A5", "A6",
                "A7", "A8",
                "A9", "A10",
                "A11", "A12",
                "A13", "A14",
                "A15", "A16",
                "A17", "A18",
                "A19", "A20"
            },
            {
                "B1", "B2",
                "B3", "B4",
                "B5", "B6",
                "B7", "B8",
                "B9", "B10",
                "B11", "B12",
                "B13", "B14",
                "B15", "B16",
                "B17", "B18",
                "B19", "B20"
            }
        };
    
    
    void show(){
        cout << "\n\tBus A\t\t\t\t\tBus B\n" << endl;
        
        for(int i = 0; i < 20; i+=2){
            cout << x[0][i] << "\t\t\t" << x[0][i+1] << "\t\t\t" << x[1][i] << "\t\t\t" << x[1][i+1] << endl;
        }
    }
    
    void occupied(string entered, int position, int bus){
        if(entered == x[bus][position] && x[bus][position] == "XX"){
            cout << "This seat is occupied!\n";
        }
    }
    
    void enter(){
        string entered;
        int position;
        int bus;
        
        bool valid = false;
        
        while(!valid){
            cout << "Enter the bus number to reserve: ";
            cin >> entered;
            
            for(int i = 0; i < 20; i++){
                if(x[0][i] == entered){
                    x[0][i] = "XX";
                    position = i;
                    bus = 0;
                    valid = true;
                }
                else if(x[1][i] == entered){
                    x[1][i] = "XX";
                    position = i;
                    bus = 1;
                    valid = true;
                }
            }
            if(!valid){
                cout << "Invalid Input!\n";
            }
            occupied(entered, position, bus);
        }
        
    }
    
};

int main(){
    
    bus bus;
    bool full = false;
    
    while(!full){
        bus.show();
        bus.enter();
    }
    
    
    cout << "\n\n";
    return 0;
}

//#include <iostream>
//using namespace std;
//
//int main(){
//    string entered;
//    bool found = false;
//    
//    
//    string x[2][20] = {
//        {
//            "A1", "A2",
//            "A3", "A4",
//            "A5", "A6",
//            "A7", "A8",
//            "A9", "A10",
//            "A11", "A12",
//            "A13", "A14",
//            "A15", "A16",
//            "A17", "A18",
//            "A19", "A20"
//        },
//        {
//            "B1", "B2",
//            "B3", "B4",
//            "B5", "B6",
//            "B7", "B8",
//            "B9", "B10",
//            "B11", "B12",
//            "B13", "B14",
//            "B15", "B16",
//            "B17", "B18",
//            "B19", "B20"
//        }
//    };
//    
//    bool full = false;
//    while(!full){
//        
//        cout << "BUS A\t\t\tBUS B\n\n";
//        
//        for(int j = 0; j < 20; j+=2){
//            cout << x[0][j] << "\t\t" << x[0][j+1] << "\t\t" << x[1][j] << "\t\t" << x[1][j+1] << endl;
//        }
//        
//        bool valid = false;
//        
//        while(!valid){
//            cout << "Enter the bus number to reserve: ";
//            cin >> entered;
//            
//            for(int i = 0; i < 20; i++){
//                if(entered == x[0][i]){
//                    x[0][i] = "XX";
//                    found = true;
//                    valid = true;
//                    break;
//                }
//                else if(entered == x[1][i]){
//                    x[1][i] = "XX";
//                    found = true;
//                    valid = true;
//                    break;
//                }
//            }
//            if(!found){
//                cout << "Invalid!\n";
//            }
//        }
//        
//    }
//    
//    
//    return 0;
//}
//
