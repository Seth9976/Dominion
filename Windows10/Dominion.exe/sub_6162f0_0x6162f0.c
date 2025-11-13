// 函数: sub_6162f0
// 地址: 0x6162f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76b2dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t ecx = __chkstk(0x75f4)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t edi = ecx
int32_t* eax_3 = arg1
void* ecx_1 = data_cc8d5c
int32_t* var_75f4 = eax_3
*eax_3 = 0
char const* const var_2c_1
int32_t var_28_1
char const* const var_24_2
char* ecx_2

if (ecx_1 == 0)
label_61633d:
    var_24_2 = "GetClient"
    var_28_1 = 0x7b
    var_2c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_2 = "gClient"
label_617a2b:
    sub_63b870(eax_3, &data_801800, ecx_2, var_2c_1, var_28_1, var_24_2)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

uint32_t result

if (*(ecx_1 + 0xc) != *(ecx_1 + 0x10))
    sub_63b7f0("failed to submit gfx click, waiting")
label_616368:
    result = 0
label_6179f9:
    fsbase->NtTib.ExceptionList = ExceptionList
    CookieCheckFunction(result)
    return result

eax_3 = sub_6160a0(0xb80ad8, edi)
int32_t* esi_1 = eax_3

if (esi_1 == 0x70d || esi_1 == 0x718)
    sub_5cbfe0(edi, 0)
    result = 2
    goto label_6179f9

void* ecx_3 = data_cc8d5c

if (ecx_3 == 0)
    goto label_61633d

if (data_b80b48 != *(ecx_3 + 0x7590))
    goto label_616368

eax_3 = data_b80afc

if (eax_3 == 0)
    goto label_616368

if (*(edi + 0x2c) != 1)
    if (eax_3 == 7)
        eax_3 = *(sub_571b30(esi_1, sub_5cf7e0()) + 0x9c) & 0x100000
        
        if (eax_3 != 0)
            goto label_616465
        
        data_b80b68 = esi_1
    label_61644c:
        ecx_3 = data_cc8d5c
        data_b80b64 = 1
        
        if (ecx_3 != 0)
            goto label_616417
        
        goto label_61633d
    
label_616465:
    void* ebx = data_b80b30
    
    if (ebx != 0)
        if (*(edi + 0x2c) == 3)
            if (*(edi + 0x30) == 0)
                goto label_6166e5
            
            goto label_6164bc
        
        int32_t ecx_9 = data_b80b14
        int32_t eax_9 = 0
        
        if (ecx_9 s> 0)
            int32_t edx_5 = *(edi + 0x98)
            
            while (true)
                if (*(data_b80b0c + (eax_9 << 2)) == edx_5)
                    int32_t ecx_12 = data_b80b64
                    int32_t eax_15 = 0
                    
                    if (ecx_12 s> 0)
                        edx_5 = *(edi + 0x98)
                        
                        do
                            if ((&data_b80b68)[eax_15] == edx_5)
                                goto label_61649a
                            
                            eax_15 += 1
                        while (eax_15 s< ecx_12)
                    
                    if (*(edi + 0xa0) != data_b80b44)
                        goto label_61649a
                    
                    if (*(edi + 0xa4) != 0x3ea)
                        goto label_61649a
                    
                    eax_3 = ebx - 1
                    
                    if (eax_3 u> 5)
                        var_24_2 = "DomGfxActivateInt"
                        var_28_1 = 0xc7ad
                        goto label_617a1c
                    
                    uint32_t var_28_2
                    int32_t var_24_4
                    
                    switch (eax_3)
                        case nullptr, 1
                            var_24_4 = 0
                            var_28_2 = 4
                        label_61657c:
                            
                            if (sub_5cbaa0(eax_3, edx_5, edi, var_28_2, var_24_4) == 0)
                                goto label_616368
                            
                            eax_3 = data_cc8d5c
                            
                            if (data_b80afc != 3)
                                data_b80b64 = 0
                                
                                if (eax_3 == 0)
                                    goto label_61633d
                            else
                                data_b817f8 = 0x475
                                data_b80b64 = 1
                                
                                if (eax_3 == 0)
                                    goto label_61633d
                            
                            eax_3 = sub_5ee590(eax_3[0x1d64], &data_b80af8)
                            
                            if (*(edi + 0x2c) != 0)
                                var_24_2 = "DomGfxActivateInt"
                                var_28_1 = 0xc7bf
                                ecx_2 = "gfx.type == DOMGFX_CARD"
                                goto label_617a21
                            
                            void var_275c
                            sub_5939a0(&var_275c, &data_b80af8)
                            void* ecx_16 = data_cc8d5c
                            eax_3 = *(edi + 0x98)
                            int32_t* var_26ec_1 = eax_3
                            int32_t var_2758_1 = 1
                            int32_t var_26f0_1 = 1
                            
                            if (ecx_16 == 0)
                                goto label_61633d
                            
                            void* eax_18 = sub_5cc5e0(*(ecx_16 + 0x7590))
                            eax_3 = *(eax_18 + 0x4080)
                            
                            if (eax_3 s>= 3)
                                var_24_2 = "PreSubmitAction"
                                var_28_1 = 0x6c13
                                ecx_2 = "pgui.numPreSubmittedActions < MAX_PRESUBMITTED_ACTIONS"
                                goto label_617a21
                            
                            __builtin_memcpy(eax_3 * 0xd18 + 0x1938 + eax_18, &var_275c, 0xd18)
                            *(eax_18 + 0x4080) += 1
                            sub_5e4ca0()
                            result = 1
                            goto label_6179f9
                        case 2, 3
                            var_24_4 = 0
                            var_28_2 = 2
                            goto label_61657c
                        case 4
                            goto label_616368
                        case 5
                            var_24_4 = 0
                            var_28_2 = 0x40000
                            goto label_61657c
                else
                    eax_9 += 1
                    
                    if (eax_9 s>= ecx_9)
                        break
    
