// 函数: _ZNK5Botan9Power_Mod11set_modulusERKNS_6BigIntENS0_11Usage_HintsEb
// 地址: 0xdd83b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = *(arg1 + 8)
int32_t x20 = arg3.d
int64_t* x22 = arg2
*(arg1 + 8) = 0

if (result != 0)
    result = (*(*result + 0x28))()

if (x22[4].d == 0)
label_dd84b8:
    char* x8_4 = *x22
    int32_t entry_x3
    
    if (x22[1] == x8_4 || (zx.d(*x8_4) & 1) == 0 || (entry_x3 & 1) != 0)
        struct Botan::Modular_Exponentiator::Botan::(anonymous namespace)::Fixed_Window_Exponentiator::VTable
            ** x0_5 = operator new(0xb0)
        *x0_5 = &_vtable_for_Botan::(anonymous namespace)::Fixed_Window_Exponentiator{for `Botan::Modular_Exponentiator'}
        Botan::Modular_Reducer::Modular_Reducer(&x0_5[1])
        __builtin_memset(&x0_5[0xc], 0, 0x20)
        x0_5[0xf] = -1
        x0_5[0x10] = 0
        x0_5[0x10].d = 1
        __builtin_memset(&x0_5[0x11], 0, 0x20)
        x0_5[0x15].d = x20
        result = *(arg1 + 8)
        *(arg1 + 8) = x0_5
        
        if (result != 0)
            jump(*(*result + 0x28))
    else
        struct Botan::Modular_Exponentiator::Botan::(anonymous namespace)::Montgomery_Exponentiator::VTable
            ** x0 = operator new(0xd8)
        *x0 = &_vtable_for_Botan::(anonymous namespace)::Montgomery_Exponentiator{for `Botan::Modular_Exponentiator'}
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&x0[1])
        x0[4] = x22[3]
        x0[5].d = x22[4].d
        Botan::Modular_Reducer::Modular_Reducer(&x0[6])
        void** x0_3 = operator new(0xc8)
        x0_3[2] = 0
        *x0_3 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Montgomery_Params, std::__ndk1::allocator<Botan::Montgomery_Params> >
            + 0x10
        x0_3[1] = 0
        Botan::Montgomery_Params::Montgomery_Params(&x0_3[3], &x0[1])
        x0[0x11] = &x0_3[3]
        x0[0x12] = x0_3
        __builtin_memset(&x0[0x13], 0, 0x28)
        x0[0x18] = -1
        x0[0x19].d = 1
        x0[0x1a].d = x20
        result = *(arg1 + 8)
        *(arg1 + 8) = x0
        
        if (result != 0)
            jump(*(*result + 0x28))
else
    int64_t i_2 = x22[3]
    
    if (i_2 != -1)
        if (i_2 u<= 1)
            goto label_dd8480
        
        goto label_dd84b8
    
    int64_t x9_1 = *x22
    int64_t x11_1 = x22[1]
    int64_t x10_1 = x11_1 - x9_1
    
    if (x11_1 == x9_1)
        i_2 = 0
        x22[3] = 0
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x9_1 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        i_2 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_3 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_3 << 2))
            i = i_3
            i_3 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            i_2 -= x11_3
        while (i != 1)
        x22[3] = i_2
        
        if (i_2 u> 1)
            goto label_dd84b8
    
label_dd8480:
    
    if (i_2 != 0)
        int32_t* x9_3 = *x22
        int32_t x10_4 = 0
        int64_t i_1
        
        do
            int32_t x11_4 = *x9_3
            x9_3 = &x9_3[1]
            i_1 = i_2
            i_2 -= 1
            int32_t x11_6 = ((x11_4 - 1) & not.d(x11_4)) s>> 0x1f
            x10_4 = (x10_4 & x11_6) | (not.d(x11_6) & 1)
        while (i_1 != 1)
        
        if (x10_4 != 0)
            goto label_dd84b8

return result
