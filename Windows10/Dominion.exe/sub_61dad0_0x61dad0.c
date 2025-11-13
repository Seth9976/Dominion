// 函数: sub_61dad0
// 地址: 0x61dad0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_7 = data_1723ff4

if (eax_7 == 0)
    return sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x353c

int32_t* i = eax_7 - 1
int32_t var_c
char const* const ecx

if (eax_7 == 1)
    void* eax_1 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    int32_t edx_1 = data_1723ff8
    
    for (i = *(*(eax_1 + 0x7304) + (((edx_1 s>> 4 | edx_1) & *(eax_1 + 0x7308)) << 2)); i != 0; 
            i = i[0x26])
        if (edx_1 == *i)
            if (i == 0xfffffffc)
                break
            
            if ((i[7].b & 4) != 0)
                sub_63b5f0("using local status")
            
            return &i[6]
    
    char const* const var_8_1 = "CampaignGetStatus"
    var_c = 0xdee9
    ecx = "weeklyStatus"
else
    char const* const var_8 = "CampaignGetStatus"
    var_c = 0xdef3
    ecx = "Halt"

sub_63b870(i, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_c, 
    "CampaignGetStatus")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