label_61649a:
    
    if (*(edi + 0x2c) != 3 || *(edi + 0x30) != 0)
    label_6164bc:
        void* eax_12 = *(sub_5dea30(0xb80ad8, edi) + 0x98) & 0x10000000
        
        if (eax_12 == 0 || data_b80b08 == 0xbe)
            goto label_6166e5
        
        if (sub_5efe00(eax_12, nullptr, edi, 0) == 0)
            goto label_6166e5
        
        eax_3 = *(edi + 0x2c)
        
        if (eax_3 == 0)
            sub_616150(edi)
            result = 2
            goto label_6179f9
        
        if (eax_3 == 3)
            eax_3 = sub_5cba00(*(edi + 0x70))
            
            if (eax_3[0xb] == 0)
                sub_616150(eax_3)
                result = 0
                goto label_6179f9
            
            var_24_2 = "DomGfxActivateInt"
            var_28_1 = 0xc7df
            ecx_2 = "gfxCard.type == DOMGFX_CARD"
        else
            var_24_2 = "DomGfxActivateInt"
            var_28_1 = 0xc7dd
            ecx_2 = "gfx.type == DOMGFX_PILE"
    else
    label_6166e5:
        eax_3 = *(edi + 0x2c)
        uint32_t var_75f8
        
        if (eax_3 == 3)
            if (sub_5deb60(edi, nullptr) == 0)
                if (sub_5dc840(edi) == 0 || *(edi + 0x37c) - 0x27 u> 0x20)
                    if (*(edi + 0x5c) - 0x44c u> 0x26)
                        goto label_616368
                    
                    sub_5ce8b0(edi)
                    result = 0
                    goto label_6179f9
                
                int32_t eax_23 = *(edi + 0x30)
                
                if (eax_23 == 0x70d || eax_23 == 0x718)
                    sub_5cbfe0(edi, 0)
                    result = 0
                else
                    sub_5d09f0(edi, 0)
                    result = 0
                
                goto label_6179f9
            
            eax_3 = data_b80b08
            
            if (eax_3 != 0x51)
                if (eax_3 == 2 || eax_3 == 0xfd)
                    void* edx_10 = data_cc8d5c
                    
                    if (edx_10 == 0)
                        goto label_61633d
                    
                    eax_3 = sub_622830(eax_3, *(edx_10 + 0x7590), 0x16, 4)
                    void* edx_12 = data_cc8d5c
                    char var_75ed_1 = eax_3.b
                    
                    if (edx_12 == 0)
                        goto label_61633d
                    
                    char eax_26 = sub_622830(eax_3, *(edx_12 + 0x7590), 0x16, 7)
                    uint32_t eax_27 = sub_5cba00(*(edi + 0x70))
                    bool cond:1_1 = data_b824dc != 0
                    uint32_t esi_3 = eax_27
                    var_75f8 = esi_3
                    
                    if (cond:1_1)
                        ebx.b = 0
                    else
                        int32_t esi_4 = data_b80b14
                        int32_t ecx_24 = 0
                        
                        if (esi_4 s<= 0)
                        label_616834:
                            esi_3 = var_75f8
                            ebx.b = 0
                        else
                            while (true)
                                int32_t edx_14 = *(data_b80b0c + (ecx_24 << 2))
                                
                                if (*(eax_27 + 0x98) == zx.d(edx_14.w))
                                    esi_3 = var_75f8
                                    ebx.b = (edx_14 & 0x50000) != 0
                                    break
                                
                                ecx_24 += 1
                                
                                if (ecx_24 s>= esi_4)
                                    goto label_616834
                    
                    int32_t ecx_25 = data_b80b64
                    int32_t eax_30 = 0
                    
                    if (ecx_25 s> 0)
                        while ((&data_b80b68)[eax_30] != *(esi_3 + 0x98))
                            eax_30 += 1
                            
                            if (eax_30 s>= ecx_25)
                                goto label_616875
                    
                    if (ecx_25 s<= 0 || ebx.b != 0)
                    label_616875:
                        
                        if (var_75ed_1 != 0)
                            data_b80afc = 0xb
                        label_616cc0:
                            data_b80b64 = 1
                            data_b80b68 = *(esi_3 + 0x98)
                            eax_3 = data_cc8d5c
                            
                            if (eax_3 == 0)
                                goto label_61633d
                            
                            sub_5ee590(eax_3[0x1d64], &data_b80af8)
                            result = 1
                            goto label_6179f9
                        
                        if (eax_26 != 0)
                            data_b80afc = 0xa
                            goto label_616cc0
                    
                    eax_3 = data_b80b08
                
                if (eax_3 == 0x2c || eax_3 == 0x2d)
                    if (*(edi + 0x2c) == 3)
                        eax_3 = sub_5cba00(*(edi + 0x70))
                        
                        if (eax_3[0x29] != 2)
                            void* ecx_46 = data_cc8d5c
                            data_b80b68 = 0x1a
                            data_b80b64 = 1
                            
                            if (ecx_46 == 0)
                                goto label_61633d
                            
                            sub_5ee590(*(ecx_46 + 0x7590), &data_b80af8)
                            void var_418c
                            sub_5939a0(&var_418c, &data_b80af8)
                            void* ecx_49 = data_cc8d5c
                            eax_3 = eax_3[0x26]
                            int32_t* var_411c_1 = eax_3
                            int32_t var_4188_1 = 1
                            int32_t var_4120_1 = 1
                            
                            if (ecx_49 == 0)
                                goto label_61633d
                            
                            void* eax_38 = sub_5cc5e0(*(ecx_49 + 0x7590))
                            eax_3 = *(eax_38 + 0x4080)
                            
                            if (eax_3 s< 3)
                                result = 1
                                __builtin_memcpy(eax_3 * 0xd18 + 0x1938 + eax_38, &var_418c, 0xd18)
                                *(eax_38 + 0x4080) += 1
                                goto label_6179f9
                            
                            var_24_2 = "PreSubmitAction"
                            var_28_1 = 0x6c13
                            ecx_2 = "pgui.numPreSubmittedActions < MAX_PRESUBMITTED_ACTIONS"
                        else
                            var_24_2 = "DomGfxActivateInt"
                            var_28_1 = 0xc835
                            ecx_2 = "gfxCard.card.where != CW_BOARD_TRASH"
                    else
                        var_24_2 = "DomGfxActivateInt"
                        var_28_1 = 0xc832
                        ecx_2 = "gfx.type == DOMGFX_PILE"
                else if (eax_3 != 0xd2)
                    if (eax_3 != 0x107)
                        goto label_616aa2
                    
                    void var_d2c
                    eax_3 = sub_5939a0(&var_d2c, &data_b80af8)
                    void* ecx_33 = data_cc8d5c
                    int32_t var_cbc_1 = 0xbf
                    int32_t var_cc0_1 = 1
                    
                    if (ecx_33 == 0)
                        goto label_61633d
                    
                    sub_5ee590(*(ecx_33 + 0x7590), &var_d2c)
                    uint32_t eax_32 = sub_5cba00(*(edi + 0x70))
                    void* ecx_36 = data_cc8d5c
                    int32_t var_d28_1 = 1
                    int32_t var_cc0_2 = 1
                    eax_3 = *(eax_32 + 0x98)
                    int32_t* var_cbc_2 = eax_3
                    
                    if (ecx_36 == 0)
                        goto label_61633d
                    
                    void* eax_33 = sub_5cc5e0(*(ecx_36 + 0x7590))
                    eax_3 = *(eax_33 + 0x4080)
                    
                    if (eax_3 s< 3)
                        result = 1
                        __builtin_memcpy(eax_3 * 0xd18 + 0x1938 + eax_33, &var_d2c, 0xd18)
                        *(eax_33 + 0x4080) += 1
                        goto label_6179f9
                    
                    var_24_2 = "PreSubmitAction"
                    var_28_1 = 0x6c13
                    ecx_2 = "pgui.numPreSubmittedActions < MAX_PRESUBMITTED_ACTIONS"
                else if (*(edi + 0x2c) == 3)
                    eax_3 = sub_5cba00(*(edi + 0x70))
                    int32_t* esi_5 = eax_3
                    bool cond:3_1 = esi_5[0x29] != 0x462
                    data_b80b64 = 1
                    int32_t ecx_28
                    
                    if (cond:3_1)
                        eax_3 = data_cc8d5c
                        data_b80b68 = 0x85
                        
                        if (eax_3 == 0)
                            goto label_61633d
                        
                        ecx_28 = eax_3[0x1d64]
                    else
                        void* ecx_27 = data_cc8d5c
                        data_b80b68 = 0x86
                        
                        if (ecx_27 == 0)
                            goto label_61633d
                        
                        ecx_28 = *(ecx_27 + 0x7590)
                    
                    sub_5ee590(ecx_28, &data_b80af8)
                    void var_3474
                    sub_5939a0(&var_3474, &data_b80af8)
                    void* ecx_30 = data_cc8d5c
                    eax_3 = esi_5[0x26]
                    int32_t* var_3404_1 = eax_3
                    int32_t var_3470_1 = 1
                    int32_t var_3408_1 = 1
                    
                    if (ecx_30 == 0)
                        goto label_61633d
                    
                    void* eax_31 = sub_5cc5e0(*(ecx_30 + 0x7590))
                    eax_3 = *(eax_31 + 0x4080)
                    
                    if (eax_3 s< 3)
                        result = 1
                        __builtin_memcpy(eax_3 * 0xd18 + 0x1938 + eax_31, &var_3474, 0xd18)
                        *(eax_31 + 0x4080) += 1
                        goto label_6179f9
                    
                    var_24_2 = "PreSubmitAction"
                    var_28_1 = 0x6c13
                    ecx_2 = "pgui.numPreSubmittedActions < MAX_PRESUBMITTED_ACTIONS"
                else
                    var_24_2 = "DomGfxActivateInt"
                    var_28_1 = 0xc846
                    ecx_2 = "gfx.type == DOMGFX_PILE"
            else
                if (*(edi + 0x30) == 0x70d)
                    sub_5cbfe0(edi, 0)
                    result = 0
                    goto label_6179f9
                
            label_616aa2:
                
                if (data_b80afc == 8)
                    eax_3 = *(edi + 0x30)
                    data_b80b68 = eax_3
                    goto label_61644c
                
                int32_t ecx_38 = *(edi + 0x70)
                
                if (ecx_38 != 0)
                    uint32_t eax_34 = sub_5cba00(ecx_38)
                    
                    if (data_b80b54 != 1 && data_b80b08 != 2)
                        *var_75f4 = sub_615dd0(edi, 0)
                        result = 2
                        goto label_6179f9
                    
                    eax_3 = *(eax_34 + 0x98)
                    void* ecx_41 = data_cc8d5c
                    data_b80b68 = eax_3
                    data_b80b64 = 1
                    
                    if (ecx_41 == 0)
                        goto label_61633d
                    
                    void* eax_36
                    int32_t edx_19
                    eax_36, edx_19 = sub_5ee590(*(ecx_41 + 0x7590), &data_b80af8)
                    
                    if (*(edi + 0x2c) == 3)
                        eax_36 = *(edi + 0x70)
                        
                        if (eax_36 != 0)
                            uint32_t ecx_43 = zx.d(eax_36.w)
                            
                            if (ecx_43 u< data_b809e4)
                                edi = ecx_43 * 0x1c30 + data_b809e0
                                
                                if (*(edi + 0x1c28) != eax_36)
                                    edi = 0
                            else
                                edi = 0
                        else
                            edi = 0
                    
                    if (edi != 0 && *(edi + 0x2c) == 0)
                        uint32_t eax_37 = sub_5cbaa0(eax_36, edx_19, edi, 4, 0)
                        
                        if (eax_37.b != 0)
                            sub_6161f0(eax_37, &data_b80980, &data_b80af8, arg2, 1)
                    
                    result = 2
                    goto label_6179f9
                
                var_24_2 = "DomGfxActivateInt"
                var_28_1 = 0xc879
                ecx_2 = "gfx.pile.headCard"
        else if (eax_3 != 0)
            var_24_2 = "DomGfxActivateInt"
            var_28_1 = 0xca17
        label_617a1c:
            ecx_2 = "Halt"
        else
            uint32_t esi_7 = edi
            void* eax_40 = sub_4dad50()
            
            if (eax_40 == 1)
                eax_40 = sub_5cba00(*(edi + 0x148))
                esi_7 = eax_40
            
            if (sub_5efe00(eax_40, nullptr, esi_7, 1) == 0)
                goto label_616368
            
            char eax_42
            int32_t i
            eax_42, i = sub_610fb0(esi_7)
            
            if (eax_42 == 0)
                goto label_616368
            
            eax_3 = data_b80b08
            uint32_t result_1 = 1
            
            if (eax_3 == 0x4d || eax_3 == 0x4e)
                int32_t edx_59 = 2
                
                if (eax_3 == 0x4e)
                    edx_59 = 1
                
                *var_75f4 = sub_615dd0(esi_7, edx_59)
                result = 2
                goto label_6179f9
            
            if (eax_3 == 2 || eax_3 == 0xfd)
                void* edx_21 = data_cc8d5c
                
                if (edx_21 == 0)
                    goto label_61633d
                
                eax_3 = sub_622830(eax_3, *(edx_21 + 0x7590), 0x16, 4)
                void* edx_23 = data_cc8d5c
                char var_75ee_2 = eax_3.b
                
                if (edx_23 == 0)
                    goto label_61633d
                
                char eax_43
                eax_43, i = sub_622830(eax_3, *(edx_23 + 0x7590), 0x16, 7)
                result_1:1.b = eax_43
                char var_75ed_2 = result_1:1.b
                
                if (data_b824dc != 0)
                    result_1.b = 0
                else
                    result_1 = data_b80b14
                    int32_t ecx_55 = 0
                    
                    if (result_1 s<= 0)
                    label_616dfb:
                        result_1:1.b = var_75ed_2
                        result_1.b = 0
                    else
                        while (true)
                            i = *(data_b80b0c + (ecx_55 << 2))
                            
                            if (*(edi + 0x98) == zx.d(i.w))
                                result_1:1.b = var_75ed_2
                                result_1.b = (i & 0x50000) != 0
                                break
                            
                            ecx_55 += 1
                            
                            if (ecx_55 s>= result_1)
                                goto label_616dfb
                
                int32_t ecx_56 = data_b80b64
                int32_t eax_46 = 0
                
                if (ecx_56 s> 0)
                    i = *(edi + 0x98)
                    
                    while ((&data_b80b68)[eax_46] != i)
                        eax_46 += 1
                        
                        if (eax_46 s>= ecx_56)
                            goto label_616e3a
                
                if (ecx_56 s<= 0 || result_1.b != 0)
                label_616e3a:
                    
                    if (var_75ee_2 != 0)
                        data_b80afc = 0xb
                    label_617931:
                        data_b80b64 = 1
                        data_b80b68 = *(edi + 0x98)
                        eax_3 = data_cc8d5c
                        
                        if (eax_3 == 0)
                            goto label_61633d
                        
                        sub_5ee590(eax_3[0x1d64], &data_b80af8)
                        int32_t eax_100 = sub_5cbb20(edi)
                        void* eax_102 = sub_571b30(eax_100, sub_5cf7e0())
                        int32_t eax_106
                        
                        if (((*(eax_102 + 0x98) & 0x7f000400) | (*(eax_102 + 0x9c) & 0x940)) != 0)
                            eax_106 = *(sub_571b30(eax_100, sub_5cf7e0()) + 0x98) & 0x3000000
                        
                        if (((*(eax_102 + 0x98) & 0x7f000400) | (*(eax_102 + 0x9c) & 0x940)) != 0
                                && eax_106 == 0)
                            result = 2
                            goto label_6179f9
                        
                        result = 1
                        goto label_6179f9
                    
                    if (result_1:1.b != 0)
                        data_b80afc = 0xa
                        goto label_617931
                
                eax_3 = data_b80b08
                result_1 = 1
            
            if (eax_3 == 0xd0)
                int32_t eax_47 = 0
                
                if (data_b8097c s> 0)
                    uint32_t edi_14 = zx.d(data_b7fcfc)
                    
                    if (edi_14 u>= 0x320)
                        i = sub_591930()
                    
                    int32_t eax_48 = edi_14 * 0x64
                    eax_47 = sub_5d1140(eax_48, i, data_b80b44, *(eax_48 + &data_b82524))
                
                sub_615dd0(esi_7, eax_47)
                result = 2
                goto label_6179f9
            
            if (eax_3 != 0xd2)
                if (eax_3 == 0x2c || eax_3 == 0x2d)
                    if (*(edi + 0x2c) != 0)
                        var_24_2 = "DomGfxActivateInt"
                        var_28_1 = 0xc937
                        ecx_2 = "gfx.type == DOMGFX_CARD"
                    else if (*(edi + 0xa4) != 2)
                        void* ecx_119 = data_cc8d5c
                        data_b80b68 = 0x1a
                        data_b80b64 = 1
                        
                        if (ecx_119 == 0)
                            goto label_61633d
                        
                        sub_5ee590(*(ecx_119 + 0x7590), &data_b80af8)
                        void var_75ec
                        sub_5939a0(&var_75ec, &data_b80af8)
                        void* ecx_122 = data_cc8d5c
                        eax_3 = *(edi + 0x98)
                        int32_t var_75e8_1 = 1
                        int32_t* var_757c_1 = eax_3
                        int32_t var_7580_1 = 1
                        
                        if (ecx_122 == 0)
                            goto label_61633d
                        
                        void* eax_98 = sub_5cc5e0(*(ecx_122 + 0x7590))
                        eax_3 = *(eax_98 + 0x4080)
                        
                        if (eax_3 s< 3)
                            result = 1
                            __builtin_memcpy(eax_3 * 0xd18 + 0x1938 + eax_98, &var_75ec, 0xd18)
                            *(eax_98 + 0x4080) += 1
                            goto label_6179f9
                        
                        var_24_2 = "PreSubmitAction"
                        var_28_1 = 0x6c13
                        ecx_2 = "pgui.numPreSubmittedActions < MAX_PRESUBMITTED_ACTIONS"
                    else if (eax_3 != 0x2d)
                        void* ecx_114 = data_cc8d5c
                        data_b80b68 = 0x1b
                        data_b80b64 = 1
                        
                        if (ecx_114 == 0)
                            goto label_61633d
                        
                        sub_5ee590(*(ecx_114 + 0x7590), &data_b80af8)
                        void var_68d4
                        sub_5939a0(&var_68d4, &data_b80af8)
                        void* ecx_117 = data_cc8d5c
                        eax_3 = *(edi + 0x98)
                        int32_t var_68d0_1 = 1
                        int32_t* var_6864_1 = eax_3
                        int32_t var_6868_1 = 1
                        
                        if (ecx_117 == 0)
                            goto label_61633d
                        
                        void* eax_97 = sub_5cc5e0(*(ecx_117 + 0x7590))
                        eax_3 = *(eax_97 + 0x4080)
                        
                        if (eax_3 s< 3)
                            result = 1
                            __builtin_memcpy(eax_3 * 0xd18 + 0x1938 + eax_97, &var_68d4, 0xd18)
                            *(eax_97 + 0x4080) += 1
                            goto label_6179f9
                        
                        var_24_2 = "PreSubmitAction"
                        var_28_1 = 0x6c13
                        ecx_2 = "pgui.numPreSubmittedActions < MAX_PRESUBMITTED_ACTIONS"
                    else
                        var_24_2 = "DomGfxActivateInt"
                        var_28_1 = 0xc93a
                        ecx_2 =
                            "gDomClient.domState.g.yld.choiceUI.type != DOMUI_LURKER_CHOICE_EMPTY"
                else if (eax_3 != 0x114)
                    if (eax_3 != 0x107)
                        if (eax_3 == 0x33)
                            *(edi + 0xa0)
                            int32_t var_24_13 = 0
                            int32_t var_28_5 = 0
                            
                            if (*(edi + 0xa4) != 0x3eb)
                                void* eax_53 = sub_5cc4b0(var_28_5, var_24_13)
                                sub_5f2d80(eax_53, *(edi + 0x98), *(edi + 0xa0), eax_53, 
                                    &data_7feed4, 0, 0, 0xb, 0)
                                data_b7fcf0 = *(edi + 0x1c28)
                                sub_5cbfe0(eax_53, 0)
                                result = 1
                            else
                                void* eax_52 = sub_5cc4b0(var_28_5, var_24_13)
                                sub_5f2d80(eax_52, *(edi + 0x98), *(edi + 0xa0), eax_52, 
                                    &data_7feed4, 0, 0, 0xb, 0)
                                data_b7fcf0 = 0
                                result = 1
                            
                            goto label_6179f9
                        
                        void* eax_56 = sub_5d4360(sub_5cba00(*(edi + 0x9c)))
                        
                        if (eax_56 == 5 || eax_56 == 6 || eax_56 == 0xa || eax_56 == 0xb)
                            goto label_616368
                        
                        int32_t eax_57 = data_b80b08
                        
                        if (eax_57 == 0x36)
                            *var_75f4 = sub_615dd0(esi_7, eax_57 - 0x34)
                            result = 2
                            goto label_6179f9
                        
                        if (eax_57 == 0x133)
                            *var_75f4 = sub_615dd0(esi_7, 3)
                            result = 2
                            goto label_6179f9
                        
                        int32_t ecx_84 = data_b80b54
                        
                        if (ecx_84 == 1 || eax_57 == 3 || eax_57 == 0xfd || eax_57 == 2)
                            int32_t edx_35 = data_b7fcf4
                            
                            if (edx_35 != 0)
                                uint32_t ecx_87 = zx.d(edx_35.w)
                                
                                if (ecx_87 u< data_b809e4)
                                    void* ecx_89 = ecx_87 * 0x1c30 + data_b809e0
                                    
                                    if (*(ecx_89 + 0x1c28) == edx_35 && ecx_89 != 0)
                                        int32_t ecx_90 = *(ecx_89 + 0x5c)
                                        
                                        if (ecx_90 != 0x3ee && ecx_90 != 0x3ef && ecx_90 != 0x3f0)
                                            sub_5cbf20()
                                            eax_57 = data_b80b08
                            
                            if (eax_57 == 0xb2)
                                char* ecx_91 = data_b80b44
                                uint32_t esi_9 = zx.d((*(edi + 0x98)).w)
                                char* var_7600 = ecx_91
                                
                                if (esi_9 u>= 0x320)
                                    sub_591930()
                                    ecx_91 = var_7600
                                
                                int32_t eax_62 = esi_9 * 0x64
                                int32_t esi_10 = *(eax_62 + &data_b82524)
                                void* const i_1
                                
                                if (esi_10 == 0x101)
                                    i_1 = sub_590c70(eax_62, ecx_91, 0xb80ad8, 0x454)
                                
                                if (esi_10 == 0x101 && i_1 != 0)
                                label_6173f6:
                                    
                                    if (sub_622830(i_1, data_b80b48, 0x1a, 2) != 0)
                                        data_19e2728 = data_b80b68
                                        data_19e272c = data_b80b64
                                        data_b80b68 = *(edi + 0x98)
                                        data_b80b64 = 1
                                        char* eax_67 = sub_4c89a0()
                                        sub_4d47c0(&var_7600, 
                                            "dom_msg_confirm_lost_in_the_woods_header")
                                        int32_t var_8_1 = 0
                                        char* eax_69
                                        int32_t ecx_95
                                        eax_69, ecx_95 = sub_571b30(sub_5cbb20(edi), 0x18)
                                        int32_t var_24_16 = 0
                                        sub_4e3fa0(eax_69, eax_69, &var_75f8, eax_67, ecx_95)
                                        var_8_1.b = 1
                                        char* var_7604
                                        sub_4d48c0(&var_75f8, 
                                            "dom_msg_confirm_lost_in_the_woods_body", &var_7604, 
                                            "[card]", &var_75f8)
                                        var_8_1.b = 2
                                        sub_4d47c0(&var_75f4, 
                                            "dom_msg_confirm_lost_in_the_woods_discard")
                                        var_8_1.b = 3
                                        char* var_75fc
                                        sub_63d720(&var_75fc, &data_801800)
                                        var_8_1.b = 4
                                        int32_t* var_24_18 = &var_7600
                                        data_8db6b0 = 0x21
                                        sub_63d850(&data_8db750, var_24_18)
                                        sub_63d850(&data_8db754, &var_7604)
                                        sub_63d850(&data_8db758, &var_75f4)
                                        sub_63d850(&data_8db75c, &var_75fc)
                                        data_8db760 = sub_617b40
                                        data_8db764 = sub_617b90
                                        var_8_1.b = 5
                                        
                                        if (data_cf65bc != 0)
                                            char* eax_71 = var_75fc
                                            
                                            if (eax_71 != 0 && *eax_71 != 0)
                                                char* eax_72 = sub_63d4e0(&var_75fc)
                                                int32_t temp0_1 = *(eax_72 + 4)
                                                *(eax_72 + 4) -= 1
                                                
                                                if (temp0_1 == 1)
                                                    sub_64c080(eax_72, *(eax_72 + 0xc) + 0x10)
                                        
                                        var_8_1.b = 6
                                        
                                        if (data_cf65bc != 0)
                                            int32_t* eax_73 = var_75f4
                                            
                                            if (eax_73 != 0 && *eax_73 != 0)
                                                char* eax_74 = sub_63d4e0(&var_75f4)
                                                int32_t temp1_1 = *(eax_74 + 4)
                                                *(eax_74 + 4) -= 1
                                                
                                                if (temp1_1 == 1)
                                                    sub_64c080(eax_74, *(eax_74 + 0xc) + 0x10)
                                                    var_75f4 = &data_801800
                                        
                                        var_8_1.b = 7
                                        
                                        if (data_cf65bc != 0)
                                            char* eax_75 = var_7604
                                            
                                            if (eax_75 != 0 && *eax_75 != 0)
                                                char* eax_76 = sub_63d4e0(&var_7604)
                                                int32_t temp2_1 = *(eax_76 + 4)
                                                *(eax_76 + 4) -= 1
                                                
                                                if (temp2_1 == 1)
                                                    sub_64c080(eax_76, *(eax_76 + 0xc) + 0x10)
                                                    var_7604 = &data_801800
                                        
                                        var_8_1.b = 8
                                        
                                        if (data_cf65bc != 0)
                                            uint32_t eax_77 = var_75f8
                                            
                                            if (eax_77 != 0 && *eax_77 != 0)
                                                char* eax_78 = sub_63d4e0(&var_75f8)
                                                int32_t temp3_1 = *(eax_78 + 4)
                                                *(eax_78 + 4) -= 1
                                                
                                                if (temp3_1 == 1)
                                                    sub_64c080(eax_78, *(eax_78 + 0xc) + 0x10)
                                                    var_75f8 = &data_801800
                                        
                                        int32_t var_8_2 = 9
                                        
                                        if (data_cf65bc != 0)
                                            char* eax_79 = var_7600
                                            
                                            if (eax_79 != 0 && *eax_79 != 0)
                                                char* eax_80 = sub_63d4e0(&var_7600)
                                                int32_t temp4_1 = *(eax_80 + 4)
                                                *(eax_80 + 4) -= 1
                                                
                                                if (temp4_1 == 1)
                                                    sub_64c080(eax_80, *(eax_80 + 0xc) + 0x10)
                                        
                                        result = 2
                                        goto label_6179f9
                                else
                                    for (i_1 = &data_7feac0; i_1 s< &data_7feaf8; i_1 += 4)
                                        if (*i_1 == esi_10)
                                            goto label_617683
                                    
                                    if (esi_10 != 0x104 && esi_10 != 0xd07 && esi_10 != 0x807)
                                        goto label_6173f6
                            
                        label_617683:
                            data_b80b68 = *(edi + 0x98)
                            data_b80b64 = 1
                            sub_5ee590(sub_4b95a0(), &data_b80af8)
                            int32_t eax_83 = sub_5cbb20(edi)
                            sub_5cf7e0()
                            
                            if (sub_576e60() != 0)
                                int32_t eax_89 =
                                    *(sub_571b30(eax_83, sub_5cf7e0()) + 0x98) & 0x3000000
                                
                                if (eax_89 == 0)
                                    result_1 = eax_89 + 2
                            
                            uint32_t eax_92 = data_b80b08 - 0x35
                            
                            if (eax_92 u<= 0xcd)
                                eax_92 = zx.d(lookup_table_617a64[eax_92])
                                
                                switch (eax_92)
                                    case 0
                                        result_1 = 2
                            
                            if (sub_5757f0(eax_92, (*(edi + 0x98)).w, 0xb80ad8, 4, 0) != 0)
                                int32_t eax_95
                                eax_95.b = *(edi + 0xa4) - 1 u<= 0x47
                                uint32_t eax_96 = zx.d(eax_95.b)
                                sub_6161f0(eax_96, &data_b80980, &data_b80af8, arg2, eax_96.b)
                        else
                            if (ecx_84 == 0xffffffff)
                                goto label_616368
                            
                            result_1 = 2
                            *var_75f4 = sub_615dd0(esi_7, 0)
                        
                        if (data_b80b08 == 0xa9)
                            result = 2
                            goto label_6179f9
                        
                        result = result_1
                        goto label_6179f9
                    
                    void var_1a44
                    eax_3 = sub_5939a0(&var_1a44, &data_b80af8)
                    void* ecx_69 = data_cc8d5c
                    int32_t var_19d4_1 = 0xbf
                    int32_t var_19d8_1 = 1
                    
                    if (ecx_69 == 0)
                        goto label_61633d
                    
                    sub_5ee590(*(ecx_69 + 0x7590), &var_1a44)
                    void* ecx_71 = data_cc8d5c
                    eax_3 = *(edi + 0x98)
                    int32_t var_1a40_1 = 1
                    int32_t* var_19d4_2 = eax_3
                    int32_t var_19d8_2 = 1
                    
                    if (ecx_71 == 0)
                        goto label_61633d
                    
                    void* eax_51 = sub_5cc5e0(*(ecx_71 + 0x7590))
                    eax_3 = *(eax_51 + 0x4080)
                    
                    if (eax_3 s< 3)
                        result = 1
                        __builtin_memcpy(eax_3 * 0xd18 + 0x1938 + eax_51, &var_1a44, 0xd18)
                        *(eax_51 + 0x4080) += 1
                        goto label_6179f9
                    
                    var_24_2 = "PreSubmitAction"
                    var_28_1 = 0x6c13
                    ecx_2 = "pgui.numPreSubmittedActions < MAX_PRESUBMITTED_ACTIONS"
                else if (*(edi + 0x2c) != 0)
                    var_24_2 = "DomGfxActivateInt"
                    var_28_1 = 0xc95a
                    ecx_2 = "gfx.type == DOMGFX_CARD"
                else if (*(edi + 0xa4) == 0x3ec)
                    void* ecx_63 = data_cc8d5c
                    data_b80b68 = 0xc9
                    data_b80b64 = 1
                    
                    if (ecx_63 == 0)
                        goto label_61633d
                    
                    sub_5ee590(*(ecx_63 + 0x7590), &data_b80af8)
                    void var_5bbc
                    sub_5939a0(&var_5bbc, &data_b80af8)
                    void* ecx_66 = data_cc8d5c
                    eax_3 = *(edi + 0x98)
                    int32_t* var_5b4c_1 = eax_3
                    int32_t var_5bb8_1 = 1
                    int32_t var_5b50_1 = 1
                    
                    if (ecx_66 == 0)
                        goto label_61633d
                    
                    void* eax_50 = sub_5cc5e0(*(ecx_66 + 0x7590))
                    eax_3 = *(eax_50 + 0x4080)
                    
                    if (eax_3 s< 3)
                        result = 1
                        __builtin_memcpy(eax_3 * 0xd18 + 0x1938 + eax_50, &var_5bbc, 0xd18)
                        *(eax_50 + 0x4080) += 1
                        goto label_6179f9
                    
                    var_24_2 = "PreSubmitAction"
                    var_28_1 = 0x6c13
                    ecx_2 = "pgui.numPreSubmittedActions < MAX_PRESUBMITTED_ACTIONS"
                else
                    var_24_2 = "DomGfxActivateInt"
                    var_28_1 = 0xc95b
                    ecx_2 = "gfx.card.where == CW_PLAYER_DISCARD"
            else if (*(edi + 0x2c) == 0)
                bool cond:5_1 = *(edi + 0xa4) != 0x462
                eax_3 = data_cc8d5c
                data_b80b64 = 1
                
                if (cond:5_1)
                    data_b80b68 = 0x85
                    
                    if (eax_3 == 0)
                        goto label_61633d
                else
                    data_b80b68 = 0x86
                    
                    if (eax_3 == 0)
                        goto label_61633d
                
                sub_5ee590(eax_3[0x1d64], &data_b80af8)
                void var_4ea4
                sub_5939a0(&var_4ea4, &data_b80af8)
                void* ecx_61 = data_cc8d5c
                eax_3 = *(edi + 0x98)
                int32_t* var_4e34_1 = eax_3
                int32_t var_4ea0_1 = 1
                int32_t var_4e38_1 = 1
                
                if (ecx_61 == 0)
                    goto label_61633d
                
                void* eax_49 = sub_5cc5e0(*(ecx_61 + 0x7590))
                eax_3 = *(eax_49 + 0x4080)
                
                if (eax_3 s< 3)
                    result = 1
                    __builtin_memcpy(eax_3 * 0xd18 + 0x1938 + eax_49, &var_4ea4, 0xd18)
                    *(eax_49 + 0x4080) += 1
                    goto label_6179f9
                
                var_24_2 = "PreSubmitAction"
                var_28_1 = 0x6c13
                ecx_2 = "pgui.numPreSubmittedActions < MAX_PRESUBMITTED_ACTIONS"
            else
                var_24_2 = "DomGfxActivateInt"
                var_28_1 = 0xc91b
                ecx_2 = "gfx.type == DOMGFX_CARD"
else
    int32_t edx_3 = *(edi + 0x174)
    
    if (edx_3 == 1)
        sub_5d0b70(edi)
        result = 0
        goto label_6179f9
    
    if (edx_3 != 3)
        goto label_616368
    
    if (eax_3 == 8 || eax_3 == 7)
        data_b80b68 = *(edi + 0x170)
        data_b80b64 = 1
    label_616417:
        sub_5ee590(*(ecx_3 + 0x7590), &data_b80af8)
        result = 2
        goto label_6179f9
    
    var_24_2 = "DomGfxActivateInt"
    var_28_1 = 0xc774
    ecx_2 = "gDomClient.domState.g.yld.choice == CHOICE_SUPPLY || gDomClient.domState.g.yld.choice "
    "== CHOICE_NAME"

label_617a21:
var_2c_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
goto label_617a2b
