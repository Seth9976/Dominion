// 函数: sub_4c43f0
// 地址: 0x4c43f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = sub_4b9480()
void* esi = data_cc8d5c
int32_t* edi = eax
int32_t i = 0

if (edi[0x46a] s> 0)
    void* ecx_1 = &edi[0x1a]
    
    do
        if (esi == 0)
            goto label_4c44cb
        
        eax = *(ecx_1 - 4)
        
        if (eax == *(esi + 0x7590))
            *ecx_1 = 0x3e9
        
        i += 1
        ecx_1 += 0x22c
    while (i s< edi[0x46a])

if (esi == 0)
label_4c44cb:
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(esi + 0x5068) == 2)
    return sub_4b8f10(*(esi + 0x506c))

sub_618820(5, *(esi + 0x7590))
sub_4c3a40()
int32_t esi_1 = *edi

if (edi[7] - 0x64 u> 0x19)
    sub_63b5f0("==save game==")
    
    if (sub_4da3a0(edi, esi_1) != 0)
        TPI1::QueryTiForCVRecord(edi)

data_cc8dc8
return sub_4d8ad0(esi_1)
