// 函数: sub_6877a0
// 地址: 0x6877a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
char const* const var_20
int32_t var_1c
char const* const var_18
int32_t* eax
char* ecx_1

if (data_147abe8 == 0)
    int32_t* eax_1 = sub_64bfd0(0x38)
    eax_1[3] += 1
    
    if (*eax_1 == 0)
        sub_64be70(eax_1)
    
    int32_t* edi_1 = *eax_1
    *eax_1 = *edi_1
    memset(edi_1, 0, 0x38)
    data_147abe8 = edi_1
    edi_1[0xd] = 0x3b83126f
    int32_t* eax_3 = sub_64bfd0(0x20)
    eax_3[3] += 1
    
    if (*eax_3 == 0)
        sub_64be70(eax_3)
    
    int32_t* ecx_4 = *eax_3
    eax = *ecx_4
    *eax_3 = eax
    void* esi_3 = data_147abe8
    __builtin_memset(ecx_4, 0, 0x20)
    edi_1[1] = ecx_4
    int32_t** ebx_1
    
    if (esi_3 != 0)
        int32_t* esi_4 = *(esi_3 + 4)
        *esi_4 = 0
        esi_4[1] = 0
        esi_4[2] = 0x40
        esi_4[3] = 0
        int32_t* eax_4 = sub_687730(0x2d04)
        *eax_4 = esi_4[1]
        int32_t i = 0
        void* edx_1 = *esi_4
        esi_4[1] = eax_4
        
        if (esi_4[2] s> 0)
            void* eax_5 = &eax_4[1]
            
            do
                *eax_5 = edx_1
                i += 1
                edx_1 = eax_5
                eax_5 += 0xb4
            while (i s< esi_4[2])
        
        *esi_4 = edx_1
        esi_4[4] = 0
        esi_4[5] = 0
        esi_4[6] = 0x40
        esi_4[7] = 0
        eax = sub_687730(0xc504)
        *eax = esi_4[5]
        int32_t i_1 = 0
        int32_t* edx_2 = esi_4[4]
        esi_4[5] = eax
        
        if (esi_4[6] s> 0)
            eax = &eax[1]
            
            do
                *eax = edx_2
                i_1 += 1
                edx_2 = eax
                eax = &eax[0xc5]
            while (i_1 s< esi_4[6])
        
        ebx_1 = data_147abe8
        esi_4[4] = edx_2
    
    if (esi_3 == 0 || ebx_1 == 0)
        var_18 = "GetGameData"
        var_1c = 0x45
        var_20 = "C:\x\ax2017\Engine\Game.h"
        ecx_1 = "gpGameData"
    else
        int32_t** eax_6 = sub_64bfd0(0x1c)
        eax_6[3] += 1
        
        if (*eax_6 == 0)
            sub_64be70(eax_6)
        
        int32_t* esi_5 = *eax_6
        eax = *esi_5
        *eax_6 = eax
        __builtin_memset(esi_5, 0, 0x14)
        esi_5[5] = 1
        esi_5[6] = 0
        *ebx_1 = esi_5
        
        if (*esi_5 == 0)
            eax = _aligned_malloc(0x1b000, 0x10)
            
            if (eax != 0)
                *esi_5 = eax
                esi_5[2] = 0x400
                esi_5[6] = "Structures"
                esi_5[5] = 0xdfd0
                void* eax_7 = data_147abe8
                char const* const var_20_2
                int32_t var_1c_1
                char const* const var_18_1
                char* ecx_8
                
                if (eax_7 != 0)
                    int32_t* eax_8 = sub_64bfd0(0x1c)
                    eax_8[3] += 1
                    
                    if (*eax_8 == 0)
                        sub_64be70(eax_8)
                    
                    int32_t* esi_6 = *eax_8
                    *eax_8 = *esi_6
                    __builtin_memset(esi_6, 0, 0x14)
                    esi_6[5] = 1
                    esi_6[6] = 0
                    *(eax_7 + 0xc) = esi_6
                    
                    if (*esi_6 == 0)
                        eax_7 = _aligned_malloc(0x25000, 0x10)
                        
                        if (eax_7 != 0)
                            *esi_6 = eax_7
                            esi_6[2] = 0x400
                            int32_t eax_10 = 0xd2f4
                            esi_6[6] = "Flanims"
                            esi_6[5] = 0xd2f4
                            bool cond:1 = data_caf76c == 0
                            data_19e276c = 1
                            char const* const var_20_3
                            int32_t var_1c_2
                            char const* const var_18_2
                            char* ecx_10
                            
                            if (cond:1)
                                eax_10 = _aligned_malloc(0x300, 0x10)
                                
                                if (eax_10 != 0)
                                    data_caf76c = eax_10
                                    data_caf774 = 0x20
                                    data_caf784 = "spines"
                                    data_caf780 = 0xdee0
                                    void* eax_11 = data_147abe8
                                    char const* const var_20_4
                                    int32_t var_1c_3
                                    char const* const var_18_3
                                    char* ecx_11
                                    
                                    if (eax_11 != 0)
                                        int32_t* eax_12 = sub_64bfd0(0x30)
                                        eax_12[3] += 1
                                        
                                        if (*eax_12 == 0)
                                            sub_64be70(eax_12)
                                        
                                        int32_t* esi_7 = *eax_12
                                        *eax_12 = *esi_7
                                        __builtin_memset(esi_7, 0, 0x14)
                                        esi_7[5] = 1
                                        __builtin_memset(&esi_7[6], 0, 0x18)
                                        *(eax_11 + 0x10) = esi_7
                                        
                                        if (*esi_7 == 0)
                                            eax_11 = _aligned_malloc(0x1f000, 0x10)
                                            
                                            if (eax_11 != 0)
                                                *esi_7 = eax_11
                                                esi_7[2] = 0x400
                                                esi_7[6] = "Particles"
                                                esi_7[5] = 0xdb98
                                                int32_t eax_14 = data_147abe8
                                                char const* const var_20_5
                                                int32_t var_1c_4
                                                char const* const var_18_4
                                                char* ecx_13
                                                
                                                if (eax_14 != 0)
                                                    int32_t* eax_15 = sub_64bfd0(0x1c)
                                                    eax_15[3] += 1
                                                    
                                                    if (*eax_15 == 0)
                                                        sub_64be70(eax_15)
                                                    
                                                    int32_t* esi_8 = *eax_15
                                                    *eax_15 = *esi_8
                                                    __builtin_memset(esi_8, 0, 0x14)
                                                    esi_8[5] = 1
                                                    esi_8[6] = 0
                                                    *(eax_14 + 0x14) = esi_8
                                                    
                                                    if (*esi_8 == 0)
                                                        eax_14 = _aligned_malloc(0xd000, 0x10)
                                                        
                                                        if (eax_14 != 0)
                                                            *esi_8 = eax_14
                                                            esi_8[2] = 0x400
                                                            esi_8[6] = "Attachments"
                                                            bool cond:2 = data_cc8d6f != 0
                                                            esi_8[5] = 0xd254
                                                            
                                                            if (cond:2)
                                                                return 0xd254
                                                            
                                                            return (*(*data_cf65b8 + 8))()
                                                        
                                                        var_18_4 = "XMalloc"
                                                        var_1c_4 = 0x57
                                                        var_20_5 = "C:\x\ax2017\Engine\xMemory.cpp"
                                                        ecx_13 = "pBuffer"
                                                    else
                                                        var_18_4 = "DataArray<struct Attachment>::"
                                                        "DataArrayInitialize"
                                                        var_1c_4 = 0xce
                                                        var_20_5 = "C:\x\ax2017\Engine\DataArray.h"
                                                        ecx_13 = "mpBlock == NULL"
                                                else
                                                    var_18_4 = "GetGameData"
                                                    var_1c_4 = 0x45
                                                    var_20_5 = "C:\x\ax2017\Engine\Game.h"
                                                    ecx_13 = "gpGameData"
                                                
                                                sub_63b870(eax_14, &data_801800, ecx_13, var_20_5, 
                                                    var_1c_4, var_18_4)
                                                
                                                if (sub_63bc30() != 0)
                                                    breakpoint
                                                
                                                sub_63bb00()
                                                noreturn
                                            
                                            var_18_3 = "XMalloc"
                                            var_1c_3 = 0x57
                                            var_20_4 = "C:\x\ax2017\Engine\xMemory.cpp"
                                            ecx_11 = "pBuffer"
                                        else
                                            var_18_3 = "DataArray<struct ParticleSystem>::DataArrayInitialize"
                                            var_1c_3 = 0xce
                                            var_20_4 = "C:\x\ax2017\Engine\DataArray.h"
                                            ecx_11 = "mpBlock == NULL"
                                    else
                                        var_18_3 = "GetGameData"
                                        var_1c_3 = 0x45
                                        var_20_4 = "C:\x\ax2017\Engine\Game.h"
                                        ecx_11 = "gpGameData"
                                    
                                    sub_63b870(eax_11, &data_801800, ecx_11, var_20_4, var_1c_3, 
                                        var_18_3)
                                    
                                    if (sub_63bc30() != 0)
                                        breakpoint
                                    
                                    sub_63bb00()
                                    noreturn
                                
                                var_18_2 = "XMalloc"
                                var_1c_2 = 0x57
                                var_20_3 = "C:\x\ax2017\Engine\xMemory.cpp"
                                ecx_10 = "pBuffer"
                            else
                                var_18_2 = "DataArray<struct Spine>::DataArrayInitialize"
                                var_1c_2 = 0xce
                                var_20_3 = "C:\x\ax2017\Engine\DataArray.h"
                                ecx_10 = "mpBlock == NULL"
                            
                            sub_63b870(eax_10, &data_801800, ecx_10, var_20_3, var_1c_2, var_18_2)
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        var_18_1 = "XMalloc"
                        var_1c_1 = 0x57
                        var_20_2 = "C:\x\ax2017\Engine\xMemory.cpp"
                        ecx_8 = "pBuffer"
                    else
                        var_18_1 = "DataArray<struct Flanim>::DataArrayInitialize"
                        var_1c_1 = 0xce
                        var_20_2 = "C:\x\ax2017\Engine\DataArray.h"
                        ecx_8 = "mpBlock == NULL"
                else
                    var_18_1 = "GetGameData"
                    var_1c_1 = 0x45
                    var_20_2 = "C:\x\ax2017\Engine\Game.h"
                    ecx_8 = "gpGameData"
                
                sub_63b870(eax_7, &data_801800, ecx_8, var_20_2, var_1c_1, var_18_1)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            var_18 = "XMalloc"
            var_1c = 0x57
            var_20 = "C:\x\ax2017\Engine\xMemory.cpp"
            ecx_1 = "pBuffer"
        else
            var_18 = "DataArray<struct Structure>::DataArrayInitialize"
            var_1c = 0xce
            var_20 = "C:\x\ax2017\Engine\DataArray.h"
            ecx_1 = "mpBlock == NULL"
else
    var_18 = "GameInitialize"
    var_1c = 0x2c
    var_20 = "C:\x\ax2017\Engine\Game.cpp"
    ecx_1 = "gpGameData == NULL"

sub_63b870(eax, &data_801800, ecx_1, var_20, var_1c, var_18)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
