// 函数: _Z14AttactIterNextP10AttachIter
// 地址: 0xf69ddc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1

if (zx.d(*(arg1 + 0x10)) == 0)
    int32_t* x8_3 = *arg1 + 0xc
    *(arg1 + 8) = x8_3
    x8_1 = *x8_3
    
    if (x8_1 != 0)
    label_f69e14:
        uint64_t x10_1 = zx.q(x8_1.w)
        int64_t* x9_2 = *(*gpGameData + 0x28)
        
        if (x10_1.d u< x9_2[1].d)
            void* x9_4 = *x9_2 + x10_1 * 0x34
            void* const x8_4
            
            if (*(x9_4 + 0x30) == x8_1)
                x8_4 = x9_4
            else
                x8_4 = nullptr
            
            *arg1 = x8_4
            return 
else
    int32_t* x8 = *(arg1 + 8)
    *(arg1 + 0x10) = 0
    x8_1 = *x8
    
    if (x8_1 != 0)
        goto label_f69e14
*arg1 = 0
