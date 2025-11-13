// 函数: sub_4c7cc0
// 地址: 0x4c7cc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* esi = data_cc8d5c

if (esi == 0)
    int32_t eax
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* eax_1 = sub_4bb050(esi + 0x507c, arg1)
int32_t* eax_2 = sub_4bb050(esi + 0x507c, arg2)
int32_t ebx
ebx.b = sub_4c7c50(eax_1)
uint32_t eax_4 = sub_4c7c50(eax_2)

if (ebx.b != 0)
    if (eax_4.b != 0)
        goto label_4c7d20
    
    eax_4.b = 1
    return eax_4

if (eax_4.b == 0)
label_4c7d20:
    int32_t esi_2 = eax_1[2]
    int32_t ecx_5 = eax_1[3]
    int32_t edx_1 = eax_2[2]
    eax_4 = eax_2[3]
    bool cond:0_1
    bool cond:1_1
    
    if (esi_2 != edx_1)
        cond:0_1 = ecx_5 u< eax_4
        cond:1_1 = ecx_5 u> eax_4
    else
        cond:0_1 = ecx_5 u< eax_4
        cond:1_1 = ecx_5 u> eax_4
        
        if (ecx_5 == eax_4)
            int32_t eax_6
            eax_6.b = arg1 s< arg2
            return eax_6
    
    if (not(cond:1_1) && (cond:0_1 || esi_2 u< edx_1))
        eax_4.b = 1
        return eax_4

eax_4.b = 0
return eax_4
