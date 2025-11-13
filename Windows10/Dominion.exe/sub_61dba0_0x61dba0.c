// 函数: sub_61dba0
// 地址: 0x61dba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_1723ff4 != 1)
    int32_t eax
    eax.b = 0
    return eax

void* eax_1 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t i = data_1723ff8
int32_t* eax_3 = *(*(eax_1 + 0x7304) + (((i s>> 4 | i) & *(eax_1 + 0x7308)) << 2))
void* eax_4

if (eax_3 == 0)
label_61dbf3:
    eax_4 = 0x14
else
    while (i != *eax_3)
        eax_3 = eax_3[0x26]
        
        if (eax_3 == 0)
            goto label_61dbf3
    
    eax_4 = &eax_3[6]

if (arg1 == eax_4)
    *arg2 = i
    eax_4.b = 1
    return eax_4

sub_63b870(eax_4, &data_801800, "&status == &weeklyStatus->status", 
    "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xdf01, "IsWeeklyCampaign")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
