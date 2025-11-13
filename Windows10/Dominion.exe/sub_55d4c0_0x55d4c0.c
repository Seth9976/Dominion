// 函数: sub_55d4c0
// 地址: 0x55d4c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg1
int32_t* result = sub_562880(arg3, arg2, var_c)
int32_t* result_1 = result

if (result_1 != 0)
    result = sub_573400()
    
    if ((*(result[3] * 0x5a30 + result[1] + 0x17538) & 2) != 0)
        void* eax = sub_573400()
        uint32_t esi = zx.d(result_1.w)
        int32_t ebx_1 = *(eax + 0xc)
        void* edi = *(eax + 4)
        
        if (esi u>= 0x320)
            sub_591930()
        
        int32_t eax_1 = esi * 0x64
        sub_576e90(eax_1, edi, &var_c, ebx_1, *(eax_1 + edi + 0x1a4c), 0)
        int32_t var_1c_1 = var_c + 2
        return sub_564ce0(esi)

return result
