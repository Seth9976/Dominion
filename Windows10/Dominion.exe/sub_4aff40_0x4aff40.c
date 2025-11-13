// 函数: sub_4aff40
// 地址: 0x4aff40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_4af430()
uint32_t result = data_19e3c20

if (result != 7)
    if (arg5 != 7)
        goto label_4b0078
    
    char const* const var_44
    int32_t var_40
    char const* const var_3c_1
    char* ecx_1
    
    if (result != 0)
        var_3c_1 = "ClientHitAction"
        var_40 = 0x3fd
        ecx_1 = "press.pressState == PRESS_NONE"
    label_4b014d:
        var_44 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
    label_4b0157:
        sub_63b870(result, &data_801800, ecx_1, var_44, var_40, var_3c_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* eax = sub_4afee0(arg4)
    data_19e3c24 = eax
    
    if (eax == 0)
        goto label_4b0078
    
    int32_t var_28
    result = sub_6938e0(arg3, &var_28)
    int32_t* ecx_4 = data_cc8d5c
    
    if (ecx_4 == 0)
        var_3c_1 = "GetClient"
        var_40 = 0x7b
        var_44 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        ecx_1 = "gClient"
        goto label_4b0157
    
    int32_t eax_1 = *ecx_4
    data_19e3c8c = ecx_4[1]
    data_19e3c88 = eax_1
    int32_t ecx_6 = var_28
    data_19e3c90 = ecx_6
    data_19e3c98 = ecx_6
    int32_t var_24
    data_19e3c94 = var_24
    data_19e3c9c = var_24
    data_19e3c2c = *(arg4 + 4)
    data_19e3c30 = *(arg4 + 8)
    data_19e3c38 = *(arg4 + 0x10)
    data_19e3c3c = *(arg4 + 0x14)
    data_19e3c40 = *(arg4 + 0x18)
    data_19e3c44 = *(arg4 + 0x1c)
    data_19e3c48 = *(arg4 + 0x20)
    data_19e3c4c = *(arg4 + 0x24)
    data_19e3c54 = *(arg4 + 0x2c)
    data_19e3c5c = *(arg4 + 4)
    data_19e3c60 = *(arg4 + 8)
    data_19e3c68 = *(arg4 + 0x10)
    data_19e3c6c = *(arg4 + 0x14)
    data_19e3c70 = *(arg4 + 0x18)
    data_19e3c74 = *(arg4 + 0x1c)
    data_19e3c78 = *(arg4 + 0x20)
    data_19e3c7c = *(arg4 + 0x24)
    data_19e3c84 = *(arg4 + 0x2c)
    data_19e3c24 = sub_4afee0(arg4)
    data_19e3c20 = 1
label_4b0078:
    int32_t ecx_9
    result, ecx_9 = sub_4afee0(arg4)
    
    if (result != 0x10)
        int32_t var_3c_2 = arg5
        sub_600500(result, arg4, ecx_9)
        result = *(arg4 + 4)
        
        if (result u> 3)
            var_3c_1 = "ClientHitAction"
            var_40 = 0x43f
            ecx_1 = "Halt"
            goto label_4b014d
        
        switch (result)
            case 0
                struct InputHitResult::UI2HitResult::VTable* const var_20 =
                    &UI2HitResult::`vftable'{for `InputHitResult'}
                int32_t var_1c_1 = 0
                int32_t var_18_1 = 0
                int32_t var_c_1 = 0
                return sub_4af4f0(result, &var_20, arg3, arg5)
            case 1
                if (*(arg4 + 0x10) == 0 || *(arg4 + 0x20) == 3)
                    return sub_61b5c0(result, *(arg4 + 8), arg3, arg5)
                
                return sub_4af4f0(result, arg4 + 0xc, arg3, arg5)
            case 2
                return sub_4af4f0(result, arg4 + 0xc, arg3, arg5)
            case 3
                if (arg5 != 7)
                    if (arg5 == 0)
                        *(arg4 + 0x28)
                        *(arg4 + 0x24)
                        return sub_6064b0(arg2, arg1)
                    
                    if (arg5 == 1)
                        return sub_4ad010(*(arg4 + 0x24), *(arg4 + 0x28))

return result
