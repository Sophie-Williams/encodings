//   Copyright 2014 Tom Regan
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.


#ifndef ENCODINGS_H_
#define ENCODINGS_H_

#include <sstream>
#include <iostream>
#include <string>

namespace encodings {

namespace hex {

std::string from_base64(std::string);

}  // hex


namespace base64 {

std::string from_hex(std::string);

}  // base64

}  // encodings

#endif  // ENCODINGS_H_
