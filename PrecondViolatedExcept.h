/** @file
 *
 *  @course CS1521
 *  @section 1
 *
 *  Header file for an object thrown on violation of precondition.
 *
 *  Adapted from page 250 in Carrano 7e.
 *
 *  @author Frank M. Carrano
 *  @author Timothy Henry
 *  @author Rudolf Musika
 *
 *  @date 14 March 2018
 *
 *  @version 7.0 */

#ifndef PRECOND_VIOLATED_EXCEP_
#define PRECOND_VIOLATED_EXCEP_

#include <stdexcept>
#include <string>

/** @class PrecondViolatedExcep PrecondViolatedExcep.h "PrecondViolatedExcep.h"
 *
 *  Specification for an object thrown on violation of precondition. */
class PrecondViolatedExcept : public std::logic_error {
public:
    explicit PrecondViolatedExcept(const std::string& message = "");
    
    virtual ~PrecondViolatedExcept() noexcept = default; //throw();
};


#endif
