// 函数: sub_5cd880
// 地址: 0x5cd880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = *(arg2 + 0x74)
void* esi = arg2 + 0x74
char const* const var_f0_1
int32_t var_ec_1
char const* const var_e8
char* ecx_1

if (eax_2 == 0)
label_5cd9f2:
    var_e8 = "PileRemoveToken"
    var_ec_1 = 0xd2e
    var_f0_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_1 = "Halt"
else
    while (true)
        if (eax_2 != *(arg1 + 0x1c28))
            int32_t ecx = *esi
            
            if (ecx == 0)
                var_e8 = "DataArray<struct DomGfx>::DataArrayGet"
                var_ec_1 = 0x6c
                var_f0_1 = "C:\x\ax2017\Engine\DataArray.h"
                ecx_1 = "id != DATAID_NULL"
                break
            
            eax_2 = zx.d(ecx.w)
            
            if (eax_2 u< data_b809e4)
                int32_t esi_1 = data_b809e0
                eax_2 *= 0x1c30
                
                if (*(eax_2 + esi_1 + 0x1c28) == ecx)
                    esi = esi_1 + 0x1b94 + eax_2
                    eax_2 = *esi
                    
                    if (eax_2 == 0)
                        goto label_5cd9f2
                    
                    continue
            
            var_e8 = "DataArray<struct DomGfx>::DataArrayGet"
            var_ec_1 = 0x6d
            var_f0_1 = "C:\x\ax2017\Engine\DataArray.h"
            ecx_1 = "DataArrayTryToGet(id) != NULL"
            break
        
        uint32_t result = *(arg1 + 0x1b94)
        *esi = result
        int32_t i = *(arg1 + 0x1b94)
        *(arg1 + 0x1b94) = 0
        void* esi_4
        
        for (; i != 0; i = *(esi_4 + 0x1b94))
            result = zx.d(i.w)
            
            if (result u>= data_b809e4)
                break
            
            esi_4 = result * 0x1c30 + data_b809e0
            
            if (*(esi_4 + 0x1c28) != i)
                break
            
            if (esi_4 == 0)
                break
            
            *(esi_4 + 0x1b98) -= 1
            void var_d4
            int32_t* eax_4 = sub_5cc540(arg2, *(arg2 + 0x5c), 7, &var_d4, 0, 0, *(arg2 + 0x58), 
                *(esi_4 + 0x1b98), 0)
            int128_t var_6c = *eax_4
            int128_t var_5c_1 = *(eax_4 + 0x10)
            int128_t var_4c_1 = *(eax_4 + 0x20)
            int128_t var_3c_1 = *(eax_4 + 0x30)
            int128_t var_2c_1 = *(eax_4 + 0x40)
            int128_t var_1c_1 = *(eax_4 + 0x50)
            result = sub_5cb630(esi_4 + 0x258, &var_6c)
        
        CookieCheckFunction(result)
        return result

sub_63b870(eax_2, &data_801800, ecx_1, var_f0_1, var_ec_1, var_e8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
