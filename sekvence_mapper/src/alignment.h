#include <iostream>

enum AlignmentType {GLOBAL, LOCAL, SEMI_GLOBAL};

int Align(const char* query, unsigned int query_len,
          const char* target, unsigned int target_len,
          AlignmentType type, int match, int mismatch, int gap,
          std::string* cigar,
          unsigned int* target_begin);

