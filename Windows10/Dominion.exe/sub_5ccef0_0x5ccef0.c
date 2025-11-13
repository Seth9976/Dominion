// 函数: sub_5ccef0
// 地址: 0x5ccef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
int32_t result = data_b7fcec
int32_t* edx = &data_b7fcec
char const* const var_20
int32_t var_1c
char const* const var_18
char* ecx_2

if (result == 0)
label_5ccfd5:
    var_18 = "BoardAreaRemove"
    var_1c = 0xc2d
    ecx_2 = "Halt"
label_5ccfe4:
    var_20 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else
    void* esi_1 = data_b809e0
    
    while (true)
        if (result == *(arg1 + 0x1c28))
            result = *(arg1 + 0x1b94)
            *edx = result
            *(arg1 + 0x1b94) = 0
            
            if (result == 0)
                return result
            
            uint32_t ecx_4 = zx.d(result.w)
            
            if (ecx_4 u< data_b809e4)
                int32_t edx_2 = data_b809e0
                int32_t ecx_5 = ecx_4 * 0x1c30
                
                if (*(ecx_5 + edx_2 + 0x1c28) == result)
                    *(ecx_5 + edx_2 + 0x1b98) -= 1
                    ecx_2 = "where != CW_NONE"
                    var_18 = "DomLocSet"
                    var_1c = 0xa6d
                    goto label_5ccfe4
        else
            result = *edx
            
            if (result == 0)
                var_18 = "DataArray<struct DomGfx>::DataArrayGet"
                var_1c = 0x6c
                var_20 = "C:\x\ax2017\Engine\DataArray.h"
                ecx_2 = "id != DATAID_NULL"
                break
            
            uint32_t ecx = zx.d(result.w)
            
            if (ecx u< data_b809e4)
                int32_t ecx_1 = ecx * 0x1c30
                
                if (*(ecx_1 + esi_1 + 0x1c28) == result)
                    edx = esi_1 + 0x1b94 + ecx_1
                    result = *edx
                    
                    if (result == 0)
                        goto label_5ccfd5
                    
                    continue
        
        var_18 = "DataArray<struct DomGfx>::DataArrayGet"
        var_1c = 0x6d
        var_20 = "C:\x\ax2017\Engine\DataArray.h"
        ecx_2 = "DataArrayTryToGet(id) != NULL"
        break

sub_63b870(result, &data_801800, ecx_2, var_20, var_1c, var_18)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
