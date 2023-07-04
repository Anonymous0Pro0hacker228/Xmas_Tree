#include <iostream>
#include <Windows.h>


int main(){
    srand(time(NULL));
    HANDLE  hConsole;
	int color;
    int num_rows = 30;
    int colors[5] = {12,14,10,9,13};
    char pos;
    std::cout <<"N   N EEEE W     W     L    EEEE V     V EEEE L   \nNN  N E    W     W     L    E    V     V E    L   \nN N N EEE  W  W  W     L    EEE   V   V  EEE  L   \nN  NN E     W W W      L    E      V V   E    L   \nN   N EEEE   W W       LLLL EEEE    V    EEEE LLLL\n";
    std::cout << "*************************************************\n";
    std::cout << "Enter ASCII character: ";
    std::cin >> pos;
    
    
	
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    while(true){
        for(int i = 0; i < num_rows; i++)
        {
            for(int j = 0;j < num_rows - i - 1;j++ ){
                 std::cout << " ";
            }
            for(int j = 0;j < i+1; j++){
                color = (rand() % 4);
                SetConsoleTextAttribute(hConsole, colors[color]);
                std::cout <<  pos << " ";

            }
            std::cout << "\n";
        }
        for(int i = 0; i < 3; i++)//draw bottom of tree
        {
            std::cout << "\t\t\t";
            for (size_t j = 0; j < 10; j++)
            {
            color  = (rand() % 4);//set color as random number
            SetConsoleTextAttribute(hConsole, colors[color]);//set color
            std::cout << pos;
                
            }
            std::cout << std::endl;
            
            
        

        }
        Sleep(1000);//you can edit this number       
        system("cls");//clears console
        

    }

}