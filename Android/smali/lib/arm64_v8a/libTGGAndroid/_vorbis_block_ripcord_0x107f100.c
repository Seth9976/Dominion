// 函数: _vorbis_block_ripcord
// 地址: 0x107f100
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i_1 = *(arg1 + 0x90)
void* x19 = arg1

if (i_1 != 0)
    int64_t* i
    
    do
        i = i_1[1]
        free(*i_1)
        free(i_1)
        i_1 = i
    while (i != 0)

int64_t x8 = *(x19 + 0x88)

if (x8 != 0)
    arg1 = realloc(*(x19 + 0x70), *(x19 + 0x80) + x8)
    int64_t x8_1 = *(x19 + 0x80)
    int64_t x9_2 = *(x19 + 0x88)
    *(x19 + 0x70) = arg1
    *(x19 + 0x80) = x8_1 + x9_2
    *(x19 + 0x88) = 0

*(x19 + 0x78) = 0
*(x19 + 0x90) = 0
