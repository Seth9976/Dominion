// 函数: sub_61bc40
// 地址: 0x61bc40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg3
void* eax = arg5

if (eax == 0)
    eax = sub_5cc410(eax, *(arg3 + 0xa0), *(arg3 + 0x1be0), *(arg3 + 0x1be8), *(arg3 + 0x1bec))
    void* ecx_1 = eax
    
    if (ecx_1 != 0)
        int32_t var_1c_2 = 1
        int32_t var_20_2 = 0xb
        int32_t var_24_1 = 0
        int32_t var_28 = 0
        eax = arg3 + 0x1bf0
        return sub_5f2d80(eax, *(arg3 + 0x98), *(arg3 + 0xa0), ecx_1, eax, 0, 0, 0xb, 1)
else if (eax != 1)
label_61bd35:
    eax = sub_5cc410(eax, *(arg3 + 0xa0), arg2, *(arg3 + 0xc8), *(arg3 + 0xcc))
    
    if (eax != 0)
        int32_t var_1c_5 = 1
        int32_t var_20_6 = 0xb
        int32_t var_24_3 = 0
        int32_t var_28_1 = 0
        return sub_5f2d80(eax, *(arg3 + 0x98), *(arg3 + 0xa0), eax, arg4, 0, 0, 0xb, 1)
else
    eax = sub_5cc410(eax, *(arg3 + 0xa0), arg2, *(arg3 + 0xc8), *(arg3 + 0xcc))
    
    if (eax != 0)
        int32_t i = *(eax + 0x70)
        
        while (i != 0)
            eax = sub_5cba00(i)
            i = *(eax + 0x1b94)
            
            if (eax != arg3)
                if (eax != 0)
                    void* eax_1 = sub_5ce6d0(eax, *(arg3 + 0x1be0), *(eax + 0xa0), *(eax + 0xc8), 
                        *(eax + 0xcc), 0)
                    eax = sub_5f2d80(eax_1, *(eax + 0x98), *(eax + 0xa0), eax_1, &data_7feed4, 0, 
                        0, 0xb, 1)
                
                break
        
        goto label_61bd35

sub_63b870(eax, &data_801800, "pPile", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x9b0, 
    "DomPileGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
