// 函数: sub_567520
// 地址: 0x567520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4 = ebp
int16_t ecx = __chkstk(0x1914)
__security_cookie
uint32_t edi = zx.d(ecx)
int32_t ebx = *(sub_573400() + 4)

if (edi u>= 0x320)
    sub_591930()

void* esi = edi * 0x64
uint32_t result = *(esi + ebx + 0x1a50)

if (result == 0x3ea || result == 0x3eb)
    void* eax_3 = sub_573400()
    void* ebx_1 = *(eax_3 + 4)
    int32_t var_8 = *(eax_3 + 0xc)
    void* eax_5 = sub_573400()
    result = sub_576b30(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), 0x19, 0, 0, 0)
    int32_t edx_2 = var_8
    
    if (result s> 0)
        result = edx_2 * 0x5a30
        
        if (*(result + ebx_1 + 0x17530) s< 3)
            goto label_5675c9
        
    label_56767f:
        result.b = 1
        CookieCheckFunction(result)
        return result
    
label_5675c9:
    
    if (sub_576b30(result, edx_2, ebx_1, 0x18, 0, 0, 0) s> 0)
        void* eax_7 = *(sub_573400() + 4)
        
        if (edi u>= 0x320)
            sub_591930()
        
        int32_t ecx_4
        result, ecx_4 = sub_5754f0(eax_7, *(esi + eax_7 + 0x1a4c), eax_7, 4, 0)
        
        if (result.b != 0)
            int32_t arg_c84[0x321]
            int32_t (* var_18_1)[0x321] = &arg_c84
            int32_t arg_4[0x320]
            uint32_t eax_9 = sub_586c00(&arg_4, var_8, ebx_1, ecx_4, &arg_4)
            
            if (edi u>= 0x320)
                sub_591930()
            
            int32_t ecx_6 = 0
            
            if (eax_9 s> 0)
                while (arg_4[ecx_6] != *(esi + ebx_1 + 0x1a4c))
                    ecx_6 += 1
                    
                    if (ecx_6 s>= eax_9)
                        goto label_567652
                
                if (ecx_6 != 0xffffffff && arg_c84[ecx_6] s>= 2)
                    goto label_56767f

label_567652:
result.b = 0
CookieCheckFunction(result)
return result
