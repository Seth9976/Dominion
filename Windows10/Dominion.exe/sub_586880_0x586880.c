// 函数: sub_586880
// 地址: 0x586880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
void* var_c = __security_cookie ^ &__saved_ebp
int16_t* esi = arg4
int32_t edi = 0
int32_t* var_c94 = arg3
void* result

if (arg5 s> 0)
    int32_t var_c90[0x321]
    
    do
        uint32_t ebx_1 = zx.d(esi[edi * 2])
        
        if (ebx_1 u>= 0x320)
            sub_591930()
            arg3 = var_c94
        
        var_c90[edi] = arg3[ebx_1 * 0x19 + 0x694]
        edi += 1
    while (edi s< arg5)
    
    int32_t edi_1 = 0
    void* eax_3 = &var_c90 - esi
    
    do
        uint32_t ebx_2 = zx.d(*esi)
        
        if (ebx_2 u>= 0x320)
            sub_591930()
        
        if (var_c94[ebx_2 * 0x19 + 0x694] == *(eax_3 + esi))
            int32_t eax_5 = *esi
            uint32_t eax_6 = zx.d(eax_5.w)
            
            if (eax_6 u>= 0x320)
                sub_591930()
            
            int64_t var_ca8 = 0
            int64_t var_ca0 = 0
            int32_t var_cb0_1 = var_c94[eax_6 * 0x19 + 0x695]
            int32_t var_cb4 = eax_5
            
            if (sub_586320(&var_cb4, arg2, var_c94, &var_cb4, &var_ca0, &var_ca8, arg6).b != 0)
                result.b = 1
                CookieCheckFunction(result)
                return result
        
        edi_1 += 1
        esi = &esi[2]
    while (edi_1 s< arg5)

result.b = 0
CookieCheckFunction(result)
return result
