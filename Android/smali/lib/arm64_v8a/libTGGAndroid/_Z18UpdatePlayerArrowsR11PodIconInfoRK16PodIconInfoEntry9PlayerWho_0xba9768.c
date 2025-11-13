// 函数: _Z18UpdatePlayerArrowsR11PodIconInfoRK16PodIconInfoEntry9PlayerWho
// 地址: 0xba9768
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *arg2
int64_t x8 = *(arg2 + 4)
int32_t x21 = arg3
int32_t x23

if (x9.d s>= x8.d)
    x23 = 0
else
    int64_t x10_1 = x8 - x9
    
    if (x10_1 u>= 2)
        int64_t i_5 = x10_1 & 0xfffffffffffffffe
        void* x14_1 = arg1 + (x9 << 3)
        int32_t x11_1 = 0
        int32_t x12_1 = 0
        x9 += i_5
        void* x14_2 = x14_1 + 0x1010
        int64_t i_4 = i_5
        int64_t i
        
        do
            void* x16_1 = *(x14_2 - 8)
            void* x17_1 = *x14_2
            x14_2 += 0x10
            
            if (*(x16_1 + 0x2c) != 7)
                x11_1 += 1
            
            if (*(x17_1 + 0x2c) != 7)
                x12_1 += 1
            
            i = i_4
            i_4 -= 2
        while (i != 2)
        x23 = x12_1 + x11_1
        
        if (x10_1 != i_5)
            goto label_ba97fc
    else
        x23 = 0
    label_ba97fc:
        int64_t i_3 = x8 - x9
        void* x9_2 = arg1 + (x9 << 3) + 0x1008
        int64_t i_1
        
        do
            void* x10_2 = *x9_2
            x9_2 += 8
            
            if (*(x10_2 + 0x2c) != 7)
                x23 += 1
            
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

int32_t x0_1 = CountPlayerPodiconSlots(zx.q(x21))
int64_t result
int64_t i_2
int32_t x9_3

if (x0_1 s>= x23)
    result = ClearPlayerArrows(arg1, arg2, 0)
    x9_3 = *(arg2 + 4)
    i_2 = sx.q(*arg2)
    
    if (i_2.d s< x9_3)
    label_ba98a4:
        
        do
            void* x12_2 = *(arg1 + 0x1008 + (i_2 << 3))
            
            if (x12_2 != 0 && *(x12_2 + 0x3b0) == 1 && *(x12_2 + 0x2c) != 7)
                *(x12_2 + 0x2144) = (*(x12_2 + 0x3c4) s>= x0_1 ? 1 : 0).b
                x9_3 = *(arg2 + 4)
            
            i_2 += 1
        while (i_2 s< sx.q(x9_3))
else
    int32_t x2
    
    if (x0_1 s> 0)
        x2 = x0_1 - 1
    else
        x2 = 0
    
    result = TryAddPlayerIcon(arg1, zx.q(x21), x2, 0, arg2)
    x9_3 = *(arg2 + 4)
    i_2 = sx.q(*arg2)
    
    if (i_2.d s< x9_3)
        goto label_ba98a4
return result
