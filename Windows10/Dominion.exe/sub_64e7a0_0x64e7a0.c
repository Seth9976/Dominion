// 函数: sub_64e7a0
// 地址: 0x64e7a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
int32_t var_c
uint32_t result
char const* const ecx

if (arg1 != 0)
    result = zx.d(arg1.w)
    
    if (result u< data_c23bac)
        result = data_c23ba8 + result * 0x18d0
        
        if (*(result + 0x18c8) == arg1)
            return result
    
    char const* const var_8_1 = "DataArray<struct UI2>::DataArrayGet"
    var_c = 0x6d
    ecx = "DataArrayTryToGet(id) != NULL"
else
    char const* const var_8 = "DataArray<struct UI2>::DataArrayGet"
    var_c = 0x6c
    ecx = "id != DATAID_NULL"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_c, 
    "DataArray<struct UI2>::DataArrayGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
