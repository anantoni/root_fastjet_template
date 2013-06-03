#ifndef __MyHistogram__
#define __MyHistogram__


#include <TH1F.h>

class MyHistogram : public TH1F {
 public:
  MyHistogram(): myint_(1) {}
  void Print() const;


 private:
  int myint_; 
};

#endif
