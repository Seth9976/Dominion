// 函数: _Z15GetClickedGroupR23DomAssociatedCardGroupsR6DomGfx
// 地址: 0xaf3774
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = sx.q(*(arg1 + 0x2080))

if (x8_1.d == 0)
    return 

void* x8 = arg1 + x8_1

do
    int64_t x11_3 = sx.q(*arg1)
    
    if (x11_3.d s>= 1)
        int64_t x12_1 = 0
        int64_t x14_1 = 0xc
        
        do
            if (*(arg1 + x14_1) == *(arg2 + 0x21d0))
                return 
            
            x12_1 += 1
            x14_1 += 0xc
        while (x12_1 s< x11_3)
    
    void* x11_2 = arg1 + sx.q(8 + x11_3.d * 0xc)
    
    arg1 = x11_2 == x8 ? nullptr : x11_2
while (arg1 != 0)
