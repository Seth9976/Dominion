// 函数: sub_566240
// 地址: 0x566240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
memset(arg4, 0, 0xc84)
int32_t edi = 0

if (arg3 s> 0)
    do
        void* eax_3 = sub_573400()
        void* eax_4 = sub_5887c0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 0)
        
        if (eax_4 == 0)
            break
        
        void* var_c98 = eax_4
        int32_t var_18_1 = 1
        sub_579560(eax_2, &var_c98, *(eax_2 + 4), 0x3eb, *(eax_2 + 0x28), *(eax_2 + 0x2c), 
            *(eax_2 + 0x30), 0x3ee, arg5, 0)
        
        if (*(arg4 + 0xc80) s>= 0x320)
            sub_591930()
        
        edi += 1
        *(arg4 + (*(arg4 + 0xc80) << 2)) = eax_4
        *(arg4 + 0xc80) += 1
    while (edi s< arg3)

CookieCheckFunction(arg4)
return arg4
