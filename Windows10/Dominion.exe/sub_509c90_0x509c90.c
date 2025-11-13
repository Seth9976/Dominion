// 函数: sub_509c90
// 地址: 0x509c90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()

if (*eax != 5)
    sub_63b870(eax, &data_801800, "c.contextType == CONTEXT_ACHIEVEMENT", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1cb1, "DomAchievementDataGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t edi = 0
uint32_t ebx
ebx.b = 0
int32_t* var_c = *(eax + 0x18) + 4

if (arg2 s> 0)
    do
        uint32_t esi_2 = zx.d((*(arg1 + (edi << 2))).w)
        int32_t eax_4 = *(sub_573400() + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        if (*(esi_2 * 0x64 + eax_4 + 0x1a4c) == 0x106)
            ebx = zx.d(ebx.b)
            *var_c += 1
            
            if (*var_c == 3)
                ebx = 1
        
        edi += 1
    while (edi s< arg2)

int32_t* result
result.b = ebx.b
return result
