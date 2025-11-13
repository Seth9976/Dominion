// 函数: sub_67a0e0
// 地址: 0x67a0e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_c = arg1
sub_67a000()
int32_t eax = DragAcceptFiles(data_147b084, 1)
data_c27c20 = arg1
data_c28c58 = 0
data_c28c60.w = 0
data_c28c62 = 0
data_c27c54 = 0x3e8
data_c27c48 = 0x3f000000
int32_t var_18_1
char* ecx
char const* const edx

if (arg1 != 0)
    if (arg1[1] == 0x22)
        sub_5af880(arg1)
        int32_t ecx_2
        ecx_2.b = 0
        data_c27c4c = 0xc2c80000
        data_c27c50 = 0xc2c80000
        data_c28c64 = 0xffffffff
        data_c28c68 = 0xffffffff
        return sub_665770(ecx_2)
    
    char const* const var_14_1 = "UI2DefGet"
    var_18_1 = 0xc17
    edx = &data_801800
    ecx = "ptr->assetType == ASSET_TYPE_UI2"
else
    char const* const var_14 = "UI2DefGet"
    var_18_1 = 0xc16
    edx = "UI2DefGet on null pointer"
    ecx = &data_874470

sub_63b870(eax, edx, ecx, "C:\x\ax2017\Engine\UI2.cpp", var_18_1, "UI2DefGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
