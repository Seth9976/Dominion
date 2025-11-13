// 函数: sub_559420
// 地址: 0x559420
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* eax = sub_573400()
void* var_8_1 = eax
int32_t result = 0x22
int32_t esi = 0x220
void* eax_1

while (true)
    int32_t ebx_1 = *(eax + 4)
    
    if (result s>= 0x48)
        sub_591930()
    
    int32_t ebx_2 = *(esi + ebx_1 + 0x1524)
    eax_1 = sub_573400()
    
    if (ebx_2 != 0)
        eax_1 = sub_5754f0(eax_1, ebx_2, *(eax_1 + 4), 0, 0x800)
        
        if (eax_1.b != 0)
            return result
    
    esi += 0x10
    result += 1
    
    if (esi s>= 0x260)
        break
    
    eax = var_8_1

sub_63b870(eax_1, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCards_RisingSun.cpp", 
    0x3a, "GetLandscapePileByType")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
