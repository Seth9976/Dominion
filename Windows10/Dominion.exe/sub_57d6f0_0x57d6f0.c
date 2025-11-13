// 函数: sub_57d6f0
// 地址: 0x57d6f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
int32_t eax_1
eax_1.b = 0
void* esi = arg2
char var_18 = eax_1.b
uint32_t result = arg5
int32_t edi = arg6
void* var_14 = esi

if (arg7 == 0 && result == 4)
    goto label_57d841

uint32_t result_1 = *sub_5722c0(result, 0x3ea, esi, arg4)

if (result_1 != 0)
    uint32_t eax_3 = zx.d(result_1.w)
    
    if (eax_3 u>= 0x320)
        sub_591930()
    
    result = *(eax_3 * 0x64 + esi + 0x1aa4)
    goto label_57d76f

void var_830
int32_t var_428[0x100]
int32_t var_28

while (true)
    result = 0
label_57d76f:
    
    if (result_1 == 0)
        break
    
    char eax_6 = var_18
    
    if (result_1 == edi)
        eax_6 = 1
    
    var_18 = eax_6
    uint32_t eax_8 = sub_57d640(&var_830, result_1, esi, &var_830, arg5, edi, 0)
    __builtin_memcpy(&var_428, eax_8, 0x404)
    int32_t esi_2 = 0
    
    if (var_28 s> 0)
    label_57d7c3:
        uint32_t edi_1 = var_428[esi_2]
        
        if (sub_57c810(eax_8, arg4, var_14, edi_1, arg6, 0, 0xffffffff, arg8).b != 0)
            *(arg3 + (*(arg3 + 0x400) << 2)) = edi_1
            *(arg3 + 0x400) += 1
        
        if (esi_2 + 1 s< var_28)
            break
    
    result_1 = result
    
    if (result != 0)
        uint32_t esi_3 = zx.d(result.w)
        
        if (esi_3 u>= 0x320)
            sub_591930()
        
        edi = arg6
        esi = var_14
        result = *(esi_3 * 0x64 + esi + 0x1aa4)
        goto label_57d76f
    
    esi = var_14
    edi = arg6

if (var_18 == 0)
    result = arg5
label_57d841:
    
    if (edi != 0)
        result = sub_57d640(&var_830, edi, esi, &var_830, result, edi, 1)
        __builtin_memcpy(&var_428, result, 0x404)
        int32_t esi_5 = 0
        
        if (var_28 s> 0)
            do
                uint32_t edi_2 = var_428[esi_5]
                result = sub_57c810(result, arg4, var_14, edi_2, arg6, 0, 0xffffffff, 0)
                
                if (result.b != 0)
                    result = *(arg3 + 0x400)
                    *(arg3 + (result << 2)) = edi_2
                    *(arg3 + 0x400) += 1
                
                esi_5 += 1
            while (esi_5 s< var_28)

CookieCheckFunction(result)
return result
