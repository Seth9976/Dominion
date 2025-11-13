// 函数: _Z16NotificationsAddPKcS0_PS0_S1_i
// 地址: 0xf88ac4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_2 = arg5
char const** x19 = arg4
char const** x21 = arg3
MutexLock(*gNotifications + 0x9030)
int32_t* x8_2 = *gNotifications + 0x9020

if (*x8_2 - x8_2[1] s>= 8)
    XTrace("too many queued notifications")

if (i_2 s> 8)
    XTrace("too many notification data entries")
    i_2 = 8

uint64_t x25 = *gNotifications
int32_t x9_1 = *(x25 + 0x9020)
int32_t x11_1

if (x9_1 s< 0)
    x11_1 = x9_1 + 7
else
    x11_1 = x9_1

*(x25 + 0x9020) = x9_1 + 1
int32_t x8_6 = x9_1 - (x11_1 & 0xfffffff8)
int64_t x26 = sx.q(x8_6)
strcpy(strcpy(x25 + muls.dp.d(x8_6, 0x1204), arg1) + 0x100, arg2)

if (i_2 s>= 1)
    uint64_t i_1 = zx.q(i_2)
    int64_t x22_1 = x25 + x26 * 0x1204 + 0xa00
    uint64_t i
    
    do
        char const* x1_2 = *x21
        x21 = &x21[1]
        strcpy(x22_1 - 0x800, x1_2)
        char const* x1_3 = *x19
        x19 = &x19[1]
        strcpy(x22_1, x1_3)
        i = i_1
        i_1 -= 1
        x22_1 += 8
    while (i != 1)

*(x25 + x26 * 0x1204 + 0x1200) = i_2
return MutexUnlock(*gNotifications + 0x9030) __tailcall
