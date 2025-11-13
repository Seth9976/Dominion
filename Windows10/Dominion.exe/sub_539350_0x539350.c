// 函数: sub_539350
// 地址: 0x539350
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()

if (*eax != 5)
    sub_63b870(eax, &data_801800, "c.contextType == CONTEXT_ACHIEVEMENT", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1cb1, "DomAchievementDataGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* esi = *(eax + 0x18)
void* eax_1 = sub_573400()
int32_t ecx_1 = *(eax_1 + 0x50)
int32_t result = *(eax_1 + 0x54)

if (ecx_1 != *(esi + 4) || result != *(esi + 8))
    *(esi + 0xc) = 0
    *(esi + 0x10) = 0
    *(esi + 4) = ecx_1
    *(esi + 8) = result

*(esi + 0xc) += 1
result.b = *(esi + 0xc) s>= 2
return result
