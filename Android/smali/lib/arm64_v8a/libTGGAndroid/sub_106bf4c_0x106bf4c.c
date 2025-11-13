// 函数: sub_106bf4c
// 地址: 0x106bf4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

pthread_mutex_lock(arg1 + 0x68)
int32_t fd = *(arg1 + 0xc4)
char buf = 0xf

if (write(fd, &buf, 1) != 1)
    __android_log_print(6, "TGLOG", "Failure writing android_app cmd: %s\n", strerror(*__errno()))

while (*(arg1 + 0x108) == 0)
    pthread_cond_wait(arg1 + 0x90, arg1 + 0x68)

pthread_mutex_unlock(arg1 + 0x68)
close(*(arg1 + 0xc0))
close(*(arg1 + 0xc4))
pthread_cond_destroy(arg1 + 0x90)
pthread_mutex_destroy(arg1 + 0x68)
return free(arg1) __tailcall
