// 函数: sub_69aa20
// 地址: 0x69aa20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c
uint32_t eax
char const* const ecx

if (arg1 != 0)
    eax = zx.d(arg1.w)
    
    if (eax u< data_caf264)
        void* ecx_2 = eax * 0x438 + data_caf260
        
        if (*(ecx_2 + 0x434) == arg1)
            uint32_t edx
            uint32_t result = sub_698630(eax, edx, ecx_2, &data_801800)
            *result += 1
            return result
    
    char const* const var_8_1 = "DataArray<struct UIState>::DataArrayGet"
    var_c = 0x6d
    ecx = "DataArrayTryToGet(id) != NULL"
else
    char const* const var_8 = "DataArray<struct UIState>::DataArrayGet"
    var_c = 0x6c
    ecx = "id != DATAID_NULL"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_c, 
    "DataArray<struct UIState>::DataArrayGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
