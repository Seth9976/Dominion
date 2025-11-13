// 函数: sub_4b8210
// 地址: 0x4b8210
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t eax_2 = sub_63b7f0("GameClientInit")
void* esi = data_cc8d5c
char const* const var_484
int32_t var_480_1
char const* const var_47c
char* ecx

if (esi == 0)
    var_47c = "GetClient"
    var_480_1 = 0x7b
    var_484 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"
else if (*(esi + 0x7570) == 0)
    eax_2 = sub_64c020(0x400)
    *(esi + 0x7570) = eax_2
    *(esi + 0x7574) = 0xff
    
    if (*(esi + 0x507c) == 0)
        eax_2 = _aligned_malloc(0x73200, 0x10)
        
        if (eax_2 != 0)
            *(esi + 0x507c) = eax_2
            *(esi + 0x5084) = 0x60
            int32_t eax_3 = 0xd3b4
            *(esi + 0x5094) = "networkGames"
            *(esi + 0x5090) = 0xd3b4
            char const* const var_484_1
            int32_t var_480_2
            char const* const var_47c_1
            char* ecx_1
            
            if (*(esi + 0x7754) == 0)
                eax_3 = _aligned_malloc(0xc0, 0x10)
                
                if (eax_3 != 0)
                    *(esi + 0x7754) = eax_3
                    *(esi + 0x775c) = 0x10
                    int32_t* eax_4 = 0xd3c4
                    *(esi + 0x776c) = "serverNotifications"
                    *(esi + 0x7768) = 0xd3c4
                    char const* const var_484_2
                    int32_t var_480_3
                    char const* const var_47c_2
                    char* ecx_2
                    
                    if (*(esi + 0x75b8) == 0)
                        eax_4 = sub_64c020(0x1000)
                        *(esi + 0x75b8) = eax_4
                        *(esi + 0x75bc) = 0x3ff
                        
                        if (*(esi + 0x75c4) == 0)
                            *(esi + 0x75c4) = sub_64c020(0x1000)
                            *(esi + 0x75c8) = 0x3ff
                            *(esi + 0x5030) = 0xffffffff
                            *(esi + 0x5034) = 0xffffffff
                            *(esi + 0x5038) = 0xffffffff
                            *(esi + 0x503c) = 0xffffffff
                            eax_4 = data_cc8dc0
                            
                            if (eax_4 != 0)
                                float xmm4_1 = eax_4[1]
                                int32_t xmm0_1 = (zx.o(0)).d
                                float xmm3_1 = *eax_4
                                int32_t xmm1_1
                                
                                if (0f <= xmm4_1)
                                    xmm1_1 = _mm_min_ss(0x3f800000, xmm4_1)
                                else
                                    xmm1_1 = (zx.o(0)).d
                                
                                void* eax_6 = data_147abf0
                                *(eax_6 + 0x1c) = xmm1_1
                                
                                if (not(0f > xmm3_1))
                                    xmm0_1 = _mm_min_ss(0x3f800000, xmm3_1)
                                
                                *(eax_6 + 0x20) = xmm0_1
                                void* eax_7
                                int32_t ecx_5
                                eax_7, ecx_5 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                                
                                if (*(eax_7 + 0x42b4) != 1)
                                    *(eax_7 + 0x42b4) = 0
                                    ecx_5 = sub_4aea20()
                                
                                int32_t var_47c_3 = ecx_5
                                sub_68b970()
                                uint32_t eax_8 = sub_4c89a0()
                                void* esi_3 = (data_19e2780 << 5) + 0x19e3cc0
                                *(data_147abfc + 0x1f8) = eax_8
                                void* performanceCount
                                int32_t i_6 = sub_571bc0(3, &performanceCount)
                                
                                if (i_6 s> 0)
                                    void* performanceCount_4 = performanceCount
                                    int32_t i_3 = i_6
                                    int32_t i
                                    
                                    do
                                        performanceCount_4 += 0x44
                                        esi_3 += 0x20
                                        *(esi_3 - 0x20) = *(performanceCount_4 - 0x44)
                                        *(esi_3 - 0x10) = *(performanceCount_4 - 0x34)
                                        i = i_3
                                        i_3 -= 1
                                    while (i != 1)
                                
                                int32_t esi_5 = data_19e2780 + i_6
                                data_19e2780 = esi_5
                                void* esi_7 = (esi_5 << 5) + 0x19e3cc0
                                int32_t i_7 = sub_571bc0(0, &performanceCount)
                                
                                if (i_7 s> 0)
                                    void* performanceCount_5 = performanceCount
                                    int32_t i_4 = i_7
                                    int32_t i_1
                                    
                                    do
                                        performanceCount_5 += 0x44
                                        esi_7 += 0x20
                                        *(esi_7 - 0x20) = *(performanceCount_5 - 0x44)
                                        *(esi_7 - 0x10) = *(performanceCount_5 - 0x34)
                                        i_1 = i_4
                                        i_4 -= 1
                                    while (i_1 != 1)
                                
                                int32_t esi_9 = data_19e2780 + i_7
                                data_19e2780 = esi_9
                                void* esi_11 = (esi_9 << 5) + 0x19e3cc0
                                int32_t i_8 = sub_571bc0(2, &performanceCount)
                                
                                if (i_8 s> 0)
                                    void* performanceCount_6 = performanceCount
                                    int32_t i_5 = i_8
                                    int32_t i_2
                                    
                                    do
                                        performanceCount_6 += 0x44
                                        esi_11 += 0x20
                                        *(esi_11 - 0x20) = *(performanceCount_6 - 0x44)
                                        *(esi_11 - 0x10) = *(performanceCount_6 - 0x34)
                                        i_2 = i_5
                                        i_5 -= 1
                                    while (i_2 != 1)
                                
                                int32_t esi_13 = data_19e2780 + i_8
                                data_19e2780 = esi_13
                                sub_63b7f0("GameGameCenterInitClient")
                                eax_4 = sub_63b7f0("GameCenterConnect")
                                
                                if (data_bf23b8 == 0)
                                    InitializeCriticalSectionAndSpinCount(&data_bf23e8, 0x400)
                                    data_bf23bc = esi_13
                                    data_bf23b8 = 1
                                    data_bf23c0 = 0x19e3cc0
                                    int32_t performanceCount_1
                                    QueryPerformanceCounter(&performanceCount_1)
                                    void var_458
                                    
                                    if (SteamInternal_SteamAPI_Init("SteamUtils010", &var_458) == 0)
                                        QueryPerformanceCounter(&performanceCount)
                                        void* performanceCount_7 = performanceCount
                                        int32_t var_464
                                        int32_t var_45c
                                        uint32_t performanceCount_3 = sub_63c000(
                                            performanceCount_7 - performanceCount_1, 
                                            sbb.d(var_464, var_45c, 
                                                performanceCount_7 u< performanceCount_1))
                                        TEB* fsbase
                                        void* ThreadLocalStoragePointer =
                                            fsbase->ThreadLocalStoragePointer
                                        performanceCount = performanceCount_3
                                        
                                        if (data_1a98fa0 s> *(*ThreadLocalStoragePointer + 8))
                                            sub_75970e(&data_1a98fa0)
                                            
                                            if (data_1a98fa0 == 0xffffffff)
                                                data_1a98fac = 0
                                                data_1a98fa8 = &data_87362c
                                                data_1a98fb8.q = 0
                                                data_1a98fc0 = 0
                                                data_1a98fc4 = 0
                                                data_1a98fb0 = 0x9a
                                                _atexit(sub_774070)
                                                __Init_thread_footer(&data_1a98fa0)
                                        
                                        int32_t eax_15
                                        int32_t edx_5
                                        eax_15, edx_5 = (
                                            *(**SteamInternal_ContextInit(&data_cb4530) + 0x54))(0, 0)
                                        int32_t eax_16 = data_1a98fb8
                                        int32_t edx_6 = data_1a98fbc
                                        
                                        if ((eax_16 | edx_6) != 0)
                                            SteamAPI_UnregisterCallResult(&data_1a98fa8, eax_16, 
                                                edx_6)
                                        
                                        data_1a98fb8 = eax_15
                                        data_1a98fbc = edx_5
                                        data_1a98fc0 = &data_1a98fa8
                                        data_1a98fc4 = sub_64b790
                                        
                                        if ((eax_15 | edx_5) != 0)
                                            SteamAPI_RegisterCallResult(&data_1a98fa8, eax_15, 
                                                edx_5)
                                        
                                        void* performanceCount_2 = performanceCount
                                        sub_63b7f0("SteamAPI_Init success. (%d ms)")
                                        sub_63b5f0("Gamecenter Connect success")
                                    else
                                        void* var_47c_6 = &var_458
                                        sub_63b7f0("SteamAPI_Init failed %s")
                                        sub_63b5f0("Gamecenter Connect fail")
                                        data_bf23b8 = 0
                                    
                                    sub_63b5f0("GameCenterQueryDLC")
                                    
                                    if (data_bf23b8 == 1)
                                        sub_64b880()
                                    
                                    sub_63b7f0("Gamecenter complete")
                                    eax_4 = data_171e970
                                    bool cond:3_1 = data_8db51c == 0
                                    data_c23bf0 = eax_4
                                    data_8db598 = 2
                                    data_8db660 = 1
                                    data_8db728 = 0x1d
                                    
                                    if (cond:3_1)
                                        eax_4 = _aligned_malloc(0x3010, 0x10)
                                        
                                        if (eax_4 != 0)
                                            int32_t ecx_12 = data_171efc0
                                            data_8db51c = eax_4
                                            data_8db524 = 4
                                            data_8db534 = "cardsets"
                                            data_8db530 = 0xd858
                                            void* eax_21 = data_147b06c
                                            *(eax_21 + 0x2dc) = ecx_12
                                            char const* const var_484_3
                                            int32_t var_480_7
                                            char const* const var_47c_11
                                            char* ecx_13
                                            
                                            if (data_b809e0 == 0)
                                                eax_21 = _aligned_malloc(0x70c000, 0x10)
                                                
                                                if (eax_21 != 0)
                                                    int32_t* ecx_14 = data_171e790
                                                    data_b809e0 = eax_21
                                                    data_b809e8 = 0x400
                                                    data_b809f8 = &data_871964
                                                    data_b809f4 = 0xd964
                                                    int32_t eax_22 = sub_68c150(ecx_14)
                                                    
                                                    if (data_be3598 != 0)
                                                        sub_63b870(eax_22, &data_801800, 
                                                            "mNodeBuckets == NULL", 
                                                            "C:\x\ax2017\Engine\xMap.h", 0x74, 
                                                            "XMap<enum DomCardEnum,struct "
                                                        "DomCardTranslation>::SetNumBuckets")
                                                        
                                                        if (sub_63bc30() != 0)
                                                            breakpoint
                                                        
                                                        sub_63bb00()
                                                        noreturn
                                                    
                                                    int32_t* eax_23
                                                    int32_t ecx_15
                                                    eax_23, ecx_15 = sub_64c020(0x1000)
                                                    data_be3598 = eax_23
                                                    data_be359c = 0x3ff
                                                    data_be1538 = sub_4acc60()
                                                    data_be153c = sub_4acc60()
                                                    int32_t var_47c_12 = ecx_15
                                                    data_c23bf4 = &data_be6918
                                                    __builtin_memcpy(&data_be15bc, 
                                                        sub_618010(&var_458), 0x448)
                                                    int32_t ecx_16 = data_171d908
                                                    data_8db6d8 = 0x7e8
                                                    sub_4b80c0(ecx_16)
                                                    data_ccea08 = sub_62bc20
                                                    data_ccea0c = sub_62b920
                                                    data_ccea10 = sub_62bb70
                                                    sub_5a36d0()
                                                    CookieCheckFunction(0xd1b8)
                                                    return 0xd1b8
                                                
                                                var_47c_11 = "XMalloc"
                                                var_480_7 = 0x57
                                                var_484_3 = "C:\x\ax2017\Engine\xMemory.cpp"
                                                ecx_13 = "pBuffer"
                                            else
                                                var_47c_11 =
                                                    "DataArray<struct DomGfx>::DataArrayInitialize"
                                                var_480_7 = 0xce
                                                var_484_3 = "C:\x\ax2017\Engine\DataArray.h"
                                                ecx_13 = "mpBlock == NULL"
                                            
                                            sub_63b870(eax_21, &data_801800, ecx_13, var_484_3, 
                                                var_480_7, var_47c_11)
                                            
                                            if (sub_63bc30() != 0)
                                                breakpoint
                                            
                                            sub_63bb00()
                                            noreturn
                                        
                                        var_47c_2 = "XMalloc"
                                        var_480_3 = 0x57
                                        var_484_2 = "C:\x\ax2017\Engine\xMemory.cpp"
                                        ecx_2 = "pBuffer"
                                    else
                                        var_47c_2 = "DataArray<struct Cardset>::DataArrayInitialize"
                                        var_480_3 = 0xce
                                        var_484_2 = "C:\x\ax2017\Engine\DataArray.h"
                                        ecx_2 = "mpBlock == NULL"
                                else
                                    var_47c_2 = "GameCenterConnect"
                                    var_480_3 = 0x2f6
                                    var_484_2 = "C:\x\ax2017\Engine\GameCenter.cpp"
                                    ecx_2 = "gGameCenter.type == GAME_CENTER_NONE"
                            else
                                var_47c_2 = "GetLocalSettings"
                                var_480_3 = 0x5fb
                                var_484_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                                ecx_2 = "gGameSettings.localSettings"
                        else
                            var_47c_2 =
                                "XMap<struct Date,struct WeeklyCampaignClientData>::SetNumBuckets"
                            var_480_3 = 0x74
                            var_484_2 = "C:\x\ax2017\Engine\xMap.h"
                            ecx_2 = "mNodeBuckets == NULL"
                    else
                        var_47c_2 = "XMap<struct Date,struct DailyClientData>::SetNumBuckets"
                        var_480_3 = 0x74
                        var_484_2 = "C:\x\ax2017\Engine\xMap.h"
                        ecx_2 = "mNodeBuckets == NULL"
                    
                    sub_63b870(eax_4, &data_801800, ecx_2, var_484_2, var_480_3, var_47c_2)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                var_47c_1 = "XMalloc"
                var_480_2 = 0x57
                var_484_1 = "C:\x\ax2017\Engine\xMemory.cpp"
                ecx_1 = "pBuffer"
            else
                var_47c_1 = "DataArray<struct ServerNotification>::DataArrayInitialize"
                var_480_2 = 0xce
                var_484_1 = "C:\x\ax2017\Engine\DataArray.h"
                ecx_1 = "mpBlock == NULL"
            
            sub_63b870(eax_3, &data_801800, ecx_1, var_484_1, var_480_2, var_47c_1)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        var_47c = "XMalloc"
        var_480_1 = 0x57
        var_484 = "C:\x\ax2017\Engine\xMemory.cpp"
        ecx = "pBuffer"
    else
        var_47c = "DataArray<struct GameSave>::DataArrayInitialize"
        var_480_1 = 0xce
        var_484 = "C:\x\ax2017\Engine\DataArray.h"
        ecx = "mpBlock == NULL"
else
    var_47c = "XMap<enum AccountID,struct PresenceInfo>::SetNumBuckets"
    var_480_1 = 0x74
    var_484 = "C:\x\ax2017\Engine\xMap.h"
    ecx = "mNodeBuckets == NULL"

sub_63b870(eax_2, &data_801800, ecx, var_484, var_480_1, var_47c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
