// 函数: sub_609650
// 地址: 0x609650
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
void* eax = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
void* edi = eax

for (int32_t* i = *(*(edi + 0x720c) + (((arg1 s>> 4 | arg1) & *(edi + 0x7210)) << 2)); i != 0; 
        i = i[2])
    if (arg1 == *i)
        eax = &i[1]
        
        if (eax != 0)
            return *eax
        
        break

void* ecx_3 = data_cc8d5c

if (ecx_3 == 0)
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(ecx_3 + 0x75d0) != 0)
    void* eax_3 = sub_4badc0(ecx_3 + 0x75b8, ecx_3 + 0x75d0)
    
    if (eax_3 != 0 && *(edi + 0x42cc) == *eax_3)
        return *(edi + 0x42c4)

return 0
