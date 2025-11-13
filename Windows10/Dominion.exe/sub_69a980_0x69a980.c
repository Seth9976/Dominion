// 函数: sub_69a980
// 地址: 0x69a980
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
int32_t var_14
char const* const ecx

if (arg3 != 0)
    arg1 = zx.d(arg3.w)
    
    if (arg1 u< data_caf264)
        void* ecx_2 = arg1 * 0x438 + data_caf260
        
        if (*(ecx_2 + 0x434) == arg3)
            uint32_t eax = sub_698630(arg1, arg2, ecx_2, &data_801800)
            *(eax + 0x64) = *eax + 1
            char** result = sub_63d8d0(eax + 0x68, arg4)
            *(eax + 0x151) = 1
            return result
    
    char const* const var_10_2 = "DataArray<struct UIState>::DataArrayGet"
    var_14 = 0x6d
    ecx = "DataArrayTryToGet(id) != NULL"
else
    char const* const var_10 = "DataArray<struct UIState>::DataArrayGet"
    var_14 = 0x6c
    ecx = "id != DATAID_NULL"

sub_63b870(arg1, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_14, 
    "DataArray<struct UIState>::DataArrayGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
