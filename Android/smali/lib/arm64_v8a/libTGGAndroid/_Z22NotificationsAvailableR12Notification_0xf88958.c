// 函数: _Z22NotificationsAvailableR12Notification
// 地址: 0xf88958
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MutexLock(*gNotifications + 0x9030)
uint64_t x21 = *gNotifications
int32_t x23 = *(x21 + 0x9020)
int32_t x24 = *(x21 + 0x9024)

if (x23 != x24)
    int32_t x8_3
    
    if (x24 s< 0)
        x8_3 = x24 + 7
    else
        x8_3 = x24
    
    int32_t x26_1 = x24 - (x8_3 & 0xfffffff8)
    int64_t x20_1 = x21 + muls.dp.d(x26_1, 0x1204)
    XString::operator=(arg1)
    XString::operator=(arg1 + 8)
    uint64_t x8_5 = zx.q(*(x20_1 + 0x1200))
    
    if (x8_5.d s>= 1)
        int64_t x25_1 = 0
        int64_t x20_2 = x21 + sx.q(x26_1) * 0x1204 + 0xa00
        void* __offset(Notification, 0x50) x21_1 = arg1 + 0x50
        
        do
            XString::operator=(x21_1 - 0x40)
            XString::operator=(x21_1)
            x8_5 = sx.q(*(x20_1 + 0x1200))
            x25_1 += 1
            x20_2 += 8
            x21_1 += 8
        while (x25_1 s< x8_5)
    
    *(arg1 + 0x90) = x8_5.d
    x21 = *gNotifications
    *(x21 + 0x9024) += 1

MutexUnlock(x21 + 0x9030)
return zx.q(x23 != x24 ? 1 : 0)
