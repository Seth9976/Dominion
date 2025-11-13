// 函数: sub_519280
// 地址: 0x519280
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = sub_50e1c0()
int32_t* result_1 = result

if (result_1 == 0)
label_51930e:
    return result

void* eax = sub_571b30(result_1, 0x18)
result = *(eax + 0x9c) & 0x940
int32_t var_c
char const* const var_8
char* ecx_7

if (((*(eax + 0x98) & 0x7f000400) | result) != 0)
    var_8 = "Theme_PileChangesB_CopyCard"
    var_c = 0x20db
    ecx_7 = "!IsLandscape(what)"
else
    int32_t i = 0
    result = data_cca780 + 0x58c + (data_cca784 << 0xb)
    
    do
        if (*result == 0)
            *result = 0xdb8
            result[1] = result_1
            result[2] = 0xffffffff
            result[3] = 0
            result[4] = 0
            goto label_51930e
        
        i += 1
        result = &result[5]
    while (i s< 0x20)
    
    var_8 = "CampaignAddExtra"
    var_c = 0x242
    ecx_7 = "Halt"

sub_63b870(result, &data_801800, ecx_7, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
