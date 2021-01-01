#ifndef HARD_OBJECT_H
#define HARD_OBJECT_H

class HardObject {
  private:
    int private_num;
  public:
    HardObject(int init_num):private_num(init_num){}
    int Get() { return private_num; }
};

#endif /* HARD_OBJECT_H */
