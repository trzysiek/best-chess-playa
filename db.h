#ifndef db_h
#define db_h

#include "board.h"

#include <map>
#include <string>

struct DB {
    static std::map<std::string, Board::Pieces> starting_pieces;
};

#endif // db_h
