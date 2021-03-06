/*
    This file is part of Sylvan.
    Copyright (C) 2008-2018 The Cute Chess Authors
    Copyright (C) 2019-2020 Wilbert Lee

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Sylvan.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef GENERICMOVE_H
#define GENERICMOVE_H

#include <QMetaType>

#include "square.h"

namespace Chess {

/*!
 * \brief A chess move independent of chess variant or opening book format
 *
 * When a move is made by a human or retrieved from an opening book of any
 * kind, it will be in this format. Later it can be converted to Chess::Move
 * by a Chess::Board object.
 */
class LIB_EXPORT GenericMove
{
public:
    /*! Constructs a new null (empty) move. */
    GenericMove();
    /*! Constructs and initializes a new move. */
    GenericMove(const Square& sourceSquare,
                const Square& targetSquare);

    /*! Returns true if \a other is the same as this move. */
    bool operator==(const GenericMove& other) const;
    /*! Returns true if \a other is different from this move. */
    bool operator!=(const GenericMove& other) const;

    /*! Returns true if this is a null move. */
    bool isNull() const;

    /*! The source square. */
    Square sourceSquare() const;
    /*! The target square. */
    Square targetSquare() const;

    /*! Sets the source square to \a square. */
    void setSourceSquare(const Square& square);
    /*! Sets the target square to \a square. */
    void setTargetSquare(const Square& square);

private:
    Square m_sourceSquare;
    Square m_targetSquare;
};

} // namespace Chess

Q_DECLARE_METATYPE(Chess::GenericMove)

#endif // GENERICMOVE_H
