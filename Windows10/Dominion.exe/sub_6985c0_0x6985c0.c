// 函数: sub_6985c0
// 地址: 0x6985c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
int32_t var_c
uint32_t result
char const* const ecx

if (arg1 != 0)
    result = zx.d(arg1.w)
    
    if (result u< data_caf264)
        result = data_caf260 + result * 0x438
        
        if (*(result + 0x434) == arg1)
            return result
    
    char const* const var_8_1 = "DataArray<struct UIState>::DataArrayGet"
    var_c = 0x6d
    ecx = "DataArrayTryToGet(id) != NULL"
else
    char const* const var_8 = "DataArray<struct UIState>::DataArrayGet"
    var_c = 0x6c
    ecx = "id != DATAID_NULL"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_c, 
    "DataArray<struct UIState>::DataArrayGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
