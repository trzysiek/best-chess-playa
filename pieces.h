#ifndef pieces_h
#define pieces_h

class Piece;

#include "board.h"

#include <iostream>
#include <vector>

class Piece {
  public:
    int i; // index
    std::string to_string = "*";
    int value = -1;

    std::vector<std::pair<int, int>> list_of_possible_moves(const Board&);
    friend std::ostream& operator<<(std::ostream&, const Piece&);

    Piece& operator=(Piece&& p) = default;
    Piece& operator=(const Piece& p) = default;
    Piece (const Piece& p) : i(p.i), to_string(p.to_string), value(p.value) {}
    Piece (int i) : i(i) {}
    Piece () : Piece(0) {}
    Piece (int i, int value, std::string to_str) : i(i), value(value), to_string(to_str) {}
    Piece (int value, std::string to_str) : Piece(0, value, to_str) {}
};

class Pawn : public Piece {
  private:
    static const int DEFAULT_VALUE;
    static const std::string TO_STRING;
  public:
    Pawn (int i) : Piece(i, DEFAULT_VALUE, TO_STRING) {}
    Pawn () : Pawn(0) {}
};

class Knight : public Piece {
  private:
    static const int DEFAULT_VALUE;
    static const std::string TO_STRING;
  public:
    Knight (int i) : Piece(i, DEFAULT_VALUE, TO_STRING) {}
    Knight () : Knight(0) {}
};

class Bishop : public Piece {
  private:
    static const int DEFAULT_VALUE;
    static const std::string TO_STRING;
  public:
    Bishop (int i) : Piece(i, DEFAULT_VALUE, TO_STRING) {}
    Bishop () : Bishop(0) {}
};

class Rook : public Piece {
  private:
    static const int DEFAULT_VALUE;
    static const std::string TO_STRING;
  public:
    Rook (int i) : Piece(i, DEFAULT_VALUE, TO_STRING) {}
    Rook () : Rook(0) {}
};

class Queen : public Piece {
  private:
    static const int DEFAULT_VALUE;
    static const std::string TO_STRING;
  public:
    Queen (int i) : Piece(i, DEFAULT_VALUE, TO_STRING) {}
    Queen () : Queen(0) {}
};

class King : public Piece {
  private:
    static const int DEFAULT_VALUE;
    static const std::string TO_STRING;
  public:
    King (int i) : Piece(i, DEFAULT_VALUE, TO_STRING) {}
    King () : King(0) {}
};
#endif // pieces_h
