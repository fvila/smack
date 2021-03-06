//
// Copyright (c) 2008 Zvonimir Rakamaric (zvonimir@cs.utah.edu)
// This file is distributed under the MIT License. See LICENSE for details.
//
#include "BplPrinter.h"

using namespace smack;

RegisterPass<BplPrinter> Y("bpl_print", "BoogiePL printer pass");
char BplPrinter::ID = 0;

bool BplPrinter::runOnModule(Module &m) {
  SmackGenerator& smackGenerator = getAnalysis<SmackGenerator>();
  SmackModule* module = smackGenerator.getModule();
  DEBUG_WITH_TYPE("bpl", errs() << "" << module);
  return false;
}
