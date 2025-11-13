// 函数: sub_60a460
// 地址: 0x60a460
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76ad78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ecx = __chkstk(0x5124)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = ecx
void* var_5114 = eax_3
void* ecx_1 = data_cc8d5c

if (ecx_1 != 0)
    void* i_2 = sub_4bae20(ecx_1 + 0x75c4, eax_3)
    void* i_4 = i_2
    
    if (i_2 == 0)
    label_60a8d1:
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(i_2)
        return i_2
    
    int32_t eax_4 = *(i_2 + 8)
    int32_t var_510c_1 = eax_4
    void* const i = &data_77fca8
    int32_t var_5100_1 = 0
    void* var_5104
    void var_cc
    
    do
        int32_t edi_1 = *i
        
        if (edi_1 s<= eax_4 && edi_1 != 0x13 && edi_1 != 2)
            void* var_511c
            uint32_t eax_5 = sub_4daf40(&var_5104, &var_511c)
            int32_t esi_1 = 0
            
            if (eax_5 s<= 0)
            label_60a52a:
                *(&var_cc + (var_5100_1 << 2)) = *i
                var_5100_1 += 1
            else
                while (sub_4db700(*(var_5104 + (esi_1 << 2)), edi_1) == 0)
                    esi_1 += 1
                    
                    if (esi_1 s>= eax_5)
                        goto label_60a52a
            
            eax_4 = var_510c_1
        
        i += 0x1c
    while (i s< &data_77fea0)
    
    eax_3 = data_cc8d5c
    var_5104 = eax_3
    
    if (eax_3 != 0)
        int32_t edi_2 = *(eax_3 + 0x75d0)
        int32_t ebx = *(eax_3 + 0x75d4)
        int32_t eax_9 = *(eax_3 + 0x75d8)
        __time64_t _Time
        _time64(&_Time)
        struct tm* _Tm = _localtime64(&_Time)
        _Tm->tm_year = edi_2 - 0x76c
        _Tm->tm_mon = ebx - 1
        _Tm->tm_mday = eax_9
        _mktime64(_Tm)
        void var_5134
        int64_t* eax_12 = sub_64b530(&var_5134, neg.d(_Tm->tm_wday), var_5104 + 0x75d0, &var_5134)
        int32_t eax_13 = eax_12[1].d
        _Time = *eax_12
        
        if (*(var_5114 + 8) != eax_13 || *(var_5114 + 4) != _Time:4.d || *var_5114 != _Time.d)
            ebx.b = 0
        else
            ebx.b = 1
        
        void* eax_16 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        int32_t i_1 = *i_4
        i_2 = *(*(eax_16 + 0x7304) + (((i_1 s>> 4 | i_1) & *(eax_16 + 0x7308)) << 2))
        
        if (i_2 == 0)
        label_60a64e:
            i_2.b = 0
        else
            while (i_1 != *i_2)
                i_2 = *(i_2 + 0x98)
                
                if (i_2 == 0)
                    goto label_60a64e_1
            
            if (i_2 == 0xfffffffc)
            label_60a64e_1:
                i_2.b = 0
            else
                i_2.b = *(i_2 + 0x1c)
                i_2.b u>>= 1
                i_2.b &= 1
        
        if ((ebx.b == 0 || i_2.b != 0) && var_5100_1 != 0)
            int32_t ebx_3 = 0
            int32_t esi_6 = 0
            
            if (var_5100_1 s> 0)
                do
                    int32_t ecx_33 = 1
                    
                    for (i_2 = &data_77fea0; i_2 != &data_77fee8; )
                        if (*(&var_cc + (esi_6 << 2)) == *i_2)
                            ebx_3 |= ecx_33
                            break
                        
                        i_2 += 4
                        ecx_33 *= 2
                    
                    esi_6 += 1
                while (esi_6 s< var_5100_1)
            
            data_ccf6c0 = ebx_3
            data_ccf6c4 = 0
            data_ccf6c8 = 2
            data_8db660 = 0x7f5
        else
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_24_6)(struct 
                _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_63d770
            void var_40
            `eh vector constructor iterator'(&var_40, 4, 0xb, 0x5a0be0)
            int32_t var_8_1 = 0
            void* ebx_1 = &var_40
            char* eax_18 = *(i_4 + 4)
            char* const esi_4 = &data_801800
            
            if (eax_18 != 0)
                esi_4 = eax_18
            
            int32_t edi_4 = 0
            
            while (true)
                char edx_5 = 1
            label_60a698:
                char* ecx_18 = esi_4
                
                while (true)
                    eax_18.b = *esi_4
                    
                    if (eax_18.b == 0x20 && edx_5 != 0)
                        esi_4 = &esi_4[1]
                        goto label_60a698
                    
                    edx_5 = 0
                    
                    if (eax_18.b == 0xa)
                        break
                    
                    if (eax_18.b == 0)
                        break
                    
                    esi_4 = &esi_4[1]
                
                sub_63db30(ebx_1, ecx_18, esi_4 - ecx_18)
                eax_18.b = *esi_4
                edi_4 += 1
                ebx_1 += 4
                
                if (edi_4 == 0xb)
                    int32_t var_8_2 = 0xffffffff
                    void var_50fc
                    void var_3c
                    ebx_1.b = sub_4e6680(&var_3c, &var_40, &var_50fc, &var_3c)
                    i_2 = `eh vector vbase constructor iterator'(&var_40, 4, 0xb, sub_63d770)
                    
                    if (ebx_1.b != 0)
                        void* eax_23 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                        int32_t i_3 = *i_4
                        int32_t* eax_25 =
                            *(*(eax_23 + 0x7304) + (((i_3 s>> 4 | i_3) & *(eax_23 + 0x7308)) << 2))
                        
                        if (eax_25 == 0)
                        label_60a779:
                            void var_dc
                            memset(&var_dc, 0, 0x94)
                            void var_c8
                            sub_61dd90(&var_c8)
                            int32_t var_c4_1 = 4
                            sub_4bb4c0(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x7304, i_4, &var_dc)
                        else
                            while (i_3 != *eax_25)
                                eax_25 = eax_25[0x26]
                                
                                if (eax_25 == 0)
                                    goto label_60a779
                            
                            if (eax_25 == 0xfffffffc)
                                goto label_60a779
                        
                        data_1723ff8 = *i_4
                        data_1723ff4 = 1
                        uint32_t count = 0x5020
                        data_1723ffc = *var_5114
                        data_1724004 = *(var_5114 + 8)
                        memcpy(&data_171efd4, &var_50fc, count)
                        int32_t esi_5 = 9
                        data_171efd0 = sub_5ac2e0(&var_50fc)
                        data_171efc8 = 0
                        int32_t edi_5 = 0x6c
                        
                        while (true)
                            void* ecx_32 = sub_61dad0() + edi_5
                            i_2 = *(ecx_32 + 0xc)
                            
                            if (i_2 != 1 && i_2 != 0 && data_171efc8 == 0)
                                data_171efc8 = esi_5
                            
                            if (*(ecx_32 + 8) != 0)
                                data_171efc8 = esi_5
                                data_8db660 = 0x7e3
                                break
                            
                            esi_5 -= 1
                            int32_t temp2_1 = edi_5
                            edi_5 -= 0xc
                            
                            if (temp2_1 - 0xc s< 0)
                                data_8db660 = 0x7e3
                                break
                    
                    break
                
                if (eax_18.b == 0)
                    sub_63b870(eax_18, &data_801800, "numStrs == MAX_STRS", 
                        "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 0x1760, 
                        "FromCampaignString")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                esi_4 = &esi_4[1]
        
        goto label_60a8d1

sub_63b870(eax_3, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
