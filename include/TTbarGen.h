#ifndef TTbarGen_H
#define TTbarGen_H

#include "TLorentzVector.h"
#include "SFrameTools/include/Objects.h"
#include "SFrameTools/include/BaseCycleContainer.h"

/**
 *   Class for ttbar generator truth information
 */

class TTbarGen
{
  
 public:
  /// Default constructor, loops over generator particle list and fills the relevant particles
  TTbarGen(BaseCycleContainer* bcc);
  
  /// Default destructor
  ~TTbarGen();

  enum E_DecayChannel{
    e_had, 
    e_ehad, 
    e_muhad,
    e_tauhad,
    e_ee,  
    e_mumu,
    e_tautau,
    e_emu,
    e_etau,
    e_mutau,
    e_notfound
  };

  GenParticle Top(); 
  GenParticle Antitop();
  GenParticle WTop(); 
  GenParticle WAntitop(); 
  GenParticle bTop(); 
  GenParticle bAntitop(); 
  GenParticle Wdecay1(); 
  GenParticle Wdecay2(); 
  GenParticle WMinusdecay1(); 
  GenParticle WMinusdecay2();
  E_DecayChannel DecayChannel();

  bool IsTopHadronicDecay();
  bool IsAntiTopHadronicDecay();

  //only for l+jets decays
  GenParticle TopLep(); 
  GenParticle TopHad();
  GenParticle BLep();
  GenParticle BHad(); 
  GenParticle WLep();
  GenParticle WHad(); 
  GenParticle ChargedLepton();
  GenParticle Neutrino();
  GenParticle Q1();
  GenParticle Q2(); 

  
 private:

  GenParticle m_Top; 
  GenParticle m_Antitop;
  GenParticle m_WTop; 
  GenParticle m_WAntitop;
  GenParticle m_bTop; 
  GenParticle m_bAntitop;
  GenParticle m_Wdecay1; 
  GenParticle m_Wdecay2; 
  GenParticle m_WMinusdecay1; 
  GenParticle m_WMinusdecay2; 
  int m_pdgId1;
  int m_pdgId2;
  int m_indexW;
  int m_indexb;
  int m_index1;
  int m_index2;

  E_DecayChannel m_type;


}; // class TTbarGen


#endif // TTbarGen_H
