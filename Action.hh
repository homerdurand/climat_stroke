#ifndef ACTION_HH
#define ACTION_HH

#include<iostream>
#include<string>

class Evenement:public Action{

public:

  Action();

  std::void consequence();

  ~Action();

protected:

  std::size_t m_cost_action_pt;
  std::map <Action> m_recuired;
};
