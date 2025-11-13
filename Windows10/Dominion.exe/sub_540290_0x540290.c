// 函数: sub_540290
// 地址: 0x540290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x191c)
__security_cookie
uint32_t esi = zx.d(arg1.w)
int32_t edi = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t eax_3 = esi * 0x64
int32_t var_18 = 0
int32_t __saved_ebp
int32_t arg_c84[0x320]
__builtin_memcpy(&arg_c84, sub_5685f0(eax_3, *(eax_3 + edi + 0x1a4c), 0x462, &__saved_ebp, 0), 
    0xc84)
int32_t ecx_1 = arg2
uint32_t result = 0
bool cond:0 = ecx_1 s> 0

if (ecx_1 s> 0)
    do
        if (arg_c84[result] == arg1)
            arg_c84[result] = arg_c84[ecx_1 - 1]
            ecx_1 -= 1
            break
        
        result += 1
    while (result s< ecx_1)
    
    cond:0 = ecx_1 s> 0

result.b = cond:0
CookieCheckFunction(result)
return result
