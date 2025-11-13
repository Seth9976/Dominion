// 函数: sub_5822e0
// 地址: 0x5822e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_c94 = arg4
int32_t var_c90
int32_t eax_5 = sub_590990(&var_c90, 0xffffffff, arg3, 5, &var_c90)

if (eax_5 != 0)
    if (eax_5 != 1)
        sub_591930()
    
    eax_5 = var_c90

int32_t edx = var_c94

if (edx == eax_5)
    sub_591930()
    edx = var_c94

uint32_t ebx = zx.d(edx.w)

if (ebx u>= 0x320)
    sub_591930()
    edx = var_c94

int32_t* eax_7 = arg3[ebx * 0x19 + 0x694]

if (edx.w u>= 0x320)
    sub_591930()
    edx = var_c94

uint32_t ebx_1 = zx.d(edx.w)

if (ebx_1 u>= 0x320)
    sub_591930()
    edx = var_c94

uint32_t ebx_2 = zx.d(edx.w)
int32_t eax_9 = arg3[ebx_1 * 0x19 + 0x69c]

if (ebx_2 u>= 0x320)
    sub_591930()
    edx = var_c94

int32_t eax_11 = arg3[ebx_2 * 0x19 + 0x69d]
sub_581bd0(eax_11, edx, arg3, arg2, arg7, arg12)
int32_t ecx_1 = var_c94
uint32_t ebx_3 = zx.d(ecx_1.w)
int32_t var_c98 = ecx_1

if (ebx_3 u>= 0x320)
    sub_591930()
    ecx_1 = var_c94
    var_c98 = ecx_1

int32_t eax_12 = ebx_3 * 0x64
int32_t* ebx_4 = arg6

if (*(eax_12 + arg3 + 0x1a4c) != 0x1025 || ebx_4 == 0x3e9 || ebx_4 == 0x451 || arg3[0x669] s<= 0)
    char* eax_15 = sub_5723a0(eax_12, ecx_1, arg3, arg13)
    
    if (ebx_4 != 0x451 && ebx_4 != 0x3e9)
        sub_578d00(sub_578d00(eax_15, arg2, arg3, var_c94, nullptr, nullptr, nullptr), arg2, arg3, 
            var_c94, 7, nullptr, nullptr)
else
    void* ebx_5 = &arg3[0x54b5]
    int32_t i = 0
    
    do
        if (*(ebx_5 - 4) == 0x474 && *ebx_5 == ecx_1)
            int32_t eax_14 = neg.d(*(ebx_5 + 8))
            eax_12 = sub_571cb0(eax_14, i, arg3, eax_14, 0, 0)
        
        ecx_1 = var_c98
        i += 1
        ebx_5 += 0x20
    while (i s< arg3[0x669])
    
    ebx_4 = arg6
    sub_578d00(
        sub_578d00(sub_5723a0(eax_12, var_c94, arg3, arg13), arg2, arg3, var_c94, nullptr, nullptr, 
            nullptr), 
        arg2, arg3, var_c94, 7, nullptr, nullptr)

void* eax_18 = arg15
int32_t var_cc0_1
char const* const ecx_7

if (eax_18 == 0xfffffffe)
    sub_572710(eax_18, var_c94, arg3, ebx_4, arg2, arg16)
