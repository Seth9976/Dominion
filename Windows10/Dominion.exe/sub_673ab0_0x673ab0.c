// 函数: sub_673ab0
// 地址: 0x673ab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 s>= arg1[2])
    int32_t __saved_ebp
    sub_63b870(__security_cookie ^ &__saved_ebp, &data_801800, 
        "attribTreeItemIndex < tree.numItems", "C:\x\ax2017\Engine\UI2.cpp", 0x4b4e, 
        "NumTotalChildren")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t esi = *arg1
uint32_t result = 0
int32_t var_10c = *(esi + arg2 * 0x18 + 0x10)
void var_108
memset(&var_108, 0, 0xfc)
int32_t eax_4 = 0
void* edx = esi + (arg2 + 1) * 0x18

while (true)
    while ((&var_10c)[eax_4] == 0)
        int32_t temp0_1 = eax_4
        eax_4 -= 1
        
        if (temp0_1 - 1 s< 0)
            CookieCheckFunction(result)
            return result
    
    int32_t ecx_2 = *(edx + 0x10)
    result += 1
    (&var_10c)[eax_4] -= 1
    edx += 0x18
    eax_4 += 1
    (&var_10c)[eax_4] = ecx_2
