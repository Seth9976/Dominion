// 函数: _Z17AddGameLogNetworkRK20GameLogPlayerMessage9GameIndex
// 地址: 0x9b1598
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int64_t x23 = *(GetClient() + 0x5080)
uint64_t x22 = zx.q(x19) & 0xffff
GameSave* x21 = x23 + mulu.dp.d(x22.d, 0x1338)

if (zx.d(*(arg1 + 0x28)) == 0)
    int64_t* x0_2 = LogGet(x21, zx.q(*(arg1 + 8)))
    int32_t x9_1 = *(x0_2 + 0xc)
    int64_t x8_1 = sx.q(*(arg1 + 0x1c))
    
    if (x9_1 != x8_1.d)
        void* result
        
        if (x9_1 s> x8_1.d)
            if (x9_1 s< *(arg1 + 0x18) + x8_1.d)
                goto label_9b1630
            
            result = memcmp(*(arg1 + 0x10), *x0_2 + x8_1)
            
            if (result.d != 0)
                goto label_9b1630
            
            return result
        
        if (x9_1 s< x8_1.d)
        label_9b1630:
            NetworkGameDisposeLogs(*(GetClient() + 0x5080) + x22 * 0x1338)
            result = GetClient()
            
            if (*(result + 0x5068) == 2 && *(result + 0x506c) == x19)
                return GameResumeMultiplayer(zx.q(x19)) __tailcall
            
            return result

int64_t* x0_9 = LogGet(x21, zx.q(*(arg1 + 8)))
int64_t x24_1 = sx.q(*(arg1 + 8))
int32_t x9_5 = x0_9[1].d
int32_t x8_6 = *(arg1 + 0x18)
int32_t x8_7

if (x9_5 == 0 || x9_5 s< x8_6)
    int32_t x21_1
    
    if (x8_6 s< 0x800)
        x21_1 = 0x1000
    else
        x21_1 = x8_6 << 1
    
    *x0_9 = XMalloc(x21_1)
    x0_9[1].d = x21_1
    x8_7 = *(arg1 + 0x1c)
    
    if (x8_7 == 0)
        *(x0_9 + 0x14) = 0
        x8_7 = *(arg1 + 0x1c)
else
    x8_7 = *(arg1 + 0x1c)
    
    if (x8_7 == 0)
        *(x0_9 + 0x14) = 0
        x8_7 = *(arg1 + 0x1c)

memcpy(*x0_9 + sx.q(x8_7), *(arg1 + 0x10), sx.q(*(arg1 + 0x18)))
int32_t x8_9 = *(arg1 + 0x18) + *(arg1 + 0x1c)
*(x0_9 + 0xc) = x8_9
x0_9[2].d = x8_9
void* x9_9 = x23 + x22 * 0x1338 + (x24_1 << 4)
*(x9_9 + 0x1284) = *(arg1 + 0x20)
*(x9_9 + 0x1288) = *(arg1 + 0x24)
return GetClient()
