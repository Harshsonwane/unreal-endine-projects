#include<iostream>
#include<ctime>
void printintro(int difficulties)
{
     //print welcome message
    std::cout << "\n\nYou are a secret agent breaking into a level "<<difficulties<<"secure server room...";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...\n\n";
}
bool playgame(int difficulties)
{

    printintro(difficulties);
    // gives 3 random values 
    const int codea = rand() % difficulties + difficulties;
    const int codeb = rand() % difficulties + difficulties;;
    const int codec = rand() % difficulties + difficulties;;

    //doing sum and product 
    const int codesum = codea + codeb + codec;
    const int codeproduct = codea * codeb * codec;

    // Print sum and product to the terminal
    std::cout << std::endl;
    std::cout <<"the code add up to "<<codesum << std::endl;
    std::cout <<"the code product give "<< codeproduct << std::endl;
    
    //store player guess
    int guessA,guessB,guessC;
    std::cin>>guessA>>guessB>>guessC;
    
    //doing sum and product for player guess
    int sumguess=guessC+guessB+guessA;
    int productguess=guessA*guessB*guessC;

    //check player guess is correct or not
    if(sumguess==codesum && productguess==codeproduct)
    {
     
        std::cout<<"\nYou Win";
        std::cout<<"\nGreat work keep it up"
        return true;
    }
    else{
    std::cout<<"\nYou Lose";
    std::cout<<"\nTry one more time"
    return false;
    }
}

int main()
{   
    srand(time(NULL));//creat new random system based on time of day
    
    int leveldiff=1;
    const int maxdiff=3;
    
    
    while(leveldiff<=maxdiff)
    {
    bool blevelcomplete=playgame(leveldiff);
    std::cin.clear();   //clear the error
    std::cin.ignore();  //discard the buffer
    
    if(blevelcomplete)
    {
        ++leveldiff;
    }
    }
    return 0;



}
