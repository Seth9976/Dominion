// 函数: sub_106bef0
// 地址: 0x106bef0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t fd = *(*(arg1 + 0x38) + 0xc4)
char buf = 3
ssize_t result = write(fd, &buf, 1)

if (result == 1)
    return result

return __android_log_print(6, "TGLOG", "Failure writing android_app cmd: %s\n", 
    strerror(*__errno()))
