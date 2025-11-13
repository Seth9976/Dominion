// 函数: sub_5387e0
// 地址: 0x5387e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
int32_t* result = sub_562880(arg3, arg2, var_c)

if (result != 0)
    void* eax = sub_573400()
    uint32_t esi_1 = zx.d(result.w)
    int32_t ebx_1 = *(eax + 0xc)
    void* edi = *(eax + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_1 = esi_1 * 0x64
    sub_576e90(eax_1, edi, &var_c, ebx_1, *(eax_1 + edi + 0x1a4c), 0)
    void* var_1c_2 = var_c + 2
    result = sub_564ce0(esi_1)
    
    if (result != 0)
        uint32_t esi_2 = zx.d(result.w)
        void* eax_5 = *(sub_573400() + 4)
        var_c = eax_5
        
        if (esi_2 u>= 0x320)
            sub_591930()
            eax_5 = var_c
        
        int32_t edi_1 = esi_2 * 0x64
        char eax_6 = sub_5754f0(eax_5, *(edi_1 + eax_5 + 0x1a4c), eax_5, 4, 0)
        char eax_9
        
        if (eax_6 == 0)
            void* eax_8 = *(sub_573400() + 4)
            var_c = eax_8
            
            if (esi_2 u>= 0x320)
                sub_591930()
                eax_8 = var_c
            
            eax_9 = sub_5754f0(eax_8, *(edi_1 + eax_8 + 0x1a4c), eax_8, 2, 0)
        
        if ((eax_6 != 0 || eax_9 != 0) && sub_56f260(result) != 0)
            void* eax_12 = *(sub_573400() + 4)
            var_c = eax_12
            
            if (esi_2 u>= 0x320)
                sub_591930()
                eax_12 = var_c
            
            sub_5695c0(eax_12, *(edi_1 + eax_12 + 0x1a58), result, 0xb)
        
        void* eax_13 = sub_573400()
        void* ebx_3 = *(eax_13 + 4)
        
        if (esi_2 u>= 0x320)
            eax_13 = sub_591930()
        
        result = sub_5754f0(eax_13, *(edi_1 + ebx_3 + 0x1a4c), ebx_3, 8, 0)
        
        if (result.b != 0)
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<enum CardID (__cdecl *)(void), void>::VTable
                * const var_40 = &std::_Func_impl_no_alloc<enum CardID (__cdecl *)(void), void>::`vftable'{for `std::_Func_base<void>'}
            int32_t* (* var_3c_1)() = sub_565ce0
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<enum CardID (__cdecl *)(void), void>::VTable
                * const* var_1c_7 = &var_40
            return sub_5699b0(var_40)

return result
