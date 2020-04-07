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
// Module: EvtGen/EvtSTS.hh
//
// Description:Performs the decay of a scalar -> tensor scalar
//
// Modification history:
//
//    RYD        August 21, 1998         Module created
//
//------------------------------------------------------------------------

#ifndef EVTSTS_HH
#define EVTSTS_HH

#include "EvtGenBase/EvtDecayAmp.hh"

class EvtParticle;

class EvtSTS:public  EvtDecayAmp  {

public:

  std::string getName() override;
  EvtDecayBase* clone() override;

  void init() override;
  void initProbMax() override;

  void decay(EvtParticle *p) override;

};

#endif
