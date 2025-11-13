// 函数: _Z21ClientMatchmakingJoinv
// 地址: 0x9b6170
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
uint64_t x12 = zx.q(*(x0 + 0x5088))

if (x12.d != 0)
    void* i_1 = *(x0 + 0x5080)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x1332)) != 0)
            if (i != 0xffffffff)
                int64_t x12_1 = i_1 + x12 * 0x1338
                
                do
                    if (*i == *(x0 + 0x777c))
                        GameResumeMultiplayer(zx.q(*(i + 0x1330)))
                        break
                    
                    if (i == 0)
                        i = i_1
                    else
                        i += 0x1338
                    
                    if (i u>= x12_1)
                        break
                    
                    while (zx.d(*(i + 0x1332)) == 0)
                        i += 0x1338
                        
                        if (i u>= x12_1)
                            goto label_9b6228
                while (i != 0xffffffff)
            
            break
        
        i += 0x1338
    while (i u< i_1 + x12 * 0x1338)

label_9b6228:
*(GetClient() + 0x7778) = 0
return GameDlgManagerDismiss(9, false) __tailcall
