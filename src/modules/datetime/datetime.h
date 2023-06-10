#pragma once

#include "fastfetch.h"

#define FF_DATETIME_MODULE_NAME "DateTime"

void ffPrintDateTime(FFinstance* instance, FFDateTimeOptions* options);
void ffInitDateTimeOptions(FFDateTimeOptions* options);
bool ffParseDateTimeCommandOptions(FFDateTimeOptions* options, const char* key, const char* value);
void ffDestroyDateTimeOptions(FFDateTimeOptions* options);

#ifdef FF_HAVE_JSONC
#include "common/jsonconfig.h"
void ffParseDateTimeJsonObject(FFinstance* instance, json_object* module);
#endif