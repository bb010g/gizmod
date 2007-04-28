    /**
  *********************************************************************
*************************************************************************
*** 
*** \file  GizmoEventLIRC.hpp
*** \brief GizmoEventLIRC class header
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

#ifndef __GizmoEventLIRC_h
#define __GizmoEventLIRC_h

#if HAVE_CONFIG_H
#include "config.h"
#endif

#include "GizmoEvent.hpp"
#include <string>
#include <vector>
#include <boost/shared_ptr.hpp>

//////////////////////////////////////////////////////////////////////////////
// Typedef, enum's
///////////////////////////////////////
	
//////////////////////////////////////////////////////////////////////////////
// Class Definition
///////////////////////////////////////

/**
 * \class GizmoEventLIRC
 * \brief Class for LIRC events
 *
 * This class is for all GizmoEventLIRCs attached to the system.
 */
class GizmoEventLIRC : public GizmoEvent {
public:
	// public variables
	std::string			LIRCData;			///< Event string
	std::string			LIRCDataBitString;		///< Event string as bits
	
	// public functions
	std::string			getEventType();			///< Get the type of the Event
	
	// static public functions
	static void			buildEventsVectorFromBuffer(std::vector< boost::shared_ptr<GizmoEventLIRC> > & EventVector, H::DynamicBuffer<char> const & Buffer); ///< Build an event list from a read buffer
	
	// construction / deconstruction
	GizmoEventLIRC();						///< Default Constructor
	GizmoEventLIRC(std::string const & InputEvent);			///< Init Constructor
	virtual ~GizmoEventLIRC();					///< Destructor

protected:
	// private functions
	
	// private member variables
	
	// static private functions
	static void 			buildEventsVectorFromBufferFunctor(struct input_event & InputEvent, std::vector< boost::shared_ptr<GizmoEventLIRC> > * pEventVector); ///< Functor for building the events list
};

#endif // __GizmoEventLIRC_h