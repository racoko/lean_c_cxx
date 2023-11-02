#include <iostream>
#include "video_process.h"
extern "C"
{
#include <libavformat/avformat.h>
#include <libavcodec/avcodec.h>
#include <libavutil/avutil.h>
#include <libavutil/opt.h>
#include <libavutil/log.h>
#include <libavdevice/avdevice.h>
}

int displayVideoInfo()
{
    std::cout << AV_LOG_DEBUG << std::endl;
    std::cout << AV_LOG_INFO << std::endl;
    av_log_set_level(AV_LOG_DEBUG);
    av_log(NULL, AV_LOG_DEBUG, "测试hello C and Go\n");
    return 0;
}