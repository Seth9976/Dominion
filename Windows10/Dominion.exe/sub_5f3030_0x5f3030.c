// 函数: sub_5f3030
// 地址: 0x5f3030
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t i_15
uint32_t i_4 = i_15
int32_t ecx = __chkstk(0x353c)
int32_t var_8
uint32_t i_1 = __security_cookie ^ &var_8
uint32_t i_13 = i_1
void* edx = data_cc8d5c
var_8 = ecx
char const* const var_20_1
int32_t var_1c_1
char const* const var_18_3
char* ecx_1

if (edx == 0)
label_5f305e:
    var_18_3 = "GetClient"
    var_1c_1 = 0x7b
    var_20_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"
label_5f4d80:
    sub_63b870(i_1, &data_801800, ecx_1, var_20_1, var_1c_1, var_18_3)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

if (*(edx + 0xc) != *(edx + 0x10))
    int32_t eax_2 = sub_63b7f0("failed to submit ok click, waiting")
    CookieCheckFunction(eax_2)
    return eax_2

bool cond:0_1 = data_b824dc == 0
data_b80980 = 0

if (not(cond:0_1))
    data_b80afc = 0
    data_b80b08 = 0

int32_t ecx_4 = data_b7fcf4

if (ecx_4 != 0)
    uint32_t eax_3 = zx.d(ecx_4.w)
    
    if (eax_3 u< data_b809e4)
        void* eax_5 = eax_3 * 0x1c30 + data_b809e0
        
        if (*(eax_5 + 0x1c28) == ecx_4 && eax_5 != 0 && *(eax_5 + 0x5c) != 0x3ee)
            sub_5cbf20()

void arg_cc
i_1 = sub_5f0fa0(&arg_cc)
uint32_t ebx_1 = data_b80b44
int32_t arg_c[0x15]
int32_t esi_2
int32_t edi_1
edi_1, esi_2 = __builtin_memcpy(&arg_c, i_1, 0x90)
int32_t ecx_5 = data_b80b08

if (ecx_5 == 0xd5)
    i_1 = data_cc8d5c
    data_b80b64 = 0
    
    if (i_1 == 0)
        goto label_5f305e
    
    int32_t esi_3 = *(i_1 + 0x7590)
    i_1 = data_b80afc
    
    if (i_1 != 0)
        if (i_1 == 7)
            sub_628ab0()
        
        sub_5ee2a0(&data_b80af8)
        int32_t* eax_6 = sub_4b9480()
        sub_5e9900(eax_6, esi_3, eax_6, &data_b80af8)
        i_1 = sub_5cc5e0(esi_3)
        *(i_1 + 0x4080) = 0
        data_b8097c = 0
    label_5f4d48:
        data_b80b5c = 1
        CookieCheckFunction(i_1)
        return i_1
    
    var_18_3 = "SubmitAction"
    var_1c_1 = 0x6ba9
    ecx_1 = "action.choice != CHOICE_NONE"
label_5f4d76:
    var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    goto label_5f4d80

if (ecx_5 == 0x33)
    i_1 = sub_5cba00(data_b7fcf0)
    void* ecx_9 = data_cc8d5c
    uint32_t i_14 = i_1
    int32_t edx_2 = *(i_14 + 0x98)
    data_b80b68 = edx_2
    data_b80b64 = 1
    
    if (ecx_9 == 0)
        goto label_5f305e
    
    int32_t edi_2 = *(ecx_9 + 0x7590)
    
    if (data_b80afc == 0)
        var_18_3 = "SubmitAction"
        var_1c_1 = 0x6ba9
        ecx_1 = "action.choice != CHOICE_NONE"
        goto label_5f4d76
    
    int32_t eax_7 = data_b80b08
    
    if (eax_7 == 2)
        uint32_t esi_4 = zx.d(edx_2.w)
        
        if (esi_4 u>= 0x320)
            sub_591930()
        
        if (*(esi_4 * 0x64 + &data_b82524) == 0xe11)
            data_b7fcfa = 0
        else
            data_b7fcf8 = 0
            data_b7fcfa = 0
    else if (eax_7 == 1 || eax_7 == 8)
        data_b7fcf8 = 0
        data_b7fcfa = 0
    
    int32_t eax_9 = data_b80b08
    
    if (eax_9 != 0x68 && eax_9 != 0x1e && eax_9 != 0xb4 && eax_9 != 0x73 && eax_9 != 0x48
            && eax_9 != 0x63 && eax_9 != 0x114 && eax_9 != 0x78)
        goto label_5f32b6
    
    int32_t edx_3 = data_b604e0
    
    if (edx_3 == 0xffffffff)
        edx_3 = 0
    
    i_1 = sub_5cc410(0, edx_3, 0x3ec, 0, 0)
    
    if (i_1 != 0)
        sub_5cbbf0(i_1)
    label_5f32b6:
        void* eax_10 = data_b80b08
        
        if (eax_10 != 0x33 && eax_10 != 0x34)
            goto label_5f32fb
        
        int32_t edx_4 = data_b604e0
        
        if (edx_4 == 0xffffffff)
            edx_4 = 0
        
        i_1 = sub_5cc410(0, edx_4, 0x3eb, 0, 0)
        
        if (i_1 != 0)
            eax_10 = sub_5cbbf0(i_1)
        label_5f32fb:
            
            if (data_b80b08 == 0x101)
                sub_5cbbf0(sub_5cc410(eax_10, edi_2, 0x44e, 0, 0))
            
            int32_t eax_12 = data_b80b08
            
            if (eax_12 != 0x2c && eax_12 != 0x2e && eax_12 != 0x10a && eax_12 != 0x6f)
                goto label_5f3353
            
            i_1 = sub_5cc410(eax_12, 0xffffffff, 2, 0, 0)
            
            if (i_1 != 0)
                sub_5cbbf0(i_1)
            label_5f3353:
                int32_t eax_13 = data_b80b08
                
                if (eax_13 == 0xd2 || eax_13 == 0xd4)
                    void* eax_14 = sub_5cc410(eax_13, edi_2, 0x462, 0, 0)
                    
                    if (eax_14 != 0)
                        sub_5cbbf0(eax_14)
                
                if (data_b80b08 == 0x51)
                    sub_5cbbf0(sub_5eaab0(0x70d))
                
                if (data_b80b08 == 0x55)
                    sub_5cbbf0(sub_5eaab0(0x718))
                
                if (data_b80afc == 7)
                    sub_628ab0()
                
                sub_5ee2a0(&data_b80af8)
                int32_t* eax_17 = sub_4b9480()
                sub_5e9900(eax_17, edi_2, eax_17, &data_b80af8)
                *(sub_5cc5e0(edi_2) + 0x4080) = 0
                data_b80b5c = 1
                void arg_2814
                __builtin_memcpy(&arg_2814, &data_b80af8, 0x6c)
                int32_t esi_5 = data_b80b64
                void arg_2884
                
                if (esi_5 s> 0)
                    memcpy(&arg_2884, &data_b80b68, esi_5 << 2)
                i_1 = data_b81808
                
                if (i_1 s>= 4)
                    var_18_3 = "YldCopy"
                    var_1c_1 = 0x525e
                    var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                    ecx_1 = "source.numWhereOptions < MAX_WHERE_OPTIONS"
                    goto label_5f4d80
                
                uint32_t i_12 = i_1
                void arg_3504
                i_1 = memcpy(&arg_3504, &data_b817e8, i_1 << 2)
                
                if (data_b80afc != 3)
                    goto label_5f34c2
                
                if (esi_5 s> 4)
                    var_18_3 = "YldCopy"
                    var_1c_1 = 0x5263
                    var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                    ecx_1 = "source.numChoices <= MAX_WHERE_RESULTS"
                    goto label_5f4d80
                
                void arg_3514
                memcpy(&arg_3514, &data_b817f8, esi_5 << 2)
            label_5f34c2:
                void* ecx_19 = data_cc8d5c
                i_1 = *(i_14 + 0xb4)
                int32_t arg_2818 = 5
                uint32_t i_11 = i_1
                
                if (ecx_19 == 0)
                    goto label_5f305e
                
                void* eax_22 = sub_5cc5e0(*(ecx_19 + 0x7590))
                i_1 = *(eax_22 + 0x4080)
                
                if (i_1 s>= 3)
                    var_18_3 = "PreSubmitAction"
                    var_1c_1 = 0x6c13
                    ecx_1 = "pgui.numPreSubmittedActions < MAX_PRESUBMITTED_ACTIONS"
                    goto label_5f4d76
                
                __builtin_memcpy(i_1 * 0xd18 + 0x1938 + eax_22, &arg_2814, 0xd18)
                *(eax_22 + 0x4080) += 1
                data_b7fcf0 = 0
                CookieCheckFunction(i_1)
                return i_1
