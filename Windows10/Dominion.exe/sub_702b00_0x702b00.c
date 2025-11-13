// 函数: sub_702b00
// 地址: 0x702b00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t* edi = arg3
int32_t eax = *edi
int32_t var_1c
char const* const var_18_8
int32_t* eax_2

if (eax == 0x1c || eax == 0x1d || eax == 0x1e || eax == 0x22 || eax == 0x23 || eax == 0x24
        || eax == 0x28 || eax == 0x29 || eax == 0x2a || eax == 0x2e || eax == 0x2f || eax == 0x30
        || eax == 0x34 || eax == 0x35 || eax == 0x36 || eax == 0x3a || eax == 0x3b || eax == 0x3c
        || eax == 0x40 || eax == 0x41 || eax == 0x42 || eax == 0x46 || eax == 0x47 || eax == 0x48)
    int32_t eax_46 = sub_6dcf50(eax, arg2, &data_8ce7bc, arg1)
    
    if (eax_46 == 1)
        edi[1] = 0x2901
        eax_2.b = 1
        return eax_2
    
    if (eax_46 == 2)
        edi[1] = 0x8370
        int32_t eax_50
        eax_50.b = 1
        return 0x8301
    
    eax_2 = eax_46 - 3
    
    if (eax_46 == 3)
        edi[1] = 0x812f
        int32_t eax_49
        eax_49.b = 1
        return 0x8101
    
    var_18_8 = "GLWrapModeFromDx"
    var_1c = 0xd72
    goto label_7032fe

if (eax != 0x21)
    int32_t* ebx_1
    
    if (eax != 0x1f && eax != 0x25 && eax != 0x2b && eax != 0x31 && eax != 0x37 && eax != 0x3d
            && eax != 0x43 && eax != 0x49)
        ebx_1 = arg2
        goto label_702d88
    
    ebx_1 = arg2
    eax_2 = sub_6dcf50(eax, ebx_1, &data_8ce7bc, eax)
    int32_t ecx_2 = *edi
    char const* const var_20
    int32_t ecx_3
    char* ecx_29
    
    if (ecx_2 != 0x1f)
        switch (ecx_2)
            case 0x25
                ecx_3 = 0x27
                goto label_702ccd
            case 0x2b
                ecx_3 = 0x2d
                goto label_702ccd
            case 0x31
                ecx_3 = 0x33
                goto label_702ccd
            case 0x37
                ecx_3 = 0x39
                goto label_702ccd
            case 0x3d
                ecx_3 = 0x3f
                goto label_702ccd
            case 0x43
                ecx_3 = 0x45
                goto label_702ccd
            case 0x49
                ecx_3 = 0x4b
                goto label_702ccd
        
        var_18_8 = "OpenGLInterface::RenderStateSpecialValueFromConstant"
        var_1c = 0xe51
    label_7032fe:
        ecx_29 = "Halt"
        var_20 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
    label_70330d:
        sub_63b870(eax_2, &data_801800, ecx_29, var_20, var_1c, var_18_8)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    ecx_3 = 0x21
