// 函数: _Z12DomGameStartPv
// 地址: 0xbf28cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x1a14) = 0x3e8
*(__emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000) = 0
int32_t x8_1 = *(arg1 + 0x1528)

if (x8_1 s>= 0x320)
    void* x8_2 = *(__emutls_get_address(__emutls_v.gContextStack_tl) - 0x90)
    int32_t x9_1 = *(x8_2 + 0x1a24)
    *(x8_2 + 0x1a28) = 0xffffffff
    *(x8_2 + 0x1a2c) = x9_1
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x8_1 = *(arg1 + 0x1528)

void* x8_3 = arg1 + muls.dp.d(x8_1, 0x68)
*(arg1 + 0x1528) = x8_1 + 1
*(x8_3 + 0x1a70) = 0
*(x8_3 + 0x1a94) = 0xffffffff
*(x8_3 + 0x1a9c) = 0xffffffff
int32_t x8_4 = *(arg1 + 0x150c)

if (x8_4 - 3 u>= 4)
    int64_t var_78_1 = 0
    int32_t var_80_1 = 0
    int32_t var_88_1 = 0
    int32_t var_90_1 = 0
    DomNotifyEffect(zx.q(x8_4 == 2 ? 1 : 0), 0x1e, 0xffffffff, 0, zx.q(*(arg1 + 0xd40)), 0, 0, 0)
    
    if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
        uint64_t x2_1
        
        if (*(arg1 + 0x19d4) == 0xffffffff)
            x2_1 = zx.q(*(arg1 + 0x19d8))
        else
            x2_1 = 0xffffffff
        
        int32_t var_80_2 = 0
        int32_t var_88_2 = 0
        int32_t var_90_2 = 0
        DomAddLogEvent(arg1, 0xffffffff, x2_1, 5, 0, nullptr, 0, 0)

int128_t var_70
__builtin_memset(&var_70, 0, 0x50)
DomGameSetupBoard(arg1, &var_70)
DomGameSetupPlayers(arg1, &var_70)
*(arg1 + 0x19cc) = data_71b8c0
int32_t x8_10 = *(arg1 + 0xd40)
*(arg1 + 0x19e4) = 0
*(arg1 + 0x19b4) = 0x64
*(arg1 + 0x19dc) = 1 s% x8_10
DomFinalizeSetup(arg1)
return DomGameRun(arg1)
