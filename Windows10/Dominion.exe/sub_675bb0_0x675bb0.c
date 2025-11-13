// 函数: sub_675bb0
// 地址: 0x675bb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_c28c58

if (eax == 0)
    *arg1 = data_7ff530
    return arg1

float var_18

if (eax != 1)
    *arg1 = *sub_64c550(sub_665600(data_c27c58) + 0x14, *(data_147abe8 + 0x2c), &var_18)
    return arg1

int32_t* ecx = data_c27c20
int32_t var_20
char* ecx_1
char const* const edx

if (ecx != 0)
    if (ecx[1] == 0x22)
        void* eax_2 = sub_5af880(ecx)
        var_18 = 0f
        int32_t var_14 = 0
        int32_t var_10 = *(eax_2 + 0x10)
        int32_t var_c = *(eax_2 + 0x14)
        *arg1 = var_18.o
        return arg1
    
    char const* const var_1c_2 = "UI2DefGet"
    var_20 = 0xc17
    edx = &data_801800
    ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"
else
    char const* const var_1c = "UI2DefGet"
    var_20 = 0xc16
    edx = "UI2DefGet on null pointer"
    ecx_1 = &data_874470

sub_63b870(eax, edx, ecx_1, "C:\x\ax2017\Engine\UI2.cpp", var_20, "UI2DefGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
