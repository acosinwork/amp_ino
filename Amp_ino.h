#ifndef AMP_INO
#define AMP_INO

class TimeOut
{
  public:
    bool timeOut(unsigned long time);
    
  private:
    unsigned long _time = 0;
};


#endif