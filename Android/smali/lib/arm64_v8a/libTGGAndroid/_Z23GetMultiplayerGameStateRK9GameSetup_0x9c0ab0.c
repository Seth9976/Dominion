// 函数: _Z23GetMultiplayerGameStateRK9GameSetup
// 地址: 0x9c0ab0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetActiveProfile()
uint64_t x8 = zx.q(*(arg1 + 0x11ac))
void* __offset(GameSetup, 0x4c) x19_1

if (x8.d s< 1)
label_9c0b08:
    x19_1 = nullptr
else
    x19_1 = arg1 + 0x4c
    
    while (*(x19_1 + 0x14) != 1 || *(x19_1 + 0x18) != *(x0 + 0x42ac))
        uint64_t temp0_1 = x8
        x8 -= 1
        x19_1 += 0x22c
        
        if (temp0_1 == 1)
            goto label_9c0b08

int32_t x21 = *(arg1 + 0x24)
int32_t x22 = *(arg1 + 0x48)
int64_t x8_1 = muls.dp.d(TimerStop(arg1), 0xef9db22d)
int32_t x8_4 = (x8_1 s>> 0x26).d + (x8_1 u>> 0x3f).d + x22

if (x19_1 == 0)
    if (x21 s> 0x3e7)
        if (x21 == 0x3e8)
            return 0xb
        
        if (x21 == 0x3e9)
            return 8
        
        if (x21 == 0x3ea)
            return 0xe
        
        pthread_kill(pthread_self(), 6)
        return HasNextGame(XNoReturn()) __tailcall
    
    if (x21 == 0)
        if (x8_4 s< 0)
            return 6
        
        return 1
    
    if (x21 == 1)
        return 0xf
    
    if (x21 == 2)
        return 0x13
    
    pthread_kill(pthread_self(), 6)
    return HasNextGame(XNoReturn()) __tailcall

int32_t x8_6
bool cond:6

if (x21 s> 0x3e7)
    if (x21 != 0x3e8)
        if (x21 == 0x3ea)
            int32_t x8_10 = *(x19_1 + 0x20) - 0x3e9
            
            if (x8_10 u> 4)
                return 0xd
            
            return zx.q((*U"\t\r\r\t\t")[sx.q(x8_10)])
        
        if (x21 == 0x3e9)
            return 8
        
        pthread_kill(pthread_self(), 6)
        return HasNextGame(XNoReturn()) __tailcall
    
    cond:6 = (*(x19_1 + 0x20) & 0xfffffffe) != 0x3ec
    x8_6 = 9
else
    if (x21 == 0)
        if ((x8_4 & 0x80000000) != 0)
            if (*(x19_1 + 0x20) == 2)
                return 5
            
            return 4
        
        if ((CanStartGame(arg1, x19_1) & 1) != 0)
            return 2
        
        if (*(x19_1 + 0x20) == 2)
            return 3
        
        return 0
    
    if (x21 != 1)
        if (x21 == 2)
            return 0x12
        
        pthread_kill(pthread_self(), 6)
        return HasNextGame(XNoReturn()) __tailcall
    
    cond:6 = *(x19_1 + 0x20) != 4
    x8_6 = 0x10

if (cond:6)
    return zx.q(x8_6 + 1)

return zx.q(x8_6)
