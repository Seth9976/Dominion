// 函数: sub_5ac120
// 地址: 0x5ac120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
char const* const var_10
int32_t var_c
char const* const var_8
uint32_t eax
char* ecx

if (arg1 != 0)
    eax = zx.d(arg1.w)
    
    if (eax u>= data_b4a5c4)
    label_5ac175:
        var_8 = "DataArray<struct CampaignMapTask>::DataArrayGet"
        var_c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
        var_10 = "C:\x\ax2017\Engine\DataArray.h"
    else
        eax = data_b4a5c0 + eax * 0x510c
        
        if (*(eax + 0x5108) != arg1)
            goto label_5ac175
        
        if (*eax == 2)
            return eax + 4
        
        var_8 = "DomMapGet"
        var_c = 0x1272
        var_10 = "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp"
        ecx = "task.taskState == DOMMAPTASK_COMPLETE"
else
    var_8 = "DataArray<struct CampaignMapTask>::DataArrayGet"
    var_c = 0x6c
    ecx = "id != DATAID_NULL"
    var_10 = "C:\x\ax2017\Engine\DataArray.h"

sub_63b870(eax, &data_801800, ecx, var_10, var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
