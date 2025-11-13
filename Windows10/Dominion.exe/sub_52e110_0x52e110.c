// 函数: sub_52e110
// 地址: 0x52e110
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = sub_563590(0x100)

if (result != 0)
    void* eax = sub_573400()
    result = sub_583720(eax, *(eax + 0xc), *(eax + 4), result, 0x476, nullptr, 0x476, 0, 0, 4)
    
    if (result.b != 0)
        int32_t var_34
        result = sub_562880(arg2, arg1, var_34)
        
        if (result != 0)
            void* eax_1 = sub_573400()
            uint32_t esi_2 = zx.d(result.w)
            int32_t ecx_3 = *(eax_1 + 0xc)
            void* edi = *(eax_1 + 4)
            var_34 = ecx_3
            
            if (esi_2 u>= 0x320)
                sub_591930()
                ecx_3 = var_34
            
            int32_t eax_2 = esi_2 * 0x64
            sub_576e90(eax_2, edi, &var_34, ecx_3, *(eax_2 + edi + 0x1a4c), 0)
            uint32_t var_30[0x8]
            return sub_562100((*sub_576c00(&var_30, var_34)).d, 0)

return result
