// 函数: _Z16ComputeGameSlotsP9GameIndexRiS0_S1_
// 地址: 0x9c2ca4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2 = 0
*arg4 = 0
void* x0 = GetClient()
uint64_t x9 = zx.q(*(x0 + 0x5088))

if (x9.d != 0)
    void* i = *(x0 + 0x5080)
    int64_t x9_1 = i + x9 * 0x1338
    
    do
        if (zx.d(*(i + 0x1332)) != 0)
            while (i != 0xffffffff)
                if (zx.d(*(i + 0x1308)) == 0)
                    int32_t fp_2 = *(i + 0x1330)
                    
                    if ((IsMyGame(i) & 1) == 0)
                        int64_t x8_4 = sx.q(*arg4)
                        
                        if (x8_4.d s<= 0x1f)
                            *arg4 = x8_4.d + 1
                            *(arg3 + (x8_4 << 2)) = fp_2
                    else
                        int64_t x8_3 = sx.q(*arg2)
                        
                        if (x8_3.d s<= 0x3f)
                            *arg2 = x8_3.d + 1
                            *(arg1 + (x8_3 << 2)) = fp_2
                else if (*(i + 0x1310) + 0xbb8 s< Now())
                    NetworkGameDispose(i)
                
                void* i_1 = *(x0 + 0x5080)
                
                if (i == 0)
                    i = i_1
                else
                    i += 0x1338
                
                int64_t x8_5 = i_1 + zx.q(*(x0 + 0x5088)) * 0x1338
                
                if (i u>= x8_5)
                    break
                
                while (zx.d(*(i + 0x1332)) == 0)
                    i += 0x1338
                    
                    if (i u>= x8_5)
                        goto label_9c2de8
            
            break
        
        i += 0x1338
    while (i u< x9_1)

label_9c2de8:
void* x1 = arg3 + (sx.q(*arg4) << 2)
bool (* var_68)(GameIndex, GameIndex) = SortMultiplayer
std::__ndk1::__sort<bool (*&)(GameIndex, GameIndex), GameIndex*>(arg3, x1, &var_68)
int64_t x8_7 = sx.q(*arg2)
var_68 = SortMultiplayer
return std::__ndk1::__sort<bool (*&)(GameIndex, GameIndex), GameIndex*>(arg1, arg1 + (x8_7 << 2), 
    &var_68)
