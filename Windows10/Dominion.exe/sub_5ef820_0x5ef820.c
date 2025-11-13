// 函数: sub_5ef820
// 地址: 0x5ef820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_1c = arg2
*arg1 = 0
arg1[1].d = &UI2HitResult::`vftable'{for `InputHitResult'}
*(arg1 + 0xc) = 0
arg1[2].d = 0
*(arg1 + 0x1c) = 0

if (data_b809dc != 0 && data_b7fcd0 == 0)
    int32_t eax_1 = data_8db6b4
    
    if ((data_8db664 == 0 && eax_1 == 0) || eax_1 == 0x7e6)
        int32_t edi_1 = 0
        void* i = data_b809e0
        int32_t var_24_1 = 0
        int32_t var_20_1 = 0
        int32_t var_30_1 = 0
        void* eax_3 = data_b809e4 * 0x1c30 + i
        int32_t* var_34_1 = nullptr
        int32_t var_38_1 = 0
        int32_t* var_44_1 = &data_b809e0
        
        if (i u>= eax_3)
        label_5ef8d6:
            i = 0xffffffff
        else
            while ((*(i + 0x1c28) & 0xffff0000) == 0)
                i += 0x1c30
                
                if (i u>= eax_3)
                    goto label_5ef8d6
        
        int32_t* var_3c
        int32_t* eax_4 = var_3c
        int32_t* ecx = var_3c
        void* i_1 = i
        
        if (i != 0xffffffff)
            int32_t* var_28_1 = eax_4
            int32_t* var_2c_1 = ecx
            
            do
                int32_t* eax_11 = *(i + 0x2c)
                int32_t* ecx_1 = nullptr
                arg2.b = 0
                int32_t var_18_1 = 0
                edi_1 = 0xffffffff
                char var_5_1 = 0
                struct InputHitResult::UI2HitResult::VTable* var_5c
                int32_t* var_14
                int32_t* var_10
                int32_t eax_9
                
                if (eax_11 u> 8)
                    edi_1 = var_20_1
                else
                    switch (eax_11)
                        case nullptr, 1
                            goto label_5ef97d
                        case 2, 4, 6
                        label_5efadd:
                            struct InputHitResult::UI2HitResult::VTable** eax_22 =
                                sub_656520(eax_11, *(i + 0x1ba0), &var_5c, var_1c)
                            ecx_1 = eax_22[2]
                            var_14 = eax_22[3]
                            var_18_1 = eax_22[5]
                            eax_9 = eax_22[1]
                            var_10 = eax_22[4]
                            
                            if (eax_9 == 0)
                                arg2.b = var_5_1
                                goto label_5efb1d
                            
                            arg2.b = 1
                            ecx_1 = *(i + 0x1c28)
                            edi_1 = *i << 0x10
                            goto label_5efb1d
                        case 3
                            struct InputHitResult::UI2HitResult::VTable** eax_5 =
                                sub_656520(eax_11, *(i + 0x1ba0), &var_5c, var_1c)
                            int32_t ecx_3 = eax_5[1]
                            var_14 = eax_5[3]
                            int32_t eax_6 = eax_5[5]
                            var_10 = eax_5[4]
                            var_18_1 = eax_6
                            
                            if (ecx_3 != 0 && eax_6 == 1)
                                var_3c = *(i + 0x1c28)
                                char var_5_2 = 1
                                void* eax_8
                                eax_8, arg2 = sub_5e7360(i)
                                ecx_1 = var_3c
                                arg2.b = var_5_2
                                eax_9 = ecx_3
                                edi_1 = eax_8 << 0x10
                                goto label_5efb1d
                            
                            var_14 = var_3c
                            eax_11 = var_3c
                            var_10 = eax_11
                        label_5ef97d:
                            
                            if (*(i + 0x2c) == 1)
                                struct InputHitResult::UI2HitResult::VTable** eax_12
                                eax_12, arg2 = sub_656520(eax_11, *(i + 0x1ba0), &var_5c, var_1c)
                                var_14 = eax_12[3]
                                var_10 = eax_12[4]
                                int32_t ecx_9 = eax_12[5]
                                eax_9 = eax_12[1]
                                var_18_1 = ecx_9
                                
                                if (eax_9 != 0 && ecx_9 == 1)
                                    arg2.b = 1
                                    ecx_1 = *(i + 0x1c28)
                                    edi_1 = var_10 << 0x10
                                    goto label_5efb1d
                                
                                var_14 = var_3c
                                var_10 = var_3c
                            
                            char eax_15
                            eax_15, arg2 = sub_5eeeb0(i, var_1c)
                            arg2.b = eax_15
                            char var_5_3 = arg2.b
                            
                            if (arg2.b != 0)
                                int32_t eax_16
                                eax_16, arg2 = sub_5dc990(i)
                                int32_t ecx_12 = *(i + 0x384)
                                int32_t edi_4 = 0
                                arg2.b = var_5_3
                                
                                if (ecx_12 != 0xffffffff)
                                    edi_4 = ecx_12
                                
                                edi_1 = edi_4 | eax_16 << 0x10
                            
                            ecx_1 = nullptr
                            var_18_1 = 0
                            eax_9 = 0
                            goto label_5efb1d
                        case 5
                            struct InputHitResult::UI2HitResult::VTable** eax_20 =
                                sub_656520(eax_11, *(i + 0x1ba0), &var_5c, var_1c)
                            ecx_1 = eax_20[2]
                            var_14 = eax_20[3]
                            var_18_1 = eax_20[5]
                            eax_9 = eax_20[1]
                            var_10 = eax_20[4]
                            
                            if (eax_9 != 0)
                                ecx_1 = *(i + 0x1c28)
                            
                            edi_1 = 0x2c880000
                            
                            if (eax_9 == 0)
                                edi_1 = 0xffffffff
                            
                            arg2.b = eax_9 != 0
                            goto label_5efb1d
                        case 7
                            if (*(i + 0x220) != 0)
                                goto label_5efadd
                            
                            edi_1 = var_20_1
                        case 8
                            if (*(i + 0x234) == 0x22)
                                struct InputHitResult::UI2HitResult::VTable** eax_18 =
                                    sub_656520(eax_11, *(i + 0x1ba0), &var_5c, var_1c)
                                ecx_1 = eax_18[2]
                                var_14 = eax_18[3]
                                var_18_1 = eax_18[5]
                                eax_9 = eax_18[1]
                                var_10 = eax_18[4]
                                
                                if (eax_9 == 0)
                                    arg2.b = var_5_1
                                    goto label_5efb1d
                                
                                arg2.b = 1
                                ecx_1 = *(i + 0x1c28)
                                edi_1 = (*i << 0x10) + 0x3e8
                                goto label_5efb1d
                            
                            eax_9 = 0
                        label_5efb1d:
                            int32_t esi_1 = *(i + 0x1c28)
                            
                            if (data_b7fcd0 == esi_1 || arg2.b == 0)
                                edi_1 = var_20_1
                            else
                                if (edi_1 == 0xffffffff)
                                    sub_63b870(eax_9, &data_801800, "uiLayer != -1", 
                                        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x6e96, 
                                        "DomGfxHitTest")
                                    
                                    if (sub_63bc30() != 0)
                                        breakpoint
                                    
                                    sub_63bb00()
                                    noreturn
                                
                                if (var_24_1 == 0 || edi_1 s> var_20_1)
                                    var_30_1 = eax_9
                                    var_2c_1 = var_14
                                    var_28_1 = var_10
                                    var_24_1 = esi_1
                                    var_20_1 = edi_1
                                    var_34_1 = ecx_1
                                    var_38_1 = var_18_1
                                else
                                    edi_1 = var_20_1
                sub_6376d0(var_44_1, &i_1)
                i = i_1
            while (i != 0xffffffff)
            
            eax_4 = var_28_1
            ecx = var_2c_1
        
        *arg1 = var_24_1
        *(arg1 + 0xc) = var_30_1
        arg1[3].d = eax_4
        arg1[2].d = var_34_1
        *(arg1 + 0x14) = ecx
        *(arg1 + 0x1c) = var_38_1
        *(arg1 + 4) = edi_1 s>> 0x10

return arg1
