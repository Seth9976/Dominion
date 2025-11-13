// 函数: sub_66d530
// 地址: 0x66d530
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
int32_t* edx
ecx, edx = __chkstk(0x100c)
__security_cookie
int32_t* var_8 = arg1
void* var_18 = ecx
int32_t __saved_ebp
int32_t eax_3
int32_t ecx_1
eax_3, ecx_1 = sub_66d420(ecx, &__saved_ebp)
int32_t edi = eax_3
int32_t esi = 0

if (edi s> 0)
    do
        eax_3, ecx_1 = sub_66d1a0(eax_3, edx, (&__saved_ebp)[esi], var_8)
        esi += 1
    while (esi s< edi)

ecx_1.b = 1
uint32_t result = sub_665770(ecx_1)
CookieCheckFunction(result)
return result
