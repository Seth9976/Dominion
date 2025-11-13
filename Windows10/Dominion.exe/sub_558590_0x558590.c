// 函数: sub_558590
// 地址: 0x558590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result
int32_t ecx

if (sub_56e300(ecx).b == 0 && sub_56e820(4, 0).b != 0)
    result = sub_573400()
    void* ecx_1 = *(result + 4)
    
    if (*(ecx_1 + 0x19d8) != 0 && *(ecx_1 + 0x19cc) == *(result + 0xc))
        uint32_t ebx_1 = zx.d(arg1.w)
        int32_t esi_1 = ebx_1 * 0x64
        int32_t eax_1 = *(sub_573400() + 4)
        void* var_10_1
        int32_t var_c_2
        
        if (ebx_1 u< 0x320)
            var_10_1 = *(esi_1 + eax_1 + 0x1a58)
            var_c_2 = *(sub_573400() + 4)
        else
            sub_591930()
            var_10_1 = *(esi_1 + eax_1 + 0x1a58)
            var_c_2 = *(sub_573400() + 4)
            sub_591930()
        
        if (*(esi_1 + var_c_2 + 0x1a50) == var_10_1)
            int32_t eax_10 = *(sub_573400() + 4)
            
            if (ebx_1 u>= 0x320)
                sub_591930()
            
            if (*(esi_1 + eax_10 + 0x1a50) == 0x3ea)
                result = sub_567520()
            
            if (*(esi_1 + eax_10 + 0x1a50) != 0x3ea || result.b == 0)
                return sub_56f910(arg1.w, 1)

result.b = 0
return result