else if (ecx_5 == 0x101 || ecx_5 == 0x34)
    int32_t ecx_122 = data_b7fcf0
    
    if (ecx_122 == 0)
        if (data_b80b14 != 1)
            var_18_3 = "DomHandleOk"
            var_1c_1 = 0x7949
            ecx_1 = "gDomClient.domState.g.yld.choiceUI.numCards == 1"
            goto label_5f4d76
        
        i_1 = sub_5de8b0(*data_b80b0c)
        
        if (i_1 == 0)
            var_18_3 = "LookupCard"
            var_1c_1 = 0x3d96
            ecx_1 = &data_871964
            goto label_5f4d76
        
        ecx_122 = *(i_1 + 0x1c28)
        data_b7fcf0 = ecx_122
    
    i_1 = sub_5cba00(ecx_122)
    
    if (data_b80afc != 5)
        var_18_3 = "DomHandleOk"
        var_1c_1 = 0x7951
        ecx_1 = "action.choice == CHOICE_NUMBER"
        goto label_5f4d76
    
    void* esi_18 = data_cc8d5c
    int32_t ecx_124 = *(i_1 + 0xb4)
    data_b80b64 = ecx_124
    
    if (esi_18 == 0)
        goto label_5f305e
    
    int32_t eax_92 = data_b80b08
    int32_t esi_19 = *(esi_18 + 0x7590)
    
    if (eax_92 == 2)
        if (ecx_124 != 1)
            data_b7fcf8 = 0
            data_b7fcfa = 0
        else
            uint32_t edi_13 = zx.d(data_b80b68.w)
            
            if (edi_13 u>= 0x320)
                sub_591930()
            
            if (*(edi_13 * 0x64 + &data_b82524) == 0xe11)
                data_b7fcfa = 0
            else
                data_b7fcf8 = 0
                data_b7fcfa = 0
    else if (eax_92 == 1 || eax_92 == 8)
        data_b7fcf8 = 0
        data_b7fcfa = 0
    
    int32_t eax_94 = data_b80b08
    
    if (eax_94 != 0x68 && eax_94 != 0x1e && eax_94 != 0xb4 && eax_94 != 0x73 && eax_94 != 0x48
            && eax_94 != 0x63 && eax_94 != 0x114 && eax_94 != 0x78)
        goto label_5f4bf3
    
    int32_t edx_40 = data_b604e0
    
    if (edx_40 == 0xffffffff)
        edx_40 = 0
    
    i_1 = sub_5cc410(0, edx_40, 0x3ec, 0, 0)
    
    if (i_1 != 0)
        sub_5cbbf0(i_1)
    label_5f4bf3:
        void* eax_95 = data_b80b08
        
        if (eax_95 != 0x33 && eax_95 != 0x34)
            goto label_5f4c38
        
        int32_t edx_41 = data_b604e0
        
        if (edx_41 == 0xffffffff)
            edx_41 = 0
        
        i_1 = sub_5cc410(0, edx_41, 0x3eb, 0, 0)
        
        if (i_1 != 0)
            eax_95 = sub_5cbbf0(i_1)
        label_5f4c38:
            
            if (data_b80b08 == 0x101)
                sub_5cbbf0(sub_5cc410(eax_95, esi_19, 0x44e, 0, 0))
            
            int32_t eax_97 = data_b80b08
            
            if (eax_97 != 0x2c && eax_97 != 0x2e && eax_97 != 0x10a && eax_97 != 0x6f)
                goto label_5f4c90
            
            i_1 = sub_5cc410(eax_97, 0xffffffff, 2, 0, 0)
            
            if (i_1 != 0)
                sub_5cbbf0(i_1)
            label_5f4c90:
                int32_t eax_98 = data_b80b08
                
                if (eax_98 == 0xd2 || eax_98 == 0xd4)
                    void* eax_99 = sub_5cc410(eax_98, esi_19, 0x462, 0, 0)
                    
                    if (eax_99 != 0)
                        sub_5cbbf0(eax_99)
                
                if (data_b80b08 == 0x51)
                    sub_5cbbf0(sub_5eaab0(0x70d))
                
                if (data_b80b08 == 0x55)
                    sub_5cbbf0(sub_5eaab0(0x718))
                
                if (data_b80afc == 7)
                    sub_628ab0()
                
                sub_5ee2a0(&data_b80af8)
                int32_t* eax_102 = sub_4b9480()
                sub_5e9900(eax_102, esi_19, eax_102, &data_b80af8)
                i_1 = sub_5cc5e0(esi_19)
                *(i_1 + 0x4080) = 0
                data_b80b64 = 0
                data_b7fcf0 = 0
                goto label_5f4d48
