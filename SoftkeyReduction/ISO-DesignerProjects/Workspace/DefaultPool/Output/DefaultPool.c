// ISO-Designer ISO 11783   Version 5.6.1.5243 Jetter AG
// Do not change!

#include "DefaultPool.iop.h"
#include "DefaultPool.c.h"

#define WORD(w)  (unsigned char)w, (unsigned char)(w >> 8)
#define LONG(l)  (unsigned char)l, \
					(unsigned char)((unsigned long)l >> 8), \
					(unsigned char)((unsigned long)l >> 16), \
					(unsigned char)((unsigned long)l >> 24)
#define ID(id)           WORD(id)
#define REF(id)          WORD(id)
#define XYREF(id, x, y)  WORD(id), WORD(x), WORD(y)
#define MACRO(ev, id)    ev, id
#define COLOR(c)         c

const unsigned char ISO_OP_MEMORY_CLASS isoOP_DefaultPool[] = {
	17,
	ID(WorkingSet_0), TYPEID_WORKSET, COLOR_WHITE, 1, ID(DataMask_1000), 1, 0, 2,
		XYREF(OutputNumber_12000, 2, 2),
		'e', 'n',
		'd', 'e',
	ID(DataMask_1000), TYPEID_DATAMASK, COLOR_WHITE, ID(ID_NULL), 0, 0, 
	ID(SoftKeyMask_4000), TYPEID_SKEYMASK, COLOR_WHITE, 10, 0, 
		REF(SoftKey_5000),
		REF(SoftKey_5001),
		REF(SoftKey_5002),
		REF(SoftKey_5003),
		REF(SoftKey_5004),
		REF(SoftKey_5006),
		REF(SoftKey_5007),
		REF(SoftKey_5008),
		REF(SoftKey_5009),
		REF(SoftKey_5010),
	ID(SoftKey_5000), TYPEID_SOFTKEY, COLOR(221), 1, 1, 0, 
		XYREF(OutputNumber_12000, 2, 2),
	ID(SoftKey_5001), TYPEID_SOFTKEY, COLOR(221), 1, 1, 0, 
		XYREF(OutputNumber_12001, 2, 2),
	ID(SoftKey_5002), TYPEID_SOFTKEY, COLOR(221), 1, 1, 0, 
		XYREF(OutputNumber_12002, 2, 2),
	ID(SoftKey_5003), TYPEID_SOFTKEY, COLOR(221), 1, 1, 0, 
		XYREF(OutputNumber_12003, 2, 2),
	ID(SoftKey_5004), TYPEID_SOFTKEY, COLOR(221), 1, 1, 0, 
		XYREF(OutputNumber_12004, 2, 2),
	ID(SoftKey_5006), TYPEID_SOFTKEY, COLOR(221), 1, 1, 0, 
		XYREF(OutputNumber_12006, 2, 2),
	ID(SoftKey_5007), TYPEID_SOFTKEY, COLOR(221), 1, 1, 0, 
		XYREF(OutputNumber_12007, 2, 2),
	ID(SoftKey_5008), TYPEID_SOFTKEY, COLOR(221), 1, 1, 0, 
		XYREF(OutputNumber_12008, 2, 2),
	ID(SoftKey_5009), TYPEID_SOFTKEY, COLOR(221), 1, 1, 0, 
		XYREF(OutputNumber_12009, 2, 2),
	ID(SoftKey_5010), TYPEID_SOFTKEY, COLOR(221), 1, 1, 0, 
		XYREF(OutputNumber_12010, 2, 2),
	ID(OutputNumber_12000), TYPEID_OUTNUM, WORD(68), WORD(68), COLOR_WHITE, ID(FontAttributes_23000), 0,
		ID(ID_NULL), LONG(0UL), LONG(0L), FLOAT_1, 0, 0, 5, 0,
	ID(OutputNumber_12001), TYPEID_OUTNUM, WORD(68), WORD(68), COLOR_WHITE, ID(FontAttributes_23000), 0,
		ID(ID_NULL), LONG(1UL), LONG(0L), FLOAT_1, 0, 0, 5, 0,
	ID(OutputNumber_12002), TYPEID_OUTNUM, WORD(68), WORD(68), COLOR_WHITE, ID(FontAttributes_23000), 0,
		ID(ID_NULL), LONG(2UL), LONG(0L), FLOAT_1, 0, 0, 5, 0,
	ID(OutputNumber_12003), TYPEID_OUTNUM, WORD(68), WORD(68), COLOR_WHITE, ID(FontAttributes_23000), 0,
		ID(ID_NULL), LONG(3UL), LONG(0L), FLOAT_1, 0, 0, 5, 0,
	ID(OutputNumber_12004), TYPEID_OUTNUM, WORD(68), WORD(68), COLOR_WHITE, ID(FontAttributes_23000), 0,
		ID(ID_NULL), LONG(4UL), LONG(0L), FLOAT_1, 0, 0, 5, 0,
	ID(OutputNumber_12006), TYPEID_OUTNUM, WORD(68), WORD(68), COLOR_WHITE, ID(FontAttributes_23000), 0,
		ID(ID_NULL), LONG(6UL), LONG(0L), FLOAT_1, 0, 0, 5, 0,
	ID(OutputNumber_12007), TYPEID_OUTNUM, WORD(68), WORD(68), COLOR_WHITE, ID(FontAttributes_23000), 0,
		ID(ID_NULL), LONG(0UL), LONG(7L), FLOAT_1, 0, 0, 5, 0,
	ID(OutputNumber_12008), TYPEID_OUTNUM, WORD(68), WORD(68), COLOR_WHITE, ID(FontAttributes_23000), 0,
		ID(ID_NULL), LONG(8UL), LONG(0L), FLOAT_1, 0, 0, 5, 0,
	ID(OutputNumber_12009), TYPEID_OUTNUM, WORD(68), WORD(68), COLOR_WHITE, ID(FontAttributes_23000), 0,
		ID(ID_NULL), LONG(9UL), LONG(0L), FLOAT_1, 0, 0, 5, 0,
	ID(OutputNumber_12010), TYPEID_OUTNUM, WORD(68), WORD(68), COLOR_WHITE, ID(FontAttributes_23000), 0,
		ID(ID_NULL), LONG(10UL), LONG(0L), FLOAT_1, 0, 0, 5, 0,
	ID(FontAttributes_23000), TYPEID_FONTATTR, COLOR_BLACK, 8, 0, 0, 0, 
}; // isoOP_DefaultPool
