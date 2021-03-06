// Copyright 2017 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <iostream>
#include <map>

#include "CodeObject.h"
#include "InstructionDecoder.h"

#include "disassembly.hpp"
#include "flowgraph.hpp"
#include "flowgraphutil.hpp"
#include "simhashsearchindex.hpp"
#include "pecodesource.hpp"

using namespace std;
using namespace Dyninst;
using namespace ParseAPI;
using namespace InstructionAPI;

int main(int argc, char** argv) {
  if (argc != 2) {
    printf("Create a new index file for function minhash search.\n");
    printf("Usage: %s <index file>\n", argv[0]);
    return -1;
  }

  std::string index_file(argv[1]);
  SimHashSearchIndex(index_file, true);
}
