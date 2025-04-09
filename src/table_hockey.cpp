#include <string>
#include <utils/tools.h>

int main(int argc, char *argv[]) {
    std::string playerName;

    if (argc > 1) {
        playerName = argv[1];
    } else {
        playerName = "Player";
    }

    start_table_hockey(playerName);
    return 0;
}

