// 函数: sub_5efe00
// 地址: 0x5efe00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = data_cc8d5c
char const* const var_2c
int32_t var_28
char const* const var_24
char* ecx_1

if (ecx == 0)
label_5efe1e:
    var_24 = "GetClient"
    var_28 = 0x7b
    var_2c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"
label_5f0c68:
    sub_63b870(arg1, &data_801800, ecx_1, var_2c, var_28, var_24)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

if (*(ecx + 0x10) != *(ecx + 0xc) || data_b824dc != 0 || data_b80b5c != 0
    || data_b80b48 != *(ecx + 0x7590))
label_5f069c:
    arg1.b = 0
    return arg1

int32_t edx
arg1, edx = sub_610fb0(arg3)

if (arg1.b == 0)
    goto label_5f069c

int32_t esi_1 = data_b80b08

if (esi_1 != 0x27 && esi_1 != 0x7b && esi_1 != 0x3b && esi_1 != 0x33)
    arg1 = nullptr
    
    if (*(arg3 + 0x1a18) s> 0)
        void* ecx_3 = arg3 + 0x4a0
        
        do
            edx = *ecx_3
            
            if (edx != 3 && edx != 0xa)
                goto label_5f069c
            
            arg1 += 1
            ecx_3 += 0xb0
        while (arg1 s< *(arg3 + 0x1a18))

if (arg4 != 0)
    goto label_5eff00

if (*(arg3 + 0x2c) == 0)
    if (*(arg3 + 0xa4) == 0x3eb)
        int32_t ecx_4 = data_b604e0
        
        if (ecx_4 == 0xffffffff)
            ecx_4 = 0
        
        arg1, edx = sub_5e4d40(ecx_4)
        
        if (arg1.b == 0)
            goto label_5f069c
        
        esi_1 = data_b80b08
    
label_5eff00:
    
    if (*(arg3 + 0x2c) == 0)
        int32_t ecx_5
        
        if (esi_1 != 0x33)
            ecx_5 = *(arg3 + 0xa4)
            
            if (ecx_5 == 0x3ef || ecx_5 == 0x3f0)
                ecx_5 = 0x3ee
        
        if (esi_1 != 0x33 && *(*(arg3 + 0x98) * 0x64 + 0xb82528) != ecx_5)
            goto label_5f069c
        
        int32_t eax = data_b824bc
        
        if (eax != data_b809c8 && (esi_1 == 1 || esi_1 == 2))
            arg1, edx = sub_5d1210(eax, 0x451, *(arg3 + 0xa0), 0, 0)
            
            if (arg1 s> 0)
                goto label_5f069c
            
            esi_1 = data_b80b08

int32_t eax_1

if (esi_1 == 0x4d || esi_1 == 0x4e)
    eax_1 = 0

if ((esi_1 == 0x4d || esi_1 == 0x4e) && data_b80b64 s> 0)
    while ((&data_b80b68)[eax_1] != *(arg3 + 0x98))
        eax_1 += 1
        
        if (eax_1 s>= data_b80b64)
            goto label_5effa2
    
    int32_t ecx_8 = data_b8097c
    arg1 = nullptr
    
    if (ecx_8 s> 0)
        do
            if (*((arg1 << 2) + &data_b7fcfc) == *(arg3 + 0x98))
                if (arg2 == 0)
                    goto label_5f0354
                
                *arg2 = 0x18
                arg1.b = 1
                return arg1
            
            arg1 += 1
        while (arg1 s< ecx_8)
    
    if (arg2 != 0)
        *arg2 = 0x17
        esi_1 = data_b80b08
        ecx_8 = data_b8097c
    
    if (ecx_8 == 2)
        goto label_5f069c
    
    if (esi_1 != 0x4e)
    label_5f0354:
        arg1.b = 1
        return arg1
    
    if (ecx_8 != 1)
        arg1.b = 1
        return arg1
    
    goto label_5f069c

label_5effa2:
arg1 = data_b80afc
void* var_c_1 = arg1