label_702ccd:
    int32_t eax_4 = sub_6dcf50(eax_2, ebx_1, &data_8ce7bc, ecx_3)
    void* ecx_4 = data_cf65b8
    edi[2] = 0
    
    if (*(ecx_4 + 0x21) == 0)
        if (eax_4 != 0)
            sub_63b5f0("Material Mipmap ignored because it's not enabled in the app")
        
        goto label_702cff
    
    if (eax_4 == 0)
    label_702cff:
        
        if (eax_2 == 1)
            edi[1] = 0x2600
            goto label_702d88
        
        if (eax_2 == 2)
            edi[1] = 0x2601
            goto label_702d88
        
        sub_63b5f0("opengl material param issue: invalid min filter")
    else if (eax_4 != 1)
        if (eax_4 != 2)
            sub_63b5f0("opengl material param issue: invalid mip filter")
            uint32_t eax_45
            eax_45.b = 0
            return eax_45
        
        if (eax_2 == 1)
            edi[1] = 0x2702
            goto label_702d88
        
        if (eax_2 == 2)
            edi[1] = 0x2703
            goto label_702d88
        
        if (eax_2 == 3)
            edi[1] = 0x2703
            edi[2] = 1
            goto label_702d88
        
        sub_63b5f0("opengl material param issue: invalid min filter")
    else if (eax_2 != eax_4)
        if (eax_2 == 2)
            edi[1] = 0x2701
            goto label_702d88
        
        sub_63b5f0("opengl material param issue: invalid min filter")
    else
        edi[1] = 0x2700
    label_702d88:
        eax_2 = *edi
        
        if (eax_2 != 0x20 && eax_2 != 0x26 && eax_2 != 0x2c && eax_2 != 0x32 && eax_2 != 0x38
                && eax_2 != 0x3e && eax_2 != 0x44 && eax_2 != 0x4a)
            goto label_702de0
        
        eax_2 = sub_6dcf50(eax_2, ebx_1, &data_8ce7bc, eax_2)
        
        if (eax_2 == 1)
            edi[1] = 0x2600
        label_702de0:
            void* esi_3
            
            if (*edi != 3)
                esi_3 = &edi[1]
                arg1 = esi_3
            label_702e4e:
                int32_t eax_11 = *edi
                
                if (eax_11 == 4)
                    int32_t edx_8 = *ebx_1
                    int32_t ecx_8 = 0
                    
                    if (edx_8 s> 0)
                        eax_2 = ebx_1[2]
                        
                        do
                            if (*eax_2 == 3)
                                goto label_70326c
                            
                            ecx_8 += 1
                            eax_2 = &eax_2[4]
                        while (ecx_8 s< edx_8)
                    
                    sub_63b5f0("opengl material param issue: dest blend is ignored when src blend is missing")
                    uint32_t eax_12
                    eax_12.b = 0
                    return eax_12
                
                if (eax_11 != 0x4e)
                    goto label_702f28
                
                eax_2 = sub_6dcff0(eax_11, ebx_1, &data_8ce7bc, 0x4d)
                
                if (eax_2.b != 0)
                    int32_t eax_13 = sub_6dcf50(eax_2, ebx_1, &data_8ce7bc, 3)
                    int32_t eax_14 = sub_6dcf50(eax_13, ebx_1, &data_8ce7bc, 4)
                    int32_t eax_15 = sub_6dcf50(eax_14, arg2, &data_8ce7bc, 0x4e)
                    int32_t eax_16 = sub_6dcf50(eax_15, arg2, &data_8ce7bc, 0x4f)
                    *arg1 = sub_7027a0(eax_13)
                    arg3[2] = sub_7027a0(eax_14)
                    edi = arg3
                    edi[3] = sub_7027a0(eax_15)
                    esi_3 = &edi[1]
                    edi[4] = sub_7027a0(eax_16)
                    arg1 = esi_3
                label_702f28:
                    eax_2 = *edi
                    
                    if (eax_2 == 0x4f)
                        int32_t ecx_15 = 0
                        int32_t edx_14 = *arg2
                        
                        if (edx_14 s> 0)
                            eax_2 = arg2[2]
                            
                            do
                                if (*eax_2 == 0x4e)
                                    goto label_70326c
                                
                                ecx_15 += 1
                                eax_2 = &eax_2[4]
                            while (ecx_15 s< edx_14)
                        
                        sub_63b5f0("opengl material param issue: dest blend alpha is ignored when "
                        "src blend alpha is missing")
                        uint32_t eax_22
                        eax_22.b = 0
                        return eax_22
                    
                    if (eax_2 != 0x4d)
                        if (eax_2 == 6)
                            *esi_3 = sub_7028e0(sub_6dcf50(eax_2, arg2, &data_8ce7bc, eax_2))
                            int32_t eax_24
                            eax_24.b = 1
                            return eax_24
                        
                        if (eax_2 == 0x17)
                            int32_t edx_16 = *arg2
                            int32_t ecx_17 = 0
                            
                            if (edx_16 s> 0)
                                eax_2 = arg2[2]
                                
                                do
                                    if (*eax_2 == 0x50)
                                        goto label_70326c
                                    
                                    ecx_17 += 1
                                    eax_2 = &eax_2[4]
                                while (ecx_17 s< edx_16)
                            
                            esi_3 = &edi[1]
                            arg1 = esi_3
                            eax_2 = sub_702870(sub_6dcf50(eax_2, arg2, &data_8ce7bc, 0x17))
                            *esi_3 = eax_2
                        
                        if (*edi == 0x50)
                            int32_t eax_26 = sub_6dcf50(eax_2, arg2, &data_8ce7bc, 0x17)
                            int32_t eax_27 = sub_6dcf50(eax_26, arg2, &data_8ce7bc, 0x50)
                            *arg1 = sub_702870(eax_26)
                            eax_2 = sub_702870(eax_27)
                            edi = arg3
                            edi[2] = eax_2
                            esi_3 = &edi[1]
                        
                        int32_t ecx_22 = *edi
                        
                        if (ecx_22 == 8)
                            int32_t eax_29 = sub_6dcf50(eax_2, arg2, &data_8ce7bc, ecx_22)
                            char eax_30 = sub_6dcf50(eax_29, arg2, &data_8ce7bc, 7)
                            edi[1] = sub_7028e0(eax_29)
                            edi[2] = _mm_cvtepi32_ps(zx.o(eax_30)) / 255f
                            int32_t* eax_33
                            eax_33.b = 1
                            return eax_33
                        
                        if (ecx_22 == 7)
                            int32_t edx_22 = *arg2
                            int32_t ecx_24 = 0
                            
                            if (edx_22 s> 0)
                                eax_2 = arg2[2]
                                
                                do
                                    if (*eax_2 == 8)
                                        goto label_70326c
                                    
                                    ecx_24 += 1
                                    eax_2 = &eax_2[4]
                                while (ecx_24 s< edx_22)
                            
                            sub_63b5f0("opengl material param issue: alpha ref is ignored when alpha "
                            "func is missing")
                            uint32_t eax_34
                            eax_34.b = 0
                            return eax_34
                        
                        if (ecx_22 != 0xe)
                            arg1 = esi_3
                        
                        if (ecx_22 == 0xe || ecx_22 == 0x15)
                            int32_t eax_41 = sub_6dcf50(eax_2, arg2, &data_8ce7bc, ecx_22)
                            int32_t eax_42 = sub_6dcf50(eax_41, arg2, &data_8ce7bc, 0xf)
                            int32_t eax_43 = sub_6dcf50(eax_42, arg2, &data_8ce7bc, 0x10)
                            *arg1 = sub_7028e0(eax_41)
                            int32_t eax_44
                            eax_44.b = 1
                            arg3[2] = eax_42
                            arg3[3] = eax_43
                            return eax_44
                        
                        if (ecx_22 == 0xf)
                            int32_t edx_23 = *arg2
                            int32_t ecx_25 = 0
                            
                            if (edx_23 s> 0)
                                eax_2 = arg2[2]
                                
                                while (true)
                                    if (*eax_2 == 0xe)
                                        goto label_70326c
                                    
                                    ecx_25 += 1
                                    eax_2 = &eax_2[4]
                                    
                                    if (ecx_25 s>= edx_23)
                                        eax_2 = arg2[2]
                                        int32_t ecx_26 = 0
                                        
                                        do
                                            if (*eax_2 == 0x15)
                                                goto label_70326c
                                            
                                            ecx_26 += 1
                                            eax_2 = &eax_2[4]
                                        while (ecx_26 s< edx_23)
                                        
                                        break
                            
                            sub_63b5f0("opengl material param issue: stencil ref is ignored when "
                            "stencil func is missing")
                            uint32_t eax_35
                            eax_35.b = 0
                            return eax_35
                        
                        if (ecx_22 != 0x10)
                            if (ecx_22 != 0x11 && ecx_22 != 0xb && ecx_22 != 0xc && ecx_22 != 0xd
                                    && ecx_22 != 0x12 && ecx_22 != 0x13 && ecx_22 != 0x14)
                                if (ecx_22 == 0x18)
                                    edi[1] = sub_6dd090(eax_2, arg2, &data_8ce7bc, ecx_22)
                                    int32_t* eax_37
                                    eax_37.b = 1
                                    return eax_37
                                
                                eax_2.b = 1
                                return eax_2
                            
                            if (ecx_22 s>= 0 && ecx_22 s< data_8ce7cc)
                                int32_t var_18_7 = *(*(data_8ce7c8 + (ecx_22 << 2)) + 4)
                                sub_63b5f0("
                                    opengl material param issue: we don't support %s in opengl")
                                uint32_t eax_40
                                eax_40.b = 0
                                return eax_40
                            
                            var_18_8 = "AttribTagGetField"
                            var_1c = 0x8b
                            var_20 = "C:\x\ax2017\Engine\AttribMap.cpp"
                            ecx_29 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
                            goto label_70330d
                        
                        int32_t edx_24 = *arg2
                        int32_t ecx_27 = 0
                        
                        if (edx_24 s> 0)
                            eax_2 = arg2[2]
                            
                            while (true)
                                if (*eax_2 == 0xe)
                                    goto label_70326c
                                
                                ecx_27 += 1
                                eax_2 = &eax_2[4]
                                
                                if (ecx_27 s>= edx_24)
                                    eax_2 = arg2[2]
                                    int32_t ecx_28 = 0
                                    
                                    do
                                        if (*eax_2 == 0x15)
                                            goto label_70326c
                                        
                                        ecx_28 += 1
                                        eax_2 = &eax_2[4]
                                    while (ecx_28 s< edx_24)
                                    
                                    break
                        
                        sub_63b5f0("opengl material param issue: stencil mask is ignored when "
                        "stencil func is missing")
                        uint32_t eax_36
                        eax_36.b = 0
                        return eax_36
            else
                eax_2 = sub_6dcff0(eax_2, ebx_1, &data_8ce7bc, 0x4d)
                
                if (eax_2.b == 0)
                    int32_t eax_5 = sub_6dcf50(eax_2, ebx_1, &data_8ce7bc, 3)
                    int32_t eax_6 = sub_6dcf50(eax_5, ebx_1, &data_8ce7bc, 4)
                    arg1 = &arg3[1]
                    *arg1 = sub_7027a0(eax_5)
                    edi = arg3
                    edi[2] = sub_7027a0(eax_6)
                    esi_3 = &edi[1]
                    goto label_702e4e
        else if (eax_2 == 2)
            edi[1] = 0x2601
            goto label_702de0
else
    int32_t ecx_1 = 0
    int32_t edx_1 = *arg2
    
    if (edx_1 s<= 0)
    label_702c0d:
        sub_63b5f0("opengl material param issue: mip filter is ignored when min filter is missing")
        uint32_t eax_3
        eax_3.b = 0
        return eax_3
    
    eax_2 = arg2[2]
    
    while (*eax_2 != 0x1f)
        ecx_1 += 1
        eax_2 = &eax_2[4]
        
        if (ecx_1 s>= edx_1)
            goto label_702c0d

label_70326c:
eax_2.b = 0
return eax_2
