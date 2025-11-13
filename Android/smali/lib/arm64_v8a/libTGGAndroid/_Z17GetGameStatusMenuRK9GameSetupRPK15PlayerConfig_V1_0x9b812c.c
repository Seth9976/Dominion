// 函数: _Z17GetGameStatusMenuRK9GameSetupRPK15PlayerConfig_V1
// 地址: 0x9b812c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetActiveProfile()
uint64_t x9 = zx.q(*(arg1 + 0x11ac))
PlayerConfig_V1* x8_1
int32_t x9_1

if (x9.d s>= 1)
    x8_1 = arg1 + 0x4c
    
    while (*(x8_1 + 0x14) != 1 || *(x8_1 + 0x18) != *(x0 + 0x42ac))
        uint64_t temp0_1 = x9
        x9 -= 1
        x8_1 += 0x22c
        
        if (temp0_1 == 1)
            goto label_9b81c0
    
    *arg2 = x8_1
    x9_1 = *(arg1 + 0x24)
    
    if (x9_1 s> 0x3e7)
        goto label_9b81d4
    
    goto label_9b8190

label_9b81c0:
x8_1 = nullptr
*arg2 = nullptr
x9_1 = *(arg1 + 0x24)

if (x9_1 s<= 0x3e7)
label_9b8190:
    
    if (x9_1 == 0)
        int32_t x21 = *(arg1 + 0x48)
        int64_t x8_3 = muls.dp.d(TimerStop(arg1), 0xef9db22d)
        
        if ((x8_3 s>> 0x26).d + (x8_3 u>> 0x3f).d + x21 s< 0)
            return 6
        
        PlayerConfig_V1 const* x8_6 = *arg2
        
        if (x8_6 != 0)
            if (*(x8_6 + 0x20) == 1)
                return 2
            
            return 4
        
        if (*(arg1 + 0x24) == 0)
            if (*(arg1 + 0x60) == 2)
                return 3
            
            if (*(arg1 + 0x28c) == 2)
                return 3
            
            if (*(arg1 + 0x4b8) == 2)
                return 3
            
            if (*(arg1 + 0x6e4) == 2)
                return 3
            
            if (*(arg1 + 0x910) == 2)
                return 3
            
            if (*(arg1 + 0xb3c) == 2)
                return 3
            
            if (*(arg1 + 0xd68) == 2)
                return 3
            
            if (*(arg1 + 0xf94) == 2)
                return 3
        
        return 5
    
    if (x9_1 == 1)
        if (x8_1 == 0)
            return 0xf
        
        if (*(x8_1 + 0x20) == 4)
            return 9
        
        return 8
    
    if (x9_1 == 2)
        if (x8_1 == 0)
            return 0x10
        
        return 0xa
else
label_9b81d4:
    
    if (x9_1 == 0x3e8)
        if (x8_1 == 0)
            return 0x11
        
        if ((*(x8_1 + 0x20) & 0xfffffffe) == 0x3ec)
            return 0xc
        
        return 0xe
    
    if (x9_1 == 0x3e9)
        return 7
    
    if (x9_1 == 0x3ea)
        if (x8_1 == 0)
            return 0x12
        
        if (*(x8_1 + 0x20) == 0x3e9)
            return 0xb
        
        return 0xd

pthread_kill(pthread_self(), 6)
GameSetup* x0_23
PlayerConfig_V1** x1
x0_23, x1 = XNoReturn()
return GetGameStatusDlg(x0_23, x1) __tailcall