if (arg1 == 3 && esi_1 == 0x7b)
    if (arg2 != 0)
        *arg2 = 0x17
    
    if (data_b80b64 == 1)
        if (*(arg3 + 0x2c) == 0)
            int32_t eax_2
            eax_2.b = *(arg3 + 0x98) == data_b80b68
            return eax_2
        
        var_24 = "IsCardInActiveSet"
        var_28 = 0x6fd8
        ecx_1 = "gfx.type == DOMGFX_CARD"
    else
        var_24 = "IsCardInActiveSet"
        var_28 = 0x6fd7
        ecx_1 = "gDomClient.domState.g.yld.numChoices == 1"
    
    goto label_5f0c5e

if (data_cc8d5c == 0)
    goto label_5efe1e

if (data_b80b48 != *(data_cc8d5c + 0x7590))
    goto label_5f069c

if (data_b80b30 == 0)
    goto label_5f0137

int32_t ecx_10 = *(arg3 + 0x2c)
int32_t ebx_1 = data_b80b14
arg1 = arg3

if (ecx_10 == 0)
    edx = 0

if (ecx_10 == 0 && ebx_1 s> 0)
    while (true)
        esi_1 = data_b80b08
        
        if (*(data_b80b0c + (edx << 2)) == *(arg1 + 0x98))
            if (arg2 != 0)
                int32_t eax_12
                eax_12.b = data_b80b30 == 2
                *arg2 = (eax_12 << 1) + 1
            
            break
        
        edx += 1
        
        if (edx s>= ebx_1)
            ecx_10 = *(arg1 + 0x2c)
            goto label_5f00fd
    
    goto label_5f0354

label_5f00fd:

if (data_b80b30 != 1 || (ecx_10 == 3 && *(arg1 + 0x30) == 0))
    goto label_5f0141

void* eax_3
eax_3, edx = sub_5dea30(0xb80ad8, arg1)

if ((*(eax_3 + 0x98) & 0x10000000) == 0)
    esi_1 = data_b80b08
label_5f0137:
    ebx_1 = data_b80b14