else
    i_1 = data_b80afc
    
    if (i_1 == 5)
        if (arg_c[var_8] != 2)
            if (ecx_5 == 6)
                int32_t eax_24
                int32_t edx_10
                edx_10:eax_24 = sx.q(data_b80988)
                int32_t arg_9c[0xc]
                
                if (eax_24 == data_b80b20 && edx_10 == data_b80b24)
                    sub_6883d0(data_171e6d0, &arg_9c)
                    sub_688660(&arg_9c, esi_2, edi_1)
                else if (data_b80988 s> 0)
                    sub_6883d0(data_171e6d4, &arg_9c)
                    sub_688660(&arg_9c, esi_2, edi_1)
            
            bool cond:3_1 = data_b80994 == 0
            int32_t eax_25 = data_b80988
            data_b80afc = 5
            data_b80b64 = eax_25
            
            if (not(cond:3_1))
                data_b80b64 = eax_25 | 0x10000
            
            i_1 = data_cc8d5c
            
            if (i_1 != 0)
                goto label_5f362d
        else
            data_b80afc = i_1
            i_1 = data_cc8d5c
            data_b80b64 = 0
            
            if (i_1 != 0)
            label_5f362d:
                sub_5ee590(*(i_1 + 0x7590), &data_b80af8)
                uint32_t eax_27 = sub_4d46e0(2, 0)
                CookieCheckFunction(eax_27)
                return eax_27
        
        goto label_5f305e
    
    uint32_t i_5
    int32_t arg_13c[0x30f]
    void arg_dbc
    void arg_dcc
    uint32_t i_6
    
    if (ecx_5 == 0xd0)
        int32_t esi_6 = data_b8097c
        memcpy(&data_b80b68, &data_b7fcfc, esi_6 << 2)
        void* ecx_28 = data_cc8d5c
        i_1 = data_b8097c
        data_b80b64 = i_1
        
        if (ecx_28 == 0)
            goto label_5f305e
        
        i_1 = sub_5ee590(*(ecx_28 + 0x7590), &data_b80af8)
        
        if (esi_6 != 1)
            goto label_5f452f
        
        __builtin_memcpy(&arg_cc, &data_b80af8, 0x6c)
        uint32_t i_16 = data_b80b64
        i_5 = i_16
        
        if (i_16 s> 0)
            memcpy(&arg_13c, &data_b80b68, i_16 << 2)
        
        i_1 = data_b81808
        
        if (i_1 s>= 4)
            var_18_3 = "YldCopy"
            var_1c_1 = 0x525e
            var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
            ecx_1 = "source.numWhereOptions < MAX_WHERE_OPTIONS"
            goto label_5f4d80
        
        i_6 = i_1
        i_1 = memcpy(&arg_dbc, &data_b817e8, i_1 << 2)
        
        if (data_b80afc == 3)
            if (i_16 s> 4)
                var_18_3 = "YldCopy"
                var_1c_1 = 0x5263
                var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                ecx_1 = "source.numChoices <= MAX_WHERE_RESULTS"
                goto label_5f4d80
            
            i_1 = memcpy(&arg_dcc, &data_b817f8, i_16 << 2)
        
        void* ecx_30 = data_cc8d5c
        
        if (ecx_30 == 0)
            goto label_5f305e
        
        uint32_t eax_32 = sub_5ee590(*(ecx_30 + 0x7590), &arg_cc)
        data_b8097c = 0
        CookieCheckFunction(eax_32)
        return eax_32
    
    void* ecx_34
    int32_t edx_14
    int32_t esi_7
    
    if (ecx_5 == 0x48)
        edx_14 = var_8
        esi_7 = edx_14 << 2
        bool cond:2_1 = *(&arg_c + esi_7) != 0x52
        var_8 = esi_7
        
        if (cond:2_1)
            goto label_5f3d2d
        
        ecx_34 = data_cc8d5c
        i_1 = data_b80b54
        data_b80b64 = i_1
        
        if (ecx_34 == 0)
            goto label_5f305e
        
    label_5f434e:
        uint32_t eax_77 = sub_5ee590(*(ecx_34 + 0x7590), &data_b80af8)
        data_b8097c = 0
        CookieCheckFunction(eax_77)
        return eax_77
    
    if (ecx_5 == 0x7b)
        int32_t var_18_18 = data_b80b2c
        data_b80b64 = 1
        int32_t eax_33 = sub_5d1210(i_1, 0x3ef, ebx_1, data_b80b28, var_18_18)
        
        if (eax_33 != 0)
            eax_33 = data_b817e8
            data_b817f8 = eax_33
        
        int32_t eax_34 = sub_5d1210(eax_33, 0x3ee, data_b80b44, data_b80b28, data_b80b2c)
        
        if (eax_34 != 0)
            eax_34 = data_b817ec
            data_b817f8 = eax_34
        
        i_1 = sub_5d1210(eax_34, 0x3f0, data_b80b44, data_b80b28, data_b80b2c)
        
        if (i_1 != 0)
            i_1 = data_b817f0
            data_b817f8 = i_1
        
        goto label_5f3889
    
    int32_t arg_d0
    
    if (ecx_5 == 0x3b)
        __builtin_memcpy(&arg_cc, &data_b80af8, 0x6c)
        uint32_t i_17 = data_b80b64
        i_5 = i_17
        
        if (i_17 s> 0)
            memcpy(&arg_13c, &data_b80b68, i_17 << 2)
        
        i_1 = data_b81808
        
        if (i_1 s>= 4)
            var_18_3 = "YldCopy"
            var_1c_1 = 0x525e
            var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
            ecx_1 = "source.numWhereOptions < MAX_WHERE_OPTIONS"
            goto label_5f4d80
        
        i_6 = i_1
        i_1 = memcpy(&arg_dbc, &data_b817e8, i_1 << 2)
        
        if (data_b80afc != 3)
            goto label_5f3974
        
        if (i_17 s> 4)
            var_18_3 = "YldCopy"
            var_1c_1 = 0x5263
            var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
            ecx_1 = "source.numChoices <= MAX_WHERE_RESULTS"
            goto label_5f4d80
        
        i_1 = memcpy(&arg_dcc, &data_b817f8, i_17 << 2)
    label_5f3974:
        uint32_t i_18 = i_5
        arg_d0 = 1
        i_1 = sub_5f2f30(i_1, &i_5, &arg_13c, ebx_1, 0x3f0, arg1, arg2)
        void* ecx_39 = data_cc8d5c
        
        if (ecx_39 == 0)
            goto label_5f305e
        
        i_1 = sub_5ee590(*(ecx_39 + 0x7590), &arg_cc)
        
        if (i_18 - i_5 s<= 1)
            CookieCheckFunction(i_1)
            return i_1
        
        arg_d0 = 1
        i_1 = sub_5f2f30(i_1, &i_5, &arg_13c, ebx_1, 0x3ef, arg1, arg2)
        
        if (i_5 == 0)
            CookieCheckFunction(i_1)
            return i_1
        
        void* ecx_42 = data_cc8d5c
        
        if (ecx_42 == 0)
            goto label_5f305e
        
        uint32_t eax_38 = sub_5ee7d0(*(ecx_42 + 0x7590), &arg_cc)
        CookieCheckFunction(eax_38)
        return eax_38
    
    if (ecx_5 == 0x27)
        __builtin_memcpy(&arg_cc, &data_b80af8, 0x6c)
        uint32_t i_19 = data_b80b64
        i_5 = i_19
        
        if (i_19 s> 0)
            memcpy(&arg_13c, &data_b80b68, i_19 << 2)
        
        i_1 = data_b81808
        
        if (i_1 s>= 4)
            var_18_3 = "YldCopy"
            var_1c_1 = 0x525e
            var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
            ecx_1 = "source.numWhereOptions < MAX_WHERE_OPTIONS"
            goto label_5f4d80
        
        i_6 = i_1
        i_1 = memcpy(&arg_dbc, &data_b817e8, i_1 << 2)
        
        if (data_b80afc != 3)
            goto label_5f3b29
        
        if (i_19 s> 4)
            var_18_3 = "YldCopy"
            var_1c_1 = 0x5263
            var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
            ecx_1 = "source.numChoices <= MAX_WHERE_RESULTS"
            goto label_5f4d80
        
        i_1 = memcpy(&arg_dcc, &data_b817f8, i_19 << 2)
    label_5f3b29:
        uint32_t i_20 = i_5
        arg_d0 = 1
        i_1 = sub_5f2f30(i_1, &i_5, &arg_13c, ebx_1, 0x3f0, arg1, arg2)
        void* ecx_47 = data_cc8d5c
        
        if (ecx_47 == 0)
            goto label_5f305e
        
        i_1 = sub_5ee590(*(ecx_47 + 0x7590), &arg_cc)
        uint32_t edi_6 = i_20 - i_5
        
        if (i_20 == i_5)
            CookieCheckFunction(i_1)
            return i_1
        
        arg_d0 = 1
        i_1 = sub_5f2f30(i_1, &i_5, &arg_13c, ebx_1, 0x3ef, arg1, arg2)
        void* ecx_50 = data_cc8d5c
        
        if (ecx_50 == 0)
            goto label_5f305e
        
        sub_5ee7d0(*(ecx_50 + 0x7590), &arg_cc)
        i_1 = i_5
        int32_t esi_9 = 0
        int32_t ecx_52 = arg2
        int32_t edx_23 = arg1
        
        if (i_1 s> 0)
            do
                uint32_t eax_42 = sub_5ce6d0(i_1, 0x3ee, ebx_1, edx_23, ecx_52, 0)
                sub_5f2d80(eax_42, arg_13c[esi_9], ebx_1, eax_42, &data_7feed4, 0, 0, 0xe, 0)
                i_1 = i_5
                esi_9 += 1
                ecx_52 = arg2
                edx_23 = arg1
            while (esi_9 s< i_1)
        
        if (edi_6 - i_1 s<= 1)
            CookieCheckFunction(i_1)
            return i_1
        
        arg_d0 = 2
        i_1 = sub_5f2f30(i_1, &i_5, &arg_13c, ebx_1, 0x3ee, edx_23, ecx_52)
        void* ecx_56 = data_cc8d5c
        
        if (ecx_56 == 0)
            goto label_5f305e
        
        i_1 = sub_5ee7d0(*(ecx_56 + 0x7590), &arg_cc)
        uint32_t i_21 = i_5
        int32_t esi_10 = 0
        
        if (i_21 s<= 0)
            CookieCheckFunction(i_1)
            return i_1
        
        do
            void* eax_43 = sub_5ce6d0(i_1, 0x3ee, ebx_1, arg1, arg2, 0)
            i_1 = sub_5f2d80(eax_43, arg_13c[esi_10], ebx_1, eax_43, &data_7feed4, 0, 0, 0xe, 0)
            esi_10 += 1
        while (esi_10 s< i_21)
        
        CookieCheckFunction(i_1)
        return i_1
    
    if (ecx_5 == 0x36 || ecx_5 == 0x133)
        i_1 = arg_c[var_8]
        
        if (i_1 == 0x29 || i_1 == 0xd7)
            data_b80b68 = i_1
            goto label_5f3d68
        
        i_1 = data_cc8d5c
        data_b80b64 = 1
        
        if (ecx_5 != 0x36)
            data_b80b68 = 0xd8
            
            if (i_1 == 0)
                goto label_5f305e
        else
            data_b80b68 = 0x28
            
            if (i_1 == 0)
                goto label_5f305e
        
        i_1 = sub_5ee590(*(i_1 + 0x7590), &data_b80af8)
        
        if (data_b8097c == 0)
            CookieCheckFunction(i_1)
            return i_1
        
        i_1 = sub_5d1210(i_1, 0x3ea, data_b80b44, 0, 0)
        int32_t ebx_2 = data_b8097c
        
        if (i_1 == ebx_2)
            CookieCheckFunction(i_1)
            return i_1
        
        void arg_1afc
        __builtin_memcpy(&arg_1afc, &data_b80af8, 0x6c)
        int32_t esi_17 = data_b80b64
        void arg_1b6c
        
        if (esi_17 s> 0)
            memcpy(&arg_1b6c, &data_b80b68, esi_17 << 2)
        
        i_1 = data_b81808
        
        if (i_1 s>= 4)
            var_18_3 = "YldCopy"
            var_1c_1 = 0x525e
            var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
            ecx_1 = "source.numWhereOptions < MAX_WHERE_OPTIONS"
            goto label_5f4d80
        
        uint32_t i_10 = i_1
        void arg_27ec
        i_1 = memcpy(&arg_27ec, &data_b817e8, i_1 << 2)
        
        if (data_b80afc != 3)
            goto label_5f4a00
        
        if (esi_17 s> 4)
            var_18_3 = "YldCopy"
            var_1c_1 = 0x5263
            var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
            ecx_1 = "source.numChoices <= MAX_WHERE_RESULTS"
            goto label_5f4d80
        
        void arg_27fc
        memcpy(&arg_27fc, &data_b817f8, esi_17 << 2)
    label_5f4a00:
        i_1 = 1
        uint32_t i_9 = 1
        
        if (ebx_2 s> 0)
            __builtin_memcpy(&arg_1b6c, &data_b7fcfc, ebx_2 << 2)
            i_1 = i_9
        
        void* ecx_120 = data_cc8d5c
        int32_t arg_1b68 = ebx_2
        
        if (ecx_120 == 0)
            goto label_5f305e
        
        if (i_1 == 0)
            var_18_3 = "PreSubmitAction"
            var_1c_1 = 0x6c11
            ecx_1 = "action.choice != CHOICE_NONE"
            goto label_5f4d76
        
        void* eax_90 = sub_5cc5e0(*(ecx_120 + 0x7590))
        i_1 = *(eax_90 + 0x4080)
        
        if (i_1 s< 3)
            __builtin_memcpy(i_1 * 0xd18 + 0x1938 + eax_90, &arg_1afc, 0xd18)
            *(eax_90 + 0x4080) += 1
            goto label_5f452f
        
        var_18_3 = "PreSubmitAction"
        var_1c_1 = 0x6c13
        ecx_1 = "pgui.numPreSubmittedActions < MAX_PRESUBMITTED_ACTIONS"
        goto label_5f4d76
    
    edx_14 = var_8
    esi_7 = edx_14 << 2
    var_8 = esi_7
