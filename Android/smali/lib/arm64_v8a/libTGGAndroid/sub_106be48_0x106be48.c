// 函数: sub_106be48
// 地址: 0x106be48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = *(arg1 + 0x38)
pthread_mutex_lock(x21 + 0x68)
int32_t fd = *(x21 + 0xc4)
*(x21 + 0x110) = 0
char buf = 0

if (write(fd, &buf, 1) != 1)
    __android_log_print(6, "TGLOG", "Failure writing android_app cmd: %s\n", strerror(*__errno()))

while (*(x21 + 0x40) != *(x21 + 0x110))
    pthread_cond_wait(x21 + 0x90, x21 + 0x68)

return pthread_mutex_unlock(x21 + 0x68) __tailcall
