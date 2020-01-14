#ifndef CONTINENT_HH
#define CONTINENT_HH

#include<iostream>
#include<string>

class Continent{

public:

  Continent();

  // les fonctions d'initialisation :
  std::void set_population();

  // les fontions ascenseur :
  std::void get_population() const;

  // les methodes de classe :
  std::void health_lev(std::size_t infra_lev, std::size_t bio_lev, std::size_t temperat);
  std::void alim_lev();
  std::void conflict_lev();

  ~Continent();

protected:

  std::size_t m_temperat;
  std::size_t m_pollu_lev;
  std::size_t m_conso_energy;
  std::size_t m_water_lev;
  std::int m_population;
};
