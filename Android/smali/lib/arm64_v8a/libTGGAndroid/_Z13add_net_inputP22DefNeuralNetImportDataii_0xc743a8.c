// 函数: _Z13add_net_inputP22DefNeuralNetImportDataii
// 地址: 0xc743a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 += 1

if ((arg2 & 0x80000000) == 0)
    void* x8_1 = arg1 + (zx.q(arg2) << 2)
    *(x8_1 + 0x30) += 1
    return 

if (arg3 s< 1)
    return 

uint64_t x8_2 = zx.q(arg3)
int64_t i_4

if (arg3 u>= 8)
    i_4 = x8_2 & 0xfffffff8
    void* __offset(DefNeuralNetImportData, 0x40) x10_1 = arg1 + 0x40
    int128_t v0
    v0.d = 1
    v0:4.d = 1
    v0:8.d = 1
    v0:0xc.d = 1
    int64_t i_3 = i_4
    int64_t i
    
    do
        i = i_3
        i_3 -= 8
        int128_t v2 = *x10_1 + v0
        *(x10_1 - 0x10) += v0
        *x10_1 = v2
        x10_1 += 0x20
    while (i != 8)
    
    if (i_4 != x8_2)
        goto label_c74420
else
    i_4 = 0
label_c74420:
    void* x10_3 = arg1 + (i_4 << 2) + 0x30
    int64_t i_2 = x8_2 - i_4
    int64_t i_1
    
    do
        i_1 = i_2
        i_2 -= 1
        *x10_3 += 1
        x10_3 += 4
    while (i_1 != 1)
