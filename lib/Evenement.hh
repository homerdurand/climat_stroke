#ifndef EVENEMENT_HH
#define EVENEMENT_HH

#include<iostream>
#include<string>

class Evenement{

public:

  Evenement();

  ~Evenement();

protected:

  std::size_t m_id;
  std::string m_description;

};
