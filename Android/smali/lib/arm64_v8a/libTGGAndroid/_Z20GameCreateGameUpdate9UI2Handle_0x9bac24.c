// 函数: _Z20GameCreateGameUpdate9UI2Handle
// 地址: 0x9bac24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
GameSetup* x0 = GetActiveGameSetup()
int32_t x8 = *gCreateDlg
GameSpecific_GameCreateUpdate(gCreateDlg, zx.q(x19), x0, ((x8 & 0xfffffffe) == 2 ? 1 : 0).b, 
    (x8 != 0 ? 1 : 0).b)
void* result = GetClient()
int32_t* x22 = result + 0x5088
uint64_t x9_1 = zx.q(*x22)

if (x9_1.d != 0)
    void* i = *(result + 0x5080)
    void* result_1 = result
    int64_t x9_2 = i + x9_1 * 0x1338
    
    do
        if (zx.d(*(i + 0x1332)) != 0)
            if (i != 0xffffffff)
                int32_t x23_1 = 0
                
                do
                    result = IsMyGame(i)
                    i += 0x1338
                    x23_1 += result.d & 1
                    int64_t x8_2 = *(result_1 + 0x5080) + zx.q(*x22) * 0x1338
                    
                    if (x8_2 u<= i)
                        break
                    
                    while (zx.d(*(i + 0x1332)) == 0)
                        i += 0x1338
                        
                        if (i u>= x8_2)
                            goto label_9bad04
                while (i != 0xffffffff)
                
            label_9bad04:
                
                if (x23_1 u>= 0x32)
                    return UI2SetState(zx.q(x19), &data_11cee70, 0xffffffff, 0) __tailcall
            
            break
        
        i += 0x1338
    while (i u< x9_2)

return result
