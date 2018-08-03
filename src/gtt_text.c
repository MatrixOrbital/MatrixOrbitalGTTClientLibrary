#include <gtt_protocol.h>

size_t gtt_strlenw(wchar_t *value)
{
	size_t len = 0;
	while (value[len])
		len++;
	return len;
}

size_t gtt_strlen(char *value)
{
	size_t len = 0;
	while (value[len])
		len++;
	return len;
}


gtt_text gtt_make_text_ascii(char* data)
{
	gtt_text result = { 0 };
	result.Encoding = eTextEncoding_ASCII;
	result.Length = gtt_strlen(data);
	result.Data = data;
	return result;
}

gtt_text gtt_make_text_utf8(char* data)
{
	gtt_text result = { 0 };
	result.Encoding = eTextEncoding_UTF8;
	result.Length = gtt_strlen(data);
	result.Data = data;
	return result;
}

gtt_text gtt_make_text_unicode(wchar_t* data)
{
	gtt_text result = { 0 };
	result.Encoding = eTextEncoding_Unicode;
	result.Length = gtt_strlenw(data)*2;
	result.Data = data;
	return result;
}

gtt_number gtt_make_number_uint8(uint8_t value)
{
	gtt_number result;
	result.NumberType = ePropertyType_U8;
	result.value_uint8 = value;
	return result;
}

gtt_number gtt_make_number_uint16(uint16_t value)
{
	gtt_number result;
	result.NumberType = ePropertyType_U16;
	result.value_uint16 = value;
	return result;
}

gtt_number gtt_make_number_int16(int16_t value)
{
	gtt_number result;
	result.NumberType = ePropertyType_S16;
	result.value_int16 = value;
	return result;
}

gtt_number gtt_make_number_float(float value)
{
	gtt_number result;
	result.NumberType = ePropertyType_Float;
	result.value_float = value;
	return result;
}
