// 函数: sub_5fade0
// 地址: 0x5fade0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t edx
ecx, edx = __chkstk(0x332c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void* eax_2 = sub_4bbdb0()
void var_332c
void var_199c
int32_t eax_4 = memcpy(&var_199c, sub_4e49d0(edx, &var_332c), 0x1990)
int32_t var_18_2
char const* const var_14_1
char* ecx_2

if (ecx u> 6)
    var_14_1 = "ToggleKingdomModifier"
    var_18_2 = 0x8a28
label_5fb036:
    ecx_2 = "Halt"
label_5fb045:
    sub_63b870(eax_4, &data_801800, ecx_2, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
        var_18_2, var_14_1)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t var_2a8
int32_t var_2a8_1
int32_t eax_16

switch (ecx)
    case 0
        int32_t var_da0
        
        if (var_da0 == 0)
            int32_t var_da0_3 = edx + 1
        label_5fb016:
            char* result = sub_4e4cb0(eax_2)
            CookieCheckFunction(result)
            return result
        
        if (var_da0 == 1)
            int32_t esi_1 = neg.d(edx)
            int32_t var_da0_2 = sbb.d(esi_1, esi_1, edx != 0) & 2
            goto label_5fb016
        
        eax_4 = var_da0 - 2
        
        if (var_da0 == 2)
            int32_t eax_8
            eax_8.b = edx != 1
            int32_t var_da0_1 = eax_8
            goto label_5fb016
        
        var_14_1 = "ToggleTristate"
        var_18_2 = 0x896a
        goto label_5fb036
    case 1
        int32_t var_d9c
        
        if (var_d9c == 0)
            int32_t var_d9c_3 = edx + 1
            goto label_5fb016
        
        if (var_d9c == 1)
            int32_t esi_4 = neg.d(edx)
            int32_t var_d9c_2 = sbb.d(esi_4, esi_4, edx != 0) & 2
            goto label_5fb016
        
        eax_4 = var_d9c - 2
        
        if (var_d9c == 2)
            int32_t eax_13
            eax_13.b = edx != 1
            int32_t var_d9c_1 = eax_13
            goto label_5fb016
        
        var_14_1 = "ToggleTristate"
        var_18_2 = 0x896a
        goto label_5fb036
    case 2
        if (edx == 0)
            if ((var_2a8.b & 1) == 0)
                eax_16 = (var_2a8 & 0xfffffffd) | 1
            else
                eax_16 = var_2a8 & 0xfffffffe
            
            var_2a8_1 = eax_16
            goto label_5fb016
        
        if (edx == 1)
            if ((var_2a8.b & 2) == 0)
                eax_16 = (var_2a8 & 0xfffffffa) | 2
            else
                eax_16 = var_2a8 & 0xfffffffd
            
            var_2a8_1 = eax_16
            goto label_5fb016
        
        if (edx != 2)
            var_14_1 = "ToggleKingdomModifier"
            var_18_2 = 0x8a18
            goto label_5fb036
        
        int32_t eax_15
        eax_15.b = var_2a8.b & 0xfd
        
        if ((eax_15.b & 4) == 0)
            eax_16 = eax_15 | 4
        else
            eax_16 = eax_15 & 0xfffffffb
        
        var_2a8_1 = eax_16
        goto label_5fb016
    case 3
        if (edx != 0)
            var_14_1 = "ToggleSetupFlag"
            var_18_2 = 0x89e2
            ecx_2 = "btn == 0"
            goto label_5fb045
        
        if ((var_2a8.b & 8) == 0)
            eax_16 = var_2a8 | 8
        else
            eax_16 = var_2a8 & 0xfffffff7
        
        var_2a8_1 = eax_16
        goto label_5fb016
    case 4
        if (edx != 0)
            var_14_1 = "ToggleSetupFlag"
            var_18_2 = 0x89e2
            ecx_2 = "btn == 0"
            goto label_5fb045
        
        if ((var_2a8.b & 0x10) == 0)
            eax_16 = var_2a8 | 0x10
        else
            eax_16 = var_2a8 & 0xffffffef
        
        var_2a8_1 = eax_16
        goto label_5fb016
    case 5
        if (edx != 0)
            var_14_1 = "ToggleSetupFlag"
            var_18_2 = 0x89e2
            ecx_2 = "btn == 0"
            goto label_5fb045
        
        if ((var_2a8.b & 0x20) == 0)
            eax_16 = var_2a8 | 0x20
        else
            eax_16 = var_2a8 & 0xffffffdf
        
        var_2a8_1 = eax_16
        goto label_5fb016
    case 6
        if (edx != 0)
            var_14_1 = "ToggleSetupFlag"
            var_18_2 = 0x89e2
            ecx_2 = "btn == 0"
            goto label_5fb045
        
        if ((var_2a8.b & 0x40) == 0)
            eax_16 = var_2a8 | 0x40
        else
            eax_16 = var_2a8 & 0xffffffbf
        
        var_2a8_1 = eax_16
        goto label_5fb016
