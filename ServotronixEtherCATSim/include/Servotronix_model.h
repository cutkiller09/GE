#ifndef SERVOTRONIX_MODEL_H
#define SERVOTRONIX_MODEL_H

class ServotronixModel {

public:

  ServotronixModel();

  void controlStep();
  
  void processInputs();
  
  void updateOutputs();

private:

  double position_;
  double velocity_;
  double current_;
  
  uint16_t controlword_;
  double targetPosition_;
  
  void motionControl();
  
  void updateRegisters();
  
};

struct servoData {
  double position;
  double velocity;
  double current;
};

#endif