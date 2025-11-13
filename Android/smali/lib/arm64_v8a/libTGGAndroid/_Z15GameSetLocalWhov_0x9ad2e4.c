// 函数: _Z15GameSetLocalWhov
// 地址: 0x9ad2e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x21
void* var_18 = entry_x21
*(GetClient() + 0x75b0) = 0xffffffff
void* x0_1 = GetClient()
int32_t x9 = *(x0_1 + 0x5068)
void* x19_2

if (x9 - 3 u< 2 || x9 == 1)
    x19_2 = x0_1 + 0x50a8
label_9ad34c:
    int32_t x8_2 = *(x19_2 + 0x11b4)
    
    if (x8_2 s< 1)
        goto label_9ad3c0
    
    int64_t x20_1 = 0
    entry_x21 = x19_2 + 0x70
    
    while (true)
        int32_t x9_2 = *(entry_x21 - 8)
        
        if (x9_2 != 1)
            if (x9_2 - 0x3e8 u< 2)
                break
            
            x20_1 += 1
            entry_x21 += 0x22c
            
            if (x20_1 s>= sx.q(x8_2))
                goto label_9ad3c0
        else
            if (*(entry_x21 - 4) == *(GetActiveProfile() + 0x42ac))
                break
            
            x8_2 = *(x19_2 + 0x11b4)
            x20_1 += 1
            entry_x21 += 0x22c
            
            if (x20_1 s>= sx.q(x8_2))
                goto label_9ad3c0
else
    if (x9 == 2)
        x19_2 = *(GetClient() + 0x5080) + zx.q(*(x0_1 + 0x506c)) * 0x1338
        goto label_9ad34c
    
label_9ad3c0:
    pthread_kill(pthread_self(), 6)
    XNoReturn()
int32_t x19_3 = *entry_x21
void* result = GetClient()

if (*(result + 0x75b0) != x19_3)
    *(result + 0x75b0) = x19_3

if (*(result + 0x75b4) != x19_3)
    *(result + 0x75b4) = x19_3
    result = IsPassAndPlay()
    
    if ((result.d & 1) != 0)
        return NextTurnOverlayShow(GameSpecific_CalcNextTurnStyle()) __tailcall

return result
