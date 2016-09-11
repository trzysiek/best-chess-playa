#include "pieces.h"

const std::string Pawn::TO_STRING   = "P";
const std::string Knight::TO_STRING = "N";
const std::string Bishop::TO_STRING = "B";
const std::string Rook::TO_STRING   = "R";
const std::string Queen::TO_STRING  = "Q";
const std::string King::TO_STRING   = "K";

const int Pawn::DEFAULT_VALUE   = 1;
const int Knight::DEFAULT_VALUE = 3;
const int Bishop::DEFAULT_VALUE = 1;
const int Rook::DEFAULT_VALUE   = 5;
const int Queen::DEFAULT_VALUE  = 9;
const int King::DEFAULT_VALUE   = 4;

std::ostream& operator<<(std::ostream& os, const Piece& p) {
    std::cerr << p.to_string;
    return os;
}
