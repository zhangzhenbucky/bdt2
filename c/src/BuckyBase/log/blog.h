#pragma once

#include "./blog_global.h"

// BLOG_XXX日志默认使用GLOBAL isolate
#ifndef BLOG_DEFAUL_IMPL
#define BLOG_DEFAUL_IMPL

#define BLOG_VERBOSE  GLOBAL_VERBOSE
#define BLOG_TRACE  GLOBAL_TRACE
#define BLOG_DEBUG  GLOBAL_DEBUG
#define BLOG_INFO   GLOBAL_INFO
#define BLOG_WARN   GLOBAL_WARN
#define BLOG_ERROR  GLOBAL_ERROR
#define BLOG_FATAL  GLOBAL_FATAL

#define BLOG_CHECK      GLOBAL_CHECK
#define BLOG_CHECK_EX   GLOBAL_CHECK_EX

#define BLOG_VERIFY     GLOBAL_VERIFY
#define BLOG_VERIFY_EX  GLOBAL_VERIFY_EX

#define BLOG_VERIFY_ERROR_CODE      GLOBAL_VERIFY_ERROR_CODE
#define BLOG_VERIFY_ERROR_CODE_EX   GLOBAL_VERIFY_ERROR_CODE_EX

#define BLOG_HEX     GLOBAL_HEX
#define BLOG_HEX_IF  GLOBAL_HEX_IF

#define BLOG_NOT_REACHED    GLOBAL_NOT_REACHED
#define BLOG_NOT_IMPL       GLOBAL_NOT_IMPL

#endif // BLOG_DEFAUL_IMPL
