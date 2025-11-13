// 函数: sub_502310
// 地址: 0x502310
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x190c)
__security_cookie
int32_t __saved_ebp
void arg_c7c
uint32_t eax_2 = sub_56d830(&__saved_ebp, &arg_c7c)
uint32_t result = 0
uint32_t var_8 = eax_2
int32_t esi = 0

if (eax_2 s> 0)
    do
        int32_t ebx_1 = (&__saved_ebp)[esi]
        void* eax_3 = sub_573400()
        
        if (ebx_1 != 0)
            eax_3 = sub_5754f0(eax_3, ebx_1, *(eax_3 + 4), 8, 0)
        else
            eax_3.b = 0
        
        uint32_t result_1 = result + 1
        
        if (eax_3.b == 0)
            result_1 = result
        
        esi += 1
        result = result_1
    while (esi s< var_8)

CookieCheckFunction(result)
return result
