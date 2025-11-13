// 函数: sub_5278d0
// 地址: 0x5278d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = __chkstk(0x25a0)
__security_cookie
void var_8
uint32_t eax_3 = sub_566240(&var_8, edx, 2, &var_8, &data_7bf980)
void arg_c80
__builtin_memcpy(&arg_c80, eax_3, 0xc84)
void arg_1908
int32_t ecx = __builtin_memcpy(&arg_1908, eax_3, 0xc84)

if (arg2 != 0)
    void* eax_4
    eax_4, ecx = sub_573400()
    int32_t eax_6 = *(*(eax_4 + 4) + 0x1504)
    
    if (eax_6 != 3 && eax_6 != 5 && eax_6 != 4 && eax_6 != 6)
        ecx.b = eax_6 == 2
        ecx =
            sub_61b1b0(eax_6, 7, ecx.b, 0xffffffff, 0, 1, nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)

int32_t var_14 = ecx
uint32_t eax_8 = sub_56ab80(sub_561940(&arg_1908), 0x3ee, &arg_1908, 0x12, 7)

if (eax_8 != 0)
    int32_t ecx_3 = 0
    
    if (arg1 s> 0)
        do
            if (*(&arg_c80 + (ecx_3 << 2)) == eax_8)
                void* eax_10 = arg1 - 1
                arg1 = eax_10
                *(&arg_c80 + (ecx_3 << 2)) = *(&arg_c80 + (eax_10 << 2))
                break
            
            ecx_3 += 1
        while (ecx_3 s< arg1)

void* eax_12 = sub_573400()
*(eax_12 + 0xc)
*(eax_12 + 4)
uint32_t result = sub_582eb0(&arg_c80, arg1, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
CookieCheckFunction(result)
return result
