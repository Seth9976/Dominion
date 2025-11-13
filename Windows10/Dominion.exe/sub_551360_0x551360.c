// 函数: sub_551360
// 地址: 0x551360
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg1
int32_t* result
int32_t ecx_1
int32_t edx
result, ecx_1, edx = sub_562880(arg3, arg2, var_c)
int32_t* result_1 = result

if (result_1 != 0)
    int32_t var_1c_1 = ecx_1
    result = sub_568530(result, edx, result_1.w, 1)
    
    if (result.b != 0)
        void* eax = sub_573400()
        uint32_t esi = zx.d(result_1.w)
        int32_t ebx_1 = *(eax + 0xc)
        void* edi = *(eax + 4)
        
        if (esi u>= 0x320)
            sub_591930()
        
        int32_t eax_1 = esi * 0x64
        sub_576e90(eax_1, edi, &var_c, ebx_1, *(eax_1 + edi + 0x1a4c), 0)
        int32_t var_1c_2 = var_c
        sub_564f00(esi)
        result = sub_563590(0x106)
        
        if (result != 0)
            void* eax_2 = sub_573400()
            return sub_583720(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), result, 0x476, nullptr, 0x476, 
                0, 0, 4)

return result
