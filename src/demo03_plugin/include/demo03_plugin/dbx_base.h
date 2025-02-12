#ifndef DBX_BASE_H_
#define DBX_BASE_H_

namespace dbx_base_ns
{
    /*
        注意:必須保證基類中包含無參構造
    */

  class Dbx_Base
  {
    public:
      virtual void init(double side_length) = 0;
      virtual double getlength() = 0;
      virtual ~Dbx_Base(){}

    protected:
      Dbx_Base(){}
  };
};
#endif