#pragma once

#ifndef __UTIL_H__
#define __UTIL_H__    


#define Getter(type, name) \
type Get##name()\
{\
	return name;\
} 

#define Setter(type, name) \
void Set##name(type value)\
{\
	name = value;\
} 

#define Property(type, name) \
	Getter(type, name) \
	Setter(type, name) 

#endif //__UTIL_H__