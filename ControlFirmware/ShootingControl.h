#ifndef SHOOTING_CONTROL
#define SHOOTING_CONTROL

struct Error{
  int errorCode;
};

class ShootingControl{
  protected:
    int port;
  public:
    void ControlLoop();
    Error Initialize();
};


#endif
