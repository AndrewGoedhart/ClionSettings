#parse("C File Header.h")
#[[#include]]# "${HEADER_FILENAME}"

${NAMESPACE_OPEN}
  class $NAME {
  private:

  public:  
    $NAME();
    $NAME(const $NAME &other); 
    virtual ~$NAME(); 
    $NAME &operator=(const $NAME &other); 

  
  
  
};

${NAMESPACE_CLOSE}


