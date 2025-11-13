// 函数: sub_5cd3e0
// 地址: 0x5cd3e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_3 = sub_5cc5e0(sub_5cd340(arg1))
int32_t ecx_1 = *(eax_3 + 0x4084)
void* result = eax_3 + 0x4084
char const* const var_e8_1
int32_t var_e4
char const* const var_e0
char* ecx_4

if (ecx_1 != 0)
    void* edx_1 = data_b809e0
    
    while (true)
        if (ecx_1 == *(arg1 + 0x1c28))
            int32_t edx_2 = *(arg1 + 0x1b94)
            *result = edx_2
            *(arg1 + 0x1b94) = 0
            
            if (edx_2 == 0)
                goto label_5cd590
            
            while (true)
                result = zx.d(edx_2.w)
                
                if (result u>= data_b809e4)
                    break
                
                void* edi_3 = result * 0x1c30 + data_b809e0
                
                if (*(edi_3 + 0x1c28) != edx_2)
                    break
                
                *(edi_3 + 0x1b98) -= 1
                int32_t esi_1 = *(edi_3 + 0x1b98)
                void var_b0
                memset(&var_b0, 0, 0x40)
                int32_t var_c8_1 = 0
                int32_t var_c4_1 = sub_5cd340(edi_3)
                int32_t var_c0_1 = esi_1
                int32_t var_b4_1 = 0
                void* var_70_1 = edi_3
                int128_t var_6c = 0x1e.o
                int128_t var_5c_1 = 0.o
                int128_t var_ac
                int128_t var_4c_1 = var_ac
                int128_t var_9c
                int128_t var_3c_1 = var_9c
                int128_t var_8c
                int128_t var_2c_1 = var_8c
                int128_t var_7c
                int128_t var_1c_1 = var_7c
                result = sub_5cb630(edi_3 + 0x258, &var_6c)
                edx_2 = *(edi_3 + 0x1b94)
                
                if (edx_2 == 0)
                    goto label_5cd590
        else
            result = *result
            
            if (result == 0)
                var_e0 = "DataArray<struct DomGfx>::DataArrayGet"
                var_e4 = 0x6c
                var_e8_1 = "C:\x\ax2017\Engine\DataArray.h"
                ecx_4 = "id != DATAID_NULL"
                goto label_5cd5b2
            
            uint32_t ecx_2 = zx.d(result.w)
            
            if (ecx_2 u< data_b809e4)
                int32_t ecx_3 = ecx_2 * 0x1c30
                
                if (*(ecx_3 + edx_1 + 0x1c28) == result)
                    result = edx_1 + 0x1b94 + ecx_3
                    ecx_1 = *result
                    
                    if (ecx_1 == 0)
                        break
                    
                    continue
        
        var_e0 = "DataArray<struct DomGfx>::DataArrayGet"
        var_e4 = 0x6d
        var_e8_1 = "C:\x\ax2017\Engine\DataArray.h"
        ecx_4 = "DataArrayTryToGet(id) != NULL"
        goto label_5cd5b2

if (*(arg1 + 0x5c) == 0x3e9)
label_5cd590:
    CookieCheckFunction(result)
    return result

var_e0 = "PlayerAreaRemove"
var_e4 = 0xccb
var_e8_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
ecx_4 = "Halt"
label_5cd5b2:
sub_63b870(result, &data_801800, ecx_4, var_e8_1, var_e4, var_e0)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
