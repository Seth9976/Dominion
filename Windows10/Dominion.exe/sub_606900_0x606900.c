// 函数: sub_606900
// 地址: 0x606900
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* var_78 = arg2
void* eax_3 = sub_571b30(arg3, 0x18)
void* var_70

if (data_19e2724 != 3)
    void* eax_13 = sub_571b30(*(eax_3 + 0x8c), 0x18)
    int32_t eax_15 = *(eax_13 + 0x9c) & 0x940
    int32_t* var_a8_1
    
    if (((*(eax_13 + 0x98) & 0x7f000400) | eax_15) == 0)
        var_a8_1 = data_171e7f0
    else
        var_a8_1 = data_171e830
    
    sub_654ce0(eax_15, arg4, "card gallery", var_a8_1, arg5, arg5, var_78, nullptr, 1)
else
    sub_654ce0(eax_3, arg4, "card gallery", data_171e7c4, arg5, arg5, var_78, nullptr, 1)
    int32_t* ecx_3 = data_1a94e80
    void* edx_1 = nullptr
    void* esi_1 = nullptr
    void* eax_5 = eax_3 + 0x648
    var_78 = eax_5
    
    while (*eax_5 != 0)
        int32_t eax_6 = *arg4
        bool cond:2_1 = data_1a94e64 != "tbl_abilities"
        var_70 = edx_1 + 1
        uint32_t edx_3
        
        if (not(cond:2_1) && data_1a94e60 == eax_6 && data_1a94e68 == esi_1 && data_1a94e6c == 0
                && ecx_3 != 0)
            edx_3 = zx.d(ecx_3.w)
        
        if (cond:2_1 || data_1a94e60 != eax_6 || data_1a94e68 != esi_1 || data_1a94e6c != 0
                || ecx_3 == 0 || edx_3 u>= data_c23bac
                || *(edx_3 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_3)
            ecx_3 = sub_67be20(esi_1)
            data_1a94e80 = ecx_3
            
            if (ecx_3 != 0)
                data_1a94e64 = "tbl_abilities"
                data_1a94e60 = eax_6
                data_1a94e68 = esi_1
                data_1a94e6c = 0
            label_606a34:
                int32_t var_94_2 = *var_78
                sub_5e03b0(ecx_3, eax_3)
                ecx_3 = data_1a94e80
        else if (ecx_3 != 0)
            goto label_606a34
        
        esi_1 += 1
        edx_1 = var_70
        eax_5 = var_78 + 8
        var_78 = eax_5
        
        if (esi_1 s>= 4)
            break
    
    int32_t var_94_3 = 0xffffffff
    sub_666120(eax_5, &data_be5938, *arg4, edx_1)

if (arg12 != 0)
    float xmm0_1 = *(arg8 + 4)
    xmm0_1 - 1f
    char* eax_16
    eax_16:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
        | (xmm0_1 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        uint32_t eax_17 = sub_64e7a0(*arg4)
        sub_665db0(eax_17, &data_be3dbc, eax_17, 0x3f800000, 0xffffffff, 0)

sub_4d3b70(*arg4)
uint32_t eax_18 = sub_4daf40(&var_70, &var_78)
int32_t esi_2 = 0

if (eax_18 s<= 0)
label_606b3f:
    eax_18.b = 0
else
    while (true)
        if (sub_4db7a0(*(var_70 + (esi_2 << 2)), arg3).b != 0)
            eax_18.b = 1
            break
        
        esi_2 += 1
        
        if (esi_2 s>= eax_18)
            goto label_606b3f

int32_t esi_5 = arg9
char* ecx_15 = arg8

if (esi_5 == 1 && eax_18.b == 0)
    float xmm0_2 = *(ecx_15 + 4)
    xmm0_2 f- 0
    eax_18:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
        | (xmm0_2 < 0f ? 1 : 0)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (not(p_4))
        uint32_t eax_20 = sub_64e7a0(*arg4)
        sub_665db0(eax_20, &data_be5950, eax_20, 0x3f800000, 0xffffffff, 0)
        ecx_15 = arg8

int32_t temp1 = arg10
arg10 -= 1

if (temp1 == 1 && (*(eax_3 + 0x8c) - 0xa00 u< 0x100 || *(eax_3 + 0x8c) - 0x700 u< 0x100)
        && *eax_3 == 2 && (esi_5 == 0 || esi_5 == 1))
    float xmm0_3 = *(ecx_15 + 4)
    xmm0_3 f- 0
    int32_t eax_22
    eax_22:1.b = (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2
        | (xmm0_3 < 0f ? 1 : 0)
    bool p_6 = unimplemented  {test ah, 0x44}
    
    if (not(p_6))
        uint32_t eax_24 = sub_64e7a0(*arg4)
        sub_665db0(eax_24, &data_be5968, eax_24, 0x3f800000, 0xffffffff, 0)

float xmm0_4 = *(arg8 + 4)
xmm0_4 - 0f
char* eax_25
eax_25:1.b =
    (xmm0_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2 | (xmm0_4 < 0f ? 1 : 0)
bool p_8 = unimplemented  {test ah, 0x44}
char const* const var_9c_2
int32_t var_98_2
char const* const var_94_4
void* eax_27
char* ecx_21
uint32_t eax_26
void** edx_10

if (p_8 || esi_5 != 2)
    eax_27 = data_19e2724
    
    if (eax_27 u> 3)
        var_94_4 = "DeclareCardsetCard"
        var_98_2 = 0xa45b
        ecx_21 = "Halt"
        var_9c_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    else
        switch (eax_27)
            case nullptr
                if (sub_4c89a0() == 0x10)
                    goto label_606ccb
                
                eax_27 = data_cc8dc0
                
                if (eax_27 != 0)
                    int32_t eax_29 = *(eax_27 + 0x28)
                    
                    if (eax_29 == 0)
                        goto label_606ccb
                    
                    if (eax_29 == 1)
                        eax_26 = sub_64e7a0(*arg4)
                        edx_10 = &data_8dc674
                        goto label_606cc3
                    
                    eax_27 = eax_29 - 2
                    
                    if (eax_29 == 2)
                        eax_26 = sub_64e7a0(*arg4)
                        edx_10 = &data_8dc680
                        goto label_606cc3
                    
                    var_94_4 = "DeclareCardsetCard"
                    var_98_2 = 0xa44e
                    ecx_21 = "Halt"
                    var_9c_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                else
                    var_94_4 = "GetLocalSettings"
                    var_98_2 = 0x5fb
                    var_9c_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                    ecx_21 = "gGameSettings.localSettings"
            case 1
                goto label_606c11
            case 2
                eax_26 = sub_64e7a0(*arg4)
                edx_10 = &data_be3238
                goto label_606cc3
            case 3
                goto label_606ccb
else
label_606c11:
    eax_26 = sub_64e7a0(*arg4)
    edx_10 = &data_be3220
label_606cc3:
    sub_665db0(eax_26, edx_10, eax_26, 0x3f800000, 0xffffffff, 0)
label_606ccb:
    
    if (sub_4c89a0() == 0x10)
        goto label_606d71
    
    if (sub_4c89a0() == 0x11)
        goto label_606d71
    
    if (sub_4c89a0() == 0x12)
        goto label_606d71
    
    if (sub_4c89a0() == 0x13)
        goto label_606d71
    
    eax_27 = data_cc8dc0
    
    if (eax_27 != 0)
        int32_t eax_36 = *(eax_27 + 0x28)
        
        if (eax_36 == 0)
            goto label_606d71
        
        if (eax_36 != 1)
            eax_27 = eax_36 - 2
        
        if (eax_36 == 1 || eax_36 == 2)
            uint32_t eax_39 = sub_64e7a0(*arg4)
            sub_665db0(eax_39, &data_be3268, eax_39, 0x3f800000, 0xffffffff, 0)
        label_606d71:
            float var_60[0x8]
            float* eax_42 = sub_4adec0(&var_60, arg7, arg6, *(arg8 + 4), &var_60)
            int128_t var_40 = *eax_42
            int128_t var_30_1 = *(eax_42 + 0x10)
            float xmm0_9 = sub_4d5cf0(*(arg8 + 4) * 1000f)
            float xmm0_10
            
            if (0 f<= xmm0_9)
                xmm0_10 = xmm0_9 + 0.5f
            else
                xmm0_10 = xmm0_9 - 0.5f
            
            char* eax_44 = arg8
            
            if (not(*(eax_44 + 4) f<= 0))
                *(sub_64e7a0(*arg4) + 0x1694) = int.d(xmm0_10) + 0x3a98
                esi_5 = arg9
                eax_44 = arg8
            
            float xmm0_11 = *(eax_44 + 4)
            xmm0_11 f- 0
            eax_44:1.b = (xmm0_11 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_11, 0f) ? 1 : 0) << 2
                | (xmm0_11 < 0f ? 1 : 0)
            bool p_10 = unimplemented  {test ah, 0x44}
            
            if (not(p_10))
                uint32_t eax_46 = sub_64e7a0(*arg4)
                sub_665db0(eax_46, &data_be3d98, eax_46, 0x3f800000, 0xffffffff, 0)
            
            char* eax_47 = arg8
            
            if (eax_47[1] != 0)
                float xmm0_12 = *(eax_47 + 4)
                xmm0_12 f- 0
                eax_47:1.b = (xmm0_12 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_12, 0f) ? 1 : 0) << 2 | (xmm0_12 < 0f ? 1 : 0)
                bool p_12 = unimplemented  {test ah, 0x44}
                
                if (not(p_12))
                    uint32_t eax_48 = sub_64e7a0(*arg4)
                    sub_665db0(eax_48, &data_be58d8, eax_48, 0x3f800000, 0xffffffff, 0)
                
                eax_47 = arg8
            
            if (esi_5 == 0 && eax_47[2] != 0)
                uint32_t eax_49 = sub_64e7a0(*arg4)
                sub_665db0(eax_49, &data_be5914, eax_49, 0x3f800000, 0xffffffff, esi_5.b)
            
            if (*arg8 != 0)
                float xmm0_13 = *(arg8 + 4)
                xmm0_13 - 0f
                char* eax_50
                eax_50:1.b = (xmm0_13 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_13, 0f) ? 1 : 0) << 2 | (xmm0_13 < 0f ? 1 : 0)
                bool p_14 = unimplemented  {test ah, 0x44}
                
                if (not(p_14))
                    uint32_t eax_51 = sub_64e7a0(*arg4)
                    sub_665db0(eax_51, &data_be58fc, eax_51, 0x3f800000, 0xffffffff, 0)
            
            eax_27 = sub_666060(*arg4, &var_40)
            
            if (esi_5 == 0 || esi_5 == 1 || esi_5 == 2)
                if (*(eax_3 + 0x60) != 0)
                    int32_t eax_52 = *(eax_3 + 0x9c) & 0x20000
                    
                    if (eax_52 == 0)
                        void* eax_53 = sub_571b30(*(eax_3 + 0x8c), eax_52 + 0x18)
                        uint32_t var_7c_2
                        var_7c_2.b = 0
                        int32_t eax_55 = *(eax_53 + 0x9c) & 0x940
                        
                        if (((*(eax_53 + 0x98) & 0x7f000400) | eax_55) != 0)
                            var_7c_2.b = 1
                        
                        sub_618270(eax_55, **(eax_3 + 0x60), &data_be15bc, var_7c_2.b)
                
                void* eax_56 = eax_3 + 0x80
                
                if (data_19e2724 != 3)
                    eax_56 = eax_3 + 0x74
                
                uint32_t eax_57 = sub_64e7a0(*arg4)
                sub_5e0df0(
                    sub_5e01b0(sub_665db0(eax_57, eax_56, eax_57, 0x3f800000, 0xffffffff, 0), 
                        eax_3, *arg4, nullptr, 0, 0), 
                    eax_3, *arg4, nullptr)
                sub_5defb0(*arg4, eax_3)
                
                if (arg11 != 0)
                    uint32_t eax_60 = sub_64e7a0(*arg4)
                    sub_665db0(eax_60, &data_be3da4, eax_60, 0x3f800000, 0xffffffff, 0)
                
                uint32_t result = sub_65d6e0(*arg4, data_8c4634)
                CookieCheckFunction(result)
                return result
            
            var_94_4 = "DeclareCardsetCard"
            var_98_2 = 0xa49d
            ecx_21 = "Halt"
            var_9c_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        else
            var_94_4 = "DeclareCardsetCard"
            var_98_2 = 0xa46d
            ecx_21 = "Halt"
            var_9c_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    else
        var_94_4 = "GetLocalSettings"
        var_98_2 = 0x5fb
        var_9c_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
        ecx_21 = "gGameSettings.localSettings"
sub_63b870(eax_27, &data_801800, ecx_21, var_9c_2, var_98_2, var_94_4)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
