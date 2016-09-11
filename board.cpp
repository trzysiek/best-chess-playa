#include "board.h"
#include "db.h"

Board::Pieces Board::get_default_white_pieces() {
    return DB::starting_pieces["white"];
}

Board::Pieces Board::get_default_black_pieces() {
    return DB::starting_pieces["black"];
}

void Board::fill_board_from_pieces() {
    std::cerr << white.size() << " " << nigga.size() << std::endl;
    board.resize(M);
    for (unsigned int i = 0; i < M; ++i)
        board[i] = Piece();
    for (const auto& p : white) {
        std::cerr << p << std::endl;
        board[p.i] = p;
    }
    for (const auto& p : nigga)
        board[p.i] = p;
}

std::ostream& operator<<(std::ostream &os, const Board& b) {
    for (int i = 0; i < b.board.size(); ++i) {
        if (i > 0 && i % Board::N == 0)
            std::cerr << std::endl;
        std::cerr << b.board[i];
    }
    std::cerr << std::endl;
    return os;
}
