// 函数: ANativeActivity_onCreate
// 地址: 0x106b520
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
union pthread_attr_t attr
attr.__size.__offset(0x38).q = *(x25 + 0x28)
*(*arg1 + 0x28) = sub_106b774
**arg1 = sub_106b788
*(*arg1 + 8) = sub_106b828
*(*arg1 + 0x10) = sub_106b8c8
*(*arg1 + 0x18) = sub_106b988
*(*arg1 + 0x20) = sub_106ba28
*(*arg1 + 0x70) = sub_106bac8
*(*arg1 + 0x78) = sub_106bb20
*(*arg1 + 0x30) = sub_106bb78
*(*arg1 + 0x38) = sub_106bbd8
*(*arg1 + 0x50) = sub_106bcf0
*(*arg1 + 0x58) = sub_106bd9c
*(*arg1 + 0x60) = sub_106be48
*(*arg1 + 0x40) = sub_106bef0
void* x0 = malloc(0x130)
void* const x20 = x0
__builtin_memset(x0, 0, 0x90)
__builtin_memset(x0 + 0xa0, 0, 0x90)
*(x0 + 0x90) = zx.o(0)
*(x0 + 0x18) = arg1
pthread_mutex_init(x0 + 0x68, nullptr)
pthread_cond_init(x0 + 0x90, nullptr)

if (arg2 != 0)
    int64_t x0_4 = malloc(arg3)
    *(x20 + 0x28) = x0_4
    *(x20 + 0x30) = arg3
    memcpy(x0_4, arg2, arg3)

int64_t __pipedes
int64_t result

if (pipe(&__pipedes) == 0)
    *(x20 + 0xc0) = __pipedes
    pthread_attr_init(&attr)
    pthread_attr_setdetachstate(&attr, 1)
    pthread_create(x20 + 0xc8, &attr, sub_106c00c, x20)
    pthread_mutex_lock(x0 + 0x68)
    
    while (*(x20 + 0x100) == 0)
        pthread_cond_wait(x0 + 0x90, x0 + 0x68)
    
    result = pthread_mutex_unlock(x0 + 0x68)
else
    result = __android_log_print(6, "TGLOG", "could not create pipe: %s", strerror(*__errno()))
    x20 = nullptr

arg1[7] = x20

if (*(x25 + 0x28) == attr.__size.__offset(0x38).q)
    return result

__stack_chk_fail()
noreturn
