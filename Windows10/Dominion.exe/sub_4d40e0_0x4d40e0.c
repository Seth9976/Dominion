// 函数: sub_4d40e0
// 地址: 0x4d40e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$_send@I@_Originator@details@Concurrency@@SA_NPAV?$ITarget@I@2@ABI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = &data_8db5a0
int32_t* i_1 = &data_8db5a0
BOOL (__stdcall* const var_30)(int64_t* lpPerformanceCount) = QueryPerformanceCounter

do
    int32_t eax_3 = i[-2]
    char var_21_1 = 0
    
    if (eax_3 != 0)
        if (eax_3 != i[-1])
            int32_t ecx_2 = i[3]
            
            if (eax_3 != ecx_2)
                if (ecx_2 != 0)
                    int32_t eax_5 = *(sub_4d3b00(ecx_2) + 0x18)
                    
                    if (eax_5 != 0)
                        eax_5(i[4], eax_2)
                
                int32_t esi_1 = i[3]
                
                if (esi_1 == 0x15 || esi_1 == 0x16 || esi_1 == 3)
                    if (data_1a98f24 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                        sub_75970e(&data_1a98f24)
                        
                        if (data_1a98f24 == 0xffffffff)
                            int32_t var_14_1 = 0
                            data_1a98f28 = sub_69f030("xbin/atlases/res/atlas-box_art-0.texture", 3)
                            int32_t var_14_2 = 0xffffffff
                            __Init_thread_footer(&data_1a98f24)
                    
                    sub_69ec60(data_1a98f28)
                
                if (esi_1 == 0x7e3)
                    if (data_1a98f2c s> *(*fsbase->ThreadLocalStoragePointer + 8))
                        sub_75970e(&data_1a98f2c)
                        
                        if (data_1a98f2c == 0xffffffff)
                            int32_t var_14_3 = 1
                            data_1a98f30 =
                                sub_69f030("xbin/atlases/res/atlas-campaign-0.texture", 3)
                            int32_t var_14_4 = 0xffffffff
                            __Init_thread_footer(&data_1a98f2c)
                    
                    sub_69ec60(data_1a98f30)
                
                sub_64e810(&i[4])
                i[4] = 0
                int32_t ecx_9 = i[7]
                int128_t xmm0_1 = *(i - 4)
                i[-1] = i[-2]
                *i = 0
                *(i + 0xc) = xmm0_1
                i[7] = ecx_9 + 1
                i[1] = ecx_9
            else
                int128_t xmm0 = *(i + 0xc)
                *(i + 0xc) = *(i - 4)
                *(i - 4) = xmm0
            
            i[2] = 0
            i[-2] = 0
            var_21_1 = 1
        else
            int32_t ecx_1 = *i
            i[-2] = 0
            sub_67cf00(ecx_1)
    
    if (i[3] != 0x27)
        sub_4d3c40(&i[3], 1)
    else
        sub_64e810(&i[4])
    
    int32_t ecx_12 = i[-1]
    
    if (ecx_12 != 0)
        void* eax_13 = data_cf65b8
        int32_t esi_2 = i[2]
        int32_t var_60_1 = 0
        int32_t var_5c_1 = 0
        uint128_t xmm1_3 = zx.o(*(eax_13 + 0x18))
        int32_t xmm2_2 = _mm_cvtepi32_ps(zx.o(*(eax_13 + 0x14)))
        int32_t var_70_1 = 0
        int32_t var_6c_1 = 0
        int32_t xmm1_4 = _mm_cvtepi32_ps(xmm1_3)
        int32_t var_58_1 = xmm2_2
        int32_t var_54_1 = xmm1_4
        int32_t var_68_1 = xmm2_2
        int128_t var_90 = var_60_1.o
        int32_t var_64_1 = xmm1_4
        int128_t var_80 = var_70_1.o
        void* eax_14 = sub_4d3b00(ecx_12)
        int32_t** ecx_13 = *(eax_14 + 4)
        
        if (ecx_13 != 0)
            goto label_4d4353
        
        void* eax_15 = *(eax_14 + 0x14)
        char const* const var_a8_2
        int32_t var_a4_3
        char const* const var_a0_9
        char* ecx_41
        
        if (eax_15 == 0)
            var_a0_9 = "GetDlgAsset"
            var_a4_3 = 0x2e31
            var_a8_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
            ecx_41 = "def.uiPages"
        label_4d46c4:
            sub_63b870(eax_15, &data_801800, ecx_41, var_a8_2, var_a4_3, var_a0_9)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        ecx_13 = *(eax_15 + (esi_2 << 2))
    label_4d4353:
        int32_t* esi_3 = *ecx_13
        
        if (*i == 0 && i[-1] != 0x27)
            sub_654ce0(&var_90, i, "dialog (retired)", esi_3, &var_90, &var_80, 0x32c8, nullptr, 0)
            uint32_t eax_17 = sub_64e7a0(*i)
            sub_665db0(eax_17, &data_8dba78, eax_17, 0x3f800000, 0xffffffff, 0)
            sub_65d6e0(*i, (zx.o(0)).d)
        
        int32_t ecx_17 = i[-1]
        int32_t eax_18
        
        if (ecx_17 != 0x27)
            eax_18 = *(sub_4d3b00(ecx_17) + 0xc)
        else
            eax_18 = 0x2af8
        
        sub_654ce0(&var_90, i, "dialog", esi_3, &var_90, &var_80, eax_18, nullptr, 0)
        sub_4d3b70(*i)
        eax_15 = data_cc8dc0
        int32_t ecx_19 = *i
        
        if (eax_15 == 0)
        label_4d46ab:
            var_a0_9 = "GetLocalSettings"
            var_a4_3 = 0x5fb
            ecx_41 = "gGameSettings.localSettings"
            var_a8_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
            goto label_4d46c4
        
        int32_t eax_21 = *(eax_15 + 8)
        uint32_t eax_25
        
        if (eax_21 == 0)
            eax_25 = sub_64e7a0(ecx_19)
            sub_665db0(eax_25, &data_8dc9e0, eax_25, 0x3f800000, 0xffffffff, 0)
        else if (eax_21 == 1)
            eax_25 = sub_64e7a0(ecx_19)
            sub_665db0(eax_25, &data_8dc9ec, eax_25, 0x3f800000, 0xffffffff, 0)
        else if (eax_21 == 3)
            eax_25 = sub_64e7a0(ecx_19)
            sub_665db0(eax_25, &data_8dc9f8, eax_25, 0x3f800000, 0xffffffff, 0)
        *i
        sub_4d2030()
        int32_t eax_27 = *(sub_4d3b00(i[-1]) + 0x14)
        
        if (eax_27 != 0)
            int32_t esi_4 = i[2]
            int32_t ecx_23 = *i
            
            if (esi_4 == 0)
                uint32_t eax_28 = sub_64e7a0(ecx_23)
                sub_665db0(eax_28, &data_8dbd64, eax_28, 0x3f800000, 0xffffffff, esi_4.b)
            
            if (*(eax_27 + (esi_4 << 2) + 4) == 0)
                uint32_t eax_29 = sub_64e7a0(ecx_23)
                sub_665db0(eax_29, &data_8dbd70, eax_29, 0x3f800000, 0xffffffff, 0)
        
        eax_15 = data_cc8dc0
        
        if (eax_15 == 0)
            goto label_4d46ab
        
        void** esi_5 = &data_cadf54
        
        if (*(eax_15 + 0xc) == 0)
            esi_5 = &data_cadf60
        
        uint32_t eax_30 = sub_64e7a0(*i)
        sub_665db0(eax_30, esi_5, eax_30, 0x3f800000, 0xffffffff, 0)
        eax_15 = data_cc8d5c
        
        if (eax_15 == 0)
            var_a0_9 = "GetClient"
            var_a4_3 = 0x7b
            var_a8_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
            ecx_41 = "gClient"
            goto label_4d46c4
        
        if (*(eax_15 + 0x75ac) != 0)
            uint32_t eax_31 = sub_64e7a0(*i)
            sub_665db0(eax_31, &data_8dbd58, eax_31, 0x3f800000, 0xffffffff, 0)
        
        data_147abe0 = 0
        int32_t performanceCount_1
        var_30(&performanceCount_1)
        eax_15 = *(sub_4d3b00(i[-1]) + 8)
        
        if (eax_15 == 0)
            var_a0_9 = "GetDlgUpdate"
            var_a4_3 = 0x2e45
            var_a8_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
            ecx_41 = "def.updateFn"
            goto label_4d46c4
        
        eax_15(*i, eax_2)
        int32_t performanceCount_2
        var_30(&performanceCount_2)
        int32_t performanceCount_3 = performanceCount_2
        int32_t var_44
        int32_t var_3c
        sub_63c000(performanceCount_3 - performanceCount_1, 
            sbb.d(var_3c, var_44, performanceCount_3 u< performanceCount_1))
        sub_65d6e0(*i_1, arg1)
        int32_t performanceCount
        var_30(&performanceCount)
        int32_t performanceCount_4 = performanceCount
        int32_t var_4c
        sub_63c000(performanceCount_4 - performanceCount_1, 
            sbb.d(var_4c, var_44, performanceCount_4 u< performanceCount_1))
        i = i_1
        int32_t ecx_35 = *i
        
        if (ecx_35 != 0)
            uint32_t eax_38 = zx.d(ecx_35.w)
            
            if (eax_38 u< data_c23bac && *(eax_38 * 0x18d0 + data_c23ba8 + 0x18c8) == ecx_35)
                uint32_t ecx_36 = sub_64e7a0(ecx_35)
                float xmm0_4 = *(ecx_36 + 0x1680)
                xmm0_4 - 0f
                uint32_t eax_41
                eax_41:1.b = (xmm0_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2
                    | (xmm0_4 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    eax_15 = *(ecx_36 + 0x189c)
                    
                    if (eax_15 s< 0)
                        var_a0_9 = "UI2::countChildren"
                        var_a4_3 = 0xba8
                        var_a8_2 = "C:\x\ax2017\Engine\UI2.cpp"
                        ecx_41 = "numChildren >= 0"
                        goto label_4d46c4
                    
                    if (eax_15 == 1)
                        sub_64e7a0(sub_64c870(ecx_36, nullptr))
    
    if (var_21_1 != 0)
        sub_67cf00(*i)
    
    i = &i[0xa]
    i_1 = i
while (i s< &data_8db758)

int32_t result = data_8db6b8

if (result != 0)
    data_c23be8 = result
else
    result = data_8db668
    data_c23be8 = result
    
    if (result == 0)
        result = data_8db5c8
        data_c23be8 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
