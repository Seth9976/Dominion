// 函数: _Z22VoipBounceClientRemovei
// 地址: 0x105f68c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9 = nullptr
void* x10 = *gVoipServer
int64_t x11_1 = x10 + zx.q(*(gVoipServer + 8)) * 0x34

while (true)
    if (x9 == 0)
        x9 = x10
    else
        x9 += 0x34
    
    if (x9 u>= x11_1)
        break
    
    int32_t x12_2
    
    while (true)
        x12_2 = *(x9 + 0x30)
        
        if (x12_2 u>> 0x10 != 0)
            break
        
        x9 += 0x34
        
        if (x9 u>= x11_1)
            return 
    
    if (*x9 == arg1)
        int32_t x10_1 = *(gVoipServer + 0x10)
        *(gVoipServer + 0x10) = x12_2 & 0xffff
        *(x9 + 0x30) = x10_1
        *(gVoipServer + 0x14) -= 1
        break
