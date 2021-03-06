// -*- C++ -*-
// $Id: LocalObject_T.h 92559 2010-11-12 12:28:03Z johnnyw $

#ifndef DDS4CCM_LOCALOBJECT_T_H_
#define DDS4CCM_LOCALOBJECT_T_H_

#include "ace/Copy_Disabled.h"

namespace CIAO
{
  namespace DDS4CCM
  {
    /**
     * Helper template that allocates a new LOCAL_OBJECT from the heap and that
     * makes sure we call ::CORBA::release() at destruction
     */
    template <typename LOCAL_OBJECT>
    class LocalObject_Auto_Ptr_T : private ACE_Copy_Disabled
    {
    public:
      LocalObject_Auto_Ptr_T (void);

      ~LocalObject_Auto_Ptr_T (void);

      explicit LocalObject_Auto_Ptr_T (LOCAL_OBJECT* lobject);

      LOCAL_OBJECT* operator-> (void) const;

      operator LOCAL_OBJECT *& (void);
    private:
      LOCAL_OBJECT* l;
    };
  }
}

#include "dds4ccm/impl/LocalObject_T.cpp"

#endif /* DDS4CCM_LOCALOBJECT_T_H_ */
