// 函数: sub_6d1370
// 地址: 0x6d1370
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c
uint32_t result
char const* const ecx_1

if (arg1 != 0)
    result = zx.d(arg1.w)
    
    if (result u< data_cafe70)
        result = data_cafe6c + result * 0x4d0
        
        if (*(result + 0x4cc) == arg1)
            return result
    
    char const* const var_8_1 = "DataArray<struct FabState>::DataArrayGet"
    var_c = 0x6d
    ecx_1 = "DataArrayTryToGet(id) != NULL"
else
    char const* const var_8 = "DataArray<struct FabState>::DataArrayGet"
    var_c = 0x6c
    ecx_1 = "id != DATAID_NULL"

sub_63b870(result, &data_801800, ecx_1, "C:\x\ax2017\Engine\DataArray.h", var_c, 
    "DataArray<struct FabState>::DataArrayGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
