// 函数: sub_106bcf0
// 地址: 0x106bcf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = *(arg1 + 0x38)
pthread_mutex_lock(x21 + 0x68)

if (*(x21 + 0x118) != 0)
    int32_t fd = *(x21 + 0xc4)
    char buf = 2
    
    if (write(fd, &buf, 1) != 1)
        __android_log_print(6, "TGLOG", "Failure writing android_app cmd: %s\n", 
            strerror(*__errno()))

int64_t x8_1 = *(x21 + 0x48)
*(x21 + 0x118) = 0

if (x8_1 != 0)
    do
        pthread_cond_wait(x21 + 0x90, x21 + 0x68)
    while (*(x21 + 0x48) != *(x21 + 0x118))

return pthread_mutex_unlock(x21 + 0x68) __tailcall
