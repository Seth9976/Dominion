// 函数: sub_5d7b90
// 地址: 0x5d7b90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_28
int32_t var_24
char const* const var_20
char* result
char* ecx

if (data_cc8d5c == 0)
label_5d7ba4:
    var_20 = "GetClient"
    var_24 = 0x7b
    var_28 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"
label_5d85f0:
    sub_63b870(result, &data_801800, ecx, var_28, var_24, var_20)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

int32_t ecx_1 = *(arg1 + 0x2c)
void* edx_1 = data_cc8d5c

if (ecx_1 != 5)
    if (data_ccf768 != 0 || *(arg1 + 0x1b9c) != 0)
        result.b = 0
        return result
else if (*(edx_1 + 0x10) != *(edx_1 + 0xc) || data_ccf768 != 0 || *(arg1 + 0x1b9c) != 0)
    result.b = 0
    return result

if (ecx_1 == 1)
    result = *(arg1 + 0x174)
    
    if (result != 2)
        if (result != 3)
            return sub_5d7a30(arg1)
        
        result.b = 1
        return result
    
    result.b = data_8db664 == 0x3e8
    return result

if (ecx_1 == 2)
    return sub_5d7a30(arg1)

if (ecx_1 != 8)
label_5d7cf6:
    int32_t ecx_11
    
    if (*(arg1 + 0x2c) != 3 || *(arg1 + 0x5c) != 0x3ee)
    label_5d7d61:
        ecx_11 = data_b809e4
    label_5d7d67:
        uint32_t eax_6 = *(arg1 + 0x2c)
        
        if (eax_6 != 0)
            if (eax_6 == 3 && *(arg1 + 0x5c) == eax_6)
                int32_t ebx_1 = 7
                void* edi_3 = &data_b8206c
                
                while (true)
                    if (ebx_1 s>= 0x48)
                        eax_6 = sub_591930()
                    
                    if (*edi_3 == 0xd00)
                        break
                    
                    if (*(edi_3 + 4) == 0xd00)
                        break
                    
                    edi_3 += 0x10
                    ebx_1 += 1
                    
                    if (edi_3 s>= 0xb8247c)
                        ebx_1 = 0
                        break
                
                if (sub_5cc410(eax_6, 0xffffffff, ebx_1, 0, 0) == 0)
                    result.b = 0
                    return result
                
                if (sub_5d7b90().b == 0)
                    result.b = 0
                    return result
                
                ecx_11 = data_b809e4
        else if (data_b7fcd0 == *(arg1 + 0x1c28))
            result.b = 1
            return result
        
        int32_t edi_4
        
        if (*(arg1 + 0x2c) != 3)
            edi_4 = data_b7fcf4
        else
            result = *(arg1 + 0x5c)
            
            if (result == 0x3f0 || result == 0x3ef)
                result.b = 0
                return result
            
            edi_4 = data_b7fcf4
            
            if (*(arg1 + 0x1c28) == edi_4)
                result.b = 0
                return result
            
            if (*(arg1 + 0x30) != 0)
                int32_t eax_7 = sub_5cf7e0()
                void* eax_8 = sub_571b30(*(arg1 + 0x30), eax_7)
                
                if (((*(eax_8 + 0x98) & 0x7f000400) | (*(eax_8 + 0x9c) & 0x940)) != 0)
                    result = sub_5dc840(sub_5cba00(*(arg1 + 0x70)))
                
                if (((*(eax_8 + 0x98) & 0x7f000400) | (*(eax_8 + 0x9c) & 0x940)) != 0
                        && result.b == 0)
                    result.b = 0
                    return result
                
                ecx_11 = data_b809e4
                edi_4 = data_b7fcf4
        
        int32_t edx_5 = *(arg1 + 0x1b8c)
        uint32_t eax_12
        
        if (edx_5 != 0)
            eax_12 = zx.d(edx_5.w)
        
        if (edx_5 != 0 && eax_12 u< ecx_11 && *(eax_12 * 0x1c30 + data_b809e0 + 0x1c28) == edx_5)
            result.b = 0
            return result
        
        result = *(arg1 + 0x2c)
        
        if (result == 3)
            result = *(arg1 + 0x5c)
            
            if (result != 0x3f1 && result != 6)
                goto label_5d7f46
            
            result.b = 0
            return result
        
        if (result != 4)
            if (result != 0)
                goto label_5d7f46
            
            if (sub_5e2c00(arg1) != 0 && *(arg1 + 0xa4) != 0x3f1 && *(arg1 + 0x9c) == data_b7d42c)
                result.b = 0
                return result
            
            ecx_11 = data_b809e4
            edi_4 = data_b7fcf4
        label_5d7f46:
            result = *(arg1 + 0x2c)
            bool cond:1_1
            
            if (result == 5)
                result = data_b604e0
                
                if (result == 0xffffffff)
                    result = nullptr
                
                if (*(arg1 + 0x1f0) != result)
                    result.b = 0
                    return result
                
                if (data_cc8d5c == 0)
                    goto label_5d7ba4
                
                cond:1_1 = *(data_cc8d5c + 0x7590) != data_b80b48
            label_5d85c8:
                
                if (cond:1_1)
                    result.b = 0
                    return result
                
                result.b = 1
                return result
            
            if (result != 0)
                result.b = 1
                return result
            
            int32_t ebx_2 = *(arg1 + 0x1c28)
            int32_t edx_6 = data_b7d434
            
            if (edx_6 == ebx_2)
                result.b = 1
                return result
            
            if (edx_6 == 0)
            label_5d7fde:
                
                if (*(arg1 + 0x128) != 0)
                    result.b = 1
                    return result
                
                if (*(arg1 + 0xa4) == 1)
                    result.b = 0
                    return result
                
                if (*(arg1 + 0x1a18) != 0)
                    result.b = 1
                    return result
                
                result = arg1 + 0x9c
                
                if (*(arg1 + 0x9c) == 0)
                    result.b = 1
                    return result
                
                int32_t ebx_3 = *(arg1 + 0x370)
                
                if (ebx_3 == 1)
                    int32_t edx_7 = *(arg1 + 0x378)
                    
                    if (edx_7 == 6)
                        goto label_5d8039
                    
                    if (edx_7 == 7)
                        result = arg1 + 0x9c
                    label_5d8039:
                        
                        if (*(arg1 + 0x37c) == 6)
                            result.b = 0
                            return result
                    
                    if (ebx_3 == 1)
                        int32_t edx_8 = *(arg1 + 0x378)
                        
                        if (edx_8 == 6)
                            goto label_5d8061
                        
                        if (edx_8 == 7)
                            result = arg1 + 0x9c
                        label_5d8061:
                            
                            if (*(arg1 + 0x37c) == 0x3f1)
                                result.b = 1
                                return result
                
                result = *result
                uint32_t edx_9 = zx.d(result.w)
                
                if (edx_9 u>= ecx_11)
                    result.b = 0
                    return result
                
                char* result_5 = edx_9 * 0x1c30 + data_b809e0
                
                if (*(result_5 + 0x1c28) != result || result_5 == 0)
                    result.b = 0
                    return result
                
                void* const ecx_23
                
                if (edi_4 != 0)
                    uint32_t eax_17 = zx.d(edi_4.w)
                    
                    if (eax_17 u< ecx_11)
                        ecx_23 = eax_17 * 0x1c30 + data_b809e0
                        
                        if (*(ecx_23 + 0x1c28) != edi_4)
                            ecx_23 = nullptr
                    else
                        ecx_23 = nullptr
                else
                    ecx_23 = nullptr
                
                result = *(arg1 + 0xa4)
                
                if (result != 0x3ec)
                    if ((result != 0x3eb || *(result_5 + 0x70) != *(arg1 + 0x1c28) || (ecx_23 != 0
                            && *(ecx_23 + 0x5c) == 0x3eb && *(ecx_23 + 0x58) == *(arg1 + 0xa0)))
                            && *(arg1 + 0xc0) == 0)
                        result.b = 0
                        return result
                else if ((*(result_5 + 0x70) != *(arg1 + 0x1c28) || (ecx_23 != 0
                        && *(ecx_23 + 0x5c) == 0x3ec && *(ecx_23 + 0x58) == *(arg1 + 0xa0)))
                        && *(arg1 + 0xc0) == 0)
                    result.b = 0
                    return result
                
                result = *(result_5 + 0x1c28)
                
                if (result == edi_4)
                    result.b = 1
                    return result
                
                bool cond:5_1
                char* result_2
                int32_t edx_13
                
                if (*(arg1 + 0x370) != 1)
                label_5d819d:
                    result_2 = result_5
                    
                    if (*(arg1 + 0x370) == 1)
                        goto label_5d81a1
                    
                label_5d81e4:
                    result = result_2
                    
                    if (*(arg1 + 0x370) == 1)
                        goto label_5d81e8
                    
                label_5d8228:
                    edx_13 = *(arg1 + 0x370)
                    
                    if (edx_13 == 1)
                        goto label_5d8233
                    
                label_5d8275:
                    result_2 = result
                    
                    if (edx_13 == 1)
                    label_5d827c:
                        int32_t edx_14 = *(arg1 + 0x378)
                        
                        if (edx_14 != 6)
                            result_2 = result
                        
                        if (edx_14 != 6 && edx_14 != 7)
                            goto label_5d82a5
                        
                        result_2 = result
                        
                        if (*(arg1 + 0x37c) == 0x450)
                            goto label_5d8251
                        
                        goto label_5d82a9
                    
                label_5d82a5:
                    result = result_2
                    char* result_1
                    int32_t ebx_4
                    
                    if (*(arg1 + 0x370) == 1)
                    label_5d82a9:
                        int32_t edx_15 = *(arg1 + 0x378)
                        
                        if (edx_15 == 6)
                            if (*(arg1 + 0x37c) == 0x44e)
                                goto label_5d8251
                            
                            goto label_5d82c5
                        
                        if (edx_15 == 7 && *(arg1 + 0x37c) == 0x44e)
                            goto label_5d8251
                        
                    label_5d82c5:
                        int32_t edx_16 = *(arg1 + 0x378)
                        
                        if (edx_16 != 6 && edx_16 != 7)
                            goto label_5d82ed
                        
                        if (*(arg1 + 0x37c) == 0x460)
                            goto label_5d8251
                        
                        ebx_4 = *(arg1 + 0x370)
                    label_5d8306:
                        int32_t edx_18
                        
                        if (*(arg1 + 0x378) != 6)
                            result_2 = result
                            result_1 = result_2
                            edx_18 = ebx_4
                        
                        if (*(arg1 + 0x378) == 6 || *(arg1 + 0x378) == 7)
                            result_2 = result
                            result_1 = result_2
                            edx_18 = ebx_4
                        
                        if ((*(arg1 + 0x378) == 6 || *(arg1 + 0x378) == 7)
                                && *(arg1 + 0x37c) == 0x463)
                            goto label_5d84ae
                        
                        if (edx_18 != 1)
                            goto label_5d8360
                        
                        result = *(arg1 + 0x378)
                        
                        if (result != 6 && result != 7)
                            goto label_5d8360
                        
                        if (*(arg1 + 0x37c) == 0x464)
                            goto label_5d826a
                        
                        result_1 = result_2
                    label_5d8364:
                        int32_t edx_19 = *(arg1 + 0x378)
                        
                        if (edx_19 != 6)
                            result = result_2
                        
                        if (edx_19 != 6 && edx_19 != 7)
                            goto label_5d8385
                        
                        result = result_2
                        
                        if (*(arg1 + 0x37c) != 6)
                            goto label_5d8385
                        
                        result.b = 0
                        return result
                    
                label_5d82ed:
                    int32_t edx_17 = *(arg1 + 0x370)
                    result_2 = result
                    result_1 = result_2
                    ebx_4 = edx_17
                    
                    if (edx_17 == 1)
                        goto label_5d8306
                    
                label_5d8360:
                    result = result_2
                    
                    if (*(arg1 + 0x370) == 1)
                        goto label_5d8364
                    
                label_5d8385:
                    int32_t ecx_27 = *(arg1 + 0xa4)
                    
                    if (ecx_27 == 0x474)
                        *(result + 0x68)
                        sub_5de930()
                        result = sub_5d7b90()
                        
                        if (result.b == 0)
                            return result
                        
                        result.b = 1
                        return result
                    
                    if (ecx_27 == 0x451 || ecx_27 == 0x462)
                        goto label_5d84ae
                    
                    if (ecx_27 == 0x452 || ecx_27 == 0x45d || ecx_27 == 0x45a || ecx_27 == 0x45e
                            || ecx_27 == 0x453)
                        cond:1_1 = *(result + 0x1c28) != edi_4
                        goto label_5d85c8
                    
                    if (ecx_27 == 2)
                        if (sub_5cc500() == 0)
                            result.b = 0
                            return result
                        
                        result.b = 1
                        return result
                    
                    if (ecx_27 == 0x3ec)
                        if (*(result + 0x1c28) != edi_4)
                            goto label_5d843a
                        
                        result.b = 1
                        return result
                    
                    if (*(arg1 + 0x370) == 1 && *(arg1 + 0x378) == 0x15)
                        result.b = 1
                        return result
                    
                    int32_t ebx_5 = *(arg1 + 0xa4)
                    
                    if (ebx_5 == 0x3ef || ebx_5 == 0x3f0)
                        char* ecx_33 = sub_5cba70(edi_4)
                        
                        if (ecx_33 == 0)
                            result.b = 0
                            return result
                        
                        void* eax_19
                        
                        if (*(ecx_33 + 0x5c) == 0x3ef && ebx_5 == 0x3f0)
                            eax_19 = *(arg1 + 0xc8)
                        
                        if (*(ecx_33 + 0x5c) == 0x3ef && ebx_5 == 0x3f0
                                && *(ecx_33 + 0x60) == eax_19 - 1 && *(ecx_33 + 0x64)
                                == adc.d(*(arg1 + 0xcc), 0xffffffff, eax_19 u>= 1))
                            result.b = 1
                            return result
                        
                        if (*(ecx_33 + 0x60) != *(arg1 + 0xc8))
                            result.b = 0
                            return result
                        
                        cond:5_1 = *(ecx_33 + 0x64) == *(arg1 + 0xcc)
                    else
                        if (ebx_5 == 0x3ee)
                            goto label_5d84ae
                        
                        if (ebx_5 == 0x474 || ebx_5 == 6)
                            result.b = 1
                            return result
                        
                        if (sub_5dc840(arg1).b == 0)
                            if (ebx_5 == 0x3e9 || ebx_5 == 0x3ee || ebx_5 == 0x3ef
                                    || ebx_5 == 0x3f0)
                                result.b = 1
                                return result
                            
                            char* result_3 = data_b604e0
                            result = result_3
                            
                            if (result_3 == 0xffffffff)
                                result = nullptr
                            
                            int32_t edx_21 = *(arg1 + 0xa0)
                            
                            if (edx_21 == result && *(arg1 + 0xa4) == 0x3ea)
                                result.b = 1
                                return result
                            
                            int32_t edi_5 = *(arg1 + 0xa4)
                            char* result_4
                            
                            if (edi_5 == 0x3eb)
                                result_4 = result_3
                                
                                if (result_3 == 0xffffffff)
                                    result_4 = nullptr
                            
                            if (edi_5 != 0x3eb || edx_21 != result_4)
                                if (result_3 == 0xffffffff)
                                    result_3 = nullptr
                                
                                if (edx_21 == result_3 || edx_21 == 0xffffffff)
                                    result.b = 1
                                    return result
                                
                                if (edi_5 == 0x3f1)
                                    result.b = 1
                                    return 1
                                
                                result.b = 0
                                return result
                            
                            if (sub_5cc500() != 0)
                                result.b = 1
                                return result
                            
                            result = result_1
                        label_5d843a:
                            cond:5_1 = *(result + 0x70) == *(arg1 + 0x1c28)
                        else
                            result = result_1
                        label_5d84ae:
                            cond:5_1 = *(result + 0x1c28) == edi_4
                else
                    int32_t ecx_25 = *(arg1 + 0x378)
                    
                    if (ecx_25 == 6)
                        if (*(arg1 + 0x37c) == 0x461)
                            goto label_5d818f
                        
                        goto label_5d8164
                    
                    if (ecx_25 != 7 || *(arg1 + 0x37c) != 0x461)
                    label_5d8164:
                        result = *(arg1 + 0x378)
                        
                        if (result != 6 && result != 7)
                            goto label_5d819d
                        
                        if (*(arg1 + 0x37c) == 0x45f)
                            goto label_5d8184
                        
                        result_2 = result_5
                    label_5d81a1:
                        result = *(arg1 + 0x378)
                        
                        if (result == 6)
                            if (*(arg1 + 0x37c) == 0x457)
                                goto label_5d8184
                            
                            goto label_5d81bd
                        
                        if (result != 7 || *(arg1 + 0x37c) != 0x457)
                        label_5d81bd:
                            result = *(arg1 + 0x378)
                            
                            if (result != 6 && result != 7)
                                goto label_5d81e4
                            
                            if (*(arg1 + 0x37c) == 0x45c)
                                goto label_5d8184
                            
                            result = result_2
                        label_5d81e8:
                            int32_t edx_11 = *(arg1 + 0x378)
                            
                            if (edx_11 == 6)
                                if (*(arg1 + 0x37c) == 0x456)
                                    goto label_5d826a
                                
                                goto label_5d8204
                            
                            if (edx_11 != 7 || *(arg1 + 0x37c) != 0x456)
                            label_5d8204:
                                int32_t edx_12 = *(arg1 + 0x378)
                                
                                if (edx_12 != 6 && edx_12 != 7)
                                    goto label_5d8228
                                
                                if (*(arg1 + 0x37c) == 0x455)
                                    goto label_5d826a
                                
                                edx_13 = *(arg1 + 0x370)
                            label_5d8233:
                                int32_t ecx_26 = *(arg1 + 0x378)
                                
                                if (ecx_26 != 6 && ecx_26 != 7)
                                    goto label_5d8275
                                
                                result_2 = result
                                
                                if (*(arg1 + 0x37c) != 0x44d)
                                    goto label_5d827c
                                
                            label_5d8251:
                                result = data_b604e0
                                
                                if (result == 0xffffffff)
                                    result = nullptr
                                
                                if (*(arg1 + 0xa0) == result)
                                    goto label_5d826a
                                
                                result.b = 0
                                return result
                            
                        label_5d826a:
                            cond:5_1 = *(result_2 + 0x1c28) == edi_4
                        else
                        label_5d8184:
                            cond:5_1 = *(result_5 + 0x1c28) == edi_4
                    else
                    label_5d818f:
                        cond:5_1 = result == edi_4
                
                if (cond:5_1)
                    result.b = 1
                    return result
                
                result.b = 0
                return result
            
            result = zx.d(edx_6.w)
            
            if (result u>= ecx_11)
                goto label_5d7fde
            
            result = result * 0x1c30 + data_b809e0
            
            if (*(result + 0x1c28) != edx_6 || result == 0)
                goto label_5d7fde
            
            if (*(result + 0x2c) == 1)
                if (*(result + 0x178) != ebx_2)
                    goto label_5d7fde
                
                result.b = 0
                return result
            
            var_20 = "GfxIsVisible"
            var_24 = 0x2dfe
            ecx = "zoom->type == DOMGFX_CARD_PLACEHOLDER"
        else
            if (*(arg1 + 0x1bc) != 0x474)
                result.b = 1
                return result
            
            result = sub_5de8b0(*(arg1 + 0x1c0))
            
            if (result != 0)
                if (sub_5d7b90().b != 0)
                    result.b = 1
                    return result
                
                result.b = 0
                return result
            
            var_20 = "LookupCard"
            var_24 = 0x3d96
            ecx = &data_871964
    else
        int32_t ecx_10 = *(arg1 + 0x64)
        
        if ((*(arg1 + 0x60) | ecx_10) == 0 || ecx_10 == 0)
            goto label_5d7d61
        
        result = sub_5de8b0(ecx_10)
        
        if (result != 0)
            int32_t edx_3 = *(result + 0x1b8c)
            
            if (edx_3 == 0)
                goto label_5d7d61
            
            ecx_11 = data_b809e4
            uint32_t eax_4 = zx.d(edx_3.w)
            
            if (eax_4 u>= ecx_11 || *(eax_4 * 0x1c30 + data_b809e0 + 0x1c28) != edx_3)
                goto label_5d7d67
            
            result.b = 0
            return result
        
        var_20 = "LookupCard"
        var_24 = 0x3d96
        ecx = &data_871964
