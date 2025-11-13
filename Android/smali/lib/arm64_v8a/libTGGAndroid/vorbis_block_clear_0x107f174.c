// 函数: vorbis_block_clear
// 地址: 0x107f174
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i_2 = *(arg1 + 0x90)
int64_t* x20 = *(arg1 + 0xb8)

if (i_2 != 0)
    int64_t* i
    
    do
        i = i_2[1]
        free(*i_2)
        free(i_2)
        i_2 = i
    while (i != 0)

int64_t x8 = *(arg1 + 0x88)
int64_t oldmem = *(arg1 + 0x70)

if (x8 != 0)
    oldmem = realloc(oldmem, *(arg1 + 0x80) + x8)
    int64_t x8_1 = *(arg1 + 0x80)
    int64_t x9_2 = *(arg1 + 0x88)
    *(arg1 + 0x70) = oldmem
    *(arg1 + 0x80) = x8_1 + x9_2
    *(arg1 + 0x88) = 0

*(arg1 + 0x78) = 0
*(arg1 + 0x90) = 0

if (oldmem != 0)
    free(oldmem)

if (x20 != 0)
    oggpack_writeclear(x20[2])
    free(x20[2])
    oggpack_writeclear(x20[3])
    free(x20[3])
    oggpack_writeclear(x20[4])
    free(x20[4])
    oggpack_writeclear(x20[5])
    free(x20[5])
    oggpack_writeclear(x20[6])
    free(x20[6])
    oggpack_writeclear(x20[7])
    free(x20[7])
    oggpack_writeclear(x20[8])
    free(x20[8])
    
    for (int64_t i_1 = 0x48; i_1 != 0x88; i_1 += 8)
        oggpack_writeclear(*(x20 + i_1))
        
        if (i_1 != 0x48)
            free(*(x20 + i_1))
    
    free(x20)

memset(arg1, 0, 0xc0)
return 0