label_5f0141:
    
    if (var_c_1 == 8 || var_c_1 == 3)
        goto label_5f069c
    
    int32_t eax_6 = 0
    char var_11_1
    
    if (data_b8097c s<= 0)
    label_5f0186:
        var_11_1 = 0
    else
        while (*((eax_6 << 2) + &data_b7fcfc) != *(arg3 + 0x98))
            eax_6 += 1
            
            if (eax_6 s>= data_b8097c)
                goto label_5f0186
        
        var_11_1 = 1
    
    edx.b = 0
    arg1 = sub_5efd60(&data_b80af8, edx.b)
    uint32_t ecx_14 = arg3
    
    if (arg1.b == 0 || (*(ecx_14 + 0x2c) == 3 && *(ecx_14 + 0x30) == 0))
        goto label_5f027c
    
    void* eax_7 = sub_5dea30(0xb80ad8, ecx_14)
    esi_1 = data_b80b08
    arg1 = *(eax_7 + 0x98) & 0x10000000
    
    if (arg1 == 0 || data_b80afc != 1)
    label_5f0272:
        ebx_1 = data_b80b14
        ecx_14 = arg3
    label_5f027c:
        
        if (esi_1 != 1 && esi_1 != 3 && (esi_1 == 2 || esi_1 == 0xfd || esi_1 != 0x7e) && ebx_1 != 0
                && data_b80b30 == 0)
            if (esi_1 != 2 && esi_1 != 0xfd)
                if (esi_1 == 0x34 || esi_1 == 0x101)
                    int32_t edx_10 = 0
                    
                    if (ebx_1 s<= 0)
                        goto label_5f069c
                    
                    while (*(data_b80b0c + (edx_10 << 2)) != *(ecx_14 + 0x98))
                        edx_10 += 1
                        
                        if (edx_10 s>= ebx_1)
                            int32_t eax_16
                            eax_16.b = 0
                            return eax_16
                    
                    if (sub_5efcd0(ecx_14).b == 0)
                        goto label_5f069c
                    
                    if (arg2 == 0)
                        goto label_5f0354
                    
                    *arg2 = 0x1f
                    arg1.b = 1
                    return arg1
                
                if (esi_1 == 0x96 || esi_1 == 0x12f || esi_1 == 0x8d)
                    if (data_b8097c s>= data_b80b54 && var_11_1 == 0)
                        goto label_5f069c
                    
                    int32_t edx_9 = 0
                    
                    if (ebx_1 s<= 0)
                        goto label_5f069c
                    
                    while (*(data_b80b0c + (edx_9 << 2)) != *(ecx_14 + 0x98))
                        edx_9 += 1
                        
                        if (edx_9 s>= ebx_1)
                            int32_t eax_15
                            eax_15.b = 0
                            return eax_15
                    
                    if (sub_5efcd0(ecx_14).b == 0)
                        goto label_5f069c
                    
                    if (arg2 != 0)
                        if (data_b80b08 != 0x8d)
                            *arg2 = 9
                            
                            if (var_11_1 != 0)
                                *arg2 = 0xa
                                arg1.b = 1
                                return arg1
                        else
                            *arg2 = 7
                            
                            if (var_11_1 != 0)
                                *arg2 = 8
                                arg1.b = 1
                                return arg1
                    
                    goto label_5f0354
                
                if (esi_1 == 0x107)
                    int32_t edx_5 = 0
                    
                    if (ebx_1 s<= 0)
                        goto label_5f069c
                    
                    while (*(data_b80b0c + (edx_5 << 2)) != *(ecx_14 + 0x98))
                        edx_5 += 1
                        
                        if (edx_5 s>= ebx_1)
                            arg1.b = 0
                            return arg1
                    
                    if (arg2 != 0)
                        *arg2 = 7
                        arg1.b = 1
                        return arg1
                    
                    goto label_5f0354
                
                if (esi_1 == 0x114)
                    int32_t edx_6 = 0
                    
                    if (ebx_1 s<= 0)
                        goto label_5f069c
                    
                    while (*(data_b80b0c + (edx_6 << 2)) != *(ecx_14 + 0x98))
                        edx_6 += 1
                        
                        if (edx_6 s>= ebx_1)
                            arg1.b = 0
                            return arg1
                    
                    if (arg2 == 0)
                        goto label_5f0354
                    
                label_5f03dc:
                    *arg2 = 1
                    arg1.b = 1
                    return arg1
                
                if (esi_1 == 0xd2)
                    int32_t edx_7 = 0
                    
                    if (ebx_1 s<= 0)
                        goto label_5f069c
                    
                    while (*(data_b80b0c + (edx_7 << 2)) != *(ecx_14 + 0x98))
                        edx_7 += 1
                        
                        if (edx_7 s>= ebx_1)
                            arg1.b = 0
                            return arg1
                    
                    if (arg2 != 0)
                        *arg2 = 0x1b
                        arg1.b = 1
                        return arg1
                    
                    goto label_5f0354
                
                if (esi_1 != 0x2c && esi_1 != 0x2d)
                    var_24 = "IsCardInActiveSet"
                    var_28 = 0x70d2
                    ecx_1 = "gDomClient.domState.g.yld.choiceUI.type == DOMUI_LURKER_CHOICE || "
                    "gDomClient.domState.g.yld.choiceUI.type == DOMUI_LURKER_CHOICE_EMPTY"
                label_5f0c5e:
                    var_2c = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    goto label_5f0c68
                
                int32_t edx_8 = 0
                
                if (ebx_1 s<= 0)
                    goto label_5f069c
                
                while (*(data_b80b0c + (edx_8 << 2)) != *(ecx_14 + 0x98))
                    edx_8 += 1
                    
                    if (edx_8 s>= ebx_1)
                        arg1.b = 0
                        return arg1
                
                if (arg2 == 0)
                    goto label_5f0354
                
                int32_t eax_13
                eax_13.b = *(ecx_14 + 0xa4) != 2
                *arg2 = (eax_13 << 1) + 7
                void* eax_14
                eax_14.b = 1
                return eax_14
            
            if (data_cc8d5c == 0)
                goto label_5efe1e
            
            void* eax_17 = data_cc8d5c
            arg1 = sub_622830(eax_17, *(eax_17 + 0x7590), 0x16, 4)
            
            if (arg1.b != 0)
            label_5f06a5:
                int32_t esi_8 = data_b80b14
                int32_t edx_15 = 0
                
                if (esi_8 s<= 0)
                    goto label_5f069c
                
                int32_t i = *(arg3 + 0x98)
                
                while (i != zx.d(*(data_b80b0c + (edx_15 << 2))))
                    edx_15 += 1
                    
                    if (edx_15 s>= esi_8)
                        arg1.b = 0
                        return arg1
                
                if (arg2 == 0)
                    goto label_5f0354
                
                arg1 = *(arg3 + 0xa4)
                
                if (arg1 s< 7)
                    if (arg1 == 0x3ee)
                        goto label_5f0710
                else if (arg1 s<= 0x48 || arg1 == 0x3ee)
                label_5f0710:
                    *arg2 = zx.d(sub_5efc00(&data_b80af8, i)) + 5
                    int32_t eax_24
                    eax_24.b = 1
                    return eax_24
                
                goto label_5f03dc
            
            void* edx_12 = data_cc8d5c
            
            if (edx_12 == 0)
                goto label_5efe1e
            
            if (sub_622830(arg1, *(edx_12 + 0x7590), 0x16, 7).b != 0)
                goto label_5f06a5
            
            ebx_1 = data_b80b14
            esi_1 = data_b80b08
        
        uint32_t ebx_3
        
        if (arg2 == 0)
            ebx_3 = arg3
        else if (esi_1 == 0x36 || esi_1 == 0x133)
            ebx_3 = arg3
            *arg2 = 0x17
            
            if (var_11_1 == 0)
                esi_1 = data_b80b08
            else
                *arg2 = 0x18
                esi_1 = data_b80b08
        else if (var_c_1 != 1)
            *arg2 = 0x1f
            esi_1 = data_b80b08
            ebx_3 = arg3
        else if (esi_1 == 1)
            int32_t edx_14 = 0
            int32_t eax_19
            
            if (ebx_1 s<= 0)
            label_5f064e:
                eax_19 = 1
            else
                while (*(arg3 + 0x98) != *(data_b80b0c + (edx_14 << 2)))
                    edx_14 += 1
                    
                    if (edx_14 s>= ebx_1)
                        goto label_5f064e
                
                eax_19 = 3
            
            *arg2 = eax_19
            esi_1 = data_b80b08
            ebx_3 = arg3
        else if (esi_1 == 8)
            ebx_3 = arg3
            *arg2 = 1
            esi_1 = data_b80b08
        else if (esi_1 == 3)
            ebx_3 = arg3
            *arg2 = zx.d(sub_5efc00(&data_b80af8, *(ebx_3 + 0x98))) + 5
            esi_1 = data_b80b08
        else if (esi_1 == 2 || esi_1 == 0xfd)
            ebx_3 = arg3
            int32_t eax_27 = *(ebx_3 + 0xa4)
            
            if (eax_27 s< 7)
                if (eax_27 != 0x3ee)
                    *arg2 = 1
                    esi_1 = data_b80b08
                else
                    *arg2 = zx.d(sub_5efc00(&data_b80af8, *(ebx_3 + 0x98))) + 5
                    esi_1 = data_b80b08
            else if (eax_27 s<= 0x48 || eax_27 == 0x3ee)
                *arg2 = zx.d(sub_5efc00(&data_b80af8, *(ebx_3 + 0x98))) + 5
                esi_1 = data_b80b08
            else
                *arg2 = 1
                esi_1 = data_b80b08
        else if (esi_1 == 0x27 || esi_1 == 0x7b || esi_1 == 0x3b)
            *arg2 = 0xe
            esi_1 = data_b80b08
            ebx_3 = arg3
        else
            ebx_3 = arg3
            *arg2 = data_b80b00
            esi_1 = data_b80b08
            
            if (esi_1 == 0x7e)
                if (sub_5efc00(&data_b80af8, *(ebx_3 + 0x98)) != 0)
                    *arg2 = 6
                
                esi_1 = data_b80b08
            
            if (var_11_1 != 0)
                arg1 = *arg2
                
                if (arg1 == 9)
                    *arg2 = 0xa
                    esi_1 = data_b80b08
                else if (arg1 == 0x17)
                    *arg2 = 0x18
                    esi_1 = data_b80b08
                else if (arg1 == 7)
                    *arg2 = 8
                    esi_1 = data_b80b08
                else if (arg1 == 0x12)
                    *arg2 = 0x13
                    esi_1 = data_b80b08
                else if (arg1 == 0xb)
                    *arg2 = 0x18
                    esi_1 = data_b80b08
                else if (arg1 == 0xe)
                    *arg2 = 0xf
                    esi_1 = data_b80b08
                else if (arg1 == 0x10)
                    *arg2 = 0x11
                    esi_1 = data_b80b08
                else if (arg1 == 0xc)
                    *arg2 = 0xd
                    esi_1 = data_b80b08
                else if (arg1 == 0x14)
                    *arg2 = 0x15
                    esi_1 = data_b80b08
                else if (arg1 == 0x19)
                    *arg2 = 0x1a
                    esi_1 = data_b80b08
                else if (arg1 != 0x1b)
                    if (*arg2 != 0x1d)
                        var_24 = "IsCardInActiveSet"
                        var_28 = 0x7143
                        ecx_1 = "Halt"
                        goto label_5f0c5e
                    
                    *arg2 = 0x1e
                    esi_1 = data_b80b08
                else
                    *arg2 = 0x1c
                    esi_1 = data_b80b08
        
        void* edx_25 = data_b604e0
        arg1 = edx_25
        
        if (edx_25 == 0xffffffff)
            arg1 = nullptr
        
        if (data_b80b44 != arg1)
            goto label_5f069c
        
        int32_t ecx_21 = data_b7fcf0
        bool cond:6_1
        
        if (ecx_21 == 0)
            arg1 = data_b80afc
            
            if (arg1 == 5)
                goto label_5f069c
            
            if (arg1 == 7)
                int32_t eax_31 = sub_5cbb20(ebx_3)
                arg1 = sub_571b30(eax_31, sub_5cf7e0())
                
                if (((*(arg1 + 0x98) & 0x7f000400) | (*(arg1 + 0x9c) & 0x940)) != 0)
                    goto label_5f069c
                
                if ((*(sub_571b30(eax_31, sub_5cf7e0()) + 0x98) & 0x3000000) != 0)
                    goto label_5f069c
                
                if ((*(sub_571b30(eax_31, sub_5cf7e0()) + 0x9c) & 0x100000) != 0)
                    goto label_5f069c
                
                if (arg2 != 0)
                    *arg2 = 0x20
                
                if (data_b80b08 != 0x47)
                    goto label_5f0354
                
                if (*(ebx_3 + 0xa4) == 0x3ea)
                    goto label_5f069c
                
                arg1.b = 1
                return arg1
            
            if (esi_1 == 0x24)
                goto label_5f069c
            
            if (esi_1 != 0x36)
                if (esi_1 == 0x133 && *(ebx_3 + 0xa4) == 0x3ea)
                    arg1 = edx_25
                    
                    if (edx_25 == 0xffffffff)
                        arg1 = nullptr
                    
                    if (*(ebx_3 + 0xa0) == arg1)
                        int32_t ecx_33 = data_b8097c
                        
                        if (ecx_33 s< 3)
                            goto label_5f0354
                        
                        arg1 = nullptr
                        
                        if (ecx_33 s<= 0)
                            goto label_5f069c
                        
                        while (*((arg1 << 2) + &data_b7fcfc) != *(ebx_3 + 0x98))
                            arg1 += 1
                            
                            if (arg1 s>= data_b8097c)
                                arg1.b = 0
                                return arg1
                        
                        goto label_5f0354
            else if (*(ebx_3 + 0xa4) == 0x3ea)
                arg1 = edx_25
                
                if (edx_25 == 0xffffffff)
                    arg1 = nullptr
                
                if (*(ebx_3 + 0xa0) == arg1)
                    int32_t ecx_31 = data_b8097c
                    
                    if (ecx_31 s< 2)
                        goto label_5f0354
                    
                    arg1 = nullptr
                    
                    if (ecx_31 s<= 0)
                        goto label_5f069c
                    
                    while (*((arg1 << 2) + &data_b7fcfc) != *(ebx_3 + 0x98))
                        arg1 += 1
                        
                        if (arg1 s>= data_b8097c)
                            arg1.b = 0
                            return arg1
                    
                    goto label_5f0354
            
            if (data_b80afc == 4)
                goto label_5f069c
            
            if (*(ebx_3 + 0xa4) == 0x3ec)
                if (edx_25 == 0xffffffff)
                    edx_25 = nullptr
                
                arg1 = sub_5cc410(0, edx_25, 0x3ec, 0, 0)
                
                if (arg1 == 0 || *(arg1 + 0x1c28) != data_b7fcf4)
                    goto label_5f069c
                
                esi_1 = data_b80b08
            
            if (esi_1 != 0xd0 || data_b8097c s<= 0)
                if (data_b80afc == 1)
                    int32_t ecx_35 = data_b8097c
                    
                    if (data_b80b54 == ecx_35)
                        arg1 = nullptr
                        
                        if (ecx_35 s<= 0)
                            goto label_5f069c
                        
                        while (*((arg1 << 2) + &data_b7fcfc) != *(ebx_3 + 0x98))
                            arg1 += 1
                            
                            if (arg1 s>= data_b8097c)
                                arg1.b = 0
                                return arg1
                        
                        goto label_5f0354
                else if (data_b80afc == 6)
                    goto label_5f069c
                
                arg1 = nullptr
                
                if (data_b80b64 s<= 0)
                    goto label_5f069c
                
                while ((&data_b80b68)[arg1] != *(ebx_3 + 0x98))
                    arg1 += 1
                    
                    if (arg1 s>= data_b80b64)
                        arg1.b = 0
                        return arg1
                
                goto label_5f0354
            
            uint32_t esi_10 = zx.d(data_b7fcfc)
            
            if (esi_10 u>= 0x320)
                sub_591930()
            
            int32_t edi_1 = *(esi_10 * 0x64 + &data_b82524)
            arg1 = nullptr
            
            if (data_b80b64 s<= 0)
                goto label_5f069c
            
            int32_t i_1 = *(ebx_3 + 0x98)
            
            while ((&data_b80b68)[arg1] != i_1)
                arg1 += 1
                
                if (arg1 s>= data_b80b64)
                    arg1.b = 0
                    return arg1
            
            uint32_t esi_12 = zx.d(i_1.w)
            
            if (esi_12 u>= 0x320)
                sub_591930()
            
            cond:6_1 = edi_1 == *(esi_12 * 0x64 + &data_b82524)
        else
            cond:6_1 = *(sub_5cba00(ecx_21) + 0x98) == *(ebx_3 + 0x98)
        
        if (cond:6_1)
            goto label_5f0354
        
        goto label_5f069c
    
    if (esi_1 != 2)
        goto label_5f0367
    
    int32_t ebx_2 = 0
    
    if (data_b80b64 s<= 0)
        goto label_5f0272
    
    while (true)
        uint32_t esi_3 = zx.d((&data_b80b68)[ebx_2].w)
        
        if (esi_3 u>= 0x320)
            sub_591930()
        
        arg1 = *(esi_3 * 0x64 + 0xb82528)
        
        if (arg1 == 0x3ea || arg1 == 0x3eb)
            uint32_t esi_4 = zx.d((&data_b80b68)[ebx_2].w)
            
            if (esi_4 u>= 0x320)
                sub_591930()
            
            int32_t eax_11 = esi_4 * 0x64
            arg1 = sub_5754f0(eax_11, *(eax_11 + &data_b82524), 0xb80ad8, 4, 0)
            
            if (arg1.b != 0)
                break
        
        ebx_2 += 1
        
        if (ebx_2 s>= data_b80b64)
            esi_1 = data_b80b08
            goto label_5f0272

label_5f0367:

if (arg2 == 0)
    goto label_5f0354

*arg2 = 0x22

if (data_b80980 != *(arg3 + 0x98))
    goto label_5f0354

*arg2 = 2
arg1.b = 1
return arg1
