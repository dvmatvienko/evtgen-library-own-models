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
// Module: EvtGen/EvtISGW2.hh
//
// Description:Implementation of the ISGW2 model
// Class to handle semileptonic decays using the ISGW2
// model, as described in PRD 52 5 (1995) by
// Isgur and Scora.  Electron, muon, and tau models
// are available.  Form factors, q2 and lepton energy
// spectra checked against code from Scora.
//
// Modification history:
//
//    DJL/RYD     September 25, 1996         Module created
//
//------------------------------------------------------------------------

#ifndef EVTISGW2_HH
#define EVTISGW2_HH

#include "EvtGenBase/EvtDecayAmp.hh"
#include "EvtGenBase/EvtSemiLeptonicFF.hh"
#include "EvtGenBase/EvtSemiLeptonicAmp.hh"
#include <memory>
class EvtParticle;

class EvtISGW2:public  EvtDecayAmp  {

public:

  std::string getName() override;
  EvtDecayBase* clone() override;

  void decay(EvtParticle *p) override;
  void initProbMax() override;
  void init() override;

private:
  std::unique_ptr<EvtSemiLeptonicFF> isgw2ffmodel;
  std::unique_ptr<EvtSemiLeptonicAmp> calcamp;
};

#endif
