// 函数: sub_6d8320
// 地址: 0x6d8320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_420 = 0
void var_410
void* var_418 = &var_410
int32_t eax_3 = sub_6d7ff0(*arg2, &var_420)
int32_t var_430
char const* const var_42c
char* ecx_1

if (data_8ce7cc s> 0x6b)
    void* esi_1 = *(data_8ce7c8 + 0x1ac)
    eax_3 = *(esi_1 + 0xc)
    
    if (eax_3 == 0)
        var_42c = "AttribTagGetDefMap"
        var_430 = 0x1fe
        ecx_1 = "pAttribField->pDefMap"
    else if (*(eax_3 + 0x10) == 0xa)
        int32_t edx_1 = var_420
        int32_t ecx_2 = 0
        void* eax_5
        
        if (edx_1 s> 0)
            eax_5 = var_418
            
            while (*eax_5 != 0x6b)
                ecx_2 += 1
                eax_5 += 0x10
                
                if (ecx_2 s>= edx_1)
                    goto label_6d83d3
        
        uint32_t eax_6
        
        if (edx_1 s<= 0 || eax_5 == 0)
        label_6d83d3:
            eax_6 = *(esi_1 + 0x24)
        else
            eax_6 = *(eax_5 + 8)
        
        if (eax_6 == 0)
            arg1[0x1fa].b = 0
            CookieCheckFunction(eax_6)
            return eax_6
        
        arg1[0x1fa].b = 1
        eax_3 = (*(*data_147b070 + 0x50))(&var_420)
        arg1[0x390] = eax_3
        
        if (data_8ce7cc s> 0x5b)
            void* esi_2 = *(data_8ce7c8 + 0x16c)
            eax_3 = *(esi_2 + 0xc)
            
            if (eax_3 == 0)
                var_42c = "AttribTagGetDefMap"
                var_430 = 0x1fe
                ecx_1 = "pAttribField->pDefMap"
            else if (*(eax_3 + 0x10) == 0xf)
                int32_t edx_2 = var_420
                int32_t ecx_4 = 0
                void* eax_10
                
                if (edx_2 s> 0)
                    eax_10 = var_418
                    
                    while (*eax_10 != 0x5b)
                        ecx_4 += 1
                        eax_10 += 0x10
                        
                        if (ecx_4 s>= edx_2)
                            goto label_6d847e
                
                int32_t ecx_5
                
                if (edx_2 s<= 0 || eax_10 == 0)
                label_6d847e:
                    ecx_5 = *(esi_2 + 0x24)
                else
                    ecx_5 = *(eax_10 + 8)
                
                eax_3 = sub_6d7e10(&var_420, arg1, ecx_5, &var_420, 0)
                
                if (data_8ce7cc s> 0x5c)
                    void* esi_3 = *(data_8ce7c8 + 0x170)
                    eax_3 = *(esi_3 + 0xc)
                    
                    if (eax_3 == 0)
                        var_42c = "AttribTagGetDefMap"
                        var_430 = 0x1fe
                        ecx_1 = "pAttribField->pDefMap"
                    else if (*(eax_3 + 0x10) == 0xf)
                        int32_t edx_4 = var_420
                        int32_t ecx_6 = 0
                        void* eax_13
                        
                        if (edx_4 s> 0)
                            eax_13 = var_418
                            
                            while (*eax_13 != 0x5c)
                                ecx_6 += 1
                                eax_13 += 0x10
                                
                                if (ecx_6 s>= edx_4)
                                    goto label_6d8513
                        
                        int32_t ecx_7
                        
                        if (edx_4 s<= 0 || eax_13 == 0)
                        label_6d8513:
                            ecx_7 = *(esi_3 + 0x24)
                        else
                            ecx_7 = *(eax_13 + 8)
                        
                        eax_3 = sub_6d7e10(&var_420, &arg1[0xfc], ecx_7, &var_420, 1)
                        
                        if (data_8ce7cc s> 0x6a)
                            void* esi_4 = *(data_8ce7c8 + 0x1a8)
                            eax_3 = *(esi_4 + 0xc)
                            
                            if (eax_3 != 0)
                                if (*(eax_3 + 0x10) == 1)
                                    int32_t edx_6 = var_420
                                    int32_t ecx_8 = 0
                                    void* eax_16
                                    
                                    if (edx_6 s> 0)
                                        eax_16 = var_418
                                        
                                        while (*eax_16 != 0x6a)
                                            ecx_8 += 1
                                            eax_16 += 0x10
                                            
                                            if (ecx_8 s>= edx_6)
                                                goto label_6d859d
                                    
                                    void* eax_17
                                    
                                    if (edx_6 s<= 0 || eax_16 == 0)
                                    label_6d859d:
                                        eax_17 = *(esi_4 + 0x24)
                                    else
                                        eax_17 = *(eax_16 + 8)
                                    
                                    arg1[0x1f9] = eax_17
                                    
                                    for (int32_t i = 0; i u< 0x51; i += 1)
                                        int32_t ecx_9 = 0
                                        
                                        if (edx_6 s> 0)
                                            eax_17 = var_418
                                            
                                            do
                                                if (*eax_17 == i)
                                                    void* eax_21 = &arg1[arg1[0x1f8] * 5 + 0x1fb]
                                                    *eax_21 = i
                                                    eax_17 = sub_6d8120(eax_21, &var_420, i, eax_21)
                                                    edx_6 = var_420
                                                    
                                                    if (eax_17.b != 0)
                                                        arg1[0x1f8] += 1
                                                    
                                                    break
                                                
                                                ecx_9 += 1
                                                eax_17 += 0x10
                                            while (ecx_9 s< edx_6)
                                    
                                    CookieCheckFunction(eax_17)
                                    return eax_17
                                
                                var_42c = "AttribMapGetInt"
                                var_430 = 0x177
                                ecx_1 = "AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT"
                            else
                                var_42c = "AttribTagGetDefMap"
                                var_430 = 0x1fe
                                ecx_1 = "pAttribField->pDefMap"
                        else
                            var_42c = "AttribTagGetField"
                            var_430 = 0x8b
                            ecx_1 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
                    else
                        var_42c = "AttribMapGetAssetPtr"
                        var_430 = 0x1e9
                        ecx_1 = "AttribTagGetDefMap(pAttribTable, tag)->defType == DT_ASSET_PTR"
                else
                    var_42c = "AttribTagGetField"
                    var_430 = 0x8b
                    ecx_1 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
            else
                var_42c = "AttribMapGetAssetPtr"
                var_430 = 0x1e9
                ecx_1 = "AttribTagGetDefMap(pAttribTable, tag)->defType == DT_ASSET_PTR"
        else
            var_42c = "AttribTagGetField"
            var_430 = 0x8b
            ecx_1 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
    else
        var_42c = "AttribMapGetBool"
        var_430 = 0x195
        ecx_1 = "AttribTagGetDefMap(pAttribTable, tag)->defType == DT_BOOL"
else
    var_42c = "AttribTagGetField"
    var_430 = 0x8b
    ecx_1 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"

sub_63b870(eax_3, &data_801800, ecx_1, "C:\x\ax2017\Engine\AttribMap.cpp", var_430, var_42c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
