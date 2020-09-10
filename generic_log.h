#pragma once

#ifdef __ANDROID__
#include <android/log.h>

    #ifdef LOG_TAG
    #		define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG,__VA_ARGS__)
    #		define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG  , LOG_TAG,__VA_ARGS__)
    #		define LOGI(...) __android_log_print(ANDROID_LOG_INFO   , LOG_TAG,__VA_ARGS__)
    #		define LOGW(...) __android_log_print(ANDROID_LOG_WARN   , LOG_TAG,__VA_ARGS__)
    #		define LOGE(...) __android_log_print(ANDROID_LOG_ERROR  , LOG_TAG,__VA_ARGS__)
    #else
    #		define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, "no-tag",__VA_ARGS__)
    #		define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG  , "no-tag",__VA_ARGS__)
    #		define LOGI(...) __android_log_print(ANDROID_LOG_INFO   , "no-tag",__VA_ARGS__)
    #		define LOGW(...) __android_log_print(ANDROID_LOG_WARN   , "no-tag",__VA_ARGS__)
    #		define LOGE(...) __android_log_print(ANDROID_LOG_ERROR  , "no-tag",__VA_ARGS__)
    #endif

#else
#include <cstdio>

    #ifdef LOG_TAG
    #       define LOGV(...) fprintf(stderr, "[V][%s] ", LOG_TAG); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n");
    #		define LOGD(...) fprintf(stderr, "[D][%s] ", LOG_TAG); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n");
    #		define LOGI(...) fprintf(stderr, "[I][%s] ", LOG_TAG); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n");
    #		define LOGW(...) fprintf(stderr, "[W][%s] ", LOG_TAG); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n");
    #		define LOGE(...) fprintf(stderr, "[E][%s] ", LOG_TAG); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n");
    #else
    #       define LOGV(...) fprintf(stderr, "[V][%s] ", "no-tag"); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n");
    #		define LOGD(...) fprintf(stderr, "[D][%s] ", "no-tag"); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n");
    #		define LOGI(...) fprintf(stderr, "[I][%s] ", "no-tag"); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n");
    #		define LOGW(...) fprintf(stderr, "[W][%s] ", "no-tag"); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n");
    #		define LOGE(...) fprintf(stderr, "[E][%s] ", "no-tag"); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n");
    #endif


#endif
