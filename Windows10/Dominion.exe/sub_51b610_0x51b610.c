// 函数: sub_51b610
// 地址: 0x51b610
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t eax_2 = arg2[1]
uint32_t eax_3 = sub_516f30(*arg2)
uint32_t var_64 = eax_3
int32_t ecx_1 = 0
int32_t* edx = eax_3 + 0xc
char const* const var_94_1
int32_t var_90
char const* const var_8c
char* ecx_2

while (true)
    if (*edx == 1)
        eax_3 = *(ecx_1 * 0x26c + var_64 + 0x10)
        uint32_t var_78_1 = eax_3
        
        if (*(var_64 + 8) != 0x1770)
            uint32_t var_8c_2 = var_64
            void var_60
            void* eax_13 = sub_572f80(&var_60, eax_2, arg3, &var_60, arg4)
            *(eax_13 + 0x3c) = arg2[4]
        label_51b874:
            var_78_1()
            TEB* fsbase
            void* ecx_9 = *fsbase->ThreadLocalStoragePointer
            eax_3 = *(ecx_9 + 0xf010)
            
            if (eax_3 s> 0)
                uint32_t edx_9 = var_64
                int32_t result = eax_3 - 1
                *(ecx_9 + 0xf010) = result
                
                if (*(edx_9 + 8) == 0x1770)
                    int32_t ecx_10 = *arg2
                    result = arg3[0x541]
                    int32_t eax_15
                    
                    if (ecx_10 != 0x17d8)
                        if (result != 3 && result != 5 && result != 4 && result != 6
                                && arg3[0x540].b == 0)
                            eax_15 = arg4
                            
                            if (arg4 == arg3[0x673])
                                eax_15 = arg3[0x674]
                            
                            int32_t var_8c_4 = 0
                            int32_t var_90_4 = 0
                            result = sub_59f9b0(eax_15, arg4, arg3, eax_15, 0x45, 0, nullptr, 0, 
                                ecx_10, 0, 0, 0)
                            edx_9 = var_64
                    else if (result != 3 && result != 5 && result != 4 && result != 6
                            && arg3[0x540].b == 0)
                        eax_15 = arg4
                        
                        if (arg4 == arg3[0x673])
                            eax_15 = arg3[0x674]
                        
                        int32_t var_8c_3 = 0
                        int32_t var_90_3 = 0
                        result = sub_59f9b0(eax_15, arg4, arg3, eax_15, 0x45, 0, nullptr, 0, 
                            ecx_10, arg3[0x403], 0, 0)
                        edx_9 = var_64
                
                if (*(edx_9 + 8) == 0x1b58)
                    result = arg3[0x541]
                    
                    if (result != 3 && result != 5 && result != 4 && result != 6
                            && arg3[0x540].b == 0)
                        int32_t eax_16 = arg4
                        
                        if (arg4 == arg3[0x673])
                            eax_16 = arg3[0x674]
                        
                        result = sub_59f9b0(eax_16, arg4, arg3, eax_16, 0x44, 0, nullptr, 0, *arg2, 
                            arg2[1], 0, 0)
                
                CookieCheckFunction(result)
                return result
            
            var_8c = "DomPopContext"
            var_90 = 0x792
            ecx_2 = "cs.numContexts > 0"
        label_51b9b7:
            var_94_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
        else if (eax_2 == 0)
            eax_3 = *arg2 - 0x1771
            
            if (eax_3 u<= 0xc9)
                eax_3 = zx.d(lookup_table_51ba48[eax_3])
                void* esi_1
                
                switch (eax_3)
                    case 0
                        esi_1 = 0x1500
                    case 1
                        esi_1 = 0x1501
                    case 2
                        esi_1 = 0x1502
                    case 3
                        esi_1 = 0x1503
                    case 4
                        esi_1 = 0x1504
                    case 5
                        esi_1 = 0x1505
                    case 6
                        esi_1 = 0x1506
                    case 7
                        esi_1 = 0x1507
                    case 8
                        esi_1 = 0x1508
                    case 9
                        esi_1 = 0x1509
                    case 0xa
                        esi_1 = 0x150a
                    case 0xb
                        esi_1 = 0x150b
                    case 0xc
                        esi_1 = 0x150c
                    case 0xd
                        esi_1 = 0x150d
                    case 0xe
                        esi_1 = 0x150e
                    case 0xf
                        esi_1 = 0x150f
                    case 0x10
                        esi_1 = 0x1510
                    case 0x11
                        esi_1 = 0x1511
                    case 0x12
                        esi_1 = 0x1512
                    case 0x13
                        esi_1 = 0x1513
                    case 0x14
                        esi_1 = 0x1514
                    case 0x15
                        esi_1 = 0x1515
                    case 0x16
                        esi_1 = 0x1516
                    case 0x17
                        esi_1 = 0x1517
                    case 0x18
                        esi_1 = 0x1518
                    case 0x19
                        esi_1 = 0x1519
                    case 0x1a
                        esi_1 = 0x151a
                    case 0x1b
                        goto label_51b842
                
                int32_t* ebx_1 = 0x27
                eax_3 = &arg3[0x5e5]
                
                while (*eax_3 != 0)
                    ebx_1 += 1
                    eax_3 += 0x10
                    
                    if (ebx_1 s>= 0x47)
                        var_8c = "NextAvailableNonSupplyPile"
                        var_90 = 0x625
                        ecx_2 = "Halt"
                        goto label_51b9b7
                
                int32_t eax_8
                int32_t edx_5
                edx_5:eax_8 = muls.dp.d(0x51eb851f, 
                    0xffffe5b8 - arg3 + sub_5727e0(sub_572970(eax_3, ebx_1, arg3, esi_1, 0), esi_1, 
                        arg3, ebx_1, 0xffffffff, nullptr))
                int32_t edx_6 = edx_5 s>> 5
                int32_t esi_4 = (edx_6 u>> 0x1f) + edx_6
                uint32_t ebx_2 = zx.d(esi_4.w)
                
                if (ebx_2 u>= 0x320)
                    sub_591930()
                
                int32_t var_6c = esi_4
                int32_t var_68_1 = arg3[ebx_2 * 0x19 + 0x695]
                sub_573050(&var_6c, arg4, arg3, &var_6c)
                goto label_51b874
            
        label_51b842:
            var_8c = "TwistGetCard"
            var_90 = 0x228
            var_94_1 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp"
            ecx_2 = "Halt"
        else
            var_8c = "CampaingApplyExtra"
            var_90 = 0x29ee
            var_94_1 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp"
            ecx_2 = "what == CARD_NONE"
        
        break
    
    ecx_1 += 1
    edx = &edx[0x9b]
    
    if (ecx_1 s>= 4)
        var_8c = "CampaignPieceDefGetFn"
        var_90 = 0x30a
        var_94_1 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp"
        ecx_2 = "Halt"
        break

sub_63b870(eax_3, &data_801800, ecx_2, var_94_1, var_90, var_8c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
