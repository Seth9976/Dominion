// 函数: _Z19CountMyNetworkGamesv
// 地址: 0x9bad48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
uint64_t x9 = zx.q(*(x0 + 0x5088))
void* i

if (x9.d != 0)
    i = *(x0 + 0x5080)
    int64_t x9_1 = i + x9 * 0x1338
    
    while (zx.d(*(i + 0x1332)) == 0)
        i += 0x1338
        
        if (i u>= x9_1)
            goto label_9badf8

int32_t x21

if (x9.d == 0 || i == 0xffffffff)
label_9badf8:
    x21 = 0
else
    x21 = 0
    
    do
        int32_t x0_2 = IsMyGame(i)
        i += 0x1338
        x21 += x0_2 & 1
        int64_t x8_2 = *(x0 + 0x5080) + zx.q(*(x0 + 0x5088)) * 0x1338
        
        if (x8_2 u<= i)
            break
        
        while (zx.d(*(i + 0x1332)) == 0)
            i += 0x1338
            
            if (i u>= x8_2)
                return zx.q(x21)
    while (i != 0xffffffff)

return zx.q(x21)
