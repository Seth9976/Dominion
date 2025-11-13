// 函数: sub_106c00c
// 地址: 0x106c00c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = AConfiguration_new()
void* x8 = *(arg1 + 0x18)
*(arg1 + 0x20) = x0
AConfiguration_fromAssetManager(x0, *(x8 + 0x40))
void var_24
AConfiguration_getLanguage(*(arg1 + 0x20), &var_24)
void var_28
AConfiguration_getCountry(*(arg1 + 0x20), &var_28)
*(arg1 + 0xd0) = 1
*(arg1 + 0xd8) = arg1
*(arg1 + 0xe0) = sub_106c134
*(arg1 + 0xe8) = 2
*(arg1 + 0xf0) = arg1
*(arg1 + 0xf8) = sub_106c1ec
int64_t x0_3 = ALooper_prepare(1)
ALooper_addFd(x0_3, zx.q(*(arg1 + 0xc0)), 1, 1, 0, arg1 + 0xd0)
*(arg1 + 0x38) = x0_3
pthread_mutex_lock(arg1 + 0x68)
*(arg1 + 0x100) = 1
pthread_cond_broadcast(arg1 + 0x90)
pthread_mutex_unlock(arg1 + 0x68)
android_main(arg1)
pthread_mutex_lock(arg1 + 0x68)
int64_t x0_9 = *(arg1 + 0x28)

if (x0_9 != 0)
    free(x0_9)
    *(arg1 + 0x28) = 0
    *(arg1 + 0x30) = 0

pthread_mutex_unlock(arg1 + 0x68)
pthread_mutex_lock(arg1 + 0x68)
int64_t x0_12 = *(arg1 + 0x40)

if (x0_12 != 0)
    AInputQueue_detachLooper(x0_12)

AConfiguration_delete(*(arg1 + 0x20))
*(arg1 + 0x108) = 1
pthread_cond_broadcast(arg1 + 0x90)
pthread_mutex_unlock(arg1 + 0x68)
return 0
