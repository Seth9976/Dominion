// 函数: sub_5f2290
// 地址: 0x5f2290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* var_c0 = arg5
uint32_t eax_2
eax_2.b = arg7
int32_t edx = *(arg2 + 0xa4)
char var_b5 = eax_2.b
char var_c4 = eax_2.b
int32_t var_194_1
char const* const var_190_1
char* ecx

if (edx != 5)
    eax_2 = *(arg4 + 0x5c)
    
    if (eax_2 != 5)
        if (eax_2 == 0x3ec)
            int32_t ecx_1 = data_19e39f8
            *(arg2 + 8) = ecx_1
            data_19e39f8 = ecx_1 + 1
        
        uint32_t var_bc_1 = *(arg4 + 0x1c28)
        eax_2.b = edx == *(arg4 + 0x5c)
        char var_f0_1 = eax_2.b
        
        if (edx == 0)
            goto label_5f23d3
        
        if (edx == 6)
            int32_t eax_4 = *(arg2 + 0x9c)
            
            if (eax_4 != 0)
                uint32_t ecx_2 = zx.d(eax_4.w)
                
                if (ecx_2 u< data_b809e4)
                    void* edx_2 = ecx_2 * 0x1c30 + data_b809e0
                    
                    if (*(edx_2 + 0x1c28) == eax_4 && edx_2 != 0)
                        sub_5cd880(arg2, edx_2)
            
            goto label_5f23d3
        
        if (edx != 0x3f1)
            if (*(arg2 + 0x2c) == 0)
                uint32_t eax_5 = sub_5cba00(*(arg2 + 0x9c))
                sub_5ce1b0(eax_5, eax_5, arg2, var_c4, var_f0_1)
                goto label_5f23d3
            
            var_190_1 = "CardGetPile"
            var_194_1 = 0x76a2
            ecx = "gfx.type == DOMGFX_CARD"
        else
            sub_5cd3e0(arg2)
        label_5f23d3:
            eax_2 = *(arg2 + 0xa0)
            var_f0_1.d = eax_2
            *(arg2 + 0xa0) = arg3
            
            if (var_bc_1 == 0)
            label_5f2d3d:
                var_190_1 = "DomMoveCard"
                var_194_1 = 0x7751
                ecx = "GfxTry(pileId)"
            else
                eax_2 = zx.d(var_bc_1.w)
                
                if (eax_2 u>= data_b809e4)
                    goto label_5f2d3d
                
                eax_2 = eax_2 * 0x1c30 + data_b809e0
                
                if (*(eax_2 + 0x1c28) != var_bc_1)
                    goto label_5f2d3d
                
                if (*(arg4 + 0x2c) == 3)
                    int32_t ecx_7 = *(arg4 + 0x5c)
                    int128_t* edx_5 = arg8
                    int32_t var_154
                    int128_t var_144
                    int128_t var_104
                    int32_t edx_7
                    int128_t xmm1_1
                    int128_t xmm2_1
                    int128_t xmm3_1
                    int128_t xmm4_1
                    int128_t xmm5_1
                    int128_t xmm6_1
                    
                    if (ecx_7 == 0x474)
                        int32_t eax_8 = sub_5ce300(var_c0, arg4, arg2, var_c4, *var_c0, var_c0[1])
                        edx_7 = memset(&var_154, 0, 0x60)
                        int32_t var_148_1 = eax_8
                        var_154 = 0x1d
                        int32_t var_150_1 = *(arg4 + 0x68)
                        uint32_t var_14c_1 = arg3
                    label_5f2a08:
                        xmm1_1 = var_154.o
                        int32_t var_13c_1 = 0
                        xmm2_1 = var_144
                        int128_t var_134
                        xmm3_1 = var_134
                        int128_t var_124
                        xmm4_1 = var_124
                        int128_t var_114
                        xmm5_1 = var_114
                        xmm6_1 = var_104
                    label_5f2a3f:
                        eax_2 = arg6
                        int128_t var_3c_1 = xmm6_1
                        int128_t var_4c_1 = xmm5_1
                        int128_t var_5c_1 = xmm4_1
                        int128_t var_6c_1 = xmm3_1
                        int128_t var_7c_1 = xmm2_1
                        int128_t var_8c = xmm1_1
                        int32_t* var_19c_3
                        int128_t* var_198_9
                        char var_194_12
                        int128_t var_28
                        void* eax_34
                        void* ecx_21
                        void* edx_14
                        
                        if (eax_2 u> 3)
                            var_190_1 = "DomMoveCard"
                            var_194_1 = 0x788d
                            ecx = "Halt"
                        else
                            switch (eax_2)
                                case 0
                                    ecx_21 = arg2 + 0x258
                                    int32_t var_dc = *(arg4 + 0x5c)
                                    int32_t var_e0 = 1
                                    int32_t var_d0 = 0
                                    int128_t var_20_1 = arg2.o
                                    int64_t var_10 = 0
                                    
                                    if (var_b5 == 0)
                                        int128_t* var_190_14 = &var_8c
                                        int32_t* eax_36 =
                                            sub_5cb7c0(&var_8c, &var_28:8, ecx_21, ecx_21)
                                        CookieCheckFunction(eax_36)
                                        return eax_36
                                    
                                    int32_t var_190_13 = var_c4.d
                                    edx_14 = 1
                                    var_194_12 = &var_8c
                                    var_198_9 = ecx_21
                                    eax_34 = &var_28:8
                                    var_19c_3 = &var_28:8
                                label_5f2ad9:
                                    int32_t* eax_35 = sub_5cb840(eax_34, edx_14, ecx_21, var_19c_3, 
                                        var_198_9, var_194_12)
                                    CookieCheckFunction(eax_35)
                                    return eax_35
                                case 1
                                    if (var_b5 == 0 && *(arg2 + 0x1a18) == 0)
                                        void var_ec
                                        int128_t* eax_38 = sub_5de520(&var_ec, edx_7, arg2, &var_ec)
                                        var_28 = *eax_38
                                        int128_t var_20 = eax_38[1]
                                        sub_5cb6e0(arg2 + 0x258, &var_28)
                                    
                                    int128_t* ecx_29
                                    
                                    if (arg8 == 2)
                                        ecx_29 = 1
                                    else if (arg8 == 0x12 || arg8 == 0x13)
                                        ecx_29 = 4
                                    else
                                        ecx_29 = nullptr
                                    
                                    int32_t var_190_16 = var_c4.d
                                    int32_t var_dc_1 = *(arg4 + 0x5c)
                                    edx_14 = nullptr
                                    int32_t var_e0_1 = 1
                                    var_194_12 = &var_8c
                                    int128_t* var_d0_1 = ecx_29
                                    eax_34 = &var_28:8
                                    int128_t var_20_2 = arg2.o
                                    var_198_9 = ecx_29
                                    ecx_21 = arg2 + 0x258
                                    int64_t var_10_1 = 0
                                    var_19c_3 = &var_28:8
                                    goto label_5f2ad9
                                case 2
                                    int32_t eax_40 = *(arg2 + 0x1a18)
                                    
                                    if (eax_40 != 0)
                                        *(arg2 + 0x1a18) = eax_40 - 1
                                    
                                    int32_t var_dc_2 = *(arg4 + 0x5c)
                                    int32_t var_e0_2 = 1
                                    int32_t eax_43
                                    eax_43.b = arg8 == 2
                                    int32_t var_d0_2 = eax_43
                                    int128_t var_20_3 = arg2.o
                                    int64_t var_10_2 = 0
                                    int32_t eax_44
                                    
                                    if (var_b5 == 0)
                                        eax_44 = data_b604e0
                                        
                                        if (eax_44 == 0xffffffff)
                                            eax_44 = 0
                                    
                                    if (var_b5 != 0 || arg3 != eax_44 || arg8 != 2)
                                        edx_14 = nullptr
                                    else
                                        edx_14 = arg8 - 1
                                    
                                    int32_t var_190_17 = var_c4.d
                                    var_194_12 = &var_8c
                                    var_198_9 = arg8
                                    eax_34 = &var_28:8
                                    var_19c_3 = &var_28:8
                                    ecx_21 = arg2 + 0x258
                                    goto label_5f2ad9
                                case 3
                                    int32_t var_dc_3 = *(arg4 + 0x5c)
                                    int64_t var_d8_3 = 0
                                    void* var_190_18 = &var_28:8
                                    int32_t var_e0_3 = 1
                                    int32_t var_194_14 = 0
                                    int128_t var_174 = xmm1_1
                                    int32_t var_17c = 1
                                    int128_t var_164 = xmm2_1
                                    int32_t var_198_10 = 8
                                    var_154.o = xmm3_1
                                    int32_t var_d0_3 = 0
                                    var_144 = xmm4_1
                                    int32_t var_b4[0xa]
                                    int32_t* var_19c_4 = &var_b4
                                    int128_t var_134_1 = xmm5_1
                                    int128_t var_124_1 = xmm6_1
                                    int128_t var_20_4 = arg2.o
                                    __builtin_memcpy(&var_b4, &var_17c, 0x88)
                                    int64_t var_10_3 = var_d8_3
                                    int32_t* eax_46 = sub_6371b0(arg2 + 0x258, var_19c_4, 
                                        var_198_10, var_194_14, var_190_18)
                                    CookieCheckFunction(eax_46)
                                    return eax_46
                    else
                        void var_138
                        
                        if (ecx_7 != 0x3f1)
                            if (ecx_7 == 0x3ee || ecx_7 == 0x3f0 || ecx_7 == 0x3ef)
                                int32_t eax_29 =
                                    sub_5ce300(var_c0, arg4, arg2, var_c4, *var_c0, var_c0[1])
                                int32_t ebx_2 = *(arg4 + 0x60)
                                int32_t esi_3 = *(arg4 + 0x5c)
                                edx_7 = memset(&var_138, 0, 0x40)
                                int32_t var_150_3 = esi_3
                                uint32_t var_14c_3 = arg3
                                var_154 = 0x15
                                int32_t var_148_3 = eax_29
                                var_144.d = ebx_2
                                var_144:4.d = *(arg4 + 0x64)
                                var_104:0xc.d = arg2
                                goto label_5f2a08
                            
                            uint32_t ecx_13 = data_b604e0
                            int32_t eax_12 = data_b7fcf4
                            
                            if (var_b5 != 0)
                                goto label_5f26e7
                            
                            if (*(arg4 + 0x5c) != 2)
                                goto label_5f25c6
                            
                            if (*(arg4 + 0x1c28) == eax_12)
                            label_5f26c6:
                                
                                if (edx_5 == 7 && *(arg4 + 0x1c28) != eax_12)
                                    uint32_t eax_19 = ecx_13
                                    
                                    if (ecx_13 == 0xffffffff)
                                        eax_19 = 0
                                    
                                    if (arg3 != eax_19)
                                        goto label_5f26a2
                                    
                                    eax_12 = data_b7fcf4
                                
                            label_5f26e7:
                                
                                if (*(arg4 + 0x5c) != 0x3ec || var_b5 != 0
                                        || *(arg4 + 0x1c28) == eax_12)
                                    goto label_5f279a
                                
                                uint32_t eax_20 = ecx_13
                                
                                if (ecx_13 == 0xffffffff)
                                    eax_20 = 0
                                
                                if (arg3 != eax_20)
                                    if (edx_5 == 0x14 || edx_5 == 4 || edx_5 == 0xb)
                                        goto label_5f26a2
                                else if (edx_5 == 0x14)
                                    goto label_5f26a2
                                
                                if (*(arg4 + 0x1c28) == data_b7fcf4)
                                    goto label_5f279a
                                
                                uint32_t eax_22 = ecx_13
                                
                                if (ecx_13 == 0xffffffff)
                                    eax_22 = 0
                                
                                if (arg3 != eax_22 || edx_5 != 4)
                                    goto label_5f279a
                                
                                if (sub_5cbaa0(eax_22, edx_5, arg2, 0, 0x80) != 0)
                                    goto label_5f26a2
                                
                                ecx_13 = data_b604e0
                                edx_5 = arg8
                            label_5f279a:
                                eax_2 = *(arg4 + 0x5c)
                                
                                if (eax_2 != 0x3eb)
                                    bool cond:5_1 = eax_2 != 0x3ea
                                    eax_2.b = var_b5
                                    
                                    if (cond:5_1)
                                        if (eax_2.b != 0)
                                            goto label_5f2916
                                        
                                        if (*(arg4 + 0x5c) != 0x45f)
                                            eax_2 = data_b7fcf4
                                        label_5f28d6:
                                            
                                            if (*(arg4 + 0x2c) == 3)
                                                if (*(arg4 + 0x1c28) == eax_2 || edx_5 != 0xc)
                                                    goto label_5f2916
                                                
                                                goto label_5f26a2
                                            
                                            var_190_1 = "PileIsOpen"
                                            var_194_1 = 0xaf0
                                            ecx = "gfx.type == DOMGFX_PILE"
                                        else
                                            if (*(arg4 + 0x2c) == 3)
                                                eax_2 = data_b7fcf4
                                                
                                                if (*(arg4 + 0x1c28) == eax_2)
                                                    goto label_5f28d6
                                                
                                                if (ecx_13 == 0xffffffff)
                                                    ecx_13 = 0
                                                
                                                if (arg3 != ecx_13)
                                                    goto label_5f28d6
                                                
                                                goto label_5f26a2
                                            
                                            var_190_1 = "PileIsOpen"
                                            var_194_1 = 0xaf0
                                            ecx = "gfx.type == DOMGFX_PILE"
                                    else
                                        if (eax_2.b != 0)
                                            goto label_5f2916
                                        
                                        if (*(arg4 + 0x2c) == 3)
                                            eax_2 = data_b7fcf4
                                            
                                            if (*(arg4 + 0x1c28) == eax_2)
                                                goto label_5f28d6
                                            
                                            if (ecx_13 == 0xffffffff)
                                                ecx_13 = 0
                                            
                                            if (arg3 == ecx_13 || (edx_5 != 4 && edx_5 != 0xb))
                                                goto label_5f28d6
                                            
                                            goto label_5f26a2
                                        
                                        var_190_1 = "PileIsOpen"
                                        var_194_1 = 0xaf0
                                        ecx = "gfx.type == DOMGFX_PILE"
                                else
                                    eax_2.b = var_b5
                                    
                                    if (eax_2.b != 0)
                                    label_5f2916:
                                        eax_2 = sub_5ce300(var_c0, arg4, arg2, var_c4, *var_c0, 
                                            var_c0[1])
                                        int32_t ecx_19 = 6
                                        
                                        if (*(arg4 + 0x2c) == 3)
                                            if (*(arg4 + 0x1c28) == data_b7fcf4)
                                                ecx_19 = 0x15
                                            
                                            int32_t* eax_27
                                            eax_27, edx_7 = sub_5cc540(&var_154, *(arg4 + 0x5c), 
                                                ecx_19, &var_154, *(arg4 + 0x60), *(arg4 + 0x64), 
                                                arg3, eax_2, arg2)
                                            xmm1_1 = *eax_27
                                            xmm2_1 = *(eax_27 + 0x10)
                                            xmm3_1 = *(eax_27 + 0x20)
                                            xmm4_1 = *(eax_27 + 0x30)
                                            xmm5_1 = *(eax_27 + 0x40)
                                            xmm6_1 = *(eax_27 + 0x50)
                                            goto label_5f2a3f
                                        
                                        var_190_1 = "PileIsOpen"
                                        var_194_1 = 0xaf0
                                        ecx = "gfx.type == DOMGFX_PILE"
                                    else
                                        if (*(arg4 + 0x2c) == 3)
                                            eax_2 = data_b7fcf4
                                            
                                            if (*(arg4 + 0x1c28) == eax_2)
                                                goto label_5f28d6
                                            
                                            if (ecx_13 == 0xffffffff)
                                                ecx_13 = 0
                                            
                                            if ((arg3 == ecx_13 || (edx_5 != 4 && edx_5 != 0xb))
                                                    && edx_5 != 0xc)
                                                goto label_5f28d6
                                            
                                            goto label_5f26a2
                                        
                                        var_190_1 = "PileIsOpen"
                                        var_194_1 = 0xaf0
                                        ecx = "gfx.type == DOMGFX_PILE"
                            else
                                uint32_t eax_13 = ecx_13
                                
                                if (ecx_13 == 0xffffffff)
                                    eax_13 = 0
                                
                                if (var_f0_1.d != eax_13 || edx_5 == 0x13)
                                label_5f26a2:
                                    int128_t* eax_18 =
                                        sub_5f1e60(&var_154, arg2, arg3, &var_154, arg4, var_c0, 0)
                                    CookieCheckFunction(eax_18)
                                    return eax_18
                                
                                eax_12 = data_b7fcf4
                            label_5f25c6:
                                
                                if (*(arg4 + 0x1c28) == eax_12)
                                    goto label_5f26c6
                                
                                eax_2 = ecx_13
                                
                                if (ecx_13 == 0xffffffff)
                                    eax_2 = 0
                                
                                if (arg3 == eax_2 || edx_5 != 3)
                                    eax_12 = data_b7fcf4
                                    
                                    if (*(arg4 + 0x1c28) == eax_12)
                                        goto label_5f26c6
                                    
                                    if (edx_5 == 6)
                                        uint32_t eax_14 = ecx_13
                                        
                                        if (ecx_13 == 0xffffffff)
                                            eax_14 = 0
                                        
                                        if (arg3 != eax_14)
                                            goto label_5f26a2
                                        
                                        eax_12 = data_b7fcf4
                                    
                                    if (*(arg4 + 0x1c28) == eax_12 || edx_5 != 5)
                                        goto label_5f26c6
                                    
                                    int32_t eax_15 = *(arg4 + 0x5c)
                                    
                                    if (eax_15 == 0x3eb || eax_15 == 0x3ec)
                                        goto label_5f26a2
                                    
                                    if (eax_15 != 0x3ea)
                                        goto label_5f279a
                                    
                                    uint32_t eax_16 = ecx_13
                                    
                                    if (ecx_13 == 0xffffffff)
                                        eax_16 = 0
                                    
                                    if (arg3 == eax_16)
                                        goto label_5f279a
                                    
                                    goto label_5f26a2
                                
                                if (*(arg4 + 0x5c) == 0x3e9)
                                    goto label_5f26a2
                                
                                var_190_1 = "DomMoveCard"
                                var_194_1 = 0x7783
                                ecx = "pileDest.pile.where == CW_PLAYER_IN_PLAY"
                        else
                            if (*(arg4 + 0x58) == arg3)
                                uint32_t eax_9 = sub_5cd0a0(eax_2, arg3, arg2, 0xffffffff)
                                *(arg2 + 0xa4) = 0x3f1
                                *(arg2 + 0x9c) = *(arg4 + 0x1c28)
                                int32_t edi_1 = *(arg4 + 0x60)
                                int32_t ebx_1 = *(arg4 + 0x64)
                                int32_t esi_2 = *(arg4 + 0x5c)
                                edx_7 = memset(&var_138, 0, 0x40)
                                uint32_t var_14c_2 = arg3
                                int32_t var_150_2 = esi_2
                                var_154 = 0x10
                                uint32_t var_148_2 = eax_9
                                var_144.d = edi_1
                                var_144:4.d = ebx_1
                                var_104:0xc.d = arg2
                                goto label_5f2a08
                            
                            var_190_1 = "DomMoveCard"
                            var_194_1 = 0x7760
                            ecx = "pileDest.pile.owner == who"
                else
                    var_190_1 = "DomMoveCard"
                    var_194_1 = 0x7752
                    ecx = "pileDest.type == DOMGFX_PILE"
    else
        var_190_1 = "DomMoveCard"
        var_194_1 = 0x7722
        ecx = "pileDest.pile.where != CW_BOARD_MOUSE"
else
    var_190_1 = "DomMoveCard"
    var_194_1 = 0x7721
    ecx = "gfx.card.where != CW_BOARD_MOUSE"

sub_63b870(eax_2, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_194_1, 
    var_190_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
