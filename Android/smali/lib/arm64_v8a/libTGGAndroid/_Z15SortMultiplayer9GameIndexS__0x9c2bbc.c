// 函数: _Z15SortMultiplayer9GameIndexS_
// 地址: 0x9c2bbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int32_t x20 = arg1
int64_t x22 = *(GetClient() + 0x5080)
uint64_t x23 = zx.q(x20) & 0xffff
int32_t x0_2 = GetMultiplayerGameState(x22 + mulu.dp.d(x23.d, 0x1338) + 8)

if (x0_2 u< 0x14)
    uint64_t x24_1 = zx.q(x19) & 0xffff
    int32_t x0_4 = GetMultiplayerGameState(x22 + x24_1 * 0x1338 + 8)
    
    if (x0_4 u<= 0x13)
        uint32_t x8_2 = 0x50007 u>> x0_2
        
        if ((1 << x0_4 & 0xafff8) == 0)
            if ((x8_2 & 1) == 0)
                return 0
        else if ((x8_2 & 1) != 0)
            return 1
        
        int64_t x9_2 = *(x22 + x23 * 0x1338 + 8)
        int64_t x8_4 = *(x22 + x24_1 * 0x1338 + 8)
        
        if (x9_2 != x8_4)
            return zx.q(x9_2 u< x8_4 ? 1 : 0)
        
        return zx.q(x20 s< x19 ? 1 : 0)

pthread_kill(pthread_self(), 6)
GameIndex* x0_7
int32_t* x1
GameIndex* x2
int32_t* x3
x0_7, x1, x2, x3 = XNoReturn()
return ComputeGameSlots(x0_7, x1, x2, x3) __tailcall