label_582549:
    
    if (ebx_4 == 0)
        sub_591930()
    
    int32_t eax_17 = arg3[0x541]
    
    if (eax_17 != 3 && eax_17 != 5 && eax_17 != 4 && eax_17 != 6)
        sub_61b1b0(eax_17, 9, eax_17 == 2, arg2, var_c94, arg6, arg15, arg16, arg5, arg10, 0, 0, 
            arg8, arg9)
    
    if (arg11 != 0 || arg5 == 0xa || arg5 == 9)
        goto label_582688
    
    if (arg5 != 0x15)
        void* eax_22
        int32_t ebx_7
        uint32_t var_cd8_3
        int32_t* var_cd0_3
        int32_t var_cc8_2
        void* var_cc4_3
        int32_t var_cc0_6
        int32_t eax_21
        int32_t ecx_14
        uint32_t edx_10
        
        if (arg5 != 0x16)
            if (arg5 == 0x10)
                goto label_582688
            
            if (arg5 == 0x11)
                int32_t eax_23 = arg3[0x541]
                
                if (eax_23 == 3 || eax_23 == 5 || eax_23 == 4 || eax_23 == 6 || arg3[0x540].b != 0)
                    goto label_582688
                
                ecx_14 = eax_11
                eax_21 = ecx_14
                
                if (ecx_14 == arg3[0x673])
                    eax_21 = arg3[0x674]
                
                int32_t var_cbc_10 = 0
                var_cc0_6 = 0
                var_cc4_3 = nullptr
                var_cc8_2 = eax_9
                int32_t var_ccc_3 = 1
                var_cd0_3 = &var_c94
                int32_t var_cd4_3 = 0
                var_cd8_3 = 0x26
                goto label_58267b
            
            int32_t ecx_21 = arg6
            
            if (ecx_21 s> 0x3e9)
                if (ecx_21 - 0x3ea u> 0x67)
                label_582749:
                    
                    if (arg2 == 0xffffffff)
                        goto label_582688
                    
                    goto label_582755
                
                uint32_t eax_26 = zx.d(*(ecx_21 + 0x5828ba))
                int32_t eax_39
                uint32_t ecx_41
                
                switch (eax_26)
                    case 0
                        if (arg5 != 0 && arg5 != 0xd && arg5 != 0xe)
                            uint32_t ecx_33 = zx.d(sub_582040(arg7))
                            int32_t eax_33 = arg3[0x541]
                            
                            if (eax_33 == 3 || eax_33 == 5 || eax_33 == 4 || eax_33 == 6
                                    || arg3[0x540].b != 0)
                                goto label_582688
                            
                            eax_21 = arg2
                            
                            if (arg2 == arg3[0x673])
                                eax_21 = arg3[0x674]
                            
                            int32_t var_cbc_11 = 0
                            var_cc0_6 = arg14
                            var_cc4_3 = nullptr
                            var_cc8_2 = 0x3ea
                            int32_t var_ccc_4 = 1
                            var_cd0_3 = &var_c94
                            int32_t var_cd4_4 = 0
                            var_cd8_3 = (ecx_33 ^ 1) + 0x27
                            edx_10 = arg2
                            goto label_582680
                        
                        ebx_7 = ecx_21
                    case 1
                        uint32_t ecx_51 = zx.d(sub_582040(arg7))
                        eax_39 = arg3[0x541]
                        ecx_41 = (ecx_51 ^ 1) + 0x27
                        
                        if (arg15 != 0)
                            goto label_582a56
                        
                        goto label_582ad4
                    case 2
                        if (eax_7 == 0x453)
                            eax_22 = arg3[0x541]
                            
                            if (eax_22 == 3 || eax_22 == 5 || eax_22 == 4 || eax_22 == 6
                                    || arg3[0x540].b != 0)
                                CookieCheckFunction(eax_22)
                                return eax_22
                            
                            uint32_t eax_28 = arg2
                            
                            if (arg2 == arg3[0x673])
                                eax_28 = arg3[0x674]
                            
                            int32_t eax_29 = sub_59f9b0(eax_28, arg2, arg3, eax_28, 0x28, 0, 
                                &var_c94, 1, ecx_21, 0, arg14, 0)
                            CookieCheckFunction(eax_29)
                            return eax_29
                        
                        if (eax_7 == 0x44d)
                            eax_22 = arg3[0x541]
                            
                            if (eax_22 == 3 || eax_22 == 5 || eax_22 == 4 || eax_22 == 6
                                    || arg3[0x540].b != 0)
                                CookieCheckFunction(eax_22)
                                return eax_22
                            
                            uint32_t eax_30 = arg2
                            
                            if (arg2 == arg3[0x673])
                                eax_30 = arg3[0x674]
                            
                            int32_t eax_31 = sub_59f9b0(eax_30, arg2, arg3, eax_30, 0x27, 0, 
                                &var_c94, 1, ecx_21, 0, arg14, 0)
                            CookieCheckFunction(eax_31)
                            return eax_31
                        
                        ebx_7 = ecx_21
                    case 3
                        ebx_7 = ecx_21
                    case 4
                        uint32_t eax_34 = sub_5757f0(eax_26, var_c94.w, arg3, 0x4000000, 0)
                        
                        if (eax_34.b != 0)
                            int32_t eax_35 = arg3[0x541]
                            
                            if (eax_35 == 3 || eax_35 == 5 || eax_35 == 4 || eax_35 == 6
                                    || arg3[0x540].b != 0)
                                goto label_582688
                            
                            eax_21 = arg2
                            
                            if (arg2 == arg3[0x673])
                                eax_21 = arg3[0x674]
                            
                            int32_t var_cbc_12 = 0
                            var_cc0_6 = 0
                            var_cc4_3 = nullptr
                            var_cc8_2 = 0
                            int32_t var_ccc_5 = 1
                            edx_10 = arg2
                            var_cd0_3 = &var_c94
                            int32_t var_cd4_5 = 0
                            var_cd8_3 = 0x36
                            goto label_582680
                        
                        if (sub_5757f0(eax_34, var_c94.w, arg3, 0x40000000, 0) == 0)
                            goto label_582688
                        
                        int32_t eax_37 = arg3[0x541]
                        
                        if (eax_37 == 3 || eax_37 == 5 || eax_37 == 4 || eax_37 == 6
                                || arg3[0x540].b != 0)
                            goto label_582688
                        
                        eax_21 = arg2
                        
                        if (arg2 == arg3[0x673])
                            eax_21 = arg3[0x674]
                        
                        int32_t var_cbc_13 = 0
                        var_cc0_6 = 0
                        var_cc4_3 = nullptr
                        var_cc8_2 = 0
                        int32_t var_ccc_6 = 1
                        edx_10 = arg2
                        var_cd0_3 = &var_c94
                        int32_t var_cd4_6 = 0
                        var_cd8_3 = 0x37
                        goto label_582680
                    case 5
                        if (arg15 == 0)
                            uint32_t ecx_43 = zx.d(sub_582040(arg7))
                            eax_39 = arg3[0x541]
                            ecx_41 = (ecx_43 ^ 1) + 0x27
                        label_582ad4:
                            
                            if (eax_39 == 3 || eax_39 == 5 || eax_39 == 4 || eax_39 == 6
                                    || arg3[0x540].b != 0)
                                goto label_582688
                            
                            eax_21 = arg2
                            
                            if (arg2 == arg3[0x673])
                                eax_21 = arg3[0x674]
                            
                            int32_t var_cbc_15 = 0
                            var_cc0_6 = arg14
                            var_cc4_3 = nullptr
                            var_cc8_2 = 0x3eb
                            int32_t var_ccc_8 = 1
                            var_cd0_3 = &var_c94
                            int32_t var_cd4_8 = 0
                            var_cd8_3 = ecx_41
                            edx_10 = arg2
                            goto label_582680
                        
                        if (arg15 != 0xffffffff)
                            uint32_t ecx_47 = zx.d(sub_582040(arg7))
                            int32_t eax_45 = arg3[0x541]
                            
                            if (eax_45 == 3 || eax_45 == 5 || eax_45 == 4 || eax_45 == 6
                                    || arg3[0x540].b != 0)
                                goto label_582688
                            
                            eax_21 = arg2
                            
                            if (arg2 == arg3[0x673])
                                eax_21 = arg3[0x674]
                            
                            int32_t var_cbc_17 = 0
                            var_cc0_6 = arg14
                            var_cc4_3 = arg16
                            var_cc8_2 = 0x44e
                            int32_t var_ccc_10 = 1
                            var_cd0_3 = &var_c94
                            int32_t var_cd4_10 = 0
                            var_cd8_3 = (ecx_47 ^ 1) + 0x27
                            edx_10 = arg2
                            goto label_582680
                        
                        uint32_t ecx_45 = zx.d(sub_582040(arg7))
                        int32_t eax_43 = arg3[0x541]
                        ecx_41 = (ecx_45 ^ 1) + 0x27
                        
                        if (eax_43 == 3 || eax_43 == 5 || eax_43 == 4 || eax_43 == 6
                                || arg3[0x540].b != 0)
                            goto label_582688
                        
                        eax_21 = arg2
                        
                        if (arg2 != arg3[0x673])
                        label_582a97:
                            int32_t var_cbc_14 = 0
                            var_cc0_6 = arg14
                            var_cc4_3 = 0xffffffff
                            var_cc8_2 = 0x3eb
                            int32_t var_ccc_7 = 1
                            var_cd0_3 = &var_c94
                            int32_t var_cd4_7 = 0
                            var_cd8_3 = ecx_41
                            edx_10 = arg2
                            goto label_582680
                        
                        eax_21 = arg3[0x674]
                        int32_t var_cbc_16 = 0
                        var_cc0_6 = arg14
                        var_cc4_3 = 0xffffffff
                        var_cc8_2 = 0x3eb
                        int32_t var_ccc_9 = 1
                        var_cd0_3 = &var_c94
                        int32_t var_cd4_9 = 0
                        var_cd8_3 = ecx_41
                        edx_10 = arg2
                        goto label_582680
                    case 6
                        uint32_t ecx_39 = zx.d(sub_582040(arg7))
                        eax_39 = arg3[0x541]
                        ecx_41 = (ecx_39 ^ 1) + 0x27
                    label_582a56:
                        
                        if (eax_39 == 3 || eax_39 == 5 || eax_39 == 4 || eax_39 == 6
                                || arg3[0x540].b != 0)
                            goto label_582688
                        
                        eax_21 = arg2
                        
                        if (arg2 == arg3[0x673])
                            eax_21 = arg3[0x674]
                        
                        goto label_582a97
                    case 7
                        goto label_582749
            else if (ecx_21 == 0x3e9)
                ebx_7 = ecx_21
            else
                if (ecx_21 == 2 || ecx_21 == 3 || arg2 == 0xffffffff)
                    goto label_582688
                
            label_582755:
                uint32_t eax_24 = sub_582040(arg7)
                ebx_7 = arg6
                sub_5716d0(eax_24, (zx.d(eax_24.b) ^ 1) + 0x27, arg3, arg2, 0, &var_c94, 1, ebx_7, 
                    0, arg14, 0)
        else
            int32_t eax_20 = arg3[0x541]
            
            if (eax_20 == 3 || eax_20 == 5 || eax_20 == 4 || eax_20 == 6 || arg3[0x540].b != 0)
                goto label_582688
            
            ecx_14 = eax_9
            eax_21 = ecx_14
            
            if (ecx_14 == arg3[0x673])
                eax_21 = arg3[0x674]
            
            int32_t var_cbc_9 = 0
            var_cc0_6 = 0
            var_cc4_3 = nullptr
            var_cc8_2 = arg2
            int32_t var_ccc_2 = 1
            var_cd0_3 = &var_c94
            int32_t var_cd4_2 = 0
            var_cd8_3 = 0x1a
        label_58267b:
            edx_10 = ecx_14
        label_582680:
            sub_59f9b0(eax_21, edx_10, arg3, eax_21, var_cd8_3, 0, var_cd0_3, 1, var_cc8_2, 
                var_cc4_3, var_cc0_6, 0)
        label_582688:
            ebx_7 = arg6
        
        if (eax_7 s> 0 && eax_7 s<= 0x48)
            sub_56de40(arg3, eax_7)
        
        eax_22 = ebx_7 - 1
        
        if (eax_22 u<= 0x47)
            eax_22 = sub_56de40(arg3, ebx_7)
        
        CookieCheckFunction(eax_22)
        return eax_22
    
    eax_18 = arg3[0x541]
    
    if (eax_18 != 3 && eax_18 != 5 && eax_18 != 4 && eax_18 != 6 && arg3[0x540].b == 0)
        int32_t eax_19 = eax_11
        
        if (eax_11 == arg3[0x673])
            eax_19 = arg3[0x674]
        
        eax_18 = sub_59f9b0(eax_19, eax_11, arg3, eax_19, 0x35, 0, &var_c94, 1, 0, 0, 0, 0)
    
    if (arg2 == 0xffffffff)
        goto label_582688
    
    char const* const var_cbc_18 = "MoveCardToSafe"
    var_cc0_1 = 0x2a79
    ecx_7 = "who == PLAYER_NONE"
else
    if (eax_18 == 0xffffffff)
        sub_572560(eax_18, var_c94, arg3, ebx_4, arg2)
        goto label_582549
    
    if (eax_18 == 0)
        sub_572660(eax_18, var_c94, arg3, ebx_4, arg2)
        goto label_582549
    
    char const* const var_cbc_4 = "MoveCardToSafe"
    var_cc0_1 = 0x2a69
    ecx_7 = "Halt"

sub_63b870(eax_18, &data_801800, ecx_7, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_cc0_1, 
    "MoveCardToSafe")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
