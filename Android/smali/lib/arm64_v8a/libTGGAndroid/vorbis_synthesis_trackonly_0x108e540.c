// 函数: vorbis_synthesis_trackonly
// 地址: 0x108e540
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = arg1[0xd]
void* x23 = *(x8 + 0x88)
int64_t x22 = *(*(x8 + 8) + 0x30)
_vorbis_block_ripcord()
oggpack_readinit(&arg1[1], *arg2, zx.q(arg2[1].d))

if (oggpack_read(&arg1[1], 1) != 0)
    return 0xffffff79

int64_t x0_5
int128_t v0_1
x0_5, v0_1 = oggpack_read(&arg1[1], zx.q(*(x23 + 0x50)))

if (x0_5.d != 0xffffffff)
    *(arg1 + 0x4c) = x0_5.d
    int32_t* x8_3 = *(x22 + (x0_5 << 0x20 s>> 0x1d) + 0x28)
    
    if (x8_3 != 0)
        int64_t x8_4 = sx.q(*x8_3)
        arg1[7] = x8_4
        
        if (x8_4.d == 0)
            arg1[6] = 0
            arg1[8] = 0
        label_108e60c:
            *(arg1 + 0x58) = *(arg2 + 0x20)
            int32_t x8_5 = (arg2[3]).d
            arg1[9].d = 0
            *arg1 = 0
            arg1[0xa].d = x8_5
            return 0
        
        arg1[6] = oggpack_read(&arg1[1], 1)
        int64_t x0_9
        x0_9, v0_1 = oggpack_read(&arg1[1], 1)
        arg1[8] = x0_9
        
        if (x0_9 != -1)
            goto label_108e60c

return 0xffffff78
