    /**
  *********************************************************************
*************************************************************************
*** 
*** \file  AlsaSoundCardInterface.hpp
*** \brief AlsaSoundCardInterfaceheader
***
*****************************************
  *****************************************
    **/
  
/*
  
  Copyright (c) 2007, Tim Burrell
  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at 

	http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and 
  limitations under the License. 
  
*/

#ifndef __AlsaSoundCardInterface_h
#define __AlsaSoundCardInterface_h

#if HAVE_CONFIG_H
#include "config.h"
#endif

#include <string>

//////////////////////////////////////////////////////////////////////////////
// Typedefs
///////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
// AlsaSoundCardInterface Class Definition
///////////////////////////////////////

/**
 * \class  AlsaSoundCardInterface
 * \brief  Data structure that holds information about Alsa events
 */
class AlsaSoundCardInterface {
public:	
	// public member variables
	
	// public functions
	virtual std::string		getCardHardwareID() = 0;	///< Get the card's hardware ID
	virtual int			getCardID() = 0;		///< Get the card ID
	virtual std::string		getCardName() = 0;		///< Get the name of the card
	virtual std::string		getCardNameLong() = 0;		///< Get the long name of the card

	// construction / deconstruction
	AlsaSoundCardInterface();
	virtual ~AlsaSoundCardInterface();

private:
	// private functions
		
	// private member variables
};

#endif // __AlsaSoundCardInterface_h