extern "C"
{
#include "libavcodec\avcodec.h"  
#include "libavformat\avformat.h"  
#include "libavutil\channel_layout.h"  
#include "libavutil\common.h"  
#include "libavutil\imgutils.h"  
#include "libswscale\swscale.h"   
#include "libavutil\imgutils.h"      
#include "libavutil\opt.h"         
#include "libavutil\mathematics.h"      
#include "libavutil\samplefmt.h" 
#include "libavutil/avutil.h"
};
#include <stdio.h>
#pragma once
extern "C" _declspec(dllexport) int add(int a, int b);
extern "C" _declspec(dllexport) int sub(int a, int b);
extern "C" _declspec(dllexport) void sayHello(char* str);
extern "C" _declspec(dllexport) const char* get_av_version_info();