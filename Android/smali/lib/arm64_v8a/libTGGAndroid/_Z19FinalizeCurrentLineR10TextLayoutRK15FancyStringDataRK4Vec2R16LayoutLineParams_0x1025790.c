// 函数: _Z19FinalizeCurrentLineR10TextLayoutRK15FancyStringDataRK4Vec2R16LayoutLineParams
// 地址: 0x1025790
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
int128_t v1

if (*(arg1 + 0x28) != 0)
    if (*arg4 == 0xffffffff)
        v1.d = *(arg4 + 0x28)
        v0.d = *(arg4 + 0x2c)
        v1.d = v0.d f+ v1.d
        v1.d = v1.d f+ *(arg4 + 0x38)
        *(arg4 + 0x18) = v1.d
        *(arg4 + 0x1c) = v0.d
    else
        TextLayout& x20_1 = arg1
        arg1, v0, v1 = AlignmentGetOffsetPercent(zx.q(*(arg2 + 0x1c)))
        int32_t x8_2 = *(arg4 + 4)
        int64_t x10_2
        
        if (x8_2 == 0xffffffff)
            v1.d = 0f
            x10_2 = sx.q(*arg4)
            
            if (x10_2.d s<= x8_2)
            label_1025880:
                int64_t i = x10_2 - 1
                int64_t x10_3 = x10_2 << 6
                v1.d = *arg3 f- v1.d
                v0.d = v0.d f* v1.d
                
                do
                    void* x11_2 = *(x20_1 + 0x20) + x10_3
                    
                    if ((zx.d(*(x11_2 + 4)) & 2) == 0)
                        v1.d = *(x11_2 + 0x10)
                        v1.d = v0.d f+ v1.d
                        *(x11_2 + 0x10) = v1.d
                        x8_2 = *(arg4 + 4)
                    
                    i += 1
                    x10_3 += 0x40
                while (i s< sx.q(x8_2))
        else
            void* x9_2 = *(x20_1 + 0x20) + (sx.q(x8_2) << 6)
            v1.d = *(x9_2 + 0x10)
            v1.d = v1.d f+ *(x9_2 + 0x18)
            x10_2 = sx.q(*arg4)
            
            if (x10_2.d s<= x8_2)
                goto label_1025880

v0.q = *(arg4 + 0x18)
v1.q = *(arg4 + 0x28)
int32_t x8_3 = *(arg4 + 0x10)
uint64_t v1_1 = vbsl_s8(vceqz_f32(v0), v1, v0)
v0.d = *(arg4 + 0x20)
int32_t v4 = *(arg4 + 0x24)
int32_t v2 = *(arg4 + 0x30)
int128_t v3
v3.d = *(arg4 + 0x34)
__builtin_memset(arg4 + 0x14, 0, 0x14)

if (not(v4 f== 0f))
    v2 = v4

if (v0.d f== 0f)
    v0.d = v3.d
else
    v0.d = v0.d

*arg4 = -1
*(arg4 + 8) = -1
*(arg4 + 0x10) = x8_3 + 1
*(arg4 + 0x28) = v1_1
*(arg4 + 0x30) = v2
*(arg4 + 0x34) = v0.d
*(arg4 + 0x38) = 0
