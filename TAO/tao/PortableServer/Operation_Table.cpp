// -*- C++ -*-
// $Id: Operation_Table.cpp 91628 2010-09-07 11:11:12Z johnnyw $

#include "tao/PortableServer/Operation_Table.h"
#include "tao/ORB.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Operation_Table::~TAO_Operation_Table (void)
{
}

/**************************************************************/
TAO::Operation_Skeletons::Operation_Skeletons (void)
  : skel_ptr (0)
  , thruPOA_skel_ptr (0)
  , direct_skel_ptr (0)
{
}

TAO_END_VERSIONED_NAMESPACE_DECL
