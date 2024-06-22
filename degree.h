// This will have a enum of with name DegreeProgram with the values: SECURITY, NETWORK, SOFTWARE


#ifndef DEGREE_H
#define DEGREE_H

enum DegreeProgram {
  SECURITY,
  NETWORK,
  SOFTWARE
};

// helper function for enum to string
static std::string degreeProgramToString(DegreeProgram dp) {
  switch(dp) {
    case SECURITY: return "Security";
    case NETWORK: return "Network";
    case SOFTWARE: return "Software";
    default: return "Unknown";
  }
}
#endif