#include <inttypes.h>

//! Error Handler - can be override
void Error_Handler(void);

//! Error macro
#define Error() Error_Handler()

//! For error 
void set_error(char*);
