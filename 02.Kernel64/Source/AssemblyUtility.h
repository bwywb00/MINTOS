#ifndef __ASSEMBLYUTILITY_H__
#define __ASSEMBLYUTILITY_H__

#include "Types.h"

BYTE kInPortByte(WORD wPort);
BYTE kOutPortByte(WORD wPort, BYTE bData);
void kLoadGDTR(QWORD qwGDTRAddress);
void kLoadTR(WORD wTSSSegmentOffset);
void kLoadIDTR(QWORD qwIDRTAddress);

#endif /*__ASSEMBLYUTILITY_H__*/