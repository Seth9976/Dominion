// 函数: sub_63ee40
// 地址: 0x63ee40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi
int32_t var_3c = esi
int32_t edi
int32_t var_40 = edi
BOOL (__stdcall* const var_34)(int64_t* lpPerformanceCount) = QueryPerformanceCounter
int32_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
sub_63b5f0("AppInitialize")
void* eax = data_cf65b8

if (eax != 0 && GetFileAttributesA(*(eax + 4)) != 0xffffffff)
    data_8c4157 = 0

sub_6c9590()
char* eax_2 = sub_63c090()
sub_69db50(eax_2)
char* var_44_2 = eax_2
sub_63b5d0(&data_cf64b0, 0x104, "%slog.txt")
GetFullPathNameA(&data_cf64b0, 0x104, &data_cf64b0, nullptr)
SymInitialize(GetCurrentProcess(), nullptr, 1)
SymSetOptions(0x10)
SetUnhandledExceptionFilter(sub_63b3f0)
int32_t eax_4 = sub_64bef0()
char const* const var_4c_1
int32_t var_48_1
char const* const var_44_3
char* ecx_1

if (data_cf65b4 == 0)
    int32_t* eax_5 = sub_64bfd0(0x30)
    eax_5[3] += 1
    
    if (*eax_5 == 0)
        sub_64be70(eax_5)
    
    int32_t* esi_2 = *eax_5
    *eax_5 = *esi_2
    memset(esi_2, 0, 0x30)
    data_cf65b4 = esi_2
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t* edx_1 = data_cf65b4
    *edx_1 = performanceCount
    int32_t var_2c
    edx_1[1] = var_2c
    edx_1[2] = performanceCount
    void* eax_9 = data_cf65b8
    edx_1[3] = var_2c
    edx_1[4] = 0
    int32_t xmm0_1
    
    if (*(eax_9 + 0x28) == 0)
        xmm0_1 = 0x3c23d70a
    else
        xmm0_1 = 0x3c5a740e
    
    data_8c422c = xmm0_1
    data_147d1a0.o = data_8912f0
    sub_6cc110()
    int32_t* ecx_5 = data_147b070
    
    if (ecx_5 != 0)
        (**ecx_5)()
    
    int32_t* eax_11 = sub_64bfd0(0x74)
    eax_11[3] += 1
    
    if (*eax_11 == 0)
        sub_64be70(eax_11)
    
    int32_t* esi_3 = *eax_11
    *eax_11 = *esi_3
    memset(esi_3, 0, 0x74)
    bool cond:0_1 = data_147abec == 0
    data_147ac30 = esi_3
    
    if (cond:0_1)
        goto label_63f0c9
    
    int32_t* eax_13 = sub_64bfd0(0x28)
    eax_13[3] += 1
    
    if (*eax_13 == 0)
        sub_64be70(eax_13)
    
    int32_t* esi_4 = *eax_13
    *eax_13 = *esi_4
    esi_4[7] = 0
    esi_4[8] = 0
    esi_4[9] = 0
    __builtin_memset(esi_4, 0, 0x14)
    esi_4[5] = 1
    esi_4[6] = 0
    data_147abf0 = esi_4
    eax_4 = _aligned_malloc(0x6400, 0x10)
    
    if (eax_4 != 0)
        int32_t* ecx_8 = data_147abec
        *esi_4 = eax_4
        esi_4[2] = 0x100
        esi_4[6] = "SoundInstances"
        esi_4[5] = 0xd2b4
        void* eax_15 = data_147abf0
        *(eax_15 + 0x1c) = 0x3f59999a
        *(eax_15 + 0x20) = 0x3f59999a
        *(eax_15 + 0x24) = 0x3f800000
        (*(*ecx_8 + 4))()
    label_63f0c9:
        sub_6a2dc0()
        sub_6b7d40()
        int32_t i = 0
        
        if (data_147d2e4 s> 0)
            do
                sub_6e1610(*((i << 2) + &data_147d2e8))
                i += 1
            while (i s< data_147d2e4)
        
        void* eax_17 = sub_687730(0x20)
        data_147ac64 = eax_17
        __builtin_memset(eax_17, 0, 0x20)
        *(eax_17 + 0x18) = 0x400
        *(eax_17 + 0x1c) = 0
        int32_t* eax_18 = sub_687730(0x5004)
        *eax_18 = *(eax_17 + 0x14)
        int32_t i_1 = 0
        void* edx_2 = *(eax_17 + 0x10)
        *(eax_17 + 0x14) = eax_18
        
        if (*(eax_17 + 0x18) s> 0)
            void* eax_19 = &eax_18[1]
            
            do
                *eax_19 = edx_2
                i_1 += 1
                edx_2 = eax_19
                eax_19 += 0x14
            while (i_1 s< *(eax_17 + 0x18))
        
        *(eax_17 + 0x10) = edx_2
        int32_t* esi_6 = data_147ac64
        *esi_6 = 0
        esi_6[1] = 0
        esi_6[2] = 0x400
        esi_6[3] = 0
        int32_t* eax_20 = sub_687730(0x6004)
        *eax_20 = esi_6[1]
        int32_t i_2 = 0
        void* edx_3 = *esi_6
        esi_6[1] = eax_20
        
        if (esi_6[2] s> 0)
            void* eax_21 = &eax_20[1]
            
            do
                *eax_21 = edx_3
                i_2 += 1
                edx_3 = eax_21
                eax_21 += 0x18
            while (i_2 s< esi_6[2])
        
        *esi_6 = edx_3
        sub_69eb30()
        int32_t* eax_22 = sub_64bfd0(4)
        eax_22[3] += 1
        
        if (*eax_22 == 0)
            sub_64be70(eax_22)
        
        bool cond:1 = data_8c4157 != 0
        char** ecx_13 = *eax_22
        data_147d094 = ecx_13
        *eax_22 = *ecx_13
        *ecx_13 = &data_801800
        
        if (not(cond:1) && data_cc8dde == 0)
            bool cond:2_1 = sub_696ac0(*(data_cf65b8 + 4)) != 0
            int32_t var_44_5 = *(data_cf65b8 + 4)
            char const* const var_48_2
            
            if (cond:2_1)
                var_48_2 = "Loaded xpack file: '%s'"
            else
                var_48_2 = "Can't load xpack file: '%s'"
            
            sub_63b7f0(var_48_2)
        
        int32_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
        int32_t var_24
        uint32_t eax_28 = sub_63c000(var_24 - var_2c, 
            sbb.d(performanceCount_2, performanceCount_1, var_24 u< var_2c))
        uint32_t var_34_1 = eax_28
        char const* const var_50
        int32_t var_4c_5
        char const* const var_48_4
        char* ecx_19
        
        if (*(data_cf65b8 + 0x28) != 0)
            eax_28 = data_147d2c4
            
            if (eax_28 == 1)
                int32_t* ecx_20 = data_147d1b0
                
                if (ecx_20 == 0)
                    data_147d2c4 = 0
                else if ((*(*ecx_20 + 0xc))() == 0)
                    (*(*data_147d1b0 + 8))()
                    int32_t* ecx_23 = data_147d1b0
                    
                    if (ecx_23 != 0)
                        (**ecx_23)(0)
                        int32_t eax_38 = data_147d1b0
                        
                        if (eax_38 != 0)
                            _aligned_free(eax_38)
                    
                    data_147d1b0 = 0
                    
                    if ((*(*nullptr + 0xc))() == 0)
                        (*(*data_147d1b0 + 8))()
                        int32_t* ecx_26 = data_147d1b0
                        
                        if (ecx_26 != 0)
                            (**ecx_26)(0)
                            int32_t eax_44 = data_147d1b0
                            
                            if (eax_44 != 0)
                                _aligned_free(eax_44)
                        
                        bool cond:3_1 = data_147d2c4 != 1
                        data_147d1b0 = 0
                        
                        if (not(cond:3_1))
                            data_147d2c4 = 0
                    else
                        data_147d2c4 = 5
                else
                    data_147d2c4 = 3
                
                goto label_63f2a9
            
            if (eax_28 == 3 || eax_28 == 5)
            label_63f2a9:
                data_147d21c = data_893400
                data_147d22c = 0
                int128_t xmm0_4 = data_800248
                data_147d230 = 0
                __builtin_memcpy(&data_147d234, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x"
                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                    0x20)
                data_147d2b4 = xmm0_4
            label_63f2e5:
                int32_t performanceCount_3
                QueryPerformanceCounter(&performanceCount_3)
                int32_t performanceCount_4 = performanceCount_3
                int32_t var_18
                uint32_t var_50_1 = sub_63c000(performanceCount_4 - var_2c, 
                    sbb.d(var_18, performanceCount_1, performanceCount_4 u< var_2c)) - var_34_1
                sub_63b5f0("VRInitialize time %d ms")
                sub_6ac950()
                data_147d2c8.o = data_8912f0
                eax_28 = sub_6cd210()
                
                if (data_147ac34 == 0)
                    int32_t* eax_45 = sub_64bfd0(0xc)
                    eax_45[3] += 1
                    
                    if (*eax_45 == 0)
                        sub_64be70(eax_45)
                    
                    int32_t* ecx_28 = *eax_45
                    data_147ac34 = ecx_28
                    *eax_45 = *ecx_28
                    *ecx_28 = 0
                    ecx_28[1] = 0
                    ecx_28[2] = 0
                    int32_t* eax_47 = sub_64bfd0(0x2c)
                    eax_47[3] += 1
                    
                    if (*eax_47 == 0)
                        sub_64be70(eax_47)
                    
                    int32_t* ecx_30 = *eax_47
                    *eax_47 = *ecx_30
                    __builtin_memset(&ecx_30[5], 0, 0x18)
                    __builtin_memset(ecx_30, 0, 0x2c)
                    data_147ac28 = ecx_30
                    *(data_147ac28 + 0xc) = CreateSemaphoreA(nullptr, 1, 1, nullptr)
                    eax_28 = sub_689500()
                    
                    if (data_caf244 == 0)
                        eax_28 = _aligned_malloc(0x760000, 0x10)
                        
                        if (eax_28 != 0)
                            data_caf244 = eax_28
                            data_caf24c = 0x4000
                            int32_t eax_50 = 0xd158
                            data_caf25c = "ui elements"
                            bool cond:4 = data_caf260 == 0
                            data_caf258 = 0xd158
                            char const* const var_50_2
                            int32_t var_4c_7
                            char const* const var_48_9
                            char* ecx_32
                            
                            if (cond:4)
                                eax_50 = _aligned_malloc(0x10e000, 0x10)
                                
                                if (eax_50 != 0)
                                    data_caf260 = eax_50
                                    data_caf268 = 0x400
                                    int32_t eax_51 = 0xd178
                                    data_caf278 = "ui states"
                                    bool cond:5 = data_c23ba8 == 0
                                    data_caf274 = 0xd178
                                    char const* const var_50_3
                                    int32_t var_4c_8
                                    char const* const var_48_10
                                    char* ecx_33
                                    
                                    if (cond:5)
                                        eax_51 = _aligned_malloc(0xc680000, 0x10)
                                        
                                        if (eax_51 != 0)
                                            data_c23ba8 = eax_51
                                            data_c23bb0 = 0x8000
                                            int32_t eax_52 = 0xd6e0
                                            data_c23bc0 = "ui2 elements"
                                            bool cond:6 = data_c23bc4 == 0
                                            data_c23bbc = 0xd6e0
                                            char const* const var_50_4
                                            int32_t var_4c_9
                                            char const* const var_48_11
                                            char* ecx_34
                                            
                                            if (cond:6)
                                                eax_52 = _aligned_malloc(0x124000, 0x10)
                                                
                                                if (eax_52 != 0)
                                                    data_c23bc4 = eax_52
                                                    data_c23bcc = 0x800
                                                    int32_t eax_53 = 0xd704
                                                    data_c23bdc = "ui2 expressions"
                                                    bool cond:7 = data_ccf6e4 == 0
                                                    data_c23bd8 = 0xd704
                                                    
                                                    if (not(cond:7))
                                                        char const* const var_50_5
                                                        int32_t var_4c_10
                                                        char const* const var_48_12
                                                        char* ecx_35
                                                        
                                                        if (data_cafe6c != 0)
                                                            var_48_12 = "DataArray<struct "
                                                            "FabState>::DataArrayInitialize"
                                                            var_4c_10 = 0xce
                                                            var_50_5 =
                                                                "C:\x\ax2017\Engine\DataArray.h"
                                                            ecx_35 = "mpBlock == NULL"
                                                        label_63f892:
                                                            sub_63b870(eax_53, &data_801800, 
                                                                ecx_35, var_50_5, var_4c_10, var_48_12)
                                                            
                                                            if (sub_63bc30() != 0)
                                                                breakpoint
                                                            
                                                            sub_63bb00()
                                                            noreturn
                                                        
                                                        eax_53 = _aligned_malloc(0x1340000, 0x10)
                                                        
                                                        if (eax_53 == 0)
                                                            var_48_12 = "XMalloc"
                                                            var_4c_10 = 0x57
                                                            var_50_5 =
                                                                "C:\x\ax2017\Engine\xMemory.cpp"
                                                            ecx_35 = "pBuffer"
                                                            goto label_63f892
                                                        
                                                        data_cafe6c = eax_53
                                                        data_cafe74 = 0x4000
                                                        data_cafe84 = &data_801800
                                                        data_cafe80 = 0xd800
                                                    
                                                    int32_t* eax_54 = sub_64bfd0(0x9044)
                                                    eax_54[3] += 1
                                                    int32_t* edi_4
                                                    
                                                    if (eax_54[4] != 0xffffffff)
                                                        if (*eax_54 == 0)
                                                            sub_64be70(eax_54)
                                                        
                                                        edi_4 = *eax_54
                                                        *eax_54 = *edi_4
                                                    else
                                                        edi_4 = sub_687730(0x9044)
                                                    
                                                    memset(edi_4, 0, 0x9044)
                                                    edi_4[0x240a] = &data_801800
                                                    data_147ac20 = edi_4
                                                    InitializeCriticalSectionAndSpinCount(
                                                        &edi_4[0x240b], 0x400)
                                                    void** ecx_37 = data_cf65b8
                                                    
                                                    if (ecx_37 == 0)
                                                        ecx_37 = &data_bf21ac
                                                        data_cf65b8 = &data_bf21ac
                                                    
                                                    (**ecx_37)()
                                                    int32_t var_14
                                                    int32_t entry_ebx
                                                    entry_ebx(&var_14)
                                                    uint32_t var_54 = sub_63c000(
                                                        var_18 - performanceCount, 
                                                        sbb.d(var_14, var_2c, 
                                                            var_18 u< performanceCount))
                                                    return sub_63b5f0("AppInitialize time %d ms")
                                                
                                                var_48_11 = "XMalloc"
                                                var_4c_9 = 0x57
                                                var_50_4 = "C:\x\ax2017\Engine\xMemory.cpp"
                                                ecx_34 = "pBuffer"
                                            else
                                                var_48_11 = "DataArray<struct UI2ExprTreeRT>::DataArrayInitialize"
                                                var_4c_9 = 0xce
                                                var_50_4 = "C:\x\ax2017\Engine\DataArray.h"
                                                ecx_34 = "mpBlock == NULL"
                                            
                                            sub_63b870(eax_52, &data_801800, ecx_34, var_50_4, 
                                                var_4c_9, var_48_11)
                                            
                                            if (sub_63bc30() != 0)
                                                breakpoint
                                            
                                            sub_63bb00()
                                            noreturn
                                        
                                        var_48_10 = "XMalloc"
                                        var_4c_8 = 0x57
                                        var_50_3 = "C:\x\ax2017\Engine\xMemory.cpp"
                                        ecx_33 = "pBuffer"
                                    else
                                        var_48_10 = "DataArray<struct UI2>::DataArrayInitialize"
                                        var_4c_8 = 0xce
                                        var_50_3 = "C:\x\ax2017\Engine\DataArray.h"
                                        ecx_33 = "mpBlock == NULL"
                                    
                                    sub_63b870(eax_51, &data_801800, ecx_33, var_50_3, var_4c_8, 
                                        var_48_10)
                                    
                                    if (sub_63bc30() != 0)
                                        breakpoint
                                    
                                    sub_63bb00()
                                    noreturn
                                
                                var_48_9 = "XMalloc"
                                var_4c_7 = 0x57
                                var_50_2 = "C:\x\ax2017\Engine\xMemory.cpp"
                                ecx_32 = "pBuffer"
                            else
                                var_48_9 = "DataArray<struct UIState>::DataArrayInitialize"
                                var_4c_7 = 0xce
                                var_50_2 = "C:\x\ax2017\Engine\DataArray.h"
                                ecx_32 = "mpBlock == NULL"
                            
                            sub_63b870(eax_50, &data_801800, ecx_32, var_50_2, var_4c_7, var_48_9)
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        var_48_4 = "XMalloc"
                        var_4c_5 = 0x57
                        var_50 = "C:\x\ax2017\Engine\xMemory.cpp"
                        ecx_19 = "pBuffer"
                    else
                        var_48_4 = "DataArray<struct UIStateElement>::DataArrayInitialize"
                        var_4c_5 = 0xce
                        var_50 = "C:\x\ax2017\Engine\DataArray.h"
                        ecx_19 = "mpBlock == NULL"
                else
                    var_48_4 = "AssetUtilInitForApp"
                    var_4c_5 = 0x28
                    var_50 = "C:\x\ax2017\Engine\AssetUtils.cpp"
                    ecx_19 = "!gpAssetUtilData"
            else
                var_48_4 = "VRInitForApp"
                var_4c_5 = 0x68
                var_50 = "C:\x\ax2017\Engine\VR.cpp"
                ecx_19 = "Halt"
        else
            if (data_147d2c4 == 0)
                goto label_63f2e5
            
            var_48_4 = "VRInitForApp"
            var_4c_5 = 0x1e
            var_50 = "C:\x\ax2017\Engine\VR.cpp"
            ecx_19 = "gGlobalVRAppType == VRAPP_NONE"
        
        sub_63b870(eax_28, &data_801800, ecx_19, var_50, var_4c_5, var_48_4)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    var_44_3 = "XMalloc"
    var_48_1 = 0x57
    var_4c_1 = "C:\x\ax2017\Engine\xMemory.cpp"
    ecx_1 = "pBuffer"
else
    var_44_3 = "AppInitialize"
    var_48_1 = 0x56
    var_4c_1 = "C:\x\ax2017\Engine\AppController.cpp"
    ecx_1 = "gpAppData == NULL"

sub_63b870(eax_4, &data_801800, ecx_1, var_4c_1, var_48_1, var_44_3)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
