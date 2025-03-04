#include "TreasureRoomState.h"

TreasureRoomState::TreasureRoomState(vector <State*>* states) : Room("Monster Room", R"(
---------------------------------------------------------------------------------------------------                                                                                                  
,--------.                                                       ,------.                          
'--.  .--',--.--. ,---.  ,--,--. ,---. ,--.,--.,--.--. ,---.     |  .--. ' ,---.  ,---. ,--,--,--. 
   |  |   |  .--'| .-. :' ,-.  |(  .-' |  ||  ||  .--'| .-. :    |  '--'.'| .-. || .-. ||        | 
   |  |   |  |   \   --.\ '-'  |.-'  `)'  ''  '|  |   \   --.    |  |\  \ ' '-' '' '-' '|  |  |  | 
   `--'   `--'    `----' `--`--'`----'  `----' `--'    `----'    `--' '--' `---'  `---' `--`--`--' 
--------------------------------------------------------------------------------------------------- )", "Color 0C")
{
    this->states = states;
}

void TreasureRoomState::updateState()
{
	system("CLS"); // Clears the screen
	system(getRoomColour().c_str());
	cout << getRoomDrawing() << endl; // Displays the drawing of the room name 
    cout << R"(
                            _.--.
                        _.-'_:-'||
                    _.-'_.-::::'||
               _.-:'_.-::::::'  ||
             .'`-.-:::::::'     ||
            /.'`;|:::::::'      ||_
           ||   ||::::::'     _.;._'-._
           ||   ||:::::'  _.-!oo @.!-._'-.
           \'.  ||:::::.-!()oo @!()@.-'_.|
            '.'-;|:.-'.&$@.& ()$%-'o.'\U||
              `>'-.!@%()@'@_%-'_.-o _.|'||
               ||-._'-.@.-'_.-' _.-o  |'||
               ||=[ '-._.-\U/.-'    o |'||
               || '-.]=|| |'|      o  |'||
               ||      || |'|        _| ';
               ||      || |'|    _.-'_.-'
               |'-._   || |'|_.-'_.-'
                '-._'-.|| |' `_.-'
                    '-.||_/.-')" << endl;
    cout << "Congratulations! You have found the treasure and have completed the game, Well done! :)" << endl;
    system("pause");
    states->clear();
}