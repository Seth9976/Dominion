// 函数: sub_617da0
// 地址: 0x617da0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result

if (data_b604cc != 3)
    if (arg2[0xc].b != 0)
        result.b = 1
        return result
    
    result = *arg2
    char const* const var_18
    int32_t var_14
    char const* const var_10
    char* ecx_5
    
    if (result u> 0x2f)
    label_617f6b:
        var_10 = "WaitDuration"
        var_14 = 0xcc1f
    label_617f75:
        ecx_5 = "Halt"
    label_617f7a:
        var_18 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    label_617f84:
        sub_63b870(result, &data_801800, ecx_5, var_18, var_14, var_10)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = zx.d(lookup_table_617fb4[result])
    int32_t ecx
    
    switch (result)
        case 0
        label_617e35:
            ecx = 0
        case 1
            ecx = 0xf
        case 2
            int32_t ecx_2 = arg2[3]
            int32_t ecx_3 = neg.d(ecx_2)
            ecx = sbb.d(ecx_3, ecx_3, ecx_2 != 0) + 7
        case 3
            result = arg2[6]
            
            if (result u> 0x18)
                var_10 = "WaitDuration"
                var_14 = 0xcbed
                goto label_617f75
            
            switch (result)
                case 0, 0xd, 0xe
                    ecx = 2
                case 1, 8, 0xb, 0xc, 0xf, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18
                    goto label_617e35
                case 2, 3
                    int32_t eax_1 = data_b604e0
                    
                    if (eax_1 == 0xffffffff)
                        eax_1 = 0
                    
                    int32_t ecx_1
                    ecx_1.b = arg2[1] == eax_1
                    ecx = ecx_1 + 4
                case 4, 5, 6, 7, 9, 0xa, 0x10, 0x11
                    goto label_617dde
        case 4
        label_617dde:
            ecx = 4
        case 5
            goto label_617f6b
    
    result = data_cc8dc0
    
    if (result == 0)
        var_10 = "GetLocalSettings"
        var_14 = 0x5fb
        var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
        ecx_5 = "gGameSettings.localSettings"
        goto label_617f84
    
    result = *(result + 8)
    
    if (*((ecx << 4) + 0x7e9700) != ecx)
        var_10 = "WaitDurationAmount"
        var_14 = 0xcb8a
        ecx_5 = "d.type == duration"
        goto label_617f7a
    
    int32_t ecx_6
    
    if (result == 0)
        result = data_cc8d5c
        
        if (result == 0)
        label_617eba:
            var_10 = "GetClient"
            var_14 = 0x7b
            var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
            ecx_5 = "gClient"
            goto label_617f84
        
        if (*(result + 0x5068) != 1)
            ecx_6 = *((ecx << 4) + 0x7e9704)
        else if (sub_617cf0(sub_4b9480()) == 0 || *((ecx << 4) + 0x7e9700) != 8)
            result = data_cc8d5c
            ecx_6 = *((ecx << 4) + 0x7e9704)
        else
            result = data_cc8d5c
            ecx_6 = *((ecx << 4) + 0x7e9704) * 2
    else
        int32_t eax_3 = result - 1
        
        if (result != 1)
            result = eax_3 - 2
            
            if (eax_3 == 2)
                ecx_6 = *((ecx << 4) + 0x7e970c)
                result = data_cc8d5c
                goto label_617f02
            
            var_10 = "WaitDurationAmount"
            var_14 = 0xcb9d
            goto label_617f75
        
        ecx_6 = *((ecx << 4) + 0x7e9708)
        result = data_cc8d5c
    
label_617f02:
    int32_t esi_4
    int32_t edi_1
    
    if (*arg2 == 7)
        if (result == 0)
            goto label_617eba
        
        int32_t edx = *result
        int32_t eax_6 = *(result + 4)
        edi_1 = data_19e39ec
        
        if (edi_1 s< eax_6)
            esi_4 = edx
            edi_1 = eax_6
        else
            esi_4 = data_19e39e8
            
            if (edi_1 s<= eax_6 && esi_4 u<= edx)
                esi_4 = edx
                edi_1 = eax_6
        
        goto label_617f2c
    
    if (result == 0)
        goto label_617eba
    
    edi_1 = *(result + 4)
    esi_4 = *result
    int32_t temp4_1 = data_19e39ec
    
    if (temp4_1 s<= edi_1 && (temp4_1 s< edi_1 || data_19e39e8 u<= esi_4))
    label_617f2c:
        int32_t eax_8
        int32_t edx_1
        edx_1:eax_8 = sx.q(ecx_6)
        data_19e39e8 = eax_8 + esi_4
        data_19e39ec = adc.d(edx_1, edi_1, eax_8 + esi_4 u< eax_8)
        result.b = 1
        return result

result.b = 0
return result
