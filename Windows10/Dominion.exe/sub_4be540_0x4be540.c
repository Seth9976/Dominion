// 函数: sub_4be540
// 地址: 0x4be540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int128_t var_70
void* const eax_2 = memset(&var_70, 0, 0x38)
*arg2 = var_70
int128_t var_60
arg2[1] = var_60
int128_t var_50
arg2[2] = var_50
int64_t var_40
arg2[3].q = var_40
int32_t var_c8
char const* const ecx

if (*(arg1 + 8) == 5)
    int32_t eax_3 = *(arg1 + 4)
    void* var_98 = 3
    int32_t var_94_1 = eax_3
    int32_t* eax_4 = sub_571c40(&var_98)
    void* const esi_1 = &data_780768
    void* eax_5
    
    while (true)
        if (*esi_1 == eax_3)
            if (esi_1 != 0)
                int32_t eax_6 = data_bf23b8
                char eax_12
                
                if (eax_6 != 0 && eax_6 == 1)
                    int32_t* ecx_3 = *SteamInternal_ContextInit(&data_cb4518)
                    eax_12 = (*(*ecx_3 + 0x1c))(*(esi_1 + 8))
                
                if (eax_6 == 0 || eax_6 != 1 || eax_12 == 0)
                    eax_5 = *(esi_1 + 4)
                else
                    eax_5 = nullptr
            else
                eax_5 = esi_1 + 3
            
            break
        
        esi_1 += 0x44
        
        if (esi_1 s>= &data_780834)
            eax_5 = 3
            break
    
    *(arg2 + 0xc) = eax_5
    int32_t var_28
    char eax_13
    int32_t* ecx_5
    eax_13, ecx_5 = sub_64bce0(eax_4, &var_28)
    
    if (eax_13 != 0)
        int32_t var_1c
        *(arg2 + 0x1c) = var_1c
        ecx_5 = &var_28
        int32_t var_20
        *(arg2 + 0x18) = var_20
        char i
        
        do
            i = *ecx_5
            *(arg2 - &var_28 + ecx_5 + 0x30) = i
            ecx_5 += 1
        while (i != 0)
        arg2[1].b = 1
    
    ecx_5.b = 0
    int32_t edx_3 = 0
    *(arg2 + 8) = 0
    void* esi_3 = arg1 + 0xc
    *(arg2 + 0x28) = 0
    *(arg2 + 0x2c) = 0
    void* eax_15 = esi_3
    char var_9c_1 = ecx_5.b
    int32_t var_a8_2 = 0
    var_98 = esi_3
    void* var_a4_2 = esi_3
    
    while (true)
        if (*eax_15 != 0)
            *(arg2 + 8) += 1
            int32_t ecx_7 = 0
            int32_t eax_16 = 0
            void* const var_ac_1
            void* const ecx_8
            
            while (true)
                if (*(eax_16 + &data_780878) == *(esi_3 + (edx_3 << 2)))
                    int32_t eax_17 = ecx_7 * 0x10c
                    var_ac_1 = eax_17 + &data_78087c
                    ecx_8 = eax_17 + &data_780884
                    eax_2 = eax_17 + &data_780880
                    break
                
                eax_16 += 0x10c
                ecx_7 += 1
                
                if (eax_16 u>= 0x28d4)
                    var_ac_1 = &data_78087c
                    ecx_8 = &data_780884
                    eax_2 = &data_780880
                    break
            
            if (*eax_2 != 2)
                char const* const var_c4_3 = "GetBundleInfo"
                var_c8 = 0xb8b
                ecx = "defChild->type == DOMENTITLEMENT_TYPE_EXPANSION"
                break
            
            int32_t eax_18 = *ecx_8
            char var_ad_1
            int32_t eax_19
            int32_t var_a0
            
            if (eax_18 != 2)
                void* var_8c
                int32_t var_84
                uint32_t eax_20 = sub_4daf40(&var_8c, &var_84)
                int32_t esi_4 = 0
                char ecx_11
                
                if (eax_20 s<= 0)
                label_4be75d:
                    eax_19 = var_a0
                    ecx_11 = 0
                else
                    while (true)
                        if (sub_4db700(*(var_8c + (esi_4 << 2)), eax_18) != 0)
                            ecx_11 = 1
                            eax_19 = *(var_84 + (esi_4 << 2))
                            break
                        
                        esi_4 += 1
                        
                        if (esi_4 s>= eax_20)
                            goto label_4be75d
                
                var_ad_1 = ecx_11
                var_a0 = eax_19
                
                if (ecx_11 == 0)
                    var_a0 = eax_19
                    var_ad_1 = ecx_11
                else
                    *(arg2 + 4) += 1
            else
                eax_19 = var_a0
                *(arg2 + 4) += 1
                var_ad_1 = 1
            char ecx_14 = var_9c_1
            
            if (eax_19 != 5)
                ecx_14 = 1
            
            var_28 = 0
            var_9c_1 = ecx_14
            int32_t var_24_1 = *var_ac_1
            void var_80
            
            if (sub_64bce0(sub_571c40(&var_28), &var_80) != 0)
                int32_t temp2_1 = *(arg2 + 0x28)
                int32_t var_78
                *(arg2 + 0x28) += var_78
                int32_t var_74
                *(arg2 + 0x2c) = adc.d(*(arg2 + 0x2c), var_74, temp2_1 + var_78 u< temp2_1)
                
                if (var_ad_1 != 0)
                    int32_t temp3_1 = arg2[2].d
                    arg2[2].d += var_78
                    *(arg2 + 0x24) = adc.d(*(arg2 + 0x24), var_74, temp3_1 + var_78 u< temp3_1)
            
            edx_3 = var_a8_2 + 1
            esi_3 = var_98
            eax_15 = var_a4_2 + 4
            var_a8_2 = edx_3
            var_a4_2 = eax_15
            
            if (edx_3 s< 0x40)
                continue
        
        int32_t ecx_18 = *(arg2 + 8)
        
        if (*(arg2 + 0xc) == 0)
            *(arg2 + 4) = ecx_18
            *arg2 = 0
            CookieCheckFunction(eax_15)
            return eax_15
        
        uint32_t eax_30 = *(arg2 + 4)
        
        if (eax_30 == ecx_18)
            *arg2 = 1
            CookieCheckFunction(eax_30)
            return eax_30
        
        if (eax_30 == 0)
            *arg2 = 2
            CookieCheckFunction(eax_30)
            return eax_30
        
        int32_t eax_31
        eax_31.b = var_9c_1 != 0
        *arg2 = eax_31 + 5
        CookieCheckFunction(eax_31 + 5)
        return eax_31 + 5
else
    char const* const var_c4_1 = "GetBundleInfo"
    var_c8 = 0xb6d
    ecx = "def.type == DOMENTITLEMENT_TYPE_BUNDLE"

sub_63b870(eax_2, &data_801800, ecx, "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 
    var_c8, "GetBundleInfo")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
