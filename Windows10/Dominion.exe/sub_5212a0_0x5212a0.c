// 函数: sub_5212a0
// 地址: 0x5212a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t edx = __chkstk(0x1924)
__security_cookie
void arg_4
void* ebx = &arg_4
int32_t arg_c8c[0x323]
__builtin_memcpy(&arg_4, sub_566240(&arg_c8c, edx, 4, &arg_c8c, &data_7bf970), 0xc84)
int32_t edi = 0
void* eax_5 = &arg_4 + (arg1 << 2)

if (&arg_4 != eax_5)
    do
        uint32_t esi_2 = zx.d((*ebx).w)
        var_4 = *(sub_573400() + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        int32_t i = *(esi_2 * 0x64 + var_4 + 0x1a4c)
        int32_t eax_9 = 0
        
        if (edi s<= 0)
        label_521342:
            arg_c8c[edi] = i
            edi += 1
        else
            while (arg_c8c[eax_9] != i)
                eax_9 += 1
                
                if (eax_9 s>= edi)
                    goto label_521342
        
        ebx += 4
    while (ebx != eax_5)

int32_t eax_12 = *(*(sub_573400() + 4) + 0x1504)

if (eax_12 != 3 && eax_12 != 5 && eax_12 != 4 && eax_12 != 6)
    void* var_34
    __builtin_memset(&var_34, 0, 0x20)
    void* var_30
    int128_t* var_2c
    int32_t var_28
    int32_t var_24
    int32_t var_20
    int32_t var_1c_1
    int32_t var_18_1
    sub_61b1b0(eax_12, 7, eax_12 == 2, 0xffffffff, 0, 1, var_34, var_30, var_2c, var_28, var_24, 
        var_20, var_1c_1, var_18_1)

void* eax_13 = sub_573400()
*(eax_13 + 0xc)
*(eax_13 + 4)
void* result =
    sub_561af0(sub_582eb0(&arg_4, arg1, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr), 0, edi, 0)
CookieCheckFunction(result)
return result
