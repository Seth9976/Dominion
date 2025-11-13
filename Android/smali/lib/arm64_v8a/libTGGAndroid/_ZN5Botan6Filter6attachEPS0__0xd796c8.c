// 函数: _ZN5Botan6Filter6attachEPS0_
// 地址: 0xd796c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1

if (entry_x1 == 0)
    return 

int64_t x8_1 = *(arg1 + 0x20)
int64_t i = *(arg1 + 0x38)

if (i u< (*(arg1 + 0x28) - x8_1) s>> 3)
    void* x10_3
    
    do
        x10_3 = *(x8_1 + (i << 3))
        
        if (x10_3 == 0)
            break
        
        x8_1 = *(x10_3 + 0x20)
        i = *(x10_3 + 0x38)
    while (i u< (*(x10_3 + 0x28) - x8_1) s>> 3)

*(x8_1 + (i << 3)) = entry_x1
