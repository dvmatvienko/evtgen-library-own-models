//--------------------------------------------------------------------------
//
// Environment:
//      This software is part of the EvtGen package developed jointly
//      for the BaBar and CLEO collaborations.  If you use all or part
//      of it, please give an appropriate acknowledgement.
//
// Copyright Information: See EvtGen/COPYRIGHT
//      Copyright (C) 1998      Caltech, UCSB
//
// Module: EvtGen/EvtBcVMuNu.hh
//
// Description:Implementation of the model for semileptonic Bc decays
//
// Modification history:
//
//    AVL     Jul 6, 2012             Module created
//    AVL     Feb 5, 2018            D0, D*0 modes added
//
//------------------------------------------------------------------------

#ifndef EVTBcVMuNu_HH
#define EVTBcVMuNu_HH

#include "EvtGenBase/EvtDecayAmp.hh"
#include "EvtGenBase/EvtSemiLeptonicFF.hh"
#include "EvtGenBase/EvtSemiLeptonicAmp.hh"
#include <memory>

class EvtParticle;

class EvtBcVMuNu:public  EvtDecayAmp  {

public:

  std::string getName() override;
  EvtDecayBase* clone() override;

  void decay(EvtParticle *p) override;
  void init() override;

  void initProbMax() override;


private:
  std::unique_ptr<EvtSemiLeptonicFF> ffmodel;
  std::unique_ptr<EvtSemiLeptonicAmp> calcamp;
  int whichfit;
  int idVector;
};

#endif

