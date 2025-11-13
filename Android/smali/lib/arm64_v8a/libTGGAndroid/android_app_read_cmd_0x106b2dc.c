// 函数: android_app_read_cmd
// 地址: 0x106b2dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char buf

if (read(*(arg1 + 0xc0), &buf, 1) != 1)
    __android_log_print(6, "TGLOG", "No data on command pipe!")
    return 0xff

uint32_t result = zx.d(buf)

if (result != 0xc)
    return result

pthread_mutex_lock(arg1 + 0x68)
int64_t x0_3 = *(arg1 + 0x28)

if (x0_3 != 0)
    free(x0_3)
    *(arg1 + 0x28) = 0
    *(arg1 + 0x30) = 0

pthread_mutex_unlock(arg1 + 0x68)
return 0xc
