// 函数: sub_6db490
// 地址: 0x6db490
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
int32_t* result = data_147abe8
char const* const var_10
int32_t var_c
char const* const var_8
char* ecx

if (result != 0)
    result = *result
    
    if (arg1 != 0)
        uint32_t ecx_1 = zx.d(arg1.w)
        
        if (ecx_1 u< result[1])
            result = *result + ecx_1 * 0x6c
            
            if (result[0x1a] == arg1)
                return result
        
        var_8 = "DataArray<struct Structure>::DataArrayGet"
        var_c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        var_8 = "DataArray<struct Structure>::DataArrayGet"
        var_c = 0x6c
        ecx = "id != DATAID_NULL"
    
    var_10 = "C:\x\ax2017\Engine\DataArray.h"
else
    var_8 = "GetGameData"
    var_c = 0x45
    var_10 = "C:\x\ax2017\Engine\Game.h"
    ecx = "gpGameData"

sub_63b870(result, &data_801800, ecx, var_10, var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
