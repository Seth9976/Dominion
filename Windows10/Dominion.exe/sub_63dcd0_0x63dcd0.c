// 函数: sub_63dcd0
// 地址: 0x63dcd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg2
int32_t eax

if (ebx s< 0x80)
    eax = 1
else if (ebx s>= 0x800)
    int32_t eax_1
    eax_1.b = ebx s>= 0x10000
    eax = eax_1 + 3
else
    eax = 2

char* ecx = *arg1
int32_t var_8
int32_t eax_4
int32_t esi

if (ecx == 0 || *ecx == 0)
    sub_63d540(arg1, eax)
    esi = eax
    eax_4 = 0
    var_8 = 0
else
    esi = eax
    int32_t eax_3 = *(sub_63d4e0(arg1) + 8)
    var_8 = eax_3
    sub_63d5e0(eax_3, esi + eax_3, arg1, 1)
    eax_4 = var_8

char* ecx_5 = *arg1 + eax_4

if (ebx u>= 0x80)
    arg2:3.b = ebx.b
    arg2:3.b &= 0x3f
    arg2:3.b |= 0x80
    uint8_t eax_6 = (ebx u>> 6).b
    
    if (ebx u>= 0x800)
        eax_6 = (eax_6 & 0x3f) | 0x80
        uint8_t edx_4 = (ebx u>> 0xc).b
        
        if (ebx u>= 0x10000)
            *ecx_5 = (ebx u>> 0x12).b | 0xf0
            ecx_5[2] = eax_6
            ecx_5[1] = (edx_4 & 0x3f) | 0x80
            ecx_5[3] = arg2:3.b
        else
            *ecx_5 = edx_4 | 0xe0
            ecx_5[1] = eax_6
            ecx_5[2] = arg2:3.b
    else
        *ecx_5 = eax_6 | 0xc0
        ecx_5[1] = arg2:3.b
else
    *ecx_5 = ebx.b

(*arg1 + esi)[var_8] = 0
return arg1
