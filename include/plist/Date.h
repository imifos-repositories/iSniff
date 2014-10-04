/*
 * Date.h
 * Date node type for C++ binding
 *
 * Copyright (c) 2009 Jonathan Beck All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef PLIST__DATE_H
#define PLIST__DATE_H

#include <plist/Node.h>
#include <ctime>
#include <Winsock2.h>

namespace PList
{

class Date : public Node
{
public :
    Date(Node* parent = NULL);
    Date(plist_t node, Node* parent = NULL);
    Date(Date& d);
    Date& operator=(Date& d);
    Date(timeval t);
    virtual ~Date();

    Node* Clone();

    void SetValue(timeval t);
    timeval GetValue();
};

};

#endif // PLIST__DATE_H
