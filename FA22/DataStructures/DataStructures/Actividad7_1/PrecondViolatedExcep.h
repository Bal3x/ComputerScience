/** @file PrecondViolatedExcept.h */
#ifndef PRECOND_VIOLATED_EXCEP_
#define PRECOND_VIOLATED_EXCEP_

#include <stdexcept>
#include <string>

class PrecondViolatedExcept : public std::logic_error
{
public:
    PrecondViolatedExcep(const std::string& message = "");
};//end PreconViolatedExcep

PrecondViolatedExcep::PrecondViolatedExcep(const std::string& message) : std::logic_error("Precondition Violated Exception: " + message)
{
}//end constructor

#endif