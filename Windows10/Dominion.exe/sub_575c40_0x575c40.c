// 函数: sub_575c40
// 地址: 0x575c40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*arg6 = 0
uint32_t eax_1 = sub_590990(arg2, arg2, arg3, 0x3ea, arg4)
int32_t ebx = 0
uint32_t var_8 = eax_1
int32_t var_c = 0
int32_t esi = 0

if (eax_1 s> 0)
    int32_t ecx_2 = arg4
    
    do
        eax_1 = sub_5757f0(eax_1, (*(ecx_2 + (esi << 2))).w, arg3, 2, 0)
        ecx_2 = arg4
        
        if (eax_1.b != 0)
            eax_1 = *(ecx_2 + (esi << 2))
            *(ecx_2 + (ebx << 2)) = eax_1
            ebx += 1
        
        esi += 1
    while (esi s< var_8)
    
    var_c = ebx

int32_t eax_3 = arg4 + (ebx << 2)
int32_t eax_4 = sub_590990(eax_3, arg2, arg3, 0x3eb, eax_3)
int32_t edi_1 = 0
int32_t esi_1 = 0

if (eax_4 s> 0)
    int32_t ecx_5 = eax_3
    
    do
        int32_t eax_5 = *(ecx_5 + (esi_1 << 2))
        uint32_t eax_6 = sub_5757f0(eax_5, eax_5.w, arg3, 0, 0x1000)
        
        if (eax_6.b == 0)
            ecx_5 = eax_3
        else
            ecx_5 = eax_3
            
            if (sub_5757f0(eax_6, eax_5.w, arg3, 2, 0) != 0)
                *(ecx_5 + (edi_1 << 2)) = *(ecx_5 + (esi_1 << 2))
                edi_1 += 1
        
        esi_1 += 1
    while (esi_1 s< eax_4)
    
    ebx = var_c

int32_t result = edi_1 + ebx
int32_t esi_2 = 0

if (result s> 0)
    while (true)
        if (sub_5759a0(arg4, (*(arg4 + (esi_2 << 2))).w, arg3, arg5) != 0)
            *arg6 = 1
            break
        
        esi_2 += 1
        
        if (esi_2 s>= result)
            return result

return result
