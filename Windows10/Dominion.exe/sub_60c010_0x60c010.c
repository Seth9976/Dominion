// 函数: sub_60c010
// 地址: 0x60c010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76ae50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_320 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char* ebx = data_ccf6b8

if (ebx != 0)
    int32_t esi_1 = data_ccf6bc
    int32_t eax_3 = sub_64b5d0(ebx, esi_1)
    int32_t var_2e4 = eax_3
    char* const var_2d4
    int32_t esi_6
    int32_t edi_2
    
    if (eax_3 == 0x1c)
        char* edi_1 = &ebx[0xffffffff]
        
        if (esi_1 s>= 3)
            edi_1 = ebx
        
        if (esi_1 s>= 3)
            ebx = &ebx[0xfffffffe]
        
        int32_t eax_6
        int32_t edx_4
        edx_4:eax_6 = muls.dp.d(0x51eb851f, edi_1)
        int32_t edx_5 = edx_4 s>> 7
        int32_t eax_9
        int32_t edx_8
        edx_8:eax_9 = sx.q(edi_1)
        
        if (mods.dp.d(
                sx.q(((eax_9 + (edx_8 & 3)) s>> 2) + 5 +
                    &ebx[esi_1 * 0x17 s/ 9 + edx_5 + (edx_5 u>> 0x1f)] - edi_1 s/ 0x64), 
                7) != 0)
            esi_6 = arg1
            edi_2 = 5
        else
            esi_6 = arg1
            edi_2 = 4
            uint32_t eax_16 = sub_64e7a0(esi_6)
            sub_665db0(eax_16, &data_be5c18, eax_16, 0x3f800000, 0xffffffff, 0)
    else if (eax_3 s<= 0x1c)
        esi_6 = arg1
        edi_2 = 5
    else
        void* edi_3 = ebx
        char* var_2d8_1 = &ebx[0xfffffffe]
        void* var_2d0_1
        
        if (esi_1 s>= 3)
            var_2d4 = &ebx[0xfffffffe]
            var_2d0_1 = &ebx[0xffffffff]
        else
            edi_3 = &ebx[0xffffffff]
            var_2d4 = ebx
            var_2d0_1 = edi_3
        
        int32_t eax_21 = esi_1 * 0x17 s/ 9
        int32_t eax_25
        int32_t edx_18
        edx_18:eax_25 = sx.q(edi_3)
        var_2d4 = mods.dp.d(
            sx.q(&var_2d4[edi_3 s/ 0x190 - edi_3 s/ 0x64 + ((eax_25 + (edx_18 & 3)) s>> 2) + eax_21
                + 5]), 
            7)
        
        if (esi_1 s< 3)
            var_2d8_1 = ebx
            ebx = var_2d0_1
        
        int32_t eax_35
        int32_t edx_26
        edx_26:eax_35 = sx.q(ebx)
        
        if (var_2d4 s<= mods.dp.d(
                sx.q(&var_2d8_1[var_2e4 + ebx s/ 0x190 - ebx s/ 0x64
                    + ((eax_35 + (edx_26 & 3)) s>> 2) + eax_21 + 4]), 
                7))
            esi_6 = arg1
            edi_2 = 5
        else
            esi_6 = arg1
            edi_2 = 6
            uint32_t eax_42 = sub_64e7a0(esi_6)
            sub_665db0(eax_42, &data_be5c24, eax_42, 0x3f800000, 0xffffffff, 0)
    
    int32_t* esi_17 = sub_4bb9f0(0x1a95134, esi_6, "tbl_Calendar")
    int32_t ebx_2 = 0
    int32_t* var_2cc_2 = esi_17
    int32_t var_2d0_2 = 0
    void var_310
    int32_t var_2f8
    int32_t eax_67
    
    while (true)
        int64_t* eax_47 = sub_60a0a0(&var_310, data_ccf6bc, data_ccf6b8, &var_310, ebx_2)
        int32_t edi_6 = eax_47[1].d
        int64_t var_2c4 = *eax_47
        int32_t var_2bc_1 = edi_6
        
        if (var_2c4:4.d != data_ccf6bc)
            uint32_t eax_49 = sub_64e7a0(esi_17)
            sub_665db0(eax_49, &data_be5c30, eax_49, 0x3f800000, ebx_2, 0)
        
        int32_t var_324_2 = edi_6
        sub_63df30(&var_2d4, "%d")
        int32_t var_8_1 = 0
        int32_t var_330_1 = ebx_2
        sub_666380(&var_2d4, &data_be5c3c, esi_17, &var_2d4)
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            char* eax_51 = var_2d4
            
            if (eax_51 != 0 && *eax_51 != 0)
                char* eax_52 = sub_63d4e0(&var_2d4)
                int32_t temp2_1 = *(eax_52 + 4)
                *(eax_52 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_52, *(eax_52 + 0xc) + 0x10)
                    var_2d4 = &data_801800
        
        int32_t var_8_3 = 0xffffffff
        void* eax_53 = sub_4ba1d0(&var_2c4)
        uint32_t eax_54 = sub_60bd30(eax_53, eax_53, esi_17, ebx_2)
        void* ecx_33 = data_cc8d5c
        
        if (ecx_33 != 0)
            void* eax_55 = sub_4badc0(ecx_33 + 0x75b8, &var_2c4)
            
            if (eax_55 != 0)
                uint32_t edi_7 = *(eax_55 + 8)
                
                if (edi_7 == 0)
                    edi_7 = sub_609770()
                    *(eax_55 + 8) = edi_7
                
                int32_t esi_19 = *(eax_55 + 0xc)
                void var_294
                int32_t eax_57 = sub_4b9b40(&var_294)
                
                if ((sub_4e4260(eax_57, eax_57, &var_294, &var_2e4) & edi_7) != edi_7
                        || (var_2e4 & esi_19) != esi_19)
                    uint32_t eax_62 = sub_64e7a0(var_2cc_2)
                    sub_665db0(eax_62, &data_be5d2c, eax_62, 0x3f800000, ebx_2, 0)
            
            int32_t edi_9 = var_2c4.d - 0x76c
            int32_t esi_21 = var_2c4:4.d - 1
            struct tm _Tm
            _Tm.tm_sec = 0
            _Tm.tm_min = 0
            _Tm.tm_hour = 0
            _Tm.tm_mday = edi_6 - 1
            _Tm.tm_wday = 0
            _Tm.tm_yday = 0
            _Tm.tm_isdst = 0
            _Tm.tm_year = edi_9
            _Tm.tm_mon = esi_21
            _mktime64(&_Tm)
            _Tm.tm_sec = 0
            _Tm.tm_min = 0
            var_2f8 = _Tm.tm_year + 0x76c
            eax_67 = _Tm.tm_mon + 1
            _Tm.tm_hour = 0
            int32_t tm_mday_1 = _Tm.tm_mday
            _Tm.tm_mday = edi_6 + 1
            _Tm.tm_wday = 0
            _Tm.tm_yday = 0
            _Tm.tm_isdst = 0
            _Tm.tm_year = edi_9
            _Tm.tm_mon = esi_21
            _mktime64(&_Tm)
            int32_t var_304 = _Tm.tm_year + 0x76c
            int32_t var_300_1 = _Tm.tm_mon + 1
            int32_t tm_mday = _Tm.tm_mday
            int32_t eax_75 = sub_4ba1d0(&var_304)
            int32_t var_2e8_1 = eax_75
            int32_t eax_77 = sub_4ba1d0(&var_2f8) - 8
            char var_2c8_1
            
            if (eax_77 u> 7)
                var_2c8_1 = 0
            else
                lookup_table_60c92c[eax_77]
                var_2c8_1 = 1
            
            char var_2c7_1
            
            if (eax_53 - 8 u> 7)
                var_2c7_1 = 0
            else
                *(eax_53 + &lookup_table_60c92c[4])
                var_2c7_1 = 1
            
            eax_54 = eax_75 - 8
            char var_2c6_1
            
            if (eax_54 u> 7)
                var_2c6_1 = 0
            else
                eax_54 = zx.d(lookup_table_60c944[eax_54])
                var_2c6_1 = 1
            
            void* ebx_5 = data_cc8d5c
            
            if (ebx_5 != 0)
                int32_t ecx_44 = var_2c4:4.d
                int32_t edx_35 = var_2c4.d
                char var_2c5_1
                
                if (*(ebx_5 + 0x75d8) != edi_6 || *(ebx_5 + 0x75d4) != ecx_44
                        || *(ebx_5 + 0x75d0) != edx_35)
                    var_2c5_1 = 0
                else
                    var_2c5_1 = 1
                
                int32_t edi_10 = edx_35 - 1
                int32_t esi_22 = edx_35
                
                if (ecx_44 s>= 3)
                    esi_22 = edx_35 - 2
                
                if (ecx_44 s>= 3)
                    edi_10 = edx_35
                
                int32_t eax_82
                int32_t edx_36
                edx_36:eax_82 = muls.dp.d(0x38e38e39, ecx_44 * 0x17)
                int32_t edx_37 = edx_36 s>> 1
                int32_t eax_83
                int32_t edx_38
                edx_38:eax_83 = muls.dp.d(0x51eb851f, edi_10)
                int32_t edx_39 = edx_38 s>> 7
                int32_t eax_88 = edi_10
                
                if (eax_88 s< 0)
                    eax_88 += 3
                
                int32_t eax_91
                int32_t edx_42
                edx_42:eax_91 = sx.q((eax_88 s>> 2) + (edx_39 u>> 0x1f) + (edx_37 u>> 0x1f) + esi_22
                    + edx_37 + edx_39 - edi_10 s/ 0x64 + 4 + edi_6)
                int32_t temp1_4 = mods.dp.d(edx_42:eax_91, 7)
                eax_54 = divs.dp.d(edx_42:eax_91, 7)
                
                if (var_2c7_1 != 0)
                    int32_t* ebx_6
                    int32_t edi_11
                    
                    if (edi_6 == 1 || temp1_4 == 0)
                        ebx_6 = var_2cc_2
                        
                        if (var_2c8_1 == 0)
                            edi_11 = var_2d0_2
                        else
                            uint32_t eax_92 = sub_64e7a0(ebx_6)
                            edi_11 = var_2d0_2
                            sub_665db0(eax_92, &data_be5e7c, eax_92, 0x3f800000, edi_11, 0)
                    else
                        ebx_6 = var_2cc_2
                        edi_11 = var_2d0_2
                    
                    eax_54.b = var_2c5_1
                    
                    if (edi_6 == sub_64b5d0(var_2c4.d, var_2c4:4.d) || temp1_4 == 6
                            || eax_54.b != 0)
                        if (var_2c6_1 != 0 || eax_54.b != 0)
                            uint32_t eax_94 = sub_64e7a0(ebx_6)
                            eax_54 = sub_665db0(eax_94, &data_be5e88, eax_94, 0x3f800000, edi_11, 0)
                    else if (var_2c6_1 != eax_54.b)
                        uint32_t eax_93 = sub_64e7a0(ebx_6)
                        sub_665db0(eax_93, &data_be5e94, eax_93, 0x3f800000, edi_11, 0)
                        sub_60b800(eax_53)
                        noreturn
                    
                    ebx_5 = data_cc8d5c
                
                if (ebx_5 != 0)
                    void* eax_95 = sub_4badc0(ebx_5 + 0x75b8, &var_2c4)
                    int32_t i
                    
                    if (eax_95 != 0)
                        i = *eax_95
                    else
                        i = 0
                    
                    void* eax_96 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                    int32_t* eax_98 =
                        *(*(eax_96 + 0x720c) + (((i s>> 4 | i) & *(eax_96 + 0x7210)) << 2))
                    int32_t ebx_7
                    
                    if (eax_98 == 0)
                    label_60c7e5:
                        ebx_7 = var_2d0_2
                        esi_17 = var_2cc_2
                    else
                        while (i != *eax_98)
                            eax_98 = eax_98[2]
                            
                            if (eax_98 == 0)
                                goto label_60c7e5
                        
                        if (eax_98 == 0xfffffffc)
                            goto label_60c7e5
                        
                        esi_17 = var_2cc_2
                        uint32_t eax_102 = sub_64e7a0(esi_17)
                        ebx_7 = var_2d0_2
                        sub_665db0(eax_102, &data_be5d20, eax_102, 0x3f800000, ebx_7, 0)
                    
                    ebx_2 = ebx_7 + 1
                    var_2d0_2 = ebx_2
                    
                    if (ebx_2 s>= edi_2 * 7)
                        break
                    
                    continue
        
        sub_63b870(eax_54, &data_801800, "gClient", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int64_t* eax_99 = sub_60a040(&var_310)
    int32_t ecx_66 = data_ccf6b8
    var_2f8.q = *eax_99
    
    if (ecx_66 == 0x7e7)
        result = data_ccf6bc
    
    int32_t ebx_8
    
    if (ecx_66 == 0x7e7 && result == 2)
        ebx_8 = arg1
    else
        ebx_8 = arg1
        uint32_t eax_100 = sub_64e7a0(ebx_8)
        sub_665db0(eax_100, &data_be5d98, eax_100, 0x3f800000, 0xffffffff, 0)
        result = data_ccf6bc
        ecx_66 = data_ccf6b8
    
    if (ecx_66 != var_2f8 || result != eax_67)
        uint32_t eax_103 = sub_64e7a0(ebx_8)
        result = sub_665db0(eax_103, &data_be5da4, eax_103, 0x3f800000, 0xffffffff, 0)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
