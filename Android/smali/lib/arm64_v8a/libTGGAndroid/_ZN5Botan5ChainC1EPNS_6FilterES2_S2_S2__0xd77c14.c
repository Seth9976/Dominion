// 函数: _ZN5Botan5ChainC1EPNS_6FilterES2_S2_S2_
// 地址: 0xd77c14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Filter + 0x10
*(arg1 + 8) = zx.o(0)
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
int64_t result =
    std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::__append(arg1
    + 0x20)
__builtin_memset(arg1 + 0x38, 0, 0x11)
*arg1 = _vtable_for_Botan::Chain + 0x10

if (arg2 != 0)
    int64_t x8_2 = *(arg1 + 0x20)
    int64_t i
    
    if (*(arg1 + 0x28) == x8_2)
        i = 0
    else
        i = 0
        void* x10_1
        
        do
            x10_1 = *(x8_2 + (i << 3))
            
            if (x10_1 == 0)
                break
            
            x8_2 = *(x10_1 + 0x20)
            i = *(x10_1 + 0x38)
        while (i u< (*(x10_1 + 0x28) - x8_2) s>> 3)
    
    *(x8_2 + (i << 3)) = arg2
    *(arg1 + 0x40) += 1

if (arg3 != 0)
    int64_t x8_5 = *(arg1 + 0x20)
    int64_t i_1 = *(arg1 + 0x38)
    
    if (i_1 u< (*(arg1 + 0x28) - x8_5) s>> 3)
        void* x10_5
        
        do
            x10_5 = *(x8_5 + (i_1 << 3))
            
            if (x10_5 == 0)
                break
            
            x8_5 = *(x10_5 + 0x20)
            i_1 = *(x10_5 + 0x38)
        while (i_1 u< (*(x10_5 + 0x28) - x8_5) s>> 3)
    
    *(x8_5 + (i_1 << 3)) = arg3
    *(arg1 + 0x40) += 1

if (arg4 != 0)
    int64_t x8_8 = *(arg1 + 0x20)
    int64_t i_2 = *(arg1 + 0x38)
    
    if (i_2 u< (*(arg1 + 0x28) - x8_8) s>> 3)
        void* x10_9
        
        do
            x10_9 = *(x8_8 + (i_2 << 3))
            
            if (x10_9 == 0)
                break
            
            x8_8 = *(x10_9 + 0x20)
            i_2 = *(x10_9 + 0x38)
        while (i_2 u< (*(x10_9 + 0x28) - x8_8) s>> 3)
    
    *(x8_8 + (i_2 << 3)) = arg4
    *(arg1 + 0x40) += 1

int64_t entry_x4

if (entry_x4 != 0)
    int64_t x8_11 = *(arg1 + 0x20)
    int64_t i_3 = *(arg1 + 0x38)
    
    if (i_3 u< (*(arg1 + 0x28) - x8_11) s>> 3)
        void* x10_13
        
        do
            x10_13 = *(x8_11 + (i_3 << 3))
            
            if (x10_13 == 0)
                break
            
            x8_11 = *(x10_13 + 0x20)
            i_3 = *(x10_13 + 0x38)
        while (i_3 u< (*(x10_13 + 0x28) - x8_11) s>> 3)
    
    *(x8_11 + (i_3 << 3)) = entry_x4
    *(arg1 + 0x40) += 1

return result
