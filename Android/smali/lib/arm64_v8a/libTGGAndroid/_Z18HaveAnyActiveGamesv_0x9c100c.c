// 函数: _Z18HaveAnyActiveGamesv
// 地址: 0x9c100c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
uint64_t x9 = zx.q(*(x0 + 0x5088))

if (x9.d != 0)
    void* x20_1 = *(x0 + 0x5080)
    int64_t x9_1 = x20_1 + x9 * 0x1338
    
    do
        if (zx.d(*(x20_1 + 0x1332)) != 0)
            if (x20_1 != 0xffffffff)
                while (true)
                    if (zx.d(*(x20_1 + 0x1308)) == 0 && (IsMyGame(x20_1) & 1) != 0)
                        int32_t x0_4 = GetMultiplayerGameState(x20_1 + 8)
                        
                        if (x0_4 - 3 u>= 0xd)
                            if (x0_4 u> 0x13)
                                pthread_kill(pthread_self(), 6)
                                return GameIsGreen(XNoReturn()) __tailcall
                            
                            if ((1 << x0_4 & 0xa0000) == 0)
                                if ((1 << x0_4 & 0x50007) != 0)
                                    return 1
                                
                                pthread_kill(pthread_self(), 6)
                                return GameIsGreen(XNoReturn()) __tailcall
                    
                    void* x8_3 = *(x0 + 0x5080)
                    
                    if (x20_1 == 0)
                        x20_1 = x8_3
                    else
                        x20_1 += 0x1338
                    
                    int64_t x8_4 = x8_3 + zx.q(*(x0 + 0x5088)) * 0x1338
                    
                    if (x20_1 u>= x8_4)
                        break
                    
                    while (zx.d(*(x20_1 + 0x1332)) == 0)
                        x20_1 += 0x1338
                        
                        if (x20_1 u>= x8_4)
                            return 0
                    
                    if (x20_1 == 0xffffffff)
                        return 0
            
            break
        
        x20_1 += 0x1338
    while (x20_1 u< x9_1)

return 0
