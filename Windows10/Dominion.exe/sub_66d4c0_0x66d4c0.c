// 函数: sub_66d4c0
// 地址: 0x66d4c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
int32_t* edx
ecx, edx = __chkstk(0x100c)
__security_cookie
void* var_18 = ecx
int32_t __saved_ebp
int32_t eax_2
int32_t ecx_1
eax_2, ecx_1 = sub_66d420(ecx, &__saved_ebp)
int32_t esi = 0

if (eax_2 s> 0)
    do
        sub_66d010((&__saved_ebp)[esi], edx)
        esi += 1
    while (esi s< eax_2)

ecx_1.b = 1
uint32_t result = sub_665770(ecx_1)
CookieCheckFunction(result)
return result
