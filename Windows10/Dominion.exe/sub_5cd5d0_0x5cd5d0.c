// 函数: sub_5cd5d0
// 地址: 0x5cd5d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t var_c = eax_1
int32_t esi = arg4
int32_t* edx = arg2 + 0x74
int32_t edi = 0
char const* const var_ec_2
int32_t var_e8_2
char const* const var_e4_2
char* ecx_5

if (*edx == 0)
label_5cd64c:
    *(arg3 + 0x1b94) = *edx
    *(arg3 + 0x1b98) = edi
    uint32_t result = edi + 1
    *edx = *(arg3 + 0x1c28)
    int32_t edx_1 = *(arg3 + 0x1b94)
    
    if (edx_1 == 0)
    label_5cd732:
        CookieCheckFunction(result)
        return result
    
    while (true)
        eax_1 = zx.d(edx_1.w)
        
        if (eax_1 u>= data_b809e4)
            goto label_5cd7a1
        
        void* esi_2 = eax_1 * 0x1c30 + data_b809e0
        
        if (*(esi_2 + 0x1c28) != edx_1)
            goto label_5cd7a1
        
        if (esi_2 == arg3)
            var_e4_2 = "PileAddTokenSlot"
            var_e8_2 = 0xd01
            var_ec_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            ecx_5 = "&curGfx != &gfx"
            break
        
        eax_1 = *(esi_2 + 0x1b98) + 1
        *(esi_2 + 0x1b98) = eax_1
        
        if (eax_1 != result)
            var_e4_2 = "PileAddTokenSlot"
            var_e8_2 = 0xd03
            var_ec_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            ecx_5 = "curGfx.index == slot"
            break
        
        void var_d0
        int32_t* eax_8 = sub_5cc540(&var_d0, *(esi_2 + 0x37c), *(esi_2 + 0x378), &var_d0, 0, 0, 
            *(esi_2 + 0x380), eax_1, esi_2)
        int128_t var_70 = *eax_8
        int128_t var_60_1 = *(eax_8 + 0x10)
        int128_t var_50_1 = *(eax_8 + 0x20)
        int128_t var_40_1 = *(eax_8 + 0x30)
        int128_t var_30_1 = *(eax_8 + 0x40)
        int128_t var_20_1 = *(eax_8 + 0x50)
        sub_5cb630(esi_2 + 0x258, &var_70)
        edx_1 = *(esi_2 + 0x1b94)
        result += 1
        
        if (edx_1 == 0)
            goto label_5cd732
else
    while (true)
        if (esi == 0)
            goto label_5cd64c
        
        int32_t ecx = *edx
        
        if (ecx == 0)
            var_e4_2 = "DataArray<struct DomGfx>::DataArrayGet"
            var_e8_2 = 0x6c
            ecx_5 = "id != DATAID_NULL"
        else
            eax_1 = zx.d(ecx.w)
            
            if (eax_1 u< data_b809e4)
                eax_1 = eax_1 * 0x1c30 + data_b809e0
                
                if (*(eax_1 + 0x1c28) == ecx)
                    if (eax_1 == arg3)
                        var_e4_2 = "PileAddTokenSlot"
                        var_e8_2 = 0xcf2
                        var_ec_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                        ecx_5 = "&curGfx != &gfx"
                        break
                    
                    if (*(eax_1 + 0x1b98) != edi)
                        var_e4_2 = "PileAddTokenSlot"
                        var_e8_2 = 0xcf3
                        var_ec_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                        ecx_5 = "curGfx.index == slot"
                        break
                    
                    edx = eax_1 + 0x1b94
                    edi += 1
                    esi -= 1
                    
                    if (*edx == 0)
                        goto label_5cd64c
                    
                    continue
            
        label_5cd7a1:
            var_e4_2 = "DataArray<struct DomGfx>::DataArrayGet"
            var_e8_2 = 0x6d
            ecx_5 = "DataArrayTryToGet(id) != NULL"
        
        var_ec_2 = "C:\x\ax2017\Engine\DataArray.h"
        break

sub_63b870(eax_1, &data_801800, ecx_5, var_ec_2, var_e8_2, var_e4_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
