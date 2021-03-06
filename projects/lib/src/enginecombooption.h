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

#ifndef ENGINECOMBOOPTION_H
#define ENGINECOMBOOPTION_H

#include <QStringList>

#include "engineoption.h"

class LIB_EXPORT EngineComboOption : public EngineOption
{
public:
    EngineComboOption(const QString& name,
                      const QVariant& value = QVariant(),
                      const QVariant& defaultValue = QVariant(),
                      const QStringList& choices = QStringList(),
                      const QString& alias = QString());

    // Inherited from EngineOption
    virtual EngineOption* copy() const;
    virtual bool isValid(const QVariant& value) const;
    virtual QVariant toVariant() const;

    QStringList choices() const;
    void setChoices(const QStringList& choices);

private:
    QStringList m_choices;
};

#endif // ENGINECOMBOOPTION_H
