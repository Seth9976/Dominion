// 函数: _Z22GameCenterGetPriceInfoRK6DlcDefR9PriceInfo
// 地址: 0xf709fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *gGameCenter
int32_t x20

if (x8 u>= 2)
    void* __offset(DlcDef, 0x18) x8_1
    
    if (x8 == 3)
        x8_1 = arg1 + 0x20
    else
        if (x8 != 4)
            pthread_kill(pthread_self(), 6)
            sub_c776cc(XNoReturn())
            noreturn
        
        x8_1 = arg1 + 0x18
    
    int64_t x20_1 = *x8_1
    MutexLock(gGameCenter + 0x40)
    uint64_t x23_1 = zx.q(*(gGameCenter + 0x2ec70))
    
    if (x23_1.d s< 1)
        x20 = 0
        
        if (*gGameCenter != 0)
        label_f70b24:
            MutexUnlock(gGameCenter + 0x40)
    else
        int64_t x8_2
        
        if (strcmp(x20_1, gGameCenter + 0x2a470) == 0)
            x8_2 = 0
            x20 = 1
        else
            int64_t (* x21_1)() = gGameCenter + 0x2a500
            int64_t x24_1 = 1
            int32_t i
            
            do
                if (x23_1 == x24_1)
                    x20 = x24_1 u< x23_1 ? 1 : 0
                    
                    if (*gGameCenter == 0)
                        goto label_f70b3c
                    
                    goto label_f70b24_1
                
                i = strcmp(x20_1, x21_1)
                x24_1 += 1
                x21_1 += 0x90
            while (i != 0)
            x8_2 = x24_1 - 1
            x20 = x8_2 u< x23_1 ? 1 : 0
        
        void* x8_5 = gGameCenter + (x8_2 & 0xffffffff) * 0x90
        *(arg2 + 8) = *(x8_5 + 0x2a4f8)
        *arg2 = *(x8_5 + 0x2a4f0)
        
        if (*gGameCenter != 0)
        label_f70b24_1:
            MutexUnlock(gGameCenter + 0x40)
else
    x20 = 0

label_f70b3c:
return zx.q(x20)
