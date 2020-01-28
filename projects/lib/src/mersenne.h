/*
    This file is part of Sylvan.
    Copyright (C) 2008-2018 Cute Chess authors
    Copyright (C) 2019 Wilbert Lee

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

#ifndef MERSENNE_H
#define MERSENNE_H

#include <QtGlobal>

/*!
 * \brief A "Mersenne Twister" pseudorandom number generator
 *
 * The Mersenne PRNG produces pseudorandom numbers between
 * 0 and 0xFFFFFFFF - 1 at uniform distribution. Unlike Qt's
 * own random numbers, the sequences generated by this class
 * are not deterministic per thread.
 */
class LIB_EXPORT Mersenne
{
public:
    /*! Initializes the PRNG with \a seed. */
    static void initialize(quint32 seed);
    /*!
         * Returns a pseudorandom number between 0 and 0xFFFFFFFF -1.
         *
         * This function is thread-safe.
         */
    static quint32 random();

private:
    Mersenne();
};

#endif // MERSENNE_H
