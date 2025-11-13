// 函数: sub_6990b0
// 地址: 0x6990b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1
int32_t edx

if (arg2[0x48] s<= *arg2)
    edx = *(arg3 + 0xb0)
    eax_1 = *(arg3 + 0xac)
else
    edx = arg2[0x4b]
    eax_1 = arg2[0x4c]

int32_t var_10 = eax_1
uint32_t result = arg4[1] * edx + *arg4
char const* const var_2c
int32_t var_28_1
char const* const var_24_1
char* ecx_1

if (result s>= 0x1e)
    var_24_1 = "UIStateSubstate"
    var_28_1 = 0x6d7
    var_2c = "C:\x\ax2017\Engine\UIDef.cpp"
    ecx_1 = "slotIdx < 30"
else if (result s>= 0)
    void* ebx_1 = &arg2[result]
    result = *(ebx_1 + 0xa4)
    
    if (result != 0)
        uint32_t* eax_4 = sub_6985c0(result)
        result = *eax_4
        uint32_t result_1 = result
        
        if (result == 0)
            result = *(arg3 + 0xc8)
        
        if (result != eax_4[1])
            sub_698a30(*(ebx_1 + 0xa4))
            
            if (result != 0)
                uint32_t eax_5 = sub_698f10(result, arg2, arg3, arg4, result)
                *(ebx_1 + 0xa4) = eax_5
                result = sub_6985c0(eax_5)
                *result = result_1
    else if (*(arg3 + 0xc8) != result)
        result = sub_698f10(result, arg2, arg3, arg4, result)
        *(ebx_1 + 0xa4) = result
    
    int32_t edx_3 = *(ebx_1 + 0xa4)
    
    if (edx_3 != 0)
        result = zx.d(edx_3.w)
        
        if (result u< data_caf264)
            result = data_caf260 + result * 0x438
            
            if (*(result + 0x434) == edx_3)
                return result
        
        var_24_1 = "DataArray<struct UIState>::DataArrayGet"
        var_28_1 = 0x6d
        ecx_1 = "DataArrayTryToGet(id) != NULL"
    else
        var_24_1 = "DataArray<struct UIState>::DataArrayGet"
        var_28_1 = 0x6c
        ecx_1 = "id != DATAID_NULL"
    
    var_2c = "C:\x\ax2017\Engine\DataArray.h"
else
    var_24_1 = "UIStateSubstate"
    var_28_1 = 0x6d8
    var_2c = "C:\x\ax2017\Engine\UIDef.cpp"
    ecx_1 = "slotIdx >= 0"

sub_63b870(result, &data_801800, ecx_1, var_2c, var_28_1, var_24_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
