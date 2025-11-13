// 函数: sub_728e50
// 地址: 0x728e50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_418 = 0
int32_t var_464 = 0xff
int32_t var_480

if (sub_7289c0(arg3, &var_480) != 0)
    int32_t eax_5 = arg3[1]
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = sx.q(eax_5)
    int32_t edi_3 = (eax_6 ^ edx_1) - edx_1
    int32_t var_44c_1 = var_464
    arg3[1] = edi_3
    int32_t var_47c
    int32_t var_478
    int32_t var_434_1
    
    if (var_478 != 0xc)
        int32_t ecx_1 = var_480
        var_434_1 = ecx_1
        
        if (ecx_1 s< 0x10)
            var_418 = (var_47c - var_478 - 0xe) s>> 2
    else
        int32_t eax_9 = var_480
        var_434_1 = eax_9
        
        if (eax_9 s< 0x18)
            var_418 = (var_47c - 0x26) s/ 3
    
    uint32_t ecx_2 = *arg3
    uint32_t var_468
    int32_t edx_3
    edx_3.b = var_468 != 0
    int32_t edx_4 = edx_3 + 3
    int32_t var_428_1 = edx_4
    arg3[2] = edx_4
    
    if (ecx_2 s>= 0)
        int32_t eax_11
        int32_t edx_5
        
        if (ecx_2 != 0)
            edx_5:eax_11 = 0x7fffffff
            edx_4 = var_428_1
        
        if (ecx_2 == 0 || edx_4 s<= divs.dp.d(edx_5:eax_11, ecx_2))
            int32_t eax_14 = ecx_2 * edx_4
            
            if (eax_14 s>= 0 && edi_3 s>= 0)
                if (edi_3 == 0)
                    goto label_728fa6
                
                if (eax_14 s<= divs.dp.d(0x7fffffff, edi_3))
                    edx_4 = var_428_1
                label_728fa6:
                    int32_t eax_17
                    int32_t edx_8
                    
                    if (ecx_2 != 0)
                        edx_8:eax_17 = 0x7fffffff
                        edx_4 = var_428_1
                    
                    if (ecx_2 == 0 || edx_4 s<= divs.dp.d(edx_8:eax_17, ecx_2))
                        int32_t eax_21
                        int32_t edx_9
                        
                        if (edi_3 != 0)
                            edx_9:eax_21 = 0x7fffffff
                        
                        if (edi_3 == 0 || ecx_2 * edx_4 s<= divs.dp.d(edx_9:eax_21, edi_3))
                            char* result_2 = malloc(ecx_2 * edi_3 * var_428_1)
                            
                            if (result_2 != 0)
                                int32_t edx_11 = var_434_1
                                int32_t edi_10 = 0
                                char* result_1
                                uint32_t i_7
                                uint32_t i_8
                                uint32_t i_1
                                char* result
                                
                                if (edx_11 s>= 0x10)
                                    int32_t ebx_6 = var_47c - var_478
                                    int32_t var_414_3 = 0
                                    int32_t var_454_1 = 0
                                    int32_t var_45c_1 = 0
                                    int32_t var_43c_2 = 0
                                    uint32_t var_450_1 = 0
                                    uint32_t var_458_1 = 0
                                    uint32_t var_448_2 = 0
                                    uint32_t var_420_5 = 0
                                    int32_t var_418_4 = 0
                                    int32_t var_424_3 = 0
                                    
                                    if (ebx_6 - 0xe s>= 0)
                                        int32_t eax_119
                                        int32_t ecx_28
                                        
                                        if (arg3[4] != 0)
                                            ecx_28 = arg3[0x2b]
                                            eax_119 = ecx_28 - arg3[0x2a]
                                        
                                        if (arg3[4] == 0 || eax_119 s>= ebx_6 - 0xe)
                                            arg3[0x2a] += ebx_6 - 0xe
                                        else
                                            arg3[0x2a] = ecx_28
                                            arg3[5](arg3[7], ebx_6 - 0xe - eax_119)
                                            edx_11 = var_434_1
                                    else
                                        arg3[0x2a] = arg3[0x2b]
                                    
                                    uint32_t eax_122
                                    
                                    if (edx_11 == 0x18)
                                        eax_122 = *arg3 * 3
                                    else if (edx_11 != 0x10)
                                        eax_122 = 0
                                    else
                                        eax_122 = *arg3 * 2
                                    
                                    result = result_2
                                    int32_t eax_125 = neg.d(eax_122) & 3
                                    result_1 = result
                                    uint32_t var_474
                                    uint32_t var_470
                                    uint32_t var_46c
                                    
                                    if (edx_11 == 0x18)
                                        var_424_3 = 1
                                    label_729add:
                                        i_1 = arg3[1]
                                        i_8 = i_1
                                        int32_t var_444_2 = 0
                                        i_7 = i_8
                                        
                                        if (i_1 s> 0)
                                            int32_t edx_69
                                            
                                            do
                                                uint32_t eax_195 = *arg3
                                                uint32_t i_6 = 0
                                                
                                                if (var_424_3 == 0)
                                                    if (eax_195 s> 0)
                                                        uint32_t i
                                                        
                                                        do
                                                            uint32_t eax_239
                                                            
                                                            if (edx_11 != 0x10)
                                                                uint32_t eax_240 = sub_7203e0(arg3)
                                                                eax_239 =
                                                                    (sub_7203e0(arg3) << 0x10) + eax_240
                                                                edi_10 = var_418_4
                                                            else
                                                                eax_239 = sub_7203e0(arg3)
                                                            
                                                            uint32_t edx_49 = eax_239 & var_474
                                                            int32_t edx_50
                                                            
                                                            if (var_414_3 s>= 0)
                                                                edx_50 = edx_49 s>> var_414_3.b
                                                            else
                                                                edx_50 = edx_49 << (neg.d(var_414_3)).b
                                                            
                                                            result[edi_10] = (((edx_50
                                                                s>> (8 - var_450_1.b)) *
                                                                *((var_450_1 << 2) + &data_88de2c)) s>>
                                                                (*((var_450_1 << 2) + &data_88de50)).b)
                                                                .b
                                                            uint32_t edx_55 = eax_239 & var_470
                                                            int32_t edx_56
                                                            
                                                            if (var_454_1 s>= 0)
                                                                edx_56 = edx_55 s>> var_454_1.b
                                                            else
                                                                edx_56 = edx_55 << (neg.d(var_454_1)).b
                                                            
                                                            result[edi_10 + 1] = (((edx_56
                                                                s>> (8 - var_458_1.b)) *
                                                                *((var_458_1 << 2) + &data_88de2c)) s>>
                                                                (*((var_458_1 << 2) + &data_88de50)).b)
                                                                .b
                                                            uint32_t edx_61 = eax_239 & var_46c
                                                            int32_t edx_62
                                                            
                                                            if (var_45c_1 s>= 0)
                                                                edx_62 = edx_61 s>> var_45c_1.b
                                                            else
                                                                edx_62 = edx_61 << (neg.d(var_45c_1)).b
                                                            
                                                            result[edi_10 + 2] = (((edx_62
                                                                s>> (8 - var_448_2.b)) *
                                                                *((var_448_2 << 2) + &data_88de2c)) s>>
                                                                (*((var_448_2 << 2) + &data_88de50)).b)
                                                                .b
                                                            edi_10 += 3
                                                            var_418_4 = edi_10
                                                            int32_t eax_247
                                                            
                                                            if (var_468 == 0)
                                                                eax_247 = 0xff
                                                            else
                                                                uint32_t eax_243 = eax_239 & var_468
                                                                int32_t eax_244
                                                                
                                                                if (var_43c_2 s>= 0)
                                                                    eax_244 = eax_243 s>> var_43c_2.b
                                                                else
                                                                    eax_244 =
                                                                        eax_243 << (neg.d(var_43c_2)).b
                                                                
                                                                eax_247 = ((eax_244
                                                                    s>> (8 - var_420_5.b)) *
                                                                    *((var_420_5 << 2) + &data_88de2c)) s>>
                                                                    (*((var_420_5 << 2) + &data_88de50)).b
                                                            
                                                            var_44c_1 |= eax_247
                                                            
                                                            if (var_428_1 == 4)
                                                                result[edi_10] = eax_247.b
                                                                edi_10 += 1
                                                                var_418_4 = edi_10
                                                            
                                                            edx_11 = var_434_1
                                                            i = i_6 + 1
                                                            i_6 = i
                                                        while (i s< *arg3)
                                                else if (eax_195 s> 0)
                                                    do
                                                        char* eax_196 = arg3[0x2a]
                                                        
                                                        if (eax_196 u< arg3[0x2b])
                                                            i_1.b = *eax_196
                                                            arg3[0x2a] = &eax_196[1]
                                                        else if (arg3[8] == 0)
                                                            i_1.b = 0
                                                        else
                                                            void* eax_200
                                                            eax_200, i_1 =
                                                                arg3[4](arg3[7], &arg3[0xa], arg3[9])
                                                            
                                                            if (eax_200 != 0)
                                                                arg3[0x2b] = eax_200 + 0x28 + arg3
                                                                i_1.b = arg3[0xa].b
                                                                arg3[0x2a] = arg3 + 0x29
                                                            else
                                                                arg3[8] = eax_200
                                                                arg3[0x2b] = arg3 + 0x29
                                                                arg3[0xa].b = 0
                                                                i_1.b = arg3[0xa].b
                                                                arg3[0x2a] = arg3 + 0x29
                                                        
                                                        result_2[edi_10 + 2] = i_1.b
                                                        char* eax_207 = arg3[0x2a]
                                                        
                                                        if (eax_207 u< arg3[0x2b])
                                                            i_1.b = *eax_207
                                                            arg3[0x2a] = &eax_207[1]
                                                        else if (arg3[8] == 0)
                                                            i_1.b = 0
                                                        else
                                                            void* eax_211
                                                            eax_211, i_1 =
                                                                arg3[4](arg3[7], &arg3[0xa], arg3[9])
                                                            
                                                            if (eax_211 != 0)
                                                                arg3[0x2b] = eax_211 + 0x28 + arg3
                                                                i_1.b = arg3[0xa].b
                                                                arg3[0x2a] = arg3 + 0x29
                                                            else
                                                                arg3[8] = eax_211
                                                                arg3[0x2b] = arg3 + 0x29
                                                                arg3[0xa].b = 0
                                                                i_1.b = arg3[0xa].b
                                                                arg3[0x2a] = arg3 + 0x29
                                                        
                                                        result_2[edi_10 + 1] = i_1.b
                                                        char* eax_218 = arg3[0x2a]
                                                        
                                                        if (eax_218 u< arg3[0x2b])
                                                            i_1.b = *eax_218
                                                            arg3[0x2a] = &eax_218[1]
                                                        else if (arg3[8] == 0)
                                                            i_1.b = 0
                                                        else
                                                            void* eax_222
                                                            eax_222, i_1 =
                                                                arg3[4](arg3[7], &arg3[0xa], arg3[9])
                                                            
                                                            if (eax_222 != 0)
                                                                arg3[0x2b] = eax_222 + 0x28 + arg3
                                                                i_1.b = arg3[0xa].b
                                                                arg3[0x2a] = arg3 + 0x29
                                                            else
                                                                arg3[8] = eax_222
                                                                arg3[0x2b] = arg3 + 0x29
                                                                arg3[0xa].b = 0
                                                                i_1.b = arg3[0xa].b
                                                                arg3[0x2a] = arg3 + 0x29
                                                        
                                                        result[edi_10] = i_1.b
                                                        edi_10 += 3
                                                        
                                                        if (var_424_3 != 2)
                                                            i_1.b = 0xff
                                                        else
                                                            char* eax_228 = arg3[0x2a]
                                                            
                                                            if (eax_228 u< arg3[0x2b])
                                                                i_1.b = *eax_228
                                                                arg3[0x2a] = &eax_228[1]
                                                            else if (arg3[8] == 0)
                                                                i_1.b = 0
                                                            else
                                                                void* eax_232
                                                                eax_232, i_1 =
                                                                    arg3[4](arg3[7], &arg3[0xa], arg3[9])
                                                                
                                                                if (eax_232 != 0)
                                                                    arg3[0x2b] = eax_232 + 0x28 + arg3
                                                                    i_1.b = arg3[0xa].b
                                                                    arg3[0x2a] = arg3 + 0x29
                                                                else
                                                                    arg3[8] = eax_232
                                                                    arg3[0x2b] = arg3 + 0x29
                                                                    arg3[0xa].b = 0
                                                                    i_1.b = arg3[0xa].b
                                                                    arg3[0x2a] = arg3 + 0x29
                                                        
                                                        var_44c_1 |= zx.d(i_1.b)
                                                        
                                                        if (var_428_1 == 4)
                                                            result[edi_10] = i_1.b
                                                            edi_10 += 1
                                                        
                                                        i_1 = i_6 + 1
                                                        i_6 = i_1
                                                    while (i_1 s< *arg3)
                                                    
                                                    var_418_4 = edi_10
                                                
                                                int32_t eax_248
                                                int32_t ecx_80
                                                
                                                if (arg3[4] != 0)
                                                    eax_248 = arg3[0x2b]
                                                    ecx_80 = eax_248 - arg3[0x2a]
                                                
                                                if (arg3[4] == 0 || ecx_80 s>= eax_125)
                                                    arg3[0x2a] += eax_125
                                                else
                                                    arg3[0x2a] = eax_248
                                                    arg3[5](arg3[7], eax_125 - ecx_80)
                                                
                                                i_1 = arg3[1]
                                                edx_69 = var_444_2 + 1
                                                i_8 = i_1
                                                var_444_2 = edx_69
                                                i_7 = i_8
                                                edx_11 = var_434_1
                                            while (edx_69 s< i_1)
                                        
                                    label_729f95:
                                        uint32_t i_9 = i_8
                                        
                                        if (var_428_1 == 4 && var_44c_1 == 0)
                                            i_9 = i_7
                                            void* eax_252 = ((*arg3 * i_1) << 2) + 0xffffffff
                                            
                                            if (eax_252 s>= 0)
                                                void* temp6_1
                                                
                                                do
                                                    *(result_2 + eax_252) = 0xff
                                                    temp6_1 = eax_252
                                                    eax_252 -= 4
                                                while (temp6_1 - 4 s>= 0)
                                                i_9 = arg3[1]
                                        
                                        if (eax_5 s> 0)
                                            int32_t i_2 = 0
                                            int32_t i_4 = 0
                                            
                                            if ((i_9 & 0xfffffffe) s> 0)
                                                int32_t ecx_82 = 0
                                                int32_t var_440_3 = 0
                                                
                                                do
                                                    uint32_t eax_253 = *arg3
                                                    int32_t j = 0
                                                    void* ecx_84 = ecx_82 * eax_253 + result
                                                    void* var_460_2 = ecx_84
                                                    void* edx_74 =
                                                        (i_9 - i_2 - 1) * eax_253 * var_428_1
                                                        + result
                                                    
                                                    if (eax_253 * var_428_1 s> 0)
                                                        void* ebx_10 = ecx_84 - edx_74
                                                        
                                                        do
                                                            int32_t eax_254
                                                            eax_254.b = *edx_74
                                                            edx_74 += 1
                                                            ecx_84.b = *(edx_74 + ebx_10 - 1)
                                                            j += 1
                                                            *(edx_74 + ebx_10 - 1) = eax_254.b
                                                            *(edx_74 - 1) = ecx_84.b
                                                        while (j s< *arg3 * var_428_1)
                                                        
                                                        result = result_1
                                                    
                                                    i_9 = arg3[1]
                                                    i_2 = i_4 + 1
                                                    ecx_82 = var_440_3 + var_428_1
                                                    i_4 = i_2
                                                    var_440_3 = ecx_82
                                                while (i_2 s< i_9 s>> 1)
                                        
                                        *arg2 = *arg3
                                        *arg4 = arg3[1]
                                        
                                        if (arg5 != 0)
                                            *arg5 = arg3[2]
                                        
                                        CookieCheckFunction(result)
                                        return result
                                    
                                    if (edx_11 == 0x20)
                                        result = result_2
                                        result_1 = result
                                        
                                        if (var_46c != 0xff)
                                            goto label_72993b
                                        
                                        result_1 = result
                                        
                                        if (var_470 == 0xff00)
                                            result_1 = result
                                            
                                            if (var_474 == 0xff0000)
                                                result_1 = result
                                                
                                                if (var_468 == 0xff000000)
                                                    var_424_3 = 2
                                                    result_1 = result
                                                    goto label_729add
                                    
                                label_72993b:
                                    
                                    if (var_474 != 0 && var_470 != 0 && var_46c != 0)
                                        var_414_3 = sub_728960(var_474, edx_11) - 7
                                        int32_t edx_31 =
                                            (var_474 u>> 1 & 0x55555555) + (var_474 & 0x55555555)
                                        int32_t edx_32 = edx_31 & 0x33333333
                                        int32_t eax_134 = (edx_31 u>> 2 & 0x33333333) + edx_32
                                        int32_t ecx_34 = ((eax_134 u>> 4) + eax_134) & 0xf0f0f0f
                                        int32_t ecx_35 = ecx_34 + (ecx_34 u>> 8)
                                        var_450_1 = zx.d((ecx_35 u>> 0x10).b + ecx_35.b)
                                        var_454_1 = sub_728960(var_470, edx_32) - 7
                                        int32_t edx_36 =
                                            (var_470 u>> 1 & 0x55555555) + (var_470 & 0x55555555)
                                        int32_t edx_37 = edx_36 & 0x33333333
                                        int32_t eax_148 = (edx_36 u>> 2 & 0x33333333) + edx_37
                                        int32_t ecx_40 = ((eax_148 u>> 4) + eax_148) & 0xf0f0f0f
                                        int32_t ecx_41 = ecx_40 + (ecx_40 u>> 8)
                                        var_458_1 = zx.d((ecx_41 u>> 0x10).b + ecx_41.b)
                                        var_45c_1 = sub_728960(var_46c, edx_37) - 7
                                        int32_t edx_41 =
                                            (var_46c u>> 1 & 0x55555555) + (var_46c & 0x55555555)
                                        int32_t edx_42 = edx_41 & 0x33333333
                                        int32_t eax_162 = (edx_41 u>> 2 & 0x33333333) + edx_42
                                        int32_t ecx_46 = ((eax_162 u>> 4) + eax_162) & 0xf0f0f0f
                                        int32_t ecx_47 = ecx_46 + (ecx_46 u>> 8)
                                        var_448_2 = zx.d((ecx_47 u>> 0x10).b + ecx_47.b)
                                        var_43c_2 = sub_728960(var_468, edx_42) - 7
                                        int32_t edx_46 =
                                            (var_468 u>> 1 & 0x55555555) + (var_468 & 0x55555555)
                                        int32_t eax_176 =
                                            (edx_46 u>> 2 & 0x33333333) + (edx_46 & 0x33333333)
                                        edx_11 = var_434_1
                                        int32_t ecx_52 = ((eax_176 u>> 4) + eax_176) & 0xf0f0f0f
                                        int32_t ecx_53 = ecx_52 + (ecx_52 u>> 8)
                                        var_420_5 = zx.d((ecx_53 u>> 0x10).b + ecx_53.b)
                                        goto label_729add
                                    
                                    free(result)
                                else if (var_418 == 0 || var_418 s> 0x100)
                                    free(result_2)
                                else
                                    int32_t var_424_1 = 0
                                    result_1 = result_2
                                    char var_40c[0x404]
                                    
                                    if (var_418 s<= 0)
                                        result = result_2
                                    else
                                        void* edi_11 = &arg3[0x2a]
                                        void* ebx_2 = &arg3[8]
                                        
                                        do
                                            void* ecx_6 = arg3[0x2b]
                                            void* eax_24 = *edi_11
                                            void* var_414_1 = ecx_6
                                            void* var_41c_1
                                            char var_40d_3
                                            void* ecx_8
                                            void* edx_12
                                            char var_40d_1
                                            void* ebx_4
                                            
                                            if (eax_24 u>= ecx_6)
                                                ebx_2 = &arg3[8]
                                                
                                                if (arg3[8] != 0)
                                                    int32_t eax_27 =
                                                        arg3[4](arg3[7], &arg3[0xa], arg3[9])
                                                    
                                                    if (eax_27 != 0)
                                                        ecx_6 = &arg3[0xa] + eax_27
                                                        arg3[0x2b] = ecx_6
                                                    else
                                                        ecx_6 = arg3 + 0x29
                                                        *ebx_2 = eax_27
                                                        arg3[0x2b] = ecx_6
                                                        arg3[0xa].b = eax_27.b
                                                    
                                                    eax_27.b = arg3[0xa].b
                                                    var_40d_1 = eax_27.b
                                                    eax_24 = arg3 + 0x29
                                                    var_414_1 = ecx_6
                                                    goto label_7290bd
                                                
                                                edx_12 = ecx_6
                                                ecx_8 = ebx_2
                                                int32_t __saved_ebp
                                                ebx_4 = &(&__saved_ebp)[var_424_1 - 0x102]
                                                var_41c_1 = ecx_8
                                                *(ebx_4 + 2) = 0
                                            label_729101:
                                                
                                                if (*ecx_8 != 0)
                                                    int32_t eax_30 =
                                                        arg3[4](arg3[7], &arg3[0xa], arg3[9])
                                                    *edi_11 = &arg3[0xa]
                                                    
                                                    if (eax_30 != 0)
                                                        ecx_8 = &arg3[0xa] + eax_30
                                                        arg3[0x2b] = ecx_8
                                                    else
                                                        ecx_8 = arg3 + 0x29
                                                        arg3[0x2b] = ecx_8
                                                        *var_41c_1 = 0
                                                        arg3[0xa].b = 0
                                                    
                                                    eax_24 = *edi_11
                                                    edx_12 = ecx_8
                                                    var_414_1 = ecx_8
                                                    goto label_729171
                                                
                                                *(ebx_4 + 1) = 0
                                            label_7291a6:
                                                ebx_2 = ecx_8
                                                
                                                if (*ecx_8 == 0)
                                                    var_40d_3 = 0
                                                else
                                                    void* eax_34 =
                                                        arg3[4](arg3[7], &arg3[0xa], arg3[9])
                                                    *edi_11 = &arg3[0xa]
                                                    
                                                    if (eax_34 != 0)
                                                        char* eax_37 = *edi_11
                                                        edx_12 = &arg3[0xa] + eax_34
                                                        arg3[0x2b] = edx_12
                                                        ecx_8.b = *eax_37
                                                        eax_24 = &eax_37[1]
                                                        var_40d_3 = ecx_8.b
                                                        *edi_11 = eax_24
                                                    else
                                                        edx_12 = arg3 + 0x29
                                                        arg3[0x2b] = edx_12
                                                        *var_41c_1 = 0
                                                        arg3[0xa].b = 0
                                                        char* eax_36 = *edi_11
                                                        ecx_8.b = *eax_36
                                                        eax_24 = &eax_36[1]
                                                        var_40d_3 = ecx_8.b
                                                        *edi_11 = eax_24
                                            else
                                                edx_11.b = *eax_24
                                                eax_24 += 1
                                                var_40d_1 = edx_11.b
                                            label_7290bd:
                                                edx_12 = ecx_6
                                                var_41c_1 = ebx_2
                                                *edi_11 = eax_24
                                                ecx_8.b = var_40d_1
                                                void* var_43c_1 = edi_11
                                                ebx_4 = &var_40c[var_424_1 << 2]
                                                void* var_420_3 = eax_24
                                                edi_11 = &arg3[0x2a]
                                                *(ebx_4 + 2) = ecx_8.b
                                                
                                                if (eax_24 u>= var_414_1)
                                                    ecx_8 = var_41c_1
                                                    goto label_729101
                                                
                                            label_729171:
                                                ecx_8.b = *eax_24
                                                eax_24 += 1
                                                *edi_11 = eax_24
                                                char var_40d_2 = ecx_8.b
                                                *(ebx_4 + 1) = ecx_8.b
                                                
                                                if (eax_24 u>= var_414_1)
                                                    ecx_8 = var_41c_1
                                                    goto label_7291a6
                                                
                                                ebx_4.b = *eax_24
                                                eax_24 += 1
                                                var_40d_3 = ebx_4.b
                                                ebx_2 = &arg3[8]
                                                *edi_11 = eax_24
                                            ecx_8.b = var_40d_3
                                            var_40c[var_424_1 << 2] = ecx_8.b
                                            edi_11 = &arg3[0x2a]
                                            
                                            if (var_478 != 0xc)
                                                if (eax_24 u< edx_12)
                                                    *edi_11 = eax_24 + 1
                                                else if (*var_41c_1 != 0)
                                                    void* eax_41 =
                                                        arg3[4](arg3[7], &arg3[0xa], arg3[9])
                                                    *edi_11 = &arg3[0xa]
                                                    
                                                    if (eax_41 != 0)
                                                        arg3[0x2b] = eax_41 + 0x28 + arg3
                                                    else
                                                        *var_41c_1 = 0
                                                        arg3[0x2b] = arg3 + 0x29
                                                        arg3[0xa].b = 0
                                                    
                                                    *edi_11 += 1
                                            
                                            var_409
                                            *(&var_409 + (var_424_1 << 2)) = 0xff
                                            edx_11 = var_424_1 + 1
                                            var_424_1 = edx_11
                                        while (edx_11 s< var_418)
                                        
                                        result = result_1
                                        edi_10 = 0
                                    
                                    int32_t eax_46
                                    eax_46.b = var_478 != 0xc
                                    int32_t ecx_14 = var_47c - (eax_46 + 3) * var_418 - var_478
                                    
                                    if (ecx_14 - 0xe s>= 0)
                                        int32_t eax_51
                                        int32_t edx_16
                                        
                                        if (arg3[4] != 0)
                                            edx_16 = arg3[0x2b]
                                            eax_51 = edx_16 - arg3[0x2a]
                                        
                                        if (arg3[4] == 0 || eax_51 s>= ecx_14 - 0xe)
                                            arg3[0x2a] += ecx_14 - 0xe
                                        else
                                            arg3[0x2a] = edx_16
                                            arg3[5](arg3[7], ecx_14 - 0xe - eax_51)
                                    else
                                        arg3[0x2a] = arg3[0x2b]
                                    
                                    uint32_t eax_55
                                    
                                    if (var_434_1 == 1)
                                        eax_55 = (*arg3 + 7) u>> 3
                                    label_72934b:
                                        i_1 = arg3[1]
                                        int32_t eax_59 = neg.d(eax_55) & 3
                                        int32_t var_414_2 = eax_59
                                        var_40b
                                        var_40a
                                        
                                        if (var_434_1 != 1)
                                            uint32_t var_424_2 = 0
                                            i_7 = i_1
                                            
                                            if (i_1 s> 0)
                                                do
                                                    int32_t var_418_3 = 0
                                                    
                                                    if (*arg3 s> 0)
                                                        int32_t ecx_23
                                                        
                                                        do
                                                            char* eax_88 = arg3[0x2a]
                                                            uint32_t edx_24
                                                            
                                                            if (eax_88 u< arg3[0x2b])
                                                                edx_24.b = *eax_88
                                                                arg3[0x2a] = &eax_88[1]
                                                            else if (arg3[8] == 0)
                                                                edx_24.b = 0
                                                            else
                                                                void* eax_92
                                                                eax_92, edx_24 =
                                                                    arg3[4](arg3[7], &arg3[0xa], arg3[9])
                                                                arg3[0x2a] = &arg3[0xa]
                                                                
                                                                if (eax_92 != 0)
                                                                    arg3[0x2b] = eax_92 + 0x28 + arg3
                                                                    edx_24.b = arg3[0xa].b
                                                                    arg3[0x2a] = arg3 + 0x29
                                                                else
                                                                    arg3[8] = eax_92
                                                                    arg3[0x2b] = arg3 + 0x29
                                                                    arg3[0xa].b = 0
                                                                    edx_24.b = arg3[0xa].b
                                                                    arg3[0x2a] = arg3 + 0x29
                                                            
                                                            uint32_t ecx_22 = zx.d(edx_24.b)
                                                            edx_24 = 0
                                                            
                                                            if (var_434_1 == 4)
                                                                edx_24 = ecx_22 & 0xf
                                                                ecx_22 u>>= 4
                                                            
                                                            result[edi_10] = var_40c[ecx_22 << 2]
                                                            result[edi_10 + 1] =
                                                                *(&var_40b + (ecx_22 << 2))
                                                            result[edi_10 + 2] =
                                                                *(&var_40a + (ecx_22 << 2))
                                                            edi_10 += 3
                                                            
                                                            if (var_428_1 == 4)
                                                                result[edi_10] = 0xff
                                                                edi_10 += 1
                                                            
                                                            ecx_23 = var_418_3
                                                            
                                                            if (ecx_23 + 1 == *arg3)
                                                                break
                                                            
                                                            if (var_434_1 == 8)
                                                                char* eax_102 = arg3[0x2a]
                                                                
                                                                if (eax_102 u< arg3[0x2b])
                                                                    edx_24.b = *eax_102
                                                                    arg3[0x2a] = &eax_102[1]
                                                                else if (arg3[8] == 0)
                                                                    edx_24.b = 0
                                                                else
                                                                    void* eax_106
                                                                    eax_106, edx_24 =
                                                                        arg3[4](arg3[7], &arg3[0xa], arg3[9])
                                                                    arg3[0x2a] = &arg3[0xa]
                                                                    
                                                                    if (eax_106 != 0)
                                                                        arg3[0x2b] = eax_106 + 0x28 + arg3
                                                                        edx_24.b = arg3[0xa].b
                                                                        ecx_23 = var_418_3
                                                                        arg3[0x2a] = arg3 + 0x29
                                                                    else
                                                                        arg3[8] = eax_106
                                                                        arg3[0x2b] = arg3 + 0x29
                                                                        arg3[0xa].b = 0
                                                                        edx_24.b = arg3[0xa].b
                                                                        ecx_23 = var_418_3
                                                                        arg3[0x2a] = arg3 + 0x29
                                                                
                                                                edx_24 = zx.d(edx_24.b)
                                                            
                                                            result[edi_10] = var_40c[edx_24 << 2]
                                                            result[edi_10 + 1] =
                                                                *(&var_40b + (edx_24 << 2))
                                                            result[edi_10 + 2] =
                                                                *(&var_40a + (edx_24 << 2))
                                                            edi_10 += 3
                                                            
                                                            if (var_428_1 == 4)
                                                                result[edi_10] = 0xff
                                                                edi_10 += 1
                                                            
                                                            var_418_3 = ecx_23 + 2
                                                        while (ecx_23 + 2 s< *arg3)
                                                        eax_59 = var_414_2
                                                    
                                                    if (arg3[4] == 0)
                                                        arg3[0x2a] += eax_59
                                                    else
                                                        int32_t eax_115 = arg3[0x2b]
                                                        int32_t ecx_27 = eax_115 - arg3[0x2a]
                                                        
                                                        if (ecx_27 s>= var_414_2)
                                                            eax_59 = var_414_2
                                                            arg3[0x2a] += eax_59
                                                        else
                                                            arg3[0x2a] = eax_115
                                                            arg3[5](arg3[7], var_414_2 - ecx_27)
                                                            eax_59 = var_414_2
                                                    
                                                    var_424_2 += 1
                                                    i_1 = arg3[1]
                                                    i_7 = i_1
                                                while (var_424_2 s< i_1)
                                            
                                            i_8 = i_7
                                        else
                                            int32_t var_448_1 = 0
                                            i_7 = i_1
                                            
                                            if (i_1 s<= 0)
                                                i_8 = i_7
                                            else
                                                int32_t eax_87
                                                
                                                do
                                                    char* eax_60 = arg3[0x2a]
                                                    int32_t ecx_17 = 7
                                                    int32_t var_418_1 = 7
                                                    uint32_t edx_18
                                                    
                                                    if (eax_60 u< arg3[0x2b])
                                                        edx_18.b = *eax_60
                                                        arg3[0x2a] = &eax_60[1]
                                                    else if (arg3[8] == 0)
                                                        edx_18.b = 0
                                                    else
                                                        void* eax_64
                                                        eax_64, edx_18 =
                                                            arg3[4](arg3[7], &arg3[0xa], arg3[9])
                                                        
                                                        if (eax_64 != 0)
                                                            ecx_17 = var_418_1
                                                            arg3[0x2b] = eax_64 + 0x28 + arg3
                                                            edx_18.b = arg3[0xa].b
                                                            arg3[0x2a] = arg3 + 0x29
                                                        else
                                                            ecx_17 = var_418_1
                                                            arg3[8] = eax_64
                                                            arg3[0x2b] = arg3 + 0x29
                                                            arg3[0xa].b = 0
                                                            edx_18.b = arg3[0xa].b
                                                            arg3[0x2a] = arg3 + 0x29
                                                    
                                                    uint32_t edx_19 = zx.d(edx_18.b)
                                                    uint32_t var_420_4 = edx_19
                                                    int32_t i_5 = 0
                                                    
                                                    if (*arg3 s> 0)
                                                        int32_t i_3
                                                        
                                                        do
                                                            int32_t edx_21 = edx_19 s>> ecx_17.b & 1
                                                            result[edi_10] = var_40c[edx_21 << 2]
                                                            result[edi_10 + 1] =
                                                                *(&var_40b + (edx_21 << 2))
                                                            result[edi_10 + 2] =
                                                                *(&var_40a + (edx_21 << 2))
                                                            edi_10 += 3
                                                            int32_t temp7_1 = ecx_17
                                                            ecx_17 -= 1
                                                            
                                                            if (temp7_1 - 1 s>= 0)
                                                                edx_19 = var_420_4
                                                            else
                                                                char* eax_73 = arg3[0x2a]
                                                                int32_t var_418_2 = 7
                                                                
                                                                if (eax_73 u< arg3[0x2b])
                                                                    ecx_17.b = *eax_73
                                                                    edx_19 = zx.d(ecx_17.b)
                                                                    ecx_17 = 7
                                                                    arg3[0x2a] = &eax_73[1]
                                                                    var_420_4 = edx_19
                                                                else if (arg3[8] == 0)
                                                                    edx_19 = 0
                                                                    ecx_17 = 7
                                                                    var_420_4 = 0
                                                                else
                                                                    void* eax_77 =
                                                                        arg3[4](arg3[7], &arg3[0xa], arg3[9])
                                                                    
                                                                    if (eax_77 != 0)
                                                                        arg3[0x2b] = eax_77 + 0x28 + arg3
                                                                        edx_19 = zx.d(arg3[0xa].b)
                                                                        ecx_17 = var_418_2
                                                                        arg3[0x2a] = arg3 + 0x29
                                                                        var_420_4 = edx_19
                                                                    else
                                                                        arg3[8] = eax_77
                                                                        arg3[0x2b] = arg3 + 0x29
                                                                        arg3[0xa].b = 0
                                                                        edx_19 = zx.d(arg3[0xa].b)
                                                                        ecx_17 = var_418_2
                                                                        arg3[0x2a] = arg3 + 0x29
                                                                        var_420_4 = edx_19
                                                            
                                                            i_3 = i_5 + 1
                                                            i_5 = i_3
                                                        while (i_3 s< *arg3)
                                                    
                                                    int32_t eax_84
                                                    int32_t ecx_20
                                                    
                                                    if (arg3[4] != 0)
                                                        eax_84 = arg3[0x2b]
                                                        ecx_20 = eax_84 - arg3[0x2a]
                                                    
                                                    if (arg3[4] == 0 || ecx_20 s>= var_414_2)
                                                        arg3[0x2a] += var_414_2
                                                    else
                                                        arg3[0x2a] = eax_84
                                                        arg3[5](arg3[7], var_414_2 - ecx_20)
                                                    
                                                    i_1 = arg3[1]
                                                    eax_87 = var_448_1 + 1
                                                    var_448_1 = eax_87
                                                    i_7 = i_1
                                                while (eax_87 s< i_1)
                                                i_8 = i_1
                                        goto label_729f95
                                    
                                    if (var_434_1 == 4)
                                        eax_55 = (*arg3 + 1) u>> 1
                                        goto label_72934b
                                    
                                    if (var_434_1 == 8)
                                        eax_55 = *arg3
                                        goto label_72934b
                                    
                                    free(result)

CookieCheckFunction(0)
return 0
