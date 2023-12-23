#include <iostream>
#include <string>

const int arraySize = 3;

class TicTacToe{
    public:
    std::string board[arraySize][arraySize];
    int playerPos;

    void gameBoard(){
        std::cout<<"\n------------------\n";
        std::cout<<"\n  "<<board[0][0]<<"   |  "<<board[0][1]<< "   |  "<<board[0][2];
        std::cout<<"\n------------------\n";
        std::cout<<"\n  "<<board[1][0]<<"   |  "<<board[1][1]<< "   |  "<<board[1][2];
        std::cout<<"\n------------------\n";
        std::cout<<"\n  "<<board[2][0]<<"   |  "<<board[2][1]<< "   |  "<<board[2][2];
        std::cout<<"\n------------------\n";
    }
    
    void playerTurn(){
        std::cout<<"Enter the position you want to play: ";
        std::cin>>playerPos;
        if(playerPos <= 9){
            switch(playerPos){
            case 1:
            if(board[0][0] != "X" && board[0][0] != "O"){
                board[0][0] = "O";
                gameBoard();
                CheckWinner();
                CpuTurn();
                }
                else{
                    std::cout<<"\n";
                    std::cout<<"That position is already taken please choose another position"<<std::endl;
                    gameBoard();
                    playerTurn();
                    }
            board[0][0] = "O";
            break;
            case 2:
            if(board[0][1] != "X" && board[0][1] != "O"){
                board[0][1] = "O";
                gameBoard();
                CheckWinner();
                CpuTurn();
                }
                else{
                    std::cout<<"\n";
                    std::cout<<"That position is already taken please choose another position"<<std::endl;
                    gameBoard();
                    playerTurn();
                    }
            break;
            case 3:
            if(board[0][2] != "X" && board[0][2] != "O"){
                board[0][2] = "O";
                gameBoard();
                CheckWinner();
                CpuTurn();
                }
                else{
                    std::cout<<"\n";
                    std::cout<<"That position is already taken please choose another position"<<std::endl;
                    gameBoard();
                    playerTurn();
                    }
            break;
            case 4:
            if(board[1][0] != "X" && board[1][0] != "O"){
                board[1][0] = "O";
                gameBoard();
                CheckWinner();
                CpuTurn();
                }
                else{
                    std::cout<<"\n";
                    std::cout<<"That position is already taken please choose another position"<<std::endl;
                    gameBoard();
                    playerTurn();
                    }
            break;
            case 5:
            if(board[1][1] != "X" && board[1][1] != "O"){
                board[1][1] = "O";
                gameBoard();
                CheckWinner();
                CpuTurn();
                }
                else{
                    std::cout<<"\n";
                    std::cout<<"That position is already taken please choose another position"<<std::endl;
                    gameBoard();
                    playerTurn();
                    }
            break;
            case 6:
            if(board[1][2] != "X" && board[1][2] != "O"){
                board[1][2] = "O";
                gameBoard();
                CheckWinner();
                CpuTurn();
                }
                else{
                    std::cout<<"\n";
                    std::cout<<"That position is already taken please choose another position"<<std::endl;
                    gameBoard();
                    playerTurn();
                    }
            break;
            case 7:
            if(board[2][0] != "X" && board[2][0] != "O"){
                board[2][0] = "O";
                gameBoard();
                CheckWinner();
                CpuTurn();
                }
                else{
                    std::cout<<"\n";
                    std::cout<<"That position is already taken please choose another position"<<std::endl;
                    gameBoard();
                    playerTurn();
                    }
            break;
            case 8:
            if(board[2][1] != "X" && board[2][1] != "O"){
                board[2][1] = "O";
                gameBoard();
                CheckWinner();
                CpuTurn();
                }
                else{
                    std::cout<<"\n";
                    std::cout<<"That position is already taken please choose another position"<<std::endl;
                    gameBoard();
                    playerTurn();
                    }
            break;
            case 9:
            if(board[2][2] != "X" && board[2][2] != "O"){
                board[2][2] = "O";
                gameBoard();
                CheckWinner();
                CpuTurn();
                }
                else{
                    std::cout<<"\n";
                    std::cout<<"That position is already taken please choose another position"<<std::endl;
                    gameBoard();
                    playerTurn();
                    }
            break;
        }
        }
        else{
            std::cout<<"Please Enter an integer position from 1 to 9!"<<std::endl;
            playerTurn();
        }

    }

