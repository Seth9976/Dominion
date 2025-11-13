// 函数: sub_106bb78
// 地址: 0x106bb78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t fd = *(*(arg1 + 0x38) + 0xc4)
char buf_1

buf_1 = arg2 == 0 ? 7 : 6

char buf = buf_1
ssize_t result = write(fd, &buf, 1)

if (result == 1)
    return result

return __android_log_print(6, "TGLOG", "Failure writing android_app cmd: %s\n", 
    strerror(*__errno()))
