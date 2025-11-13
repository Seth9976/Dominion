// 函数: _Z17SoundOggReadFloatP14OggVorbis_FilePfiii
// 地址: 0x106c54c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = arg3
OggVorbis_File* x20 = arg1
void var_6c
int64_t* var_68

if (arg4 s<= 0)
    if (i s>= 1)
        do
            arg1 = ov_read_float(x20, &var_68, zx.q(i), &var_6c)
            
            if (arg1.d == 0)
                break
            
            i -= arg1.d
        while (i s> 0)
else if (i s>= 1)
    int32_t x24_1 = 0
    void* x25_1 = &arg2[sx.q(i)]
    
    do
        int32_t x21_1 = ov_read_float(x20, &var_68, zx.q(i), &var_6c).d
        
        if (x21_1 == 0)
            break
        
        int64_t* x28_1 = var_68
        void* x22_1 = x25_1 + (sx.q(x24_1) << 2)
        uint64_t j_1 = zx.q(arg4)
        uint64_t j
        
        do
            int64_t x1_1 = *x28_1
            x28_1 = &x28_1[1]
            memcpy(x22_1, x1_1, zx.q(x21_1) << 0x20 s>> 0x1e)
            j = j_1
            j_1 -= 1
            x22_1 += sx.q(arg5) << 2
        while (j != 1)
        i -= x21_1
        x24_1 += x21_1
    while (i s> 0)
