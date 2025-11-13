// 函数: sub_106b8c8
// 地址: 0x106b8c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = *(arg1 + 0x38)
pthread_mutex_lock(x22 + 0x68)
int32_t fd = *(x22 + 0xc4)
*(x22 + 0x104) = 0
char buf = 0xc

if (write(fd, &buf, 1) != 1)
    __android_log_print(6, "TGLOG", "Failure writing android_app cmd: %s\n", strerror(*__errno()))

while (*(x22 + 0x104) == 0)
    pthread_cond_wait(x22 + 0x90, x22 + 0x68)

int64_t result = *(x22 + 0x28)

if (result != 0)
    *arg2 = *(x22 + 0x30)
    *(x22 + 0x28) = 0
    *(x22 + 0x30) = 0

pthread_mutex_unlock(x22 + 0x68)
return result
