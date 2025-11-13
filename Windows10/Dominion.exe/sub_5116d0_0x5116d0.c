// 函数: sub_5116d0
// 地址: 0x5116d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t eax_1 = sub_50af00(sub_516f30(0x9c4), &var_8)
int32_t i = sub_516f30(sub_50af60(eax_1, var_8, &data_cc8de0, eax_1))
int32_t i_1 = i
int32_t var_10
char const* const var_c_1
char* ecx_2

if (*(i_1 + 8) == 0x9c4)
    i = 0
    int32_t* ecx_3 = i_1 + 0xc
    
    do
        if (*ecx_3 == 1)
            return (*(i * 0x26c + i_1 + 0x10))()
        
        i += 1
        ecx_3 = &ecx_3[0x9b]
    while (i s< 4)
    
    var_c_1 = "CampaignPieceDefGetFn"
    var_10 = 0x30a
    ecx_2 = "Halt"
else
    var_c_1 = "CampaignDeferBell::<lambda_3e79b17f43d595cee57bee556f2bf654>::operator ()"
    var_10 = 0x128c
    ecx_2 = "def.type == CBELL"

sub_63b870(i, &data_801800, ecx_2, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", var_10, 
    var_c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
