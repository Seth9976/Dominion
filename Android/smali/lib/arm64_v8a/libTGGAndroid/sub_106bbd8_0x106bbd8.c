// 函数: sub_106bbd8
// 地址: 0x106bbd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = *(arg1 + 0x38)
pthread_mutex_lock(x21 + 0x68)

if (*(x21 + 0x118) != 0)
    int32_t fd = *(x21 + 0xc4)
    char buf = 2
    
    if (write(fd, &buf, 1) != 1)
        __android_log_print(6, "TGLOG", "Failure writing android_app cmd: %s\n", 
            strerror(*__errno()))

*(x21 + 0x118) = arg2

if (arg2 != 0)
    int32_t fd_1 = *(x21 + 0xc4)
    char buf_1 = 1
    
    if (write(fd_1, &buf_1, 1) != 1)
        __android_log_print(6, "TGLOG", "Failure writing android_app cmd: %s\n", 
            strerror(*__errno()))
    
    if (*(x21 + 0x48) != *(x21 + 0x118))
        goto label_106bcd8
else if (*(x21 + 0x48) != 0)
label_106bcd8:
    
    do
        pthread_cond_wait(x21 + 0x90, x21 + 0x68)
    while (*(x21 + 0x48) != *(x21 + 0x118))

return pthread_mutex_unlock(x21 + 0x68) __tailcall
