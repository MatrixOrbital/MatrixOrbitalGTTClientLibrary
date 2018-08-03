#ifndef _GTT_TEXT_H
#define _GTT_TEXT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


typedef struct gtt_text 
{ 
	uint8_t Encoding; 
	uint16_t Length; 
	void* Data; 
} gtt_text;

gtt_text gtt_make_text_ascii(char* data);
gtt_text gtt_make_text_utf8(char* data);
gtt_text gtt_make_text_unicode(wchar_t* data);


typedef struct gtt_number
{
	uint8_t NumberType;
	union 
	{
		float value_float;
		uint16_t value_uint16;
		int16_t value_int16;
		uint8_t value_uint8;
	};
} gtt_number;

gtt_number gtt_make_number_uint8(uint8_t value);
gtt_number gtt_make_number_uint16(uint16_t value);
gtt_number gtt_make_number_int16(int16_t value);
gtt_number gtt_make_number_float(float value);

#ifdef __cplusplus
}
#endif


#endif
