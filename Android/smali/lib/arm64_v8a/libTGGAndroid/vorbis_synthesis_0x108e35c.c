// 函数: vorbis_synthesis
// 地址: 0x108e35c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* const x8
int32_t x9
void* const x22
int64_t x23
void* const x24

if (arg1 == 0)
    x8 = nullptr
label_108e3a0:
    x22 = nullptr
    x9 = 0
    x24 = nullptr
    x23 = 0
else
    x8 = arg1[0xd]
    
    if (x8 == 0)
        goto label_108e3a0
    
    x22 = *(x8 + 8)
    x24 = *(x8 + 0x88)
    
    if (x22 == 0)
        x8 = nullptr
        x23 = 0
    else
        x23 = *(x22 + 0x30)
        x8 = 1
    
    x9 = 1

void* x21

if (arg1 != 0)
    x21 = &arg1[1]
else
    x21 = nullptr

if (arg1 == 0 || x23 == 0 || x8.d == 0 || x9 == 0 || x24 == 0)
    return 0xffffff78

_vorbis_block_ripcord(arg1)
oggpack_readinit(x21, *arg2, zx.q(arg2[1].d))

if (oggpack_read(x21, 1) != 0)
    return 0xffffff79

int64_t x0_6
int128_t v0_1
x0_6, v0_1 = oggpack_read(x21, zx.q(*(x24 + 0x50)))

if (x0_6.d != 0xffffffff)
    *(arg1 + 0x4c) = x0_6.d
    int32_t* x8_2 = *(x23 + (x0_6 << 0x20 s>> 0x1d) + 0x28)
    
    if (x8_2 != 0)
        int64_t x8_3 = sx.q(*x8_2)
        arg1[7] = x8_3
        int64_t x8_4
        
        if (x8_3.d == 0)
            x8_4 = 0
            arg1[6] = 0
            arg1[8] = 0
        label_108e4a4:
            *(arg1 + 0x58) = *(arg2 + 0x20)
            arg1[0xa].d = (arg2[3]).d
            arg1[9].d = (*(x23 + (x8_4 << 3))).d
            *arg1 = _vorbis_block_alloc(arg1, sx.q(*(x22 + 4)) << 3)
            
            if (*(x22 + 4) s>= 1)
                int64_t i = 0
                
                do
                    *(*arg1 + (i << 3)) = _vorbis_block_alloc(arg1, sx.q(arg1[9].d) << 2)
                    i += 1
                while (i s< sx.q(*(x22 + 4)))
            
            int64_t x8_12 = sx.q(*(*(x23 + (x0_6 << 0x20 s>> 0x1d) + 0x28) + 0xc))
            *(x23 + (x8_12 << 3) + 0x328)
            jump(*(_mapping_P[sx.q(*(x23 + (x8_12 << 2) + 0x228))] + 0x20))
        
        arg1[6] = oggpack_read(x21, 1)
        int64_t x0_10
        x0_10, v0_1 = oggpack_read(x21, 1)
        arg1[8] = x0_10
        
        if (x0_10 != -1)
            x8_4 = arg1[7]
            goto label_108e4a4

return 0xffffff78
