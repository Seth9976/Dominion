// 函数: _Z16LocalGameInitNewRK9GameSetupR8GameSaveiii
// 地址: 0x9da4c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0 = *(arg1 + 0x18)
int128_t v1 = *(arg1 + 8)
*(arg2 + 0x30) = *(arg1 + 0x28)
*(arg2 + 0x10) = v1
*(arg2 + 0x20) = v0
int32_t x21 = arg4
XString::operator=(arg2 + 0x38)
XString::operator=(arg2 + 0x40)
XString::operator=(arg2 + 0x48)
*(arg2 + 0x11b4) = 0

if (arg3 s>= 1)
    uint64_t i_6 = zx.q(arg3)
    void* __offset(GameSetup, 0x60) x22_1 = arg1 + 0x60
    uint64_t i
    
    do
        if (*x22_1 != 0)
            int64_t x8_2 = sx.q(*(arg2 + 0x11b4))
            *(arg2 + 0x11b4) = x8_2.d + 1
            memcpy(arg2 + x8_2 * 0x22c + 0x54, x22_1 - 0x14, 0x22c)
        
        i = i_6
        i_6 -= 1
        x22_1 += 0x22c
    while (i != 1)

if (x21 == 0xffffffff)
    x21 = RandomNext(gRNG)

int32_t var_38 = RandomLCSet(x21)
int128_t var_60
__builtin_memcpy(&var_60, 
    "\x00\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x"
"06\x00\x00\x00\x07\x00\x00\x00", 
    0x20)
int64_t result = GameSpecific_CampaignRandomizeStart(*(arg2 + 0x1c))

if ((result.d & 1) != 0 && (zx.d(*(arg2 + 0x20)) & 2) == 0)
    int32_t x2 = *(arg2 + 0x11b4)
    result = LCShuffleIntsN(&var_38, &var_60, x2, x2)

uint64_t x8_5 = zx.q(*(arg2 + 0x11b4))
int32_t x9_2

x9_2 = arg5 == 0 ? x21 : arg5

*(arg2 + 0x10) = x21
*(arg2 + 0x34) = x9_2

if (x8_5.d s>= 1)
    int64_t i_7
    
    if (x8_5.d != 1)
        i_7 = x8_5 & 0xfffffffe
        int32_t* x10_1 = &var_60 | 4
        int64_t i_5 = i_7
        GameSave& x12_1 = arg2
        int64_t i_1
        
        do
            int32_t x13_1 = x10_1[-1]
            int32_t x14_1 = *x10_1
            x10_1 = &x10_1[2]
            i_1 = i_5
            i_5 -= 2
            *(x12_1 + 0x70) = x13_1
            *(x12_1 + 0x29c) = x14_1
            x12_1 += 0x458
        while (i_1 != 2)
        
        if (i_7 != x8_5)
            goto label_9da644
    else
        i_7 = 0
    label_9da644:
        void* x10_2 = &var_60 + (i_7 << 2)
        int32_t* x11_2 = arg2 + i_7 * 0x22c + 0x70
        int64_t i_4 = x8_5 - i_7
        int64_t i_2
        
        do
            int32_t x12_2 = *x10_2
            x10_2 += 4
            i_2 = i_4
            i_4 -= 1
            *x11_2 = x12_2
            x11_2 = &x11_2[0x8b]
        while (i_2 != 1)
    
    if (x8_5.d s>= 1)
        int64_t i_3 = 0
        void* __offset(GameSave, 0x11d4) x21_1 = arg2 + 0x11d4
        
        do
            *(x21_1 - 0xc) = 0x1000
            result = XMalloc(0x1000)
            *(x21_1 - 0x14) = result
            *x21_1 = 0
            *(x21_1 - 8) = 0
            i_3 += 1
            x21_1 += 0x18
        while (i_3 s< sx.q(*(arg2 + 0x11b4)))

return result
