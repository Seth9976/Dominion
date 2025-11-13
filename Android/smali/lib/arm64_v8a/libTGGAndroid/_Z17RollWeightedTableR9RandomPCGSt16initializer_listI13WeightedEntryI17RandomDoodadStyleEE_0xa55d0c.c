// 函数: _Z17RollWeightedTableR9RandomPCGSt16initializer_listI13WeightedEntryI17RandomDoodadStyleEE
// 地址: 0xa55d0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (entry_x2 == 0)
    RandomInt(arg1, 0)
    pthread_kill(pthread_self(), 6)
    RandomPCG* x0_4
    CampaignSetup* x1_1
    int32_t x2
    FlavorTheme* x3
    int32_t x4
    x0_4, x1_1, x2, x3, x4 = XNoReturn()
    return RollMissionDoodad(x0_4, x1_1, x2, x3, x4) __tailcall

int64_t i_5 = entry_x2 << 3
int32_t* i_4 = arg2
int32_t x1
int32_t* i_1

if (i_5 - 8 u> 0x3f)
    int64_t x10_1
    
    if (((((i_5 - 8) u>> 3) + 1) & 7) == 0)
        x10_1 = 8
    else
        x10_1 = (((i_5 - 8) u>> 3) + 1) & 7
    
    int64_t i_3 = ((i_5 - 8) u>> 3) + 1 - x10_1
    void* x9_1 = &i_4[8]
    int128_t v0
    v0.q = 0
    v0:8.q = 0
    i_1 = &i_4[i_3 * 2]
    int128_t v1
    v1.q = 0
    v1:8.q = 0
    int64_t i
    
    do
        int128_t v2
        v2.d = *x9_1
        int128_t v3
        v3.d = *(x9_1 + 4)
        v2:4.d = *(x9_1 + 8)
        v3:4.d = *(x9_1 + 0xc)
        v2:8.d = *(x9_1 + 0x10)
        v3:8.d = *(x9_1 + 0x14)
        v2:0xc.d = *(x9_1 + 0x18)
        v3:0xc.d = *(x9_1 + 0x1c)
        int128_t v4
        v4.d = *(x9_1 - 0x20)
        int128_t v5
        v5.d = *(x9_1 - 0x1c)
        v4:4.d = *(x9_1 - 0x18)
        v5:4.d = *(x9_1 - 0x14)
        v4:8.d = *(x9_1 - 0x10)
        v5:8.d = *(x9_1 - 0xc)
        v4:0xc.d = *(x9_1 - 8)
        v5:0xc.d = *(x9_1 - 4)
        i = i_3
        i_3 -= 8
        x9_1 += 0x40
        v1 += v2
        v0 += v4
    while (i != 8)
    uint128_t v0_1
    v0_1.d = vaddvq_u32(v1 + v0)
    x1 = v0_1.d
else
    x1 = 0
    i_1 = i_4

do
    int32_t x10_2 = *i_1
    i_1 = &i_1[2]
    x1 += x10_2
while (&i_4[entry_x2 * 2] != i_1)

int32_t x0 = RandomInt(arg1, x1)

if (entry_x2 != 0)
    int32_t x9_3 = 0
    void* x8_3 = &i_4[1]
    int64_t i_2
    
    do
        x9_3 += *(x8_3 - 4)
        
        if (x0 s< x9_3)
            return zx.q(*x8_3)
        
        i_2 = i_5
        i_5 -= 8
        x8_3 += 8
    while (i_2 != 8)

pthread_kill(pthread_self(), 6)
return zx.q(*XNoReturn())
