#ifndef SHOT_CONTROL
#define SHOT_CONTROL

struct Error{
  int errorCode;
}

class ShotControl {
  protected:
    int port;
  public:
    void ControlLoop();
    Error Initialize();
};


#endif
