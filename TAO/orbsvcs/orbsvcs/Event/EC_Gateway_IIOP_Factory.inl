// -*- C++ -*-
//
// $Id: EC_Gateway_IIOP_Factory.inl 73791 2006-07-27 20:54:56Z wotte $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE int
TAO_EC_Gateway_IIOP_Factory::use_ttl (void) const
{
  return this->use_ttl_;
}

ACE_INLINE int
TAO_EC_Gateway_IIOP_Factory::use_consumer_proxy_map (void) const
{
  return this->use_consumer_proxy_map_;
}

TAO_END_VERSIONED_NAMESPACE_DECL
