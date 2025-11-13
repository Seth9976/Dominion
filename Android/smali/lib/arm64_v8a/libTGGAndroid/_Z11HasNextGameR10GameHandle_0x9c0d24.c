// 函数: _Z11HasNextGameR10GameHandle
// 地址: 0x9c0d24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
void* x0_1 = GetClient()
uint64_t x9 = zx.q(*(x0_1 + 0x5088))

if (x9.d != 0)
    void* i = *(x0_1 + 0x5080)
    int64_t x9_1 = i + x9 * 0x1338
    
    do
        if (zx.d(*(i + 0x1332)) != 0)
            if (i != 0xffffffff)
                int32_t x25_1 = 0
                int32_t x24_1 = 0
                int32_t x26_1 = 0
                
                do
                    if (zx.d(*(i + 0x1308)) == 0)
                        GetClient()
                        int32_t x28_1 = *(i + 0x1330)
                        
                        if (*(x0 + 0x5068) != 2 || *(x0 + 0x506c) != x28_1)
                            if ((GetMultiplayerGameState(i + 8) & 0xfffffffd) == 0x10)
                                *arg1 = 2
                                *(arg1 + 4) = x28_1
                                
                                if ((x26_1 & 1) != 0)
                                    return 1
                                
                                bool cond:1_1 = x25_1 == 0
                                x26_1 = 0
                                
                                if (x25_1 == 0)
                                    x25_1 = 2
                                
                                if (cond:1_1)
                                    x24_1 = x28_1
                        else
                            x26_1 = 1
                    
                    void* i_1 = *(x0_1 + 0x5080)
                    
                    if (i == 0)
                        i = i_1
                    else
                        i += 0x1338
                    
                    int64_t x8_5 = i_1 + zx.q(*(x0_1 + 0x5088)) * 0x1338
                    
                    if (i u>= x8_5)
                        break
                    
                    while (zx.d(*(i + 0x1332)) == 0)
                        i += 0x1338
                        
                        if (i u>= x8_5)
                            goto label_9c0e54
                while (i != 0xffffffff)
                
            label_9c0e54:
                
                if (x25_1 != 0)
                    *arg1 = x25_1
                    *(arg1 + 4) = x24_1
                    return 1
            
            break
        
        i += 0x1338
    while (i u< x9_1)

if (*(GetClient() + 0x5068) == 1)
    return 0

int64_t result = GetLocalGameIndex()

if (result.d != 0)
    int32_t x8_7 = result.d
    result = 1
    *arg1 = 1
    *(arg1 + 4) = x8_7

return result
