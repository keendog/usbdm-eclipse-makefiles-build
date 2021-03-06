/*
 * MyException.hpp
 *
 *  Created on: 24/02/2010
 *      Author: podonoghue
 */
#ifndef MYEXCEPTION_HPP_
#define MYEXCEPTION_HPP_

#include <string>
#include <stdexcept>
#include "Log.h"

#pragma GCC visibility push(default)

class MyException : public std::runtime_error {

public:
   MyException(const std::string &msg) : runtime_error(msg) {
#ifdef LOG
      print("Exception: %s\n", msg.c_str());
#endif
   }
};
#pragma GCC visibility pop

#endif /* MYEXCEPTION_HPP_ */
