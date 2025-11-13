// 函数: sub_52f710
// 地址: 0x52f710
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x190c)
__security_cookie
int32_t __saved_ebp
int32_t arg_c7c[0x321]
uint32_t eax_2 = sub_56d830(&arg_c7c, &__saved_ebp)
int32_t edi = 0
uint32_t var_8 = eax_2
int32_t esi = 0

if (eax_2 s> 0)
    do
        if ((&__saved_ebp)[esi] s>= 3)
            int32_t ebx_1 = arg_c7c[esi]
            void* eax_3 = sub_573400()
            
            if (ebx_1 == 0)
                eax_2 = var_8
            else
                bool cond:0_1 = sub_5754f0(eax_3, ebx_1, *(eax_3 + 4), 4, 0) == 0
                eax_2 = var_8
                
                if (not(cond:0_1))
                    edi += 1
        
        esi += 1
    while (esi s< eax_2)

int32_t result = edi << 2
CookieCheckFunction(result)
return result
