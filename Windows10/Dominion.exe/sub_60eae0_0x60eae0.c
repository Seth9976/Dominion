// 函数: sub_60eae0
// 地址: 0x60eae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t esi = arg1
int32_t var_ac = esi
uint32_t result

if (arg2 == 0)
label_60eb04:
    result.b = 1
    CookieCheckFunction(result)
    return result

int32_t ecx_2 = 0
int32_t edx = 1
int32_t ebx
ebx.b = 0
int32_t var_a8[0x28]

for (int128_t* const i = &data_77fea0; i != &data_77fee8; )
    if ((esi & edx) != 0)
        int32_t esi_1 = *i
        
        if (esi_1 != 0x13)
            var_a8[ecx_2] = esi_1
            ecx_2 += 1
        else
            ebx.b = 1
        
        esi = var_ac
    
    i += 4
    edx *= 2

if (ebx.b != 0)
    var_a8[ecx_2] = 0x13
    ecx_2 += 1

result = 0

if (ecx_2 s> 0)
    do
        if (var_a8[result] == arg2)
            goto label_60eb04
        
        result += 1
    while (result s< ecx_2)

result.b = 0
CookieCheckFunction(result)
return result