label_5f3d2d:
    void arg_de4
    int32_t arg_e50
    uint32_t i_7
    void arg_1ad4
    uint32_t i_8
    void* ecx_62
    
    if (i_1 != 3)
        if (i_1 != 4)
            if (i_1 != 2)
                goto label_5f3f96
            
            int32_t edx_30 = data_b80b28
            int32_t eax_57 = 0x3ee
            void* const __return_addr_1 = data_b80b2c
            
            if (ecx_5 == 0x125)
                eax_57 = 0x44f
            label_5f3f5f:
                i_4.q = 0
                edx_30 = 0
                __return_addr_1 = __return_addr
            else if (ecx_5 == 0x126)
                eax_57 = 0x450
                goto label_5f3f5f
            
            i_1 = sub_5f2f30(eax_57, &data_b80b64, &data_b80b68, ebx_1, eax_57, edx_30, 
                __return_addr_1)
            ecx_62 = data_cc8d5c
            
            if (ecx_62 != 0)
                goto label_5f414a
            
            goto label_5f305e
        
        if (data_b80b54 == 1)
            int32_t eax_44 = data_b80b64
            __builtin_memcpy(&arg_de4, &data_b80af8, 0x6c)
            
            if (eax_44 s> 0)
                memcpy(&i_7, &data_b80b68, eax_44 << 2)
            
            i_1 = data_b81808
            
            if (i_1 s< 4)
                i_8 = i_1
                memcpy(&arg_1ad4, &data_b817e8, i_1 << 2)
                void* ecx_63 = data_cc8d5c
                arg_e50 = 1
                i_1 = *(&arg_c + var_8)
                i_7 = i_1
                
                if (ecx_63 == 0)
                    goto label_5f305e
                
                uint32_t eax_48 = sub_5ee590(*(ecx_63 + 0x7590), &arg_de4)
                CookieCheckFunction(eax_48)
                return eax_48
            
            var_18_3 = "YldCopy"
            var_1c_1 = 0x525e
            var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
            ecx_1 = "source.numWhereOptions < MAX_WHERE_OPTIONS"
            goto label_5f4d80
        
        int32_t eax_49 = data_b8097c
        int32_t ecx_67 = 0
        int32_t i = *(&arg_c + esi_7)
        
        if (eax_49 s<= 0)
        label_5f3e95:
            *((eax_49 << 2) + &data_b7fcfc) = i
            i_1 = data_b8097c + 1
        else
            while (*((ecx_67 << 2) + &data_b7fcfc) != i)
                ecx_67 += 1
                
                if (ecx_67 s>= eax_49)
                    goto label_5f3e95
            
            memmove(&(&data_b7fcfc)[ecx_67 * 2], &(&data_b7fd00)[ecx_67], 
                (eax_49 << 2) - ecx_67 - 1)
            i_1 = data_b8097c - 1
        
        data_b8097c = i_1
        int32_t temp0_1 = data_b80b54
        
        if (i_1 s> temp0_1)
            var_18_3 = "DomHandleOk"
            var_1c_1 = 0x7a59
            ecx_1 = "gDomClient.gui.numSelection <= action.maxChoices"
            goto label_5f4d76
        
        if (i_1 != temp0_1)
            CookieCheckFunction(i_1)
            return i_1
        
        int32_t ecx_68 = 0
        
        if (i_1 s> 0)
            do
                (&data_b80b68)[ecx_68] = *((ecx_68 << 2) + &data_b7fcfc)
                ecx_68 += 1
                i_1 = data_b8097c
            while (ecx_68 s< i_1)
        
        ecx_62 = data_cc8d5c
        data_b80b64 = i_1
        data_b8097c = 0
        
        if (ecx_62 != 0)
            goto label_5f414a
        
        goto label_5f305e
    
    if (data_b81808 == 2)
        if (data_b80b64 != 1)
            var_18_3 = "DomHandleOk"
            var_1c_1 = 0x7a3d
            ecx_1 = "action.numChoices == 1"
            goto label_5f4d76
        
        i_1 = (&data_b817e8)[edx_14]
        data_b817f8 = i_1
    label_5f3d68:
        ecx_62 = data_cc8d5c
        data_b80b64 = 1
        
        if (ecx_62 == 0)
            goto label_5f305e
        
    label_5f414a:
        uint32_t eax_70 = sub_5ee590(*(ecx_62 + 0x7590), &data_b80af8)
        CookieCheckFunction(eax_70)
        return eax_70
    
