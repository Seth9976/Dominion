// 函数: sub_698f10
// 地址: 0x698f10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = arg5

if (ecx == 0)
    ecx = *(arg3 + 0xc8)

uint32_t result_1 = sub_6987e0(ecx)
uint32_t result = result_1
int32_t var_14
char const* const ecx_1

if (result != 0)
    result_1 = zx.d(result.w)
    
    if (result_1 u< data_caf264)
        void* esi_2 = result_1 * 0x438 + data_caf260
        
        if (*(esi_2 + 0x434) == result)
            *(esi_2 + 0xc) = arg2
            int32_t ecx_2 = *arg4
            *(esi_2 + 0x14) = arg4[1]
            *(esi_2 + 0x10) = ecx_2
            return result
    
    char const* const var_10_1 = "DataArray<struct UIState>::DataArrayGet"
    var_14 = 0x6d
    ecx_1 = "DataArrayTryToGet(id) != NULL"
else
    char const* const var_10 = "DataArray<struct UIState>::DataArrayGet"
    var_14 = 0x6c
    ecx_1 = "id != DATAID_NULL"

sub_63b870(result_1, &data_801800, ecx_1, "C:\x\ax2017\Engine\DataArray.h", var_14, 
    "DataArray<struct UIState>::DataArrayGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
