#ifndef POPULATION_HH
#define POPULATION_HH

class public::Population{

public:

  Population(std::string &lev_difficulty);

  std::float set_lev_conflict(std::string lev_difficulty);
  std::float set_lev_health(std::string lev_difficulty);
  std::float get_lev_health() const;
  std::float get_lev_conflict() const;

  ~Population();

protected:

  std::size_t m_nbr_indiv;
  std::float m_lev_health;
  st::float m_lev_conflict;

};
