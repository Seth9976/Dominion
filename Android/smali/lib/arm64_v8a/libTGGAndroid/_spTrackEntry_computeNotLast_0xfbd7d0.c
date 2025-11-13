// 函数: _spTrackEntry_computeNotLast
// 地址: 0xfbd7d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg1
uint64_t x22 = zx.q(*(x8 + 0xc))

if (x22.d s< 1)
    return 

int64_t x24_1 = *(x8 + 0x10)
int32_t* x25_1 = *(arg1[0x10] + 8)
int64_t x23_1 = 0

do
    int32_t* x9_2 = *(x24_1 + (x23_1 << 3))
    
    if (*x9_2 == 4)
        uint64_t i_2 = zx.q(*(arg2 + 0x58))
        int32_t x26_1 = x9_2[8]
        
        if (i_2.d s>= 1)
            int32_t* x9_3 = *(arg2 + 0x50)
            uint64_t i_1 = i_2
            uint64_t i
            
            do
                if (*x9_3 == x26_1)
                    x25_1[x23_1] |= 4
                    goto label_fbd868
                
                i = i_1
                i_1 -= 1
                x9_3 = &x9_3[1]
            while (i != 1)
        
        int64_t x21_1
        
        if (*(arg2 + 0x5c) s<= i_2.d)
            int32_t x27_1 = (i_2.d << 1) + 2
            int64_t x0_1 = _spCalloc(sx.q(x27_1), 4, 
                "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x387)
            x21_1 = x0_1
            memcpy(x0_1, *(arg2 + 0x50), sx.q(*(arg2 + 0x58)) << 2)
            _spFree(*(arg2 + 0x50))
            i_2 = zx.q(*(arg2 + 0x58))
            *(arg2 + 0x50) = x21_1
            *(arg2 + 0x5c) = x27_1
        else
            x21_1 = *(arg2 + 0x50)
        
        *(x21_1 + (sx.q(i_2.d) << 2)) = x26_1
        *(arg2 + 0x58) += 1
    
label_fbd868:
    x23_1 += 1
while (x23_1 != x22)
