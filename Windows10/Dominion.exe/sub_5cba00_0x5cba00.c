// 函数: sub_5cba00
// 地址: 0x5cba00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
int32_t var_c
uint32_t result
char const* const ecx

if (arg1 != 0)
    result = zx.d(arg1.w)
    
    if (result u< data_b809e4)
        result = data_b809e0 + result * 0x1c30
        
        if (*(result + 0x1c28) == arg1)
            return result
    
    char const* const var_8_1 = "DataArray<struct DomGfx>::DataArrayGet"
    var_c = 0x6d
    ecx = "DataArrayTryToGet(id) != NULL"
else
    char const* const var_8 = "DataArray<struct DomGfx>::DataArrayGet"
    var_c = 0x6c
    ecx = "id != DATAID_NULL"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_c, 
    "DataArray<struct DomGfx>::DataArrayGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
