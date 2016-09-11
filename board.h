#ifndef board_h
#define board_h

class Board;

#include "pieces.h"

#include <array>
#include <iostream>
#include <vector>

class Board {
  public:
    static constexpr unsigned int N = 8;  // board is NxN
    static constexpr unsigned int M = N * N;

    typedef std::vector<Piece> Pieces;

    std::vector<Piece> board;
    std::vector<Piece> white;
    std::vector<Piece> nigga;

    Board() {
        white = get_default_white_pieces();
        nigga = get_default_black_pieces();
        fill_board_from_pieces();
    }

    void print_console() const;
    friend std::ostream& operator<<(std::ostream &os, const Board& b);

  private:
    static Pieces get_default_white_pieces();
    static Pieces get_default_black_pieces();
    void fill_board_from_pieces();
};


#endif // board_h