else
    result = *(arg1 + 0x240)
    
    if (result == 0)
        result.b = 0
        return result
    
    uint32_t ecx_3 = zx.d(result.w)
    
    if (ecx_3 u>= data_b809e4)
        result.b = 0
        return result
    
    uint32_t edi_2 = ecx_3 * 0x1c30 + data_b809e0
    
    if (*(edi_2 + 0x1c28) != result || edi_2 == 0)
        result.b = 0
        return result
    
    result = *(edi_2 + 0x2c)
    
    if (result == 3)
        if (sub_5d7b90().b != 0)
            result.b = 1
            return result
        
        result.b = 0
        return result
    
    if (result == 0)
        int32_t ecx_5 = *(edi_2 + 0x9c)
        uint32_t eax_1
        
        if (ecx_5 != 0)
            eax_1 = sub_5cba00(ecx_5)
        
        if (ecx_5 != 0 && *(eax_1 + 0x5c) - 8 u<= 0x3e && *(eax_1 + 0x70) == *(edi_2 + 0x1c28))
            result.b = 1
            return result
        
        if (sub_5d7b90().b == 0)
            result.b = 0
            return result
        
        void var_5
        
        if (sub_5e3790(edi_2, &var_5).b != 0)
            goto label_5d7cf6
        
        result.b = 0
        return result
    
    var_20 = "IsTopOfSupplyPile"
    var_24 = 0x2d32
    ecx = "gfxCard.type == DOMGFX_CARD"

var_28 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
goto label_5d85f0
