// 函数: sub_5ea560
// 地址: 0x5ea560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

arg1.b = 0
char var_5 = 0

if (*(arg3 + 0x24) != 0)
    int32_t* edi_1 = arg3 + 0x20
    int32_t* esi_1 = arg3 + 0x70
label_5ea583:
    
    if (*(arg3 + 0x1a04) == 0)
        char const* const var_48_2
        int32_t var_44_3
        char const* const var_40_4
        char* ecx_15
        
        if (*(arg3 + 0x1a20) != 0)
            var_40_4 = "DomGameContinue"
            var_44_3 = 0x5b8a
            ecx_15 = "g.errorCode == 0"
        else
        label_5ea5a2:
            int32_t* var_18_1 = esi_1
            char var_6_1 = 0
            
            while (data_b604c8 == 0)
                if (sub_5e9670(sub_4d5db0(arg4, *esi_1), edi_1) == 0)
                    break
                
                *(arg3 + 0x1504) = 1
                arg1 = sub_6a93a0(arg3 + 0x5f080)
                
                if (*(arg3 + 0x1a20) != 0 || *(arg3 + 0x1a04) != 0)
                label_5ea819:
                    arg1.b = 1
                    return arg1
                
                var_5 = 1
                
                if (*(arg3 + 0x24) == 0)
                    var_40_4 = "DomGameContinue"
                    var_44_3 = 0x5ba7
                    ecx_15 = "g.yld.choice != CHOICE_NONE"
                    goto label_5eaa2c
            
            while (true)
                int32_t eax_2 = *esi_1
                arg1 = sub_5cc5e0(eax_2)
                
                if (*(arg1 + 0x4080) == 0)
                    arg1.b = var_6_1
                    
                    if (arg1.b != 0)
                        goto label_5ea5a2
                    
                    int32_t ecx_8 = *esi_1
                    
                    if (data_b604d4 == ecx_8 || *(arg3 + 0x1a04) != arg1.b)
                    label_5ea762:
                        arg1 = sub_4b9680(&arg4[2], *esi_1)
                        
                        if (*(arg1 + 0x14) != 3)
                            if (data_cc8d6d != 0)
                                void* eax_16 = (*esi_1 << 4) + arg2
                                sub_5e9900(sub_5ca330(eax_16, arg3, eax_16, edi_1), *esi_1, arg4, 
                                    edi_1)
                                void* eax_18
                                eax_18.b = var_5
                                return eax_18
                            
                            arg1 = 0
                            
                            if (arg4[0x46a] s<= 0)
                            label_5ea98a:
                                var_40_4 = "PlayerIsAccountType"
                                var_44_3 = 0x582e
                                ecx_15 = "Halt"
                                goto label_5eaa2c
                            
                            void* edx_11 = &arg4[0x19]
                            
                            while (true)
                                if (*edx_11 == *esi_1)
                                    if (arg4[arg1 * 0x8b + 0x17] != 1)
                                        break
                                    
                                    int32_t eax_19 = *esi_1
                                    int32_t edi_3 = *(arg3 + 0x19cc)
                                    *(arg3 + 0xd38)
                                    int32_t esi_4 = *(arg3 + 0x19e4)
                                    int32_t eax_24 =
                                        divs.dp.d(sx.q(*(arg3 + 0x19e0) - 1), *(arg3 + 0xd38)) + 1
                                    
                                    if (edi_3 != eax_19)
                                        esi_4 = 0xffffffff
                                    else if ((*(arg3 + 0x68) & 8) != 0)
                                        esi_4 = 0xffffffff
                                    
                                    int32_t ecx_21 = *arg4
                                    int32_t var_2c = *(arg3 + 0x1a20)
                                    int32_t var_24 = eax_19
                                    int32_t var_30 = 0
                                    int32_t var_28 = edi_3
                                    int32_t var_20 = esi_4
                                    int32_t var_1c = eax_24
                                    sub_4b4e70(ecx_21, &var_30)
                                    void* eax_27
                                    eax_27.b = var_5
                                    return eax_27
                                
                                arg1 += 1
                                edx_11 += 0x22c
                                
                                if (arg1 s>= arg4[0x46a])
                                    goto label_5ea98a
                            
                            arg1.b = var_5
                            goto label_5ea92e
                        
                        if (data_b604c8 == 0)
                            arg1 = data_b604b8
                            
                            if (arg1 == 0)
                                arg1 = sub_6a9170(sub_5ea540, &data_b604bc)
                                data_b604b8 = arg1
                            
                            bool cond:4_1 = data_147b068 != 0
                            data_b604bc = (*esi_1 << 4) + arg2
                            data_b604c0 = arg3
                            data_b604c4 = edi_1
                            data_b604c8 = 1
                            
                            if (cond:4_1)
                                var_40_4 = "co_resume_async"
                                var_44_3 = 0x1a2
                                var_48_2 = "C:\x\ax2017\Engine\Coroutine.cpp"
                                ecx_15 = "g_current_coroutine == NULL"
                                goto label_5eaa36
                            
                            HANDLE hSemaphore = *(arg1 + 0xc)
                            data_147b068 = arg1
                            arg1 = ReleaseSemaphore(hSemaphore, 1, nullptr)
                            
                            if (arg1 == 0)
                                var_40_4 = "mutex_release"
                                var_44_3 = 0x83
                                var_48_2 = "C:\x\ax2017\Engine\Coroutine.cpp"
                                ecx_15 = "Halt"
                                goto label_5eaa36
                            
                            arg1.b = 1
                            var_5 = 1
                            
                            if (*(arg3 + 0x24) != 0)
                                goto label_5ea583
                            
                            return arg1
                        
                        if (data_147b068 == 0)
                            var_40_4 = "co_async_complete"
                            var_44_3 = 0x1ac
                            var_48_2 = "C:\x\ax2017\Engine\Coroutine.cpp"
                            ecx_15 = "g_current_coroutine != NULL"
                            goto label_5eaa36
                        
                        int32_t* ebx_1 = data_b604b8
                        arg1 = WaitForSingleObject(ebx_1[4], 0)
                        
                        if (arg1 != 0)
                            if (arg1 != 0x80 && arg1 == 0x102)
                                arg1.b = var_5
                                goto label_5ea92e
                            
                            var_40_4 = "mutex_timed_lock"
                            var_44_3 = 0x62
                            var_48_2 = "C:\x\ax2017\Engine\Coroutine.cpp"
                            ecx_15 = "Halt"
                            goto label_5eaa36
                        
                        bool cond:5_1 = *ebx_1 != 2
                        data_147b068 = 0
                        
                        if (not(cond:5_1))
                            sub_6a9250(ebx_1)
                            data_b604b8 = 0
                        
                        arg1 = data_cc8d5c
                        data_b604c8 = 0
                        
                        if (arg1 != 0)
                            int32_t edx_8 = *esi_1
                            
                            if (*(arg1 + 0x5068) == 2)
                                sub_5e97a0(arg1, edx_8, arg4, edi_1, 2)
                                void* eax_13
                                eax_13.b = var_5
                                return eax_13
                            
                            sub_5e9900(arg1, edx_8, arg4, edi_1)
                            arg1.b = var_5
                            goto label_5ea92e
                    else
                        arg1 = data_cc8d5c
                        
                        if (arg1 != 0)
                            if (ecx_8 == *(arg1 + 0x7590) && data_b604d8 == *(arg3 + 0x19d0))
                                int32_t* eax_10
                                int32_t ecx_9
                                int32_t* edx_6
                                
                                if (*(arg3 + 0x6c) != *(arg3 + 0x19cc))
                                    eax_10, ecx_9 = sub_4b9510()
                                    
                                    if (eax_10.b == 0)
                                        edx_6 = data_171e774
                                    label_5ea73d:
                                        int32_t var_40_3 = 1
                                        int32_t var_44_2 = ecx_9
                                        sub_5af930(eax_10, edx_6, ecx_9.b)
                                else
                                    eax_10, ecx_9 = sub_4b9510()
                                    
                                    if (eax_10.b == 0)
                                        edx_6 = data_171e778
                                        goto label_5ea73d
                            
                            data_b604d4 = *esi_1
                            data_b604d8 = *(arg3 + 0x19d0)
                            goto label_5ea762
                    
                    var_40_4 = "GetClient"
                    var_44_3 = 0x7b
                    var_48_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
                    ecx_15 = "gClient"
                    goto label_5eaa36
                
                __builtin_memcpy(edi_1, arg1 + 0x1938, 0xd18)
                int32_t eax_6 =
                    memmove(arg1 + 0x1938, arg1 + 0x2650, *(arg1 + 0x4080) * 0xd18 - 0xd18)
                edi_1 = arg3 + 0x20
                *(arg1 + 0x4080) -= 1
                sub_5e9900(eax_6, eax_2, arg4, edi_1)
                sub_5e9670(sub_4d5db0(arg4, eax_2), edi_1)
                *(arg3 + 0x1504) = 1
                arg1 = sub_6a93a0(arg3 + 0x5f080)
                
                if (*(arg3 + 0x1a20) != 0)
                    goto label_5ea819
                
                if (*(arg3 + 0x1a04) != 0)
                    goto label_5ea819
                
                var_5 = 1
                var_6_1 = 1
                
                if (*(arg3 + 0x24) == 0)
                    var_40_4 = "DomGameContinue"
                    var_44_3 = 0x5bc7
                    ecx_15 = "g.yld.choice != CHOICE_NONE"
                    break
                
                esi_1 = var_18_1
        
    label_5eaa2c:
        var_48_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    label_5eaa36:
        sub_63b870(arg1, &data_801800, ecx_15, var_48_2, var_44_3, var_40_4)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

label_5ea92e:
return arg1
