// 函数: ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MBE?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AAVios_base@2@_W_N@Z
// 地址: 0x5d9950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_769b6d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_a4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3
int32_t edx
eax_3, edx = sub_64e7a0(arg1)
*(eax_3 + 0x18bc) = sub_5d92d0
int128_t var_54
int128_t xmm0 = *sub_64f350(&var_54, edx, data_171e97c, &var_54)
xmm0 f- 0
int128_t var_24 = xmm0
int128_t* eax_5
eax_5:1.b =
    (xmm0 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 f< 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float xmm1_1
bool p_3

if (not(p_1))
    xmm1_1 = var_24:4.d
    xmm1_1 f- 0
    eax_5:1.b = (xmm1_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 0f) ? 1 : 0) << 2
        | (xmm1_1 < 0f ? 1 : 0)
    p_3 = unimplemented  {test ah, 0x44}

char const* const var_b0_2
int32_t var_ac_3
char const* const var_a8_4
char* ecx_17

if (p_1 || p_3)
    var_a8_4 = "PlayerInfoFloatingUpdate"
    var_ac_3 = 0x327e
    ecx_17 = "RectTopLeft(taptipBoundary) == V20"
    var_b0_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else
    int32_t esi_1 = data_cf64a8
    float xmm2_2 = var_24:8.d f- xmm0
    float var_68_1 = var_24:0xc.d - xmm1_1
    
    if (esi_1 == 0xffffffff)
        esi_1 = data_cb4514
    else
        data_cb4514 = esi_1
    
    int32_t eax_6 = data_b604e0
    
    if (eax_6 == 0xffffffff)
        eax_6 = 0
    
    int128_t* esi_2 = esi_1 - eax_6
    eax_5 = sub_4b95e0() + esi_2
    
    if (esi_2 s>= 0)
        eax_5 = esi_2
    
    if (eax_5 == 0)
        int32_t eax_8
        
        if (data_8db5c4 != 0x27)
            eax_8 = 0
            
            if (data_8db5d4 == 0x27)
                eax_8 = data_8db5d8
        else
            eax_8 = data_8db5c8
        
        sub_4bb9f0(&data_1a8c708, eax_8, "btn_playerAvatar")
        var_68_1 = 766f
        goto label_5d9b38
    
    if (eax_5 == 0xffffffff)
        var_a8_4 = "PlayerInfoFloatingUpdate"
        var_ac_3 = 0x3293
        ecx_17 = "seat != SEAT_LOCAL && seat != SEAT_NONE"
        var_b0_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    else
        int32_t esi_3
        
        if (data_8db5c4 != 0x27)
            esi_3 = 0
            
            if (data_8db5d4 == 0x27)
                esi_3 = data_8db5d8
        else
            esi_3 = data_8db5c8
        
        if (data_1a8c70c != "tbl_opponents" || data_1a8c708 != esi_3 || data_1a8c710 != eax_5 - 1
                || data_1a8c714 != "btn_avatar" || data_1a8c718 != 0xffffffff || data_1a8c71c != 0)
            int32_t eax_9 = sub_67be20(eax_5 - 1)
            data_1a8c728 = eax_9
            
            if (eax_9 != 0)
                data_1a8c728 = sub_67bd70(eax_9, "btn_avatar")
                data_1a8c708 = esi_3
                data_1a8c70c = "tbl_opponents"
                data_1a8c710 = eax_5 - 1
                data_1a8c714 = "btn_avatar"
                data_1a8c718 = 0xffffffff
                data_1a8c71c = 0
        else
            data_1a8c728
        
    label_5d9b38:
        int128_t* eax_11
        int32_t ecx_6
        eax_11, ecx_6 = sub_67be80(&var_54)
        bool cond:0_1 = data_8db5c4 != 0x27
        var_54 = *eax_11
        int128_t var_44
        int128_t xmm0_5
        
        if (cond:0_1)
            if (data_8db5d4 == 0x27)
                ecx_6 = data_8db5d8
                goto label_5d9b67
            
            var_44 = data_bf21e8
            xmm0_5 = data_bf21f8
        else
            ecx_6 = data_8db5c8
        label_5d9b67:
            
            if (ecx_6 == 0)
                var_44 = data_bf21e8
                xmm0_5 = data_bf21f8
            else
                uint32_t eax_12 = zx.d(ecx_6.w)
                
                if (eax_12 u>= data_c23bac || *(eax_12 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_6)
                    var_44 = data_bf21e8
                    xmm0_5 = data_bf21f8
                else
                    uint32_t eax_15 = sub_64e7a0(ecx_6)
                    var_44 = *(eax_15 + 0x1620)
                    xmm0_5 = *(eax_15 + 0x1630)
        
        float xmm1_2 = var_44.d
        int128_t var_34_1 = xmm0_5
        var_24.d = 0
        var_24:8.d = xmm2_2
        var_24:0xc.d = var_68_1
        var_24:4.d = 0
        int32_t var_b0_1 = ecx_6
        int128_t var_64 = var_24
        var_24 = zx.o(0)
        void var_98
        int128_t* eax_17 = sub_658160(&var_98, 0, &var_54, xmm1_2, &var_98, 1f, &var_64, &var_24)
        var_44 = *eax_17
        int128_t var_34_2 = eax_17[1]
        sub_666060(arg1, &var_44)
        int32_t* eax_18 = sub_4b9480()
        int32_t edx_3 = data_cb4514
        int32_t* var_6c = eax_18
        void* eax_20 = sub_4b9680(&eax_18[2], edx_3)
        
        if (*(eax_20 + 0x14) != 1)
            uint32_t eax_21 = sub_64e7a0(arg1)
            sub_665db0(eax_21, &data_be2d40, eax_21, 0x3f800000, 0xffffffff, 0)
        
        if (sub_4d6250(eax_20) == 0)
            uint32_t eax_23 = sub_64e7a0(arg1)
            sub_665db0(eax_23, &data_be2d1c, eax_23, 0x3f800000, 0xffffffff, 0)
        
        eax_5 = *(eax_20 + 0x14)
        
        if (eax_5 s<= 0x3e8)
            if (eax_5 == 0x3e8)
                goto label_5d9d3f
            
            if (eax_5 u> 3)
                goto label_5d9d24
            
            switch (eax_5)
                case nullptr, 2, 3
                    goto label_5d9d3f
                case 1
                    if (*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x4250) == *(eax_20 + 0x18))
                        goto label_5d9d3f
                    
                    int32_t i = 0
                    eax_5 = data_cc8d5c
                    
                    if (eax_5 != 0)
                        void* eax_25 = eax_5 + 0x38
                        
                        while (i s< *(eax_5 + 0x5028))
                            if (*(eax_25 - 0xc) == *(eax_20 + 0x18) && *eax_25 == 5)
                                goto label_5d9d3f
                            
                            i += 1
                            eax_25 += 0x20
                        
                        goto label_5d9d68
                    
                    var_a8_4 = "GetClient"
                    var_ac_3 = 0x7b
                    var_b0_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
                    ecx_17 = "gClient"
        else if (eax_5 == 0x3e9)
        label_5d9d3f:
            uint32_t eax_26 = sub_64e7a0(arg1)
            sub_665db0(eax_26, &data_be2d28, eax_26, 0x3f800000, 0xffffffff, 0)
        label_5d9d68:
            
            if (*(sub_4b9680(&eax_18[2], data_cb4514) + 0x14) != 3)
            label_5d9eb7:
                char* result_1
                sub_4b06c0(&var_6c, &eax_18[2], &result_1, eax_20, &var_6c)
                int32_t var_8_1 = 0
                void* eax_43 = sub_624450(var_6c)
                uint32_t eax_44 = sub_64e7a0(arg1)
                sub_665db0(eax_44, eax_43, eax_44, 0x3f800000, 0xffffffff, 0)
                int32_t var_b8 = 0xffffffff
                sub_666380(&result_1, &data_be2d34, arg1, &result_1)
                char* result = sub_5d8950(arg1, data_cb4514)
                int32_t var_8_2 = 1
                
                if (data_cf65bc != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_1)
                        int32_t temp0_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp0_1 == 1)
                            result = sub_64c080(result, *(result + 0xc) + 0x10)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                CookieCheckFunction(result)
                return result
            
            eax_5 = *(eax_20 + 0x18)
            
            if (eax_5 u> 3)
                var_a8_4 = "PlayerInfoFloatingUpdate"
                var_ac_3 = 0x32c4
                ecx_17 = "Halt"
            else
                void** esi_7
                
                switch (eax_5)
                    case nullptr
                        esi_7 = &data_be2d58
                    case 1
                        esi_7 = &data_be2d64
                    case 2
                        esi_7 = &data_be2d70
                    case 3
                        esi_7 = &data_be2d4c
                
                uint32_t eax_29 = sub_64e7a0(arg1)
                sub_665db0(eax_29, esi_7, eax_29, 0x3f800000, 0xffffffff, 0)
                int32_t* esi_8 = var_6c
                void* var_70_2 = 0xffffffff
                
                if (((esi_8[8] u>> 2).b & 1) != 0)
                    var_70_2 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x7218)
                    uint32_t eax_34 = sub_64e7a0(arg1)
                    sub_665db0(eax_34, &data_be2d7c, eax_34, 0x3f800000, 0xffffffff, 0)
                
                int32_t i_1 = 0
                var_6c = *esi_8
                
                do
                    if (*(sub_61dad0() + i_1 + 8) == var_6c)
                        var_70_2 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x3538)
                        uint32_t eax_39 = sub_64e7a0(arg1)
                        sub_665db0(eax_39, &data_be2d7c, eax_39, 0x3f800000, 0xffffffff, 0)
                        break
                    
                    i_1 += 0xc
                while (i_1 s< 0x78)
                
                eax_5 = var_70_2 + 1
                
                if (eax_5 u<= 4)
                    uint32_t eax_41
                    
                    switch (eax_5)
                        case 1
                            eax_41 = sub_64e7a0(arg1)
                            int32_t var_a8_7 = 0
                            int32_t var_ac_6 = 0xffffffff
                            sub_665db0(eax_41, &data_be2d94, eax_41, 0x3f800000, 0xffffffff, 0)
                        case 2
                            eax_41 = sub_64e7a0(arg1)
                            int32_t var_a8_8 = 0
                            int32_t var_ac_7 = 0xffffffff
                            sub_665db0(eax_41, &data_be2da0, eax_41, 0x3f800000, 0xffffffff, 0)
                        case 3
                            eax_41 = sub_64e7a0(arg1)
                            int32_t var_a8_9 = 0
                            int32_t var_ac_8 = 0xffffffff
                            sub_665db0(eax_41, &data_be2dac, eax_41, 0x3f800000, 0xffffffff, 0)
                        case 4
                            eax_41 = sub_64e7a0(arg1)
                            int32_t var_a8_5 = 0
                            int32_t var_ac_4 = 0xffffffff
                            sub_665db0(eax_41, &data_be2d88, eax_41, 0x3f800000, 0xffffffff, 0)
                    
                    goto label_5d9eb7
                
                var_a8_4 = "PlayerInfoFloatingUpdate"
                var_ac_3 = 0x32e6
                ecx_17 = "Halt"
            
            var_b0_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        else
        label_5d9d24:
            var_a8_4 = "GameCanBlock"
            var_ac_3 = 0xdb
            var_b0_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSave.cpp"
            ecx_17 = "Halt"

sub_63b870(eax_5, &data_801800, ecx_17, var_b0_2, var_ac_3, var_a8_4)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
