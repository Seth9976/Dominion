// 函数: sub_69be60
// 地址: 0x69be60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_10
char const* const ecx

if (arg3 != 0)
    arg1 = zx.d(arg3.w)
    
    if (arg1 u< data_caf264)
        void* ecx_2 = arg1 * 0x438 + data_caf260
        
        if (*(ecx_2 + 0x434) == arg3)
            uint32_t result = sub_698630(arg1, arg2, ecx_2, &data_801800)
            *(result + 0x13c) = *result + 1
            *(result + 0x140) = arg4
            return result
    
    char const* const var_c_1 = "DataArray<struct UIState>::DataArrayGet"
    var_10 = 0x6d
    ecx = "DataArrayTryToGet(id) != NULL"
else
    char const* const var_c = "DataArray<struct UIState>::DataArrayGet"
    var_10 = 0x6c
    ecx = "id != DATAID_NULL"

sub_63b870(arg1, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_10, 
    "DataArray<struct UIState>::DataArrayGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
