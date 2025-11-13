// 函数: sub_4c44f0
// 地址: 0x4c44f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_8db664 == 0x29)
    return sub_4d46e0(5, 0)

int32_t* result = sub_4b9480()
int32_t* result_1 = result
void* edi = nullptr
void var_c
int32_t var_8

if ((result_1[8].b & 4) == 0)
    int32_t i = 0
    var_8 = *result_1
    
    do
        result = sub_61dad0()
        
        if (*(result + i + 8) == var_8)
            goto label_4c4575
        
        i += 0xc
    while (i s< 0x78)
    
    if ((result_1[8] & 0x100) == 0)
        goto label_4c45b2
    
label_4c4575:
    void* esi_2 = data_cc8d5c
    
    if (esi_2 != 0)
        int32_t esi_3 = *(esi_2 + 0x7590)
        int32_t* eax_2 = sub_4b9480()
        result = sub_5f1ae0(eax_2, esi_3, eax_2, 0, &var_8, &var_c)
        
        if (result == 1)
            edi = result + 2
        
        if (result != 1 || (result_1[8].b & result.b) != 0)
            edi = 4
        
        goto label_4c45b2
else
    void* esi = data_cc8d5c
    
    if (esi != 0)
        int32_t esi_1 = *(esi + 0x7590)
        int32_t* eax = sub_4b9480()
        result = sub_5f1ae0(eax, esi_1, eax, 0, &var_c, &var_8)
        int32_t edi_2 = neg.d(result - 1)
        edi = neg.d(sbb.d(edi_2, edi_2, result != 1)) + 1
    label_4c45b2:
        data_cf649c = edi
        data_8db660 = 0x29
        return result
sub_63b870(result, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
