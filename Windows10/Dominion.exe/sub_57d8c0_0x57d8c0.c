// 函数: sub_57d8c0
// 地址: 0x57d8c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg2
void* var_c = esi
int32_t result_1 = *sub_5722c0(arg1, 0x461, esi, arg4)
int32_t result
uint32_t esi_1

if (result_1 == 0)
    while (true)
        result = 0
    label_57d90d:
        int32_t edx = arg6
        
        if (result_1 == 0)
            return result
        
        int32_t ebx_1 = 0
        int32_t var_1c_1 = 0
        uint32_t eax_3 = *(result_1 * 0x64 + esi + 0x1a48)
        int32_t esi_2 = 0
        int32_t ecx_1 = *(eax_3 + 0xa8)
        int32_t var_41c[0x100]
        
        if (ecx_1 != 0)
        label_57d940:
            
            if (ecx_1 == 6 && *(eax_3 + 0xac) == 5 && *(eax_3 + 0xb4) == arg5)
                int32_t eax_4 = sub_575de0(eax_3, esi_2, result_1, edx)
                edx = arg6
                var_41c[ebx_1] = eax_4
                ebx_1 = var_1c_1 + 1
                var_1c_1 = ebx_1
            
            eax_3 += (esi_2 + 1) * 0xb4
            
            if (*(eax_3 + 0xa8) != 0)
                break
        
        void var_824
        __builtin_memcpy(&var_824, &var_41c, 0x404)
        int32_t edi = 0
        
        if (ebx_1 s> 0)
        label_57d9b3:
            uint32_t esi_3 = *(&var_824 + (edi << 2))
            
            if (sub_57c810(eax_3, arg4, var_c, esi_3, edx, 0, 0xffffffff, arg7).b != 0)
                *(arg3 + (*(arg3 + 0x400) << 2)) = esi_3
                *(arg3 + 0x400) += 1
            
            if (edi + 1 s< ebx_1)
                break
        
        result_1 = result
        
        if (result != 0)
            break
        
        esi = var_c
    
    esi_1 = zx.d(result.w)
    
    if (esi_1 u>= 0x320)
        sub_591930()
        esi = var_c
        result = *(esi_1 * 0x64 + esi + 0x1aa4)
        goto label_57d90d
else
    esi_1 = zx.d(result_1.w)
    
    if (esi_1 u>= 0x320)
        sub_591930()

esi = var_c
result = *(esi_1 * 0x64 + esi + 0x1aa4)
goto label_57d90d