label_5f3f96:
    i_1 = *(&arg_c + esi_7)
    
    if (i_1 u> 0x8f)
    label_5f4894:
        var_18_3 = "DomHandleOk"
        var_1c_1 = 0x7b6d
        ecx_1 = "Halt"
        goto label_5f4d76
    
    i_1 = zx.d(lookup_table_5f4de0[i_1])
    void* ecx_104
    
    switch (i_1)
        case 0
            if (data_b8097c != 2)
                var_18_3 = "DomHandleOk"
                var_1c_1 = 0x7b13
                ecx_1 = "gDomClient.gui.numSelection == 2"
                goto label_5f4d76
            
            void* ecx_102 = data_cc8d5c
            i_1 = data_b7fcfc.d
            data_b80b68 = i_1
            data_b80b64 = 1
            
            if (ecx_102 == 0)
                goto label_5f305e
            
            sub_5ee590(*(ecx_102 + 0x7590), &data_b80af8)
            __builtin_memcpy(&arg_cc, &data_b80af8, 0x6c)
            int32_t esi_13 = data_b80b64
            
            if (esi_13 s> 0)
                memcpy(&arg_13c, &data_b80b68, esi_13 << 2)
            
            i_1 = data_b81808
            
            if (i_1 s>= 4)
                var_18_3 = "YldCopy"
                var_1c_1 = 0x525e
                var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                ecx_1 = "source.numWhereOptions < MAX_WHERE_OPTIONS"
                goto label_5f4d80
            
            i_6 = i_1
            i_1 = memcpy(&arg_dbc, &data_b817e8, i_1 << 2)
            
            if (data_b80afc != 3)
                goto label_5f44f8
            
            if (esi_13 s> 4)
                var_18_3 = "YldCopy"
                var_1c_1 = 0x5263
                var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                ecx_1 = "source.numChoices <= MAX_WHERE_RESULTS"
                goto label_5f4d80
            
            memcpy(&arg_dcc, &data_b817f8, esi_13 << 2)
        label_5f44f8:
            ecx_104 = data_cc8d5c
            i_1 = data_b7fd00
            arg_13c[0] = i_1
            i_5 = 1
            
            if (ecx_104 == 0)
                goto label_5f305e
            
        label_5f451d:
            i_1 = sub_5ee7d0(*(ecx_104 + 0x7590), &arg_cc)
            goto label_5f452f
        case 1
            int32_t eax_75 = data_b8097c
            data_b80b64 = eax_75
            i_1 = memcpy(&data_b80b68, &data_b7fcfc, eax_75 << 2)
            ecx_34 = data_cc8d5c
            
            if (ecx_34 == 0)
                goto label_5f305e
            
            goto label_5f434e
        case 2
            i_1 = data_cc8d5c
            data_b80b64 = 0
            
            if (ecx_5 == 2)
                data_b80b64 = 0xfffffffe
            
            if (i_1 == 0)
                goto label_5f305e
            
            uint32_t eax_71 = sub_5ee590(*(i_1 + 0x7590), &data_b80af8)
            CookieCheckFunction(eax_71)
            return eax_71
        case 3
            data_8db660 = 0x7e9
            CookieCheckFunction(i_1)
            return i_1
        case 4
            i_1 = sub_5cc410(i_1, ebx_1, 0x3ee, data_b80b28, data_b80b2c)
            
            if (i_1 != 0)
                i_1 = *(i_1 + 0x70)
                
                if (i_1 != 0)
                    var_8 = &data_b817f8
                    
                    do
                        uint32_t eax_72 = sub_5cba00(i_1)
                        int32_t ecx_91 = *(eax_72 + 0xa4)
                        i_1 = *(eax_72 + 0x1b94)
                        i_4 = i_1
                        int32_t esi_12
                        
                        if (ecx_91 == 0x3ee)
                            esi_12 = data_b817ec
                        else if (ecx_91 == 0x3ef)
                            esi_12 = data_b817e8
                        else
                            if (ecx_91 != 0x3f0)
                                var_18_3 = "DomHandleOk"
                                var_1c_1 = 0x7acd
                                ecx_1 = "Halt"
                                goto label_5f4d76
                            
                            esi_12 = data_b817f0
                        
                        uint32_t eax_73 = 0xffffffff
                        
                        if (esi_12 s> 0x3e8)
                            eax_73 = ebx_1
                        
                        i_1 = sub_5cc410(eax_73, eax_73, esi_12, 0, 0)
                        
                        if (i_1 == 0)
                            goto label_5f4d67
                        
                        sub_5f2d80(i_1, *(eax_72 + 0x98), eax_73, i_1, &data_7feed4, 0, 0, 0xb, 0)
                        int32_t ecx_97 = var_8
                        *(ecx_97 - 0xc90) = *(eax_72 + 0x98)
                        i_1 = i_4
                        *ecx_97 = esi_12
                        var_8 = ecx_97 + 4
                    while (i_1 != 0)
                
                if (data_b80b64 s<= 1)
                label_5f3889:
                    ecx_62 = data_cc8d5c
                    
                    if (ecx_62 != 0)
                        goto label_5f414a
                    
                    goto label_5f305e
                
                i_1 = data_b80b68
                
                if (i_1 != data_b80b6c)
                    goto label_5f3889
                
                var_18_3 = "DomHandleOk"
                var_1c_1 = 0x7adb
                ecx_1 = "action.cards[0] != action.cards[1]"
                goto label_5f4d76
        case 5
            int32_t* eax_58 = sub_4c44f0()
            CookieCheckFunction(eax_58)
            return eax_58
        case 6
            int32_t i_2 = 0
            data_ccf69c = 0
            int32_t esi_11 = 0
            
            if (data_b81ff8 s> 0)
                void* edi_8 = &data_b82524
                
                do
                    if (*edi_8 != 0)
                        i_1 = data_cc8d5c
                        
                        if (i_1 == 0)
                            goto label_5f305e
                        
                        int32_t edx_31
                        
                        if (*(i_1 + 0x5068) == 0)
                            edx_31 = 0x18
                        else
                            edx_31 = sub_4b9480()[0xc]
                        
                        void* eax_60 = sub_571b30(*edi_8, edx_31)
                        
                        if (((*(eax_60 + 0x98) & 0x7f000400) | (*(eax_60 + 0x9c) & 0x940)) == 0)
                            void* eax_63 = sub_571b30(*edi_8, data_b81820)
                            
                            if (((*(eax_63 + 0x98) & 0x3000000) | (*(eax_63 + 0x9c) & 0x100000))
                                    == 0)
                                int32_t ecx_79 = *edi_8
                                int32_t eax_66 = 0
                                
                                if (esi_11 s> 0)
                                    do
                                        if (*((eax_66 << 2) + &data_ccea18) == ecx_79)
                                            goto label_5f4086
                                        
                                        eax_66 += 1
                                    while (eax_66 s< esi_11)
                                
                                *((esi_11 << 2) + &data_ccea18) = ecx_79
                                esi_11 += 1
                    
                label_5f4086:
                    i_2 += 1
                    edi_8 += 0x64
                while (i_2 s< data_b81ff8)
            
            int32_t ecx_80 = esi_11 << 2
            data_ccf698 = esi_11
            int32_t eax_68 = ecx_80 s>> 2
            sub_4d4e30(eax_68, ecx_80 + &data_ccea18, &data_ccea18, eax_68, sub_5eaa50)
            int32_t ecx_81 = data_ccf698
            uint32_t eax_69
            
            for (void* const i_3 = &data_86e424; i_3 != &data_86e45c; i_3 += 4)
                int32_t j = *i_3
                eax_69 = 0
                
                if (ecx_81 s<= 0)
                label_5f40ee:
                    *((ecx_81 << 2) + &data_ccea18) = j
                    data_ccf698 += 1
                    break
                
                while (*((eax_69 << 2) + &data_ccea18) != j)
                    eax_69 += 1
                    
                    if (eax_69 s>= ecx_81)
                        goto label_5f40ee
            
            data_8db660 = 0x3e8
            CookieCheckFunction(eax_69)
            return eax_69
        case 7
            ecx_62 = data_cc8d5c
            data_b80b64 = 0xffffffff
            
            if (ecx_62 != 0)
                goto label_5f414a
            
            goto label_5f305e
        case 8
            ecx_62 = data_cc8d5c
            data_b80b64 = 0
            
            if (ecx_62 == 0)
                goto label_5f305e
            
            goto label_5f414a
        case 9
            if (data_b817ec != 0x452)
                var_18_3 = "DomHandleOk"
                var_1c_1 = 0x7b09
                ecx_1 = "action.whereOptions[1] == CW_PLAYER_ASIDE"
                goto label_5f4d76
            
            ecx_34 = data_cc8d5c
            data_b817f8 = 0x452
            
            if (ecx_34 != 0)
                goto label_5f434e
            
            goto label_5f305e
        case 0xa
            if (data_b817e8 != 0x3ea)
                var_18_3 = "DomHandleOk"
                var_1c_1 = 0x7b00
                ecx_1 = "action.whereOptions[0] == CW_PLAYER_HAND"
                goto label_5f4d76
            
            ecx_34 = data_cc8d5c
            data_b817f8 = 0x3ea
            
            if (ecx_34 != 0)
                goto label_5f434e
            
            goto label_5f305e
        case 0xb
            var_18_3 = "DomHandleOk"
            var_1c_1 = 0x7aa8
            ecx_1 = "Halt"
            goto label_5f4d76
        case 0xc
            if (data_b8097c != 1)
                var_18_3 = "DomHandleOk"
                var_1c_1 = 0x7b34
                ecx_1 = "gDomClient.gui.numSelection == 1"
                goto label_5f4d76
            
            void* ecx_110 = data_cc8d5c
            int32_t esi_15 = data_b80b64
            i_1 = data_b7fcfc.d
            data_b80b68 = i_1
            data_b80b64 = 1
            
            if (ecx_110 == 0)
                goto label_5f305e
            
            i_1 = sub_5ee590(*(ecx_110 + 0x7590), &data_b80af8)
            
            if (esi_15 s<= 1)
                goto label_5f452f
            
            __builtin_memcpy(&arg_de4, &data_b80af8, 0x6c)
            int32_t esi_16 = data_b80b64
            
            if (esi_16 s> 0)
                memcpy(&i_7, &data_b80b68, esi_16 << 2)
            
            i_1 = data_b81808
            
            if (i_1 s>= 4)
                var_18_3 = "YldCopy"
                var_1c_1 = 0x525e
                var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                ecx_1 = "source.numWhereOptions < MAX_WHERE_OPTIONS"
                goto label_5f4d80
            
            i_8 = i_1
            i_1 = memcpy(&arg_1ad4, &data_b817e8, i_1 << 2)
            
            if (data_b80afc != 3)
                goto label_5f479d
            
            if (esi_16 s> 4)
                var_18_3 = "YldCopy"
                var_1c_1 = 0x5263
                var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                ecx_1 = "source.numChoices <= MAX_WHERE_RESULTS"
                goto label_5f4d80
            
            void arg_1ae4
            i_1 = memcpy(&arg_1ae4, &data_b817f8, esi_16 << 2)
        label_5f479d:
            ecx_104 = data_cc8d5c
            arg_e50 = 0
            
            if (ecx_104 == 0)
                goto label_5f305e
            
            i_1 = sub_5ee7d0(*(ecx_104 + 0x7590), &arg_de4)
            goto label_5f452f
        case 0xd
            if (data_b8097c != 1)
                var_18_3 = "DomHandleOk"
                var_1c_1 = 0x7b24
                ecx_1 = "gDomClient.gui.numSelection == 1"
                goto label_5f4d76
            
            void* ecx_108 = data_cc8d5c
            data_b80b64 = 0
            
            if (ecx_108 == 0)
                goto label_5f305e
            
            sub_5ee590(*(ecx_108 + 0x7590), &data_b80af8)
            __builtin_memcpy(&arg_cc, &data_b80af8, 0x6c)
            int32_t esi_14 = data_b80b64
            
            if (esi_14 s> 0)
                memcpy(&arg_13c, &data_b80b68, esi_14 << 2)
            
            i_1 = data_b81808
            
            if (i_1 s>= 4)
                var_18_3 = "YldCopy"
                var_1c_1 = 0x525e
                var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                ecx_1 = "source.numWhereOptions < MAX_WHERE_OPTIONS"
                goto label_5f4d80
            
            i_6 = i_1
            i_1 = memcpy(&arg_dbc, &data_b817e8, i_1 << 2)
            
            if (data_b80afc != 3)
                goto label_5f4654
            
            if (esi_14 s> 4)
                var_18_3 = "YldCopy"
                var_1c_1 = 0x5263
                var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                ecx_1 = "source.numChoices <= MAX_WHERE_RESULTS"
                goto label_5f4d80
            
            memcpy(&arg_dcc, &data_b817f8, esi_14 << 2)
        label_5f4654:
            ecx_104 = data_cc8d5c
            i_1 = data_b7fcfc.d
            arg_13c[0] = i_1
            i_5 = 1
            
            if (ecx_104 != 0)
                goto label_5f451d
            
            goto label_5f305e
        case 0xe
            data_b80b64 = 0
            
            if (ecx_5 != 0x4d)
                var_18_3 = "DomHandleOk"
                var_1c_1 = 0x7b4b
                ecx_1 = "action.choiceUI.type == DOMUI_HAMLET_DISCARD_FOR_ACTION"
                goto label_5f4d76
            
            void* ecx_112 = data_cc8d5c
            
            if (ecx_112 == 0)
                goto label_5f305e
            
            i_1 = sub_5ee590(*(ecx_112 + 0x7590), &data_b80af8)
            ecx_34 = data_cc8d5c
            
            if (ecx_34 != 0)
                goto label_5f434e
            
            goto label_5f305e
        case 0xf
            if (data_b8097c != 1)
                var_18_3 = "DomHandleOk"
                var_1c_1 = 0x7b54
                ecx_1 = "gDomClient.gui.numSelection == 1"
                goto label_5f4d76
            
            ecx_34 = data_cc8d5c
            i_1 = data_b7fcfc.d
            data_b80b68 = i_1
            data_b80b64 = 1
            
            if (ecx_34 != 0)
                goto label_5f434e
            
            goto label_5f305e
        case 0x10
            data_b80b64 = 0
            i_1 = sub_5ee590(ebx_1, &data_b80af8)
        label_5f452f:
            data_b8097c = 0
            CookieCheckFunction(i_1)
            return i_1
        case 0x11
            goto label_5f4894

label_5f4d67:
var_18_3 = "DomPileGet"
ecx_1 = "pPile"
var_1c_1 = 0x9b0
goto label_5f4d76
