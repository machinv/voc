/* voc 2.00 [2016/12/10]. Bootstrapping compiler for address size 8, alignment 8. xtspaSF */

#ifndef extTools__h
#define extTools__h

#include "SYSTEM.h"




import void extTools_Assemble (CHAR *moduleName, ADDRESS moduleName__len);
import void extTools_LinkMain (CHAR *moduleName, ADDRESS moduleName__len, BOOLEAN statically, CHAR *additionalopts, ADDRESS additionalopts__len);
import void *extTools__init(void);


#endif // extTools
