// 函数: sub_61c270
// 地址: 0x61c270
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (data_ccf768 != 0)
    int32_t var_a0
    int128_t xmm0_2
    int32_t ecx_1
    
    if (data_8db5c4 != 0x27)
        if (data_8db5d4 == 0x27)
            ecx_1 = data_8db5d8
            goto label_61c2cd
        
        var_a0 = (data_bf21e8).d
        xmm0_2 = data_bf21f8
    else
        ecx_1 = data_8db5c8
    label_61c2cd:
        
        if (ecx_1 == 0)
            var_a0 = (data_bf21e8).d
            xmm0_2 = data_bf21f8
        else
            uint32_t eax_2 = zx.d(ecx_1.w)
            
            if (eax_2 u>= data_c23bac || *(eax_2 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_1)
                var_a0 = (data_bf21e8).d
                xmm0_2 = data_bf21f8
            else
                uint32_t eax_5 = sub_64e7a0(ecx_1)
                var_a0 = (*(eax_5 + 0x1620)).d
                xmm0_2 = *(eax_5 + 0x1630)
    int128_t var_90 = xmm0_2
    float xmm0_5 = 1f f/ var_a0 * arg6[1]
    data_ccf769 = 1
    data_ccf774 = xmm0_5
    void var_b8
    _libm_sse2_log_precise(arg4, arg3, var_b8)
    float xmm0_7 = fconvert.s(0.10000000149011612)
    float xmm0_11 = (sub_4ae0b0(xmm0_5) - 1000f) / -1000f
    _libm_sse2_log_precise()
    double xmm0_16 = _mm_cvtps_pd(xmm0_11 * (fconvert.s(0.0010000000474974513) - xmm0_7) + xmm0_7)
    int32_t eax_7 = _libm_sse2_exp_precise()
    data_ccf77c = fconvert.s(xmm0_16)
    CookieCheckFunction(eax_7)
    return eax_7

uint32_t eax_8 = *(arg2 + 4)
int32_t eax_9

if (eax_8 == 3)
    if (arg5 != eax_8)
        CookieCheckFunction(eax_8)
        return eax_8
    
    if (data_b7fce4 == 0)
        int32_t ecx_6
        
        if (data_8db664 != 0x16)
            if (data_8db674 != 0x16)
                CookieCheckFunction(eax_8)
                return eax_8
            
            ecx_6 = data_8db678
        else
            ecx_6 = data_8db668
        
        if (ecx_6 == 0)
            CookieCheckFunction(eax_8)
            return eax_8
        
        eax_9 = sub_67bd70(ecx_6, "tblCards")
        goto label_61c539
    
    if (data_8db664 != 0x29)
        int32_t ecx_5 = 0
        
        if (data_8db674 == 0x29)
            ecx_5 = data_8db678
        
        eax_9 = sub_67bd70(ecx_5, "tblCards")
    else
        eax_9 = sub_67bd70(data_8db668, "tblCards")
    
    goto label_61c539

char const* const var_cc
int32_t var_c8
char const* const var_c4_1
char* ecx_7

if (eax_8 == 1)
    eax_8 = arg5
    
    if (eax_8 == 3)
        int32_t esi_1
        
        if (data_8db5c4 != 0x27)
            esi_1 = 0
            
            if (data_8db5d4 == 0x27)
                esi_1 = data_8db5d8
        else
            esi_1 = data_8db5c8
        
        eax_8 = sub_5cba00(*(arg2 + 8))
        int32_t ecx_9 = *(eax_8 + 0x2c)
        
        if (ecx_9 == 1)
            eax_9 = sub_67bd70(esi_1, "tbl_zoom_extra_expand")
        label_61c539:
            uint32_t eax_14 = sub_67a8a0(sub_64e7a0(eax_9), arg6)
            CookieCheckFunction(eax_14)
            return eax_14
        
        if (ecx_9 != 0)
            var_c4_1 = "GameSpecific_DragUpdateAction"
            var_c8 = 0xdb44
            ecx_7 = "gfx.type == DOMGFX_CARD"
            goto label_61c8fb
        
        int32_t eax_10 = *(eax_8 + 0xa4)
        
        if (eax_10 == 0x3e9)
            eax_9 = sub_67bd70(esi_1, "tbl_global_play")
            data_b7fcf8 = 1
        else if (eax_10 == 0x3ea)
            eax_9 = sub_67bd70(esi_1, "tbl_player_hand")
            data_b7fcf9 = 1
        else
            eax_9 = sub_67bd70(esi_1, "tbl_player_reveal_slide")
        
        goto label_61c539
    
    if (eax_8 == 4)
        int32_t ecx_16
        
        if (data_8db5c4 != 0x27)
            ecx_16 = 0
            
            if (data_8db5d4 == 0x27)
                ecx_16 = data_8db5d8
        else
            ecx_16 = data_8db5c8
        
        uint32_t eax_17 = sub_67a8a0(sub_64e7a0(sub_67bd70(ecx_16, "tbl_abilityTriggers")), arg6)
        data_b7fcfa = 1
        CookieCheckFunction(eax_17)
        return eax_17
    
    if (eax_8 == 2)
        eax_8 = sub_5cba00(data_b7fcd0)
        int32_t ecx_22 = *(eax_8 + 0x2c)
        
        if (ecx_22 == 0 || ecx_22 == 1 || ecx_22 == 3)
            sub_61b9f0(eax_8, arg8)
            uint32_t eax_18 = sub_61bdb0(eax_8)
            CookieCheckFunction(eax_18)
            return eax_18
        
        var_c4_1 = "GameSpecific_DragUpdateAction"
        var_c8 = 0xdb82
        ecx_7 = "Halt"
        goto label_61c8fb
    
    uint32_t ecx_37
    int32_t* edx_6
    
    if (eax_8 != 0)
        if (eax_8 != 1)
            var_c4_1 = "GameSpecific_DragUpdateAction"
            var_c8 = 0xdbbe
            ecx_7 = "Halt"
            goto label_61c8fb
        
        int32_t ecx_40 = data_b7fcd0
        
        if (ecx_40 == 0)
            var_c4_1 = "GameSpecific_DragUpdateAction"
            var_c8 = 0xdbb6
            ecx_7 = "gDomClient.gui.dragCard != DOMGFX_NULL"
            goto label_61c8fb
        
        uint32_t eax_27 = sub_5cba00(ecx_40)
        edx_6 = arg8
        data_b7fcd4 = *arg7
        ecx_37 = eax_27
        data_b7fcd8 = arg7[1]
        data_b7fcdc = *arg8
        data_b7fce0 = arg8[1]
    label_61c876:
        eax_8 = sub_61b9f0(ecx_37, edx_6)
        CookieCheckFunction(eax_8)
        return eax_8
    
    int32_t ecx_30 = *(arg2 + 8)
    uint32_t edi_2 = sub_5cba00(ecx_30)
    eax_8 = *(edi_2 + 0x2c)
    
    if (eax_8 != 0)
        if (eax_8 != 3)
            var_c4_1 = "GameSpecific_DragUpdateAction"
            var_c8 = 0xdbb1
            ecx_7 = "Halt"
            goto label_61c8fb
        
        int32_t esi_2 = *(edi_2 + 0x70)
        
        if (esi_2 == 0 || data_b80afc == 8)
            esi_2 = data_19e39e0
            void* const ecx_31
            
            if (esi_2 != 0)
                uint32_t eax_20 = zx.d(esi_2.w)
                
                if (eax_20 u< data_b809e4)
                    ecx_31 = eax_20 * 0x1c30 + data_b809e0
                    
                    if (*(ecx_31 + 0x1c28) != esi_2)
                        ecx_31 = nullptr
                else
                    ecx_31 = nullptr
            else
                ecx_31 = nullptr
            
            int128_t var_80
            
            if (ecx_31 != 0)
                int32_t eax_22 = *(edi_2 + 0x30)
                
                if (*(ecx_31 + 0x170) != eax_22)
                    *(ecx_31 + 0x170) = eax_22
                    *(ecx_31 + 0x178) = 0
                    *(ecx_31 + 0x174) = 3
                    var_80 = *(edi_2 + 0x378)
                    int128_t var_70_2 = *(edi_2 + 0x388)
                    int128_t var_60_2 = *(edi_2 + 0x398)
                    int128_t var_50_2 = *(edi_2 + 0x3a8)
                    int128_t var_40_2 = *(edi_2 + 0x3b8)
                    int128_t var_30_2 = *(edi_2 + 0x3c8)
                    sub_5cb630(ecx_31 + 0x258, &var_80)
                    esi_2 = data_19e39e0
            else
                void* eax_21 = sub_637730(&data_b809e0)
                *(eax_21 + 0x2c) = 1
                *(eax_21 + 0x170) = *(edi_2 + 0x30)
                *(eax_21 + 0x178) = 0
                *(eax_21 + 0x174) = 3
                var_80 = *(edi_2 + 0x378)
                int128_t var_70_1 = *(edi_2 + 0x388)
                int128_t var_60_1 = *(edi_2 + 0x398)
                int128_t var_50_1 = *(edi_2 + 0x3a8)
                int128_t var_40_1 = *(edi_2 + 0x3b8)
                int128_t var_30_1 = *(edi_2 + 0x3c8)
                sub_5cb630(eax_21 + 0x258, &var_80)
                esi_2 = *(eax_21 + 0x1c28)
                data_19e39e0 = esi_2
        
        ecx_30 = esi_2
        uint32_t eax_23 = sub_5cba00(ecx_30)
        data_b7fcd0 = esi_2
        edi_2 = eax_23
        goto label_61c835
    
    int32_t eax_25
    
    if (*(edi_2 + 0xc0) s<= 1)
        eax_25 = *(arg2 + 8)
    label_61c82c:
        data_b7fcd0 = eax_25
    label_61c835:
        int32_t var_c4_2 = ecx_30
        data_b7fcd4 = *arg7
        data_b7fcd8 = arg7[1]
        data_b7fcdc = *arg8
        data_b7fce0 = arg8[1]
        sub_61b8f0(edi_2)
        edx_6 = arg8
        ecx_37 = edi_2
        goto label_61c876
    
    ecx_30 = *(edi_2 + 0x140)
    
    if (ecx_30 == 0)
    label_61c807:
        eax_25 = *(edi_2 + 0x1c28)
        goto label_61c82c
    
    while (true)
        eax_8 = zx.d(ecx_30.w)
        
        if (eax_8 u< data_b809e4)
            eax_8 *= 0x1c30
            edi_2 = data_b809e0 + eax_8
            
            if (*(edi_2 + 0x1c28) == ecx_30)
                ecx_30 = *(edi_2 + 0x140)
                
                if (ecx_30 == 0)
                    goto label_61c807
                
                continue
        
        var_c4_1 = "DataArray<struct DomGfx>::DataArrayGet"
        var_c8 = 0x6d
        var_cc = "C:\x\ax2017\Engine\DataArray.h"
        ecx_7 = "DataArrayTryToGet(id) != NULL"
        break
else
    var_c4_1 = "GameSpecific_DragUpdateAction"
    var_c8 = 0xdb33
    ecx_7 = "item.type == HIT_GFX"
label_61c8fb:
    var_cc = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"

sub_63b870(eax_8, &data_801800, ecx_7, var_cc, var_c8, var_c4_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
