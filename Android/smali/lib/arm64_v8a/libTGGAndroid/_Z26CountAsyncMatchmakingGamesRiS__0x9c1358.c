// 函数: _Z26CountAsyncMatchmakingGamesRiS_
// 地址: 0x9c1358
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*arg2 = 0
void* result = GetClient()
int32_t* x23 = result + 0x5088
uint64_t x9 = zx.q(*x23)

if (x9.d != 0)
    void* i = *(result + 0x5080)
    void* result_1 = result
    int64_t x9_1 = i + x9 * 0x1338
    
    do
        if (zx.d(*(i + 0x1332)) != 0)
            while (i != 0xffffffff)
                if (zx.d(*(i + 0x1308)) == 0)
                    result = IsMyGame(i)
                    
                    if ((result.d & 1) != 0 && *(i + 0x24) == 4)
                        result = GetMultiplayerGameState(i + 8)
                        
                        if (result.d u> 0x13)
                            pthread_kill(pthread_self(), 6)
                            XNoReturn()
                            return PostAsyncSettings() __tailcall
                        
                        if ((1 << result.d & 0xafff8) == 0)
                            *arg1 += 1
                        else
                            *arg2 += 1
                
                void* i_1 = *(result_1 + 0x5080)
                
                if (i == 0)
                    i = i_1
                else
                    i += 0x1338
                
                int64_t x8_8 = i_1 + zx.q(*x23) * 0x1338
                
                if (i u>= x8_8)
                    break
                
                while (zx.d(*(i + 0x1332)) == 0)
                    i += 0x1338
                    
                    if (i u>= x8_8)
                        return result
            
            break
        
        i += 0x1338
    while (i u< x9_1)

return result
