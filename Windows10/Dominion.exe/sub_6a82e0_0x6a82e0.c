// 函数: sub_6a82e0
// 地址: 0x6a82e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
int32_t var_c
uint32_t result
char const* const ecx

if (arg1 != 0)
    result = zx.d(arg1.w)
    
    if (result u< data_caf770)
        uint32_t ecx_1 = result * 3
        int32_t eax = data_caf76c
        result = eax + (ecx_1 << 3)
        
        if (*(eax + (ecx_1 << 3) + 0x14) == arg1)
            return result
    
    char const* const var_8_1 = "DataArray<struct Spine>::DataArrayGet"
    var_c = 0x6d
    ecx = "DataArrayTryToGet(id) != NULL"
else
    char const* const var_8 = "DataArray<struct Spine>::DataArrayGet"
    var_c = 0x6c
    ecx = "id != DATAID_NULL"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_c, 
    "DataArray<struct Spine>::DataArrayGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
