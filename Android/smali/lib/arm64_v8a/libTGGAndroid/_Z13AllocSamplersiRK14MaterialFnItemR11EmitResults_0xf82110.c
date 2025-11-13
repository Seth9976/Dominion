// 函数: _Z13AllocSamplersiRK14MaterialFnItemR11EmitResults
// 地址: 0xf82110
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((*arg2 | 4) == 4)
    uint64_t x8_1 = zx.q(*(arg3 + 0x270))
    int64_t x9_1
    
    if (x8_1.d s>= 1)
        x9_1 = 0
        
        while (*(arg3 + 0x250 + (x9_1 << 3)) != *(arg2 + 0x10))
            x9_1 += 1
            
            if (x8_1 == x9_1)
                goto label_f82168
    
    if (x8_1.d s< 1 || x9_1.d == 0xffffffff)
    label_f82168:
        *(arg3 + 0x270) = x8_1.d + 1
        *(arg3 + (sx.q(x8_1.d) << 3) + 0x250) = *(arg2 + 0x10)
    else
        x8_1 = zx.q(x9_1.d)
    
    *(arg3 + muls.dp.d(arg1, 0xc) + 0x278) = x8_1.d

int64_t x8_5 = (*(arg2 + 0x34) ^ *TEXANIM_NONE) | (*(arg2 + 0x3c) ^ *(TEXANIM_NONE + 8))
    | (*(arg2 + 0x44) ^ *(TEXANIM_NONE + 0x10)) | (*(arg2 + 0x4c) ^ *(TEXANIM_NONE + 0x18))

if (x8_5 == 0)
    *(arg3 + muls.dp.d(arg1, 0xc) + 0x274) = 0xffffffff
    return 

int32_t x8_6 = *(arg3 + 0x3b4)
*(arg3 + 0x3b4) = x8_6 + 1
*(arg3 + muls.dp.d(arg1, 0xc) + 0x274) = x8_6
