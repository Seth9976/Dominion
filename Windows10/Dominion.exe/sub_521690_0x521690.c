// 函数: sub_521690
// 地址: 0x521690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t edx = __chkstk(0x1924)
__security_cookie
void arg_4
void* ebx = &arg_4
int32_t arg_c8c[0x323]
uint32_t esi_1 = __builtin_memcpy(&arg_4, sub_568780(&arg_c8c, edx, 0x3e9, &arg_c8c), 0xc84)
void* i = &arg_4
int32_t edi = 0
void* eax_5 = &arg_4 + (arg1 << 2)

if (&arg_4 != eax_5)
    do
        esi_1 = zx.d((*ebx).w)
        var_4 = *(sub_573400() + 4)
        
        if (esi_1 u>= 0x320)
            sub_591930()
        
        i = *(esi_1 * 0x64 + var_4 + 0x1a4c)
        int32_t eax_9 = 0
        
        if (edi s<= 0)
        label_521730:
            arg_c8c[edi] = i
            edi += 1
        else
            while (arg_c8c[eax_9] != i)
                eax_9 += 1
                
                if (eax_9 s>= edi)
                    goto label_521730
        
        ebx += 4
    while (ebx != eax_5)

void* i_1 = i
int32_t var_18_1 = edi
int32_t* result = sub_564ce0(esi_1)

if (result != 0)
    uint32_t esi_4 = zx.d(result.w)
    void* edi_1 = *(sub_573400() + 4)
    
    if (esi_4 u>= 0x320)
        sub_591930()
    
    int32_t eax_11 = esi_4 * 0x64
    result = sub_5754f0(eax_11, *(eax_11 + edi_1 + 0x1a4c), edi_1, 8, 0)
    
    if (result.b != 0)
        uint32_t eax_12
        int32_t ecx_3
        eax_12, ecx_3 = sub_56b800()
        int32_t var_18_3 = ecx_3
        result = sub_5624a0(eax_12, 0x3e9)

CookieCheckFunction(result)
return result
