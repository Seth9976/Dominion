// 函数: sub_58a020
// 地址: 0x58a020
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* esi = arg2
int32_t var_c94 = 0
int32_t eax_2 = esi[0x1d]
int32_t var_c90[0x321]

if (eax_2 == 0)
    eax_2, arg2 = sub_578f00(&var_c90, &esi[0x1c], arg3, &var_c90, &var_c94)
else
    var_c94 = 1
    var_c90[0] = eax_2

if ((esi[1].b & 2) == 0)
    uint32_t ebx_1 = zx.d(arg4)
    
    if (ebx_1 u>= 0x320)
        arg2 = sub_591930()
    
    uint32_t ebx_3 = zx.d((esi[7]).w)
    int32_t eax_5 = arg3[ebx_1 * 0x19 + 0x693]
    
    if (ebx_3 u>= 0x320)
        arg2 = sub_591930()
    
    eax_2 = arg3[0x541]
    
    if (eax_2 != 3 && eax_2 != 5 && eax_2 != 4 && eax_2 != 6 && arg3[0x540].b == 0)
        int32_t edx_1 = esi[5]
        int32_t eax_7 = edx_1
        
        if (edx_1 == arg3[0x673])
            eax_7 = arg3[0x674]
        
        eax_2, arg2 = sub_59f9b0(eax_7, edx_1, arg3, eax_7, 0x51, 0, &var_c90, var_c94, 
            arg3[ebx_3 * 0x19 + 0x693], eax_5, 0, 0)

int32_t ebx_4 = 0

if (var_c94 s> 0)
    do
        eax_2, arg2 = sub_5822e0(eax_2, esi[5], arg3, var_c90[ebx_4], 0xc, 0x472, 4, 0, 0, 0, 1, 0, 
            nullptr, 0, 0xffffffff, nullptr)
        ebx_4 += 1
    while (ebx_4 s< var_c94)

void* ecx_3 = esi[6]

if (ecx_3 == 0xffffffff)
    ecx_3 = esi[5]

int32_t var_cd0_1
int32_t* var_ccc_2
void* var_cc8_1

if (esi[0x13] != 3)
    arg2 = esi[0x1f]
    
    if (arg2 != 0)
        eax_2 = arg3[0x541]
        
        if (eax_2 != 3 && eax_2 != 5 && eax_2 != 4 && eax_2 != 6)
            int32_t var_cc4
            __builtin_memset(&var_cc4, 0, 0x1c)
            var_cc8_1 = esi[0x20]
            var_ccc_2 = arg2
            var_cd0_1 = 0x14
            goto label_58a1f3
else
    eax_2 = arg3[0x541]
    
    if (eax_2 != 3 && eax_2 != 5 && eax_2 != 4 && eax_2 != 6)
        __builtin_memset(&var_cc8_1, 0, 0x20)
        var_ccc_2 = esi[0x15]
        var_cd0_1 = esi[0x14]
    label_58a1f3:
        uint32_t var_cd4_1 = ecx_3
        ecx_3.b = eax_2 == 2
        eax_2, ecx_3, arg2 = sub_61b1b0(eax_2, 0x1c, ecx_3.b, var_cd4_1, var_cd0_1, var_ccc_2, 
            var_cc8_1, nullptr, nullptr, 0, 0, 0, 0, 0)
int32_t var_cac_2 = 0xffffffff
void* result = sub_578d90(eax_2, arg2, arg3, esi[7], ecx_3, 0xffffffff)
CookieCheckFunction(result)
return result
