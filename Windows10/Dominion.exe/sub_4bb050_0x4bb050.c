// 函数: sub_4bb050
// 地址: 0x4bb050
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = arg1
int32_t var_c
char const* const ecx

if (arg2 != 0)
    uint32_t ecx_1 = zx.d(arg2.w)
    
    if (ecx_1 u< result[1])
        result = *result + ecx_1 * 0x1330
        
        if (result[0x4ca] == arg2)
            return result
    
    char const* const var_8_1 = "DataArray<struct GameSave>::DataArrayGet"
    var_c = 0x6d
    ecx = "DataArrayTryToGet(id) != NULL"
else
    char const* const var_8 = "DataArray<struct GameSave>::DataArrayGet"
    var_c = 0x6c
    ecx = "id != DATAID_NULL"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_c, 
    "DataArray<struct GameSave>::DataArrayGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
