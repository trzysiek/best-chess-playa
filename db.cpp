#include "db.h"
#include "pieces.h"

// TODO: dodac dobra mapke
std::map<std::string, Board::Pieces> DB::starting_pieces = {
    {"white", {Pawn(8),
               Pawn(9),
               Pawn(10),
               Pawn(11),
               Pawn(12),
               Pawn(13),
               Pawn(14),
               Pawn(15),
               Rook(0),
               Knight(1),
               Bishop(2),
               Queen(3),
               King(4),
               Bishop(5),
               Knight(6),
               Rook(7)
    }},
    {"black", {Pawn(48),
               Pawn(49),
               Pawn(50),
               Pawn(51),
               Pawn(52),
               Pawn(53),
               Pawn(54),
               Pawn(55),
               Rook(56),
               Knight(57),
               Bishop(58),
               Queen(59),
               King(60),
               Bishop(61),
               Knight(62),
               Rook(63)
    }},
};
