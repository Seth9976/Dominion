// 函数: _spAnimationState_animationsChanged
// 地址: 0xfbc220
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = zx.q(*(arg1 + 8))
*(arg1 + 0x60) = 0
*(arg1 + 0x58) = 0

if (x21.d s<= 0)
    *(arg1 + 0x58) = 0
    return 

int64_t x22 = 0

do
    void* i = *(*(arg1 + 0x10) + (x22 << 3))
    
    if (i != 0)
        void* i_3
        
        do
            i_3 = i
            i = *(i + 0x10)
        while (i != 0)
        
        void* i_1
        
        do
            i_1 = *(i_3 + 0x18)
            
            if (i_1 == 0 || *(i_3 + 0x7c) != 3)
                _spTrackEntry_computeHold(i_3, arg1)
                i_1 = *(i_3 + 0x18)
            
            i_3 = i_1
        while (i_1 != 0)
    
    x22 += 1
while (x22 != x21)

uint64_t x21_1 = zx.q(*(arg1 + 8))
*(arg1 + 0x58) = 0

if (x21_1.d s< 1)
    return 

bool cond:0_1

do
    for (void* i_2 = *(*(arg1 + 0x10) + ((x21_1 - 1) << 3)); i_2 != 0; i_2 = *(i_2 + 0x10))
        _spTrackEntry_computeNotLast(i_2, arg1)
    
    cond:0_1 = x21_1 s<= 1
    x21_1 -= 1
while (not(cond:0_1))
