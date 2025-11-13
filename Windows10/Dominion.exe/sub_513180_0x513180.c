// 函数: sub_513180
// 地址: 0x513180
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* result

if ((*(sub_573400() + 0x68) & 4) == 0)
    void* eax = sub_573400()
    void* ebx_1 = *(eax + 4)
    
    if (sub_591540(eax) == *(eax + 0xc))
        uint32_t esi_2 = zx.d(arg1)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        int32_t* eax_3 = esi_2 * 0x64 + 0x1a4c + ebx_1
        uint32_t eax_4 = sub_5754f0(eax_3, *eax_3, ebx_1, 2, 0)
        
        if (eax_4.b != 0)
        label_513210:
            
            if (*(*(eax + 0x64) + 0x28) == 0)
                if (sub_56e820(4, 0).b != 0)
                    result.b = 1
                    return result
                
                if (sub_56e820(2, 0).b != 0)
                    result.b = 1
                    return result
        else
            if (esi_2 u>= 0x320)
                eax_4 = sub_591930()
            
            if (sub_5754f0(eax_4, *eax_3, ebx_1, 4, 0).b != 0)
                goto label_513210

result.b = 0
return result
