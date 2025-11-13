// 函数: sub_7486f0
// 地址: 0x7486f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_151345c == 0)
    return 

int32_t* ecx_1 = data_1512450
int32_t eax

if (ecx_1[1] != 0x1e)
    sub_63b870(eax, &data_801800, "ptr->assetType == ASSET_TYPE_UI", 
        "C:\x\ax2017\Engine\UIDef.cpp", 0x127, "UIDefGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t esi_1 = *(sub_5af880(ecx_1) + 8)
eax = sub_748410()
int32_t ecx_3

if (eax != esi_1 - 1)
    ecx_3 = eax + 1
label_748726:
    sub_74ae80(ecx_3)
    char* ecx_4
    ecx_4.b = 1
    sub_744ce0(ecx_4)
    sub_6f6e30(data_1512450)
    return sub_74ac70() __tailcall

if (data_151345c != 0)
    ecx_3 = 0xffffffff
    goto label_748726
