// 函数: sub_5bbfb0
// 地址: 0x5bbfb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int128_t* eax = arg2
__builtin_memset(arg1, 0, 0x18)
int32_t ebx = eax[1].d

if (*(eax + 0x14) u> 0xf)
    eax = *eax
    arg2 = eax

if (ebx u> 0x7fffffff)
    sub_5b0860()
    noreturn

if (ebx u<= 0xf)
    arg1[1].d = ebx
    *(arg1 + 0x14) = 0xf
    *arg1 = *eax
    return arg1

int32_t esi_1 = ebx | 0xf
uint32_t eax_4
uint32_t ecx

if (esi_1 u<= 0x7fffffff)
    if (esi_1 u< 0x16)
        esi_1 = 0x16
    
    eax_4 = esi_1 + 1
    
    if (eax_4 != 0)
        if (eax_4 u>= 0x1000)
            ecx = eax_4 + 0x23
            
            if (ecx u> eax_4)
                goto label_5bc022
            
            sub_4f7ee0()
            noreturn
        
        eax_4 = operator new(eax_4)
else
    esi_1 = 0x7fffffff
    ecx = 0x80000023
label_5bc022:
    int32_t eax_2 = operator new(ecx)
    
    if (eax_2 == 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    eax_4 = (eax_2 + 0x23) & 0xffffffe0
    *(eax_4 - 4) = eax_2
*arg1 = eax_4
arg1[1].d = ebx
*(arg1 + 0x14) = esi_1
memcpy(eax_4, arg2, ebx + 1)
return arg1