    void CpuTurn(){
        //================================================================== 1




        if(playerPos == 1 && board[0][1] != "O" && board[0][2] != "O" && board[1][0] != "O" && board[1][1]!= "O" && board[1][2] != "O" && board[2][0] != "O" && board[2][1] != "O" && board[2][2] != "O"){
            board[1][1] = "X";
            std::cout<<"The Computer has completed its turn: "<<std::endl;
            gameBoard();
            CheckWinner();
            playerTurn();
            if(playerPos == 2){
                board[0][2] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 4){
                    board[2][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 6){
                    board[2][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[2][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 9){
                    board[2][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 7){
                    board[1][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 8){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 9){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 6){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 9){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }



            else if(playerPos == 3){
                board[0][1] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 4){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 6){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 7){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 9){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[1][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 7){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 9){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 6){
                        board[2][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 7){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }


            else if(playerPos == 4){
                board[2][0] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 2){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 6){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 9){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 3){
                    board[0][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 6){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 9){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 8){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 9){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }


            else if(playerPos == 6){
                board[0][1] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 3){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 4){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 7){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 9){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[2][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 9){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 4){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 3){
                        board[2][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 4){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }



            else if(playerPos == 7){
                board[1][0] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 2){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 3){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 9){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 6){
                    board[0][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 9){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 3){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 8){
                        board[2][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 3){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }



            else if(playerPos == 8){
                board[1][0] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 2){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 3){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 7){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 9){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 6){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 9){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 2){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 7){
                        board[2][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 3){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }



            else if(playerPos == 9){
                board[0][1] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 3){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 4){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 6){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 7){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[2][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 4){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 6){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 3){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 4){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }

        }



        //============================================================  2



        if(playerPos == 2 && board[0][0] != "O" && board[0][2] != "O" && board[1][0] != "O" && board[1][1]!= "O" && board[1][2] != "O" && board[2][0] != "O" && board[2][1] != "O" && board[2][2] != "O"){
            board[0][0] = "X";
            std::cout<<"The Computer has completed its turn: "<<std::endl;
            gameBoard();
            CheckWinner();
            playerTurn();
            if(playerPos == 3){
                board[1][0] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 5){
                    board[2][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 6){
                    board[2][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[2][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 9){
                    board[2][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 7){
                    board[1][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 8){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 9){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 6){
                        board[2][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                }
            }



            else if(playerPos == 4){
                board[1][1] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 7){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 8){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 3){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 6){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 9){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 6){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 8){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 7){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 6){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }


            else if(playerPos == 5){
                board[2][1] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 3){
                    board[2][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos == 4){
                        board[2][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 6){
                        board[2][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }

                    else if(playerPos == 9){
                        board[1][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                }
                else if(playerPos == 4){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos == 3){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 9){
                            std::cout<<"Draw!"<<std::endl;
                        }

                    }
                }

                else if(playerPos == 6){
                    board[0][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos == 3){
                         board[0][2] = "X";
                         std::cout<<"The Computer has completed its turn: "<<std::endl;
                         gameBoard();
                         CheckWinner();
                    }
                    if(playerPos == 9){
                         board[0][2] = "X";
                         std::cout<<"The Computer has completed its turn: "<<std::endl;
                         gameBoard();
                         CheckWinner();
                    }
                    if(playerPos == 7){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 9){
                            std::cout<<"Draw!"<<std::endl;
                        }

                    }
                }
                else if(playerPos == 7){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos == 3){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 9){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                }
                else if(playerPos == 9){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos == 3){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 7){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }

                }
            }


            else if(playerPos == 6){
                board[2][0] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 3){
                    board[1][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 5){
                    board[1][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[1][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 9){
                    board[1][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[1][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 9){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 3){
                        board[2][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 8){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                }
            }



            else if(playerPos == 7){
                board[1][1] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 3){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 4){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 6){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 8){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 9){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 3){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 4){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                    else if(playerPos == 4){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 6){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                    else if(playerPos == 6){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 4){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                }
            }



            else if(playerPos == 8){
                board[1][1] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 3){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 4){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 5){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 4){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 9){
                    board[2][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 6){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 4){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 3){
                        board[1][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                }
            }



            else if(playerPos == 9){
                board[1][1] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 3){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos == 7){
                        board[2][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 8){
                        board[2][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }

                    else if(playerPos == 4){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 8){
                            std::cout<<"Draw!"<<std::endl;
                        }

                    }
                }

                else if(playerPos == 4){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos == 6){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 8){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 7){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 6){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                }

                else if(playerPos == 6){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos == 4){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 8){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 7){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 4){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                }

                else if(playerPos == 7){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos == 3){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 4){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                }

                else if(playerPos == 8){
                    board[2][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos == 3){
                        board[1][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 4){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 6){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                }
                
            }

        }




        //==========================================================  3



        if(playerPos == 3 && board[0][0] != "O" && board[0][1] != "O" && board[1][0] != "O" && board[1][1]!= "O" && board[1][2] != "O" && board[2][0] != "O" && board[2][1] != "O" && board[2][2] != "O"){
            board[1][1] = "X";
            std::cout<<"The Computer has completed its turn: "<<std::endl;
            gameBoard();
            CheckWinner();
            playerTurn();
            if(playerPos == 1){
                board[0][1] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 4){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 6){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 7){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 9){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[1][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 7){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 9){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 6){
                        board[2][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 7){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }



            else if(playerPos == 2){
                board[0][0] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 4){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 6){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 7){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 8){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 9){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 7){
                        board[1][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 8){
                        board[1][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 4){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 8){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }


            else if(playerPos == 4){
                board[0][0] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 2){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 6){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 7){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 9){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 2){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 8){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                    else if(playerPos == 7){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 2){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                    else if(playerPos = 8){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 2){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }


            else if(playerPos == 6){
                board[2][2] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 1){
                    board[0][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos == 4){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 7){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 8){
                        board[1][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 7){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }

                }
                else if(playerPos == 2){
                    board[0][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 4){
                    board[0][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 7){
                    board[0][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[0][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                }
            }



            else if(playerPos == 7){
                board[0][1] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 1){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 4){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 6){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 9){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 6){
                        board[0][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 4){
                        board[0][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 1){
                        board[1][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 6){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }



            else if(playerPos == 8){
                board[1][0] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 1){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 2){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 7){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 9){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 6){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 7){
                        board[0][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 2){
                        board[0][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 1){
                        board[0][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 7){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }



            else if(playerPos == 9){
                board[1][2] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 1){
                    board[1][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 2){
                    board[1][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 7){
                    board[1][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 8){
                    board[1][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 4){
                    board[0][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos = 2){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 8){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                    else if(playerPos = 7){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 2){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                    else if(playerPos = 3){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 2){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                }
            }

        }




        //=================================================================== 9 



         if(playerPos == 9 && board[0][0] != "O" && board[0][1] != "O" && board[1][0] != "O" && board[1][1]!= "O" && board[1][2] != "O" && board[2][0] != "O" && board[2][1] != "O"){
            board[1][1] = "X";
            std::cout<<"The Computer has completed its turn: "<<std::endl;
            gameBoard();
            CheckWinner();
            playerTurn();
            if(playerPos == 8){
                board[2][0] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 1){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 2){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 4){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 6){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 3){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 1){
                        board[1][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 2){
                        board[1][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 4){
                        board[0][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 2){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }



            else if(playerPos == 7){
                board[2][1] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 1){
                    board[0][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 4){
                    board[0][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 3){
                    board[0][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 6){
                    board[0][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 2){
                    board[0][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos = 3){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 4){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                    if(playerPos = 4){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 6){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                    if(playerPos = 6){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 4){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                
                }
            }


            else if(playerPos == 6){
                board[0][2] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 1){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 2){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 4){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 8){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 7){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 1){
                        board[0][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 4){
                        board[0][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 2){
                        board[0][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 4){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }


            else if(playerPos == 4){
                board[0][0] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos = 2){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos = 6){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 8){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 7){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 6){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                }
                else if(playerPos = 3){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos = 2){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 8){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                    else if(playerPos = 7){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 2){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                    else if(playerPos = 8){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 2){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                }

                else if(playerPos = 6){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos = 2){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 7){
                        board[0][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 8){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                }
                else if(playerPos = 7){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos = 2){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 6){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                    else if(playerPos = 3){
                        board[0][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 6){
                        board[0][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                }

                else if(playerPos = 8){
                    board[2][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos = 3){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 2){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                    else if(playerPos = 2){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 6){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                }
            }



            else if(playerPos == 7){
                board[1][0] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 2){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 3){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 9){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 6){
                    board[0][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 9){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 3){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 8){
                        board[2][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 3){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }



            else if(playerPos == 3){
                board[1][2] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 1){
                    board[1][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 2){
                    board[1][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 7){
                    board[1][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 8){
                    board[1][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 4){
                    board[0][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 2){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 8){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                    else if(playerPos == 7){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 2){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                    else if(playerPos = 8){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 2){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                }
            }



            else if(playerPos == 2){
                board[0][0] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 3){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos == 4){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 8){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }

                    if(playerPos == 7){
                        board[1][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    if(playerPos == 8){
                        board[1][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                }

                else if(playerPos == 4){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos == 7){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 6){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }

                    if(playerPos == 6){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    if(playerPos == 8){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                }

                else if(playerPos == 6){
                    board[0][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos == 7){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 4){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }

                    if(playerPos == 4){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    if(playerPos == 8){
                        board[2][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                }

                else if(playerPos == 7){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 3){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 4){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                    else if(playerPos == 4){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 6){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                    else if(playerPos = 6){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 4){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                }

                else if(playerPos == 8){
                    board[2][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos == 3){
                        board[1][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }

                    if(playerPos == 4){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    if(playerPos == 6){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                }
                
            }

            else if(playerPos == 1){
                board[0][1] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 3){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 4){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 6){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 7){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[2][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 4){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 6){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos = 3){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 4){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                }
            }

        }

        //===================================================== 7



if(playerPos == 7 && board[0][0] != "O" && board[0][1] != "O" && board[0][2] != "O" && board[1][0] != "O" && board[1][1]!= "O" && board[1][2] != "O" && board[2][1] != "O" && board[2][2] != "O"){
            board[1][1] = "X";
            std::cout<<"The Computer has completed its turn: "<<std::endl;
            gameBoard();
            CheckWinner();
            playerTurn();
            if(playerPos == 1){
                board[1][0] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 2){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 3){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 9){
                    board[1][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 6){
                    board[1][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 3){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 9){
                        board[2][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 8){
                        board[2][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 3){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }



            else if(playerPos == 2){
                board[0][0] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 4){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 6){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 3){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 8){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 9){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 3){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 4){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                    else if(playerPos == 4){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos = 6){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                    else if(playerPos == 6){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 4){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }


            else if(playerPos == 3){
                board[0][1] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 1){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 4){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 6){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 9){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 4){
                        board[0][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 8){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                    else if(playerPos == 6){
                        board[0][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 2){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                    else if(playerPos = 1){
                        board[1][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 6){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }


            else if(playerPos == 4){
                board[0][0] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 2){
                    board[0][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                    if(playerPos == 3){
                        board[0][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 6){
                        board[0][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 2){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 6){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }

                }
                else if(playerPos == 2){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 3){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 6){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();
                }
            }



            else if(playerPos == 6){
                board[0][1] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 1){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 4){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 9){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 3){
                    board[2][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 8){
                    board[2][2] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 4){
                        board[0][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 3){
                        board[0][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 1){
                        board[1][0] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 3){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }



            else if(playerPos == 8){
                board[2][2] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 2){
                    board[0][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 3){
                    board[0][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 6){
                    board[0][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 4){
                    board[0][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 1){
                    board[1][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 2){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 3){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                    }
                    else if(playerPos == 6){
                        board[0][1] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 3){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                }
            }



            else if(playerPos == 9){
                board[2][1] = "X";
                std::cout<<"The Computer has completed its turn: "<<std::endl;
                gameBoard();
                CheckWinner();
                playerTurn();
                if(playerPos == 1){
                    board[0][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 3){
                    board[0][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 4){
                    board[0][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }
                else if(playerPos == 6){
                    board[0][1] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                }

                else if(playerPos == 2){
                    board[0][0] = "X";
                    std::cout<<"The Computer has completed its turn: "<<std::endl;
                    gameBoard();
                    CheckWinner();
                    playerTurn();

                    if(playerPos == 3){
                        board[1][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 4){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                    else if(playerPos == 4){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 6){
                            std::cout<<"Draw!"<<std::endl;
                            }
                    }
                    else if(playerPos == 6){
                        board[0][2] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                        if(playerPos == 4){
                            std::cout<<"Draw!"<<std::endl;
                        }
                    }
                }
            }

        }
        
        
        /*if(playerPos == 8 || playerPos == 9 || playerPos == 7 || playerPos == 6 || playerPos == 5 || playerPos == 4 || playerPos == 3 || playerPos == 2 || playerPos == 1){
            for (int i = 0; i < arraySize; i++)
            {
                for (int j = 0; j < arraySize; j++)
                {
                    if(board[i][j] != "O" && board[i][j] != "O"){
                        board[i][j] = "X";
                        std::cout<<"The Computer has completed its turn: "<<std::endl;
                        gameBoard();
                        CheckWinner();
                        playerTurn();
                    }
                    else{

                    }
                }
            }

    }*/
}


    
    bool CheckWinner(){
    //if x is in a line then the computer won
    //if O is in a line then the user won.
    if (board[0][0] == "O" && board[0][1] == "O" && board[0][2] == "O" ||
        board[1][0] == "O" && board[1][1] == "O" && board[1][2] == "O" ||
        board[2][0] == "O" && board[2][1] == "O" && board[2][2] == "O" ||
        board[0][0] == "O" && board[1][1] == "O" && board[2][2] == "O" ||
        board[0][2] == "O" && board[1][1] == "O" && board[2][0] == "O" ||
        board[0][0] == "O" && board[1][0] == "O" && board[2][0] == "O" ||
        board[0][1] == "O" && board[1][1] == "O" && board[2][1] == "O" ||
        board[0][2] == "O" && board[1][2] == "O" && board[2][2] == "O") {
        std::cout << "Congratulations! You have won!" << std::endl;
        return true;
    }
    
    else if (board[0][0] == "X" && board[0][1] == "X" && board[0][2] == "X" ||
    board[1][0] == "X" && board[1][1] == "X" && board[1][2] == "X" ||
    board[2][0] == "X" && board[2][1] == "X" && board[2][2] == "X" ||
    board[0][0] == "X" && board[1][1] == "X" && board[2][2] == "X" ||
    board[0][2] == "X" && board[1][1] == "X" && board[2][0] == "X" ||
    board[0][0] == "X" && board[1][0] == "X" && board[2][0] == "X" ||
    board[0][1] == "X" && board[1][1] == "X" && board[2][1] == "X" ||
    board[0][2] == "X" && board[1][2] == "X" && board[2][2] == "X") {
    std::cout << "The Computer has won! Better luck next time!" << std::endl;
    return false;
    }
    //also check for draw

    return false; 
}

};












class TicTacToeMultiplayer
{
private:
    char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char current_turn = 'X';
    bool playing = true;
    int state = 0;
    int input;

public:
    void print_board();
    int play_move(int index, char move);
    int check_win(char move);
    void start();
};






int main(){
    TicTacToe game;
    TicTacToeMultiplayer game1;
    
    int response;


    std::cout<<"Please Enter 1 if you would like to play a multiplayer game of Tic-Tac-Toe,"<<std::endl;
    std::cout<<"Please Enter 2 If you would like to Play against the computer."<<std::endl;
    std::cout<<"(WARNING! if you wish to play against the coputer the code is not finished yet,"<<std::endl;
    std::cout<<"As I still have to code down the parts where the player enters their first value as 4, 5, or 6"<<std::endl;
    std::cout<<"However you can still play against the computer if you enter the values 1, 2, 3, 7, or 9 as your first entry"<<std::endl;
    std::cout<<"If you choose to play against the computer, and you entered the values specified, it is imposible to beat the game!"<<std::endl;
    std::cout<<"Enter value: ";
    std::cin>>response;

    if(response == 1 || response == 2){
        switch(response){
            case 1:
            game1.start();
            break;
            case 2:
            game.gameBoard();
            game.playerTurn();
            break; 
        }
    }
    else{
        std::cout<<"Invalid input! Please Enter either 1 or 2: ";
    }
    
    return 0;
}


void TicTacToeMultiplayer :: start()
{
    while (playing == true)
    {
        print_board();
        std::cout << "Play your move " << current_turn << std::endl;
        std::cin >> input;
        if (play_move(input, current_turn) == 0)
        {
            std::cout << "Box already occupied" << std::endl;
            continue;
        };
        state = check_win(current_turn);
        if (state == 1)
        {
            print_board();
            std::cout << current_turn << " wins the game!" << std::endl;
            break;
        }
        else if (state == 2)
        {
            std::cout << "Draw!" << std::endl;
            break;
        };
        current_turn = (current_turn == 'X') ? 'O' : 'X';
    };
};

void TicTacToeMultiplayer :: print_board()
{
    for (int i = 0; i < 9; i++)
    {
        if (i == 1 || i == 2 || i == 4 || i == 5 || i == 7 || i == 8)
        {
            std::cout << " | ";
        }
        std::cout << board[i];
        if (i == 2 || i == 5)
        {
            std::cout << std::endl;
            std::cout << "---------" << std::endl;
        }
    }
    std::cout << std::endl;
};

int TicTacToeMultiplayer :: play_move(int index, char move)
{
    if (index >= 0 && index < 9)
    {
        if (board[index] == ' ')
        {
            board[index] = move;
            return 1;
        }
    }
    return 0;
};

/*
   0 1 2
   3 4 5
   6 7 8
*/
int TicTacToeMultiplayer ::check_win(char move)
{
    if (
        // Horizontal checks
        (board[0] == move && board[1] == move && board[2] == move) ||
        (board[3] == move && board[4] == move && board[5] == move) ||
        (board[6] == move && board[7] == move && board[8] == move) ||
        // Vertical Checks
        (board[0] == move && board[3] == move && board[6] == move) ||
        (board[1] == move && board[4] == move && board[7] == move) ||
        (board[2] == move && board[5] == move && board[8] == move) ||
        // Diagonal Checks
        (board[0] == move && board[4] == move && board[8] == move) ||
        (board[2] == move && board[4] == move && board[6] == move))
    {
        return 1;
    }
    else
    {
        bool draw = true;
        for (int i = 0; i < 9; i++)
        {
            if (board[i] == ' ')
            {
                draw = false;
                break;
            }
        }
        if (draw == true)
        {
            return 2;
        }
    }
    return 0;
};
