// 函数: sub_647d70
// 地址: 0x647d70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76c675
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_154 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* var_88 = arg2
int32_t esi = arg3
void* ecx = data_147abe8
uint32_t result = arg4
uint32_t result_3 = result

if (ecx != 0)
    result = *(ecx + 0x1c) u>> 3
    char const* const var_160_1
    int32_t var_15c
    char const* const var_158_6
    int128_t var_d8
    int128_t var_c8
    char* const var_78
    int128_t var_48
    char* ecx_11
    
    if ((result.b & 1) != 0)
        int32_t var_84_1
        int32_t var_6c_1
        int32_t eax_8
        int32_t edi_1
        
        if (esi != 0)
            if (*(esi + 4) != 2)
            label_6483ae:
                var_158_6 = "DefAutoLock::DefAutoLock"
                var_15c = 0x19
                var_160_1 = "C:\x\ax2017\Engine\DefLoad.h"
                ecx_11 = "assetPtr && assetPtr->assetType == assetType"
            label_6483c4:
                sub_63b870(result, &data_801800, ecx_11, var_160_1, var_15c, var_158_6)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            edi_1 = esi
            var_6c_1 = esi
            var_84_1 = edi_1
            eax_8 = esi
        else
            sub_69fd50(result, "!Null\Null", &var_78, 2)
            int32_t var_14_1 = esi
            char* const eax_4 = var_78
            char* const ecx_2 = &data_801800
            
            if (eax_4 != 0)
                ecx_2 = eax_4
            
            int32_t eax_5
            eax_5, arg2 = sub_69f030(ecx_2, esi + 2)
            edi_1 = eax_5
            var_84_1 = edi_1
            int32_t var_14_2 = 1
            
            if (data_cf65bc != esi)
                char* eax_6 = var_78
                
                if (eax_6 != 0 && *eax_6 != 0)
                    char* eax_7 = sub_63d4e0(&var_78)
                    int32_t temp0_1 = *(eax_7 + 4)
                    *(eax_7 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                        var_78 = &data_801800
            
            eax_8 = edi_1
            int32_t var_14_3 = 0xffffffff
            ecx = data_147abe8
            var_6c_1 = eax_8
        
        int32_t var_7c_1 = edi_1
        
        if (*eax_8 == 0)
            arg2.b = 0
            sub_69f4a0(eax_8, arg2.b, eax_8, 1)
            ecx = data_147abe8
            eax_8 = var_6c_1
        
        *(eax_8 + 0x1c) += 1
        int32_t var_14_4 = 2
        result = ***eax_8
        
        if (result != 0 && result_3 != 0)
            result = *(result + 0x20)
            uint32_t result_4 = result
            
            if (result s> 0)
                int32_t edi_2 = 0
                
                do
                    void var_e8
                    int128_t* eax_12
                    int32_t edx_4
                    eax_12, edx_4 = sub_6d9a30(&var_e8, edi_2, result_3, &var_e8)
                    var_48 = *eax_12
                    int128_t var_38_1 = eax_12[1]
                    float var_108[0x8]
                    float* eax_14 = sub_64b1b0(&var_108, edx_4, &var_48, &var_108)
                    var_c8 = *eax_14
                    int128_t var_b8_1 = *(eax_14 + 0x10)
                    int128_t var_a8_1 = *(eax_14 + 0x20)
                    int128_t var_98_1 = *(eax_14 + 0x30)
                    var_d8 = data_8934b0
                    __builtin_memcpy(&var_48:8, 
                        "\x0a\xd7\x23\xbc\x0a\xd7\x23\xbc\x0a\xd7\x23\xbc\x9a\x99\x99\x3e\x0a\xd7\x23\x"
                    "3c\x0a\xd7\x23\x3c", 
                        0x18)
                    sub_6444f0(&var_d8, &var_c8, &var_48:8, &var_d8)
                    var_d8 = data_8934c0
                    __builtin_memcpy(&var_48:8, 
                        "\x0a\xd7\x23\xbc\x0a\xd7\x23\xbc\x0a\xd7\x23\xbc\x0a\xd7\x23\x3c\x9a\x99\x99\x"
                    "3e\x0a\xd7\x23\x3c", 
                        0x18)
                    sub_6444f0(&var_d8, &var_c8, &var_48:8, &var_d8)
                    var_d8 = data_8934f0
                    __builtin_memcpy(&var_48:8, 
                        "\x0a\xd7\x23\xbc\x0a\xd7\x23\xbc\x0a\xd7\x23\xbc\x0a\xd7\x23\x3c\x0a\xd7\x23\x"
                    "3c\x9a\x99\x99\x3e", 
                        0x18)
                    result, arg2 = sub_6444f0(&var_d8, &var_c8, &var_48:8, &var_d8)
                    edi_2 += 1
                while (edi_2 s< result_4)
                
                ecx = data_147abe8
                edi_1 = var_84_1
        
        int32_t var_14_5 = 0xffffffff
        
        if (edi_1 != 0)
            *(edi_1 + 0x1c) -= 1
            int32_t var_7c_2 = 0
        
        goto label_648017
    
label_648017:
    
    if (ecx != 0)
        result = *(ecx + 0x1c) u>> 2
        int128_t var_68
        
        if ((result.b & 1) == 0)
        label_64816e:
            
            if (ecx != 0)
                result = *(ecx + 0x1c) u>> 2
                
                if ((result.b & 1) != 0 && result_3 != 0 && *(result_3 + 0x2c) != 0)
                    if (esi == 0)
                        sub_69fd50(result, "!Null\Null", &var_78, 2)
                        int32_t var_14_6 = 3
                        char* eax_26 = var_78
                        char* ecx_19 = &data_801800
                        
                        if (eax_26 != 0)
                            ecx_19 = eax_26
                        
                        int32_t eax_27
                        eax_27, arg2 = sub_69f030(ecx_19, esi + 2)
                        esi = eax_27
                        int32_t var_14_7 = 4
                        
                        if (data_cf65bc != 0)
                            char* const eax_28 = var_78
                            
                            if (eax_28 != 0 && *eax_28 != 0)
                                char* eax_29 = sub_63d4e0(&var_78)
                                int32_t temp1_1 = *(eax_29 + 4)
                                *(eax_29 + 4) -= 1
                                
                                if (temp1_1 == 1)
                                    sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
                                    var_78 = &data_801800
                        
                        int32_t var_14_8 = 0xffffffff
                    else if (*(esi + 4) != 2)
                        goto label_6483ae
                    
                    int32_t eax_30 = esi
                    int32_t var_80_2 = esi
                    
                    if (*eax_30 == 0)
                        arg2.b = 0
                        sub_69f4a0(eax_30, arg2.b, eax_30, 1)
                        eax_30 = esi
                    
                    *(eax_30 + 0x1c) += 1
                    int32_t var_14_9 = 5
                    result = ***eax_30
                    
                    if (result != 0)
                        void* edx_16 = *(result_3 + 0x2c)
                        void* var_6c_2 = edx_16
                        char* ecx_23 = *(edx_16 + 0x14)
                        var_78 = ecx_23
                        
                        if (*(result + 0x10) != ecx_23)
                            sub_63b870(result, &data_801800, 
                                "pStructureData->boneCount == numBones", 
                                "C:\x\ax2017\Engine\Draw3d.cpp", 0x7b2, "Structure3DDebugDraw")
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        void* edi_6 = *(result + 0x18)
                        result = 0
                        uint32_t result_2 = 0
                        
                        if (ecx_23 s> 0)
                            int32_t ecx_24 = 0
                            int32_t* var_74 = edi_6 + 0xc0
                            int32_t var_84_2 = 0
                            
                            while (true)
                                if (ecx_24 s< 0 || result s>= *(edx_16 + 0x14))
                                    sub_63b870(result, &data_801800, "index >= 0 && index < mSize", 
                                        "C:\x\ax2017\Engine\xArray.h", 0xc3, 
                                        "XArray<struct Mat4>::operator []")
                                    
                                    if (sub_63bc30() == 0)
                                        sub_63bb00()
                                        noreturn
                                    
                                    breakpoint
                                
                                *(edx_16 + 0x10)
                                int128_t* eax_33 = sub_642e30(&var_68)
                                var_c8 = *eax_33
                                int128_t var_b8_2 = eax_33[1]
                                int128_t var_a8_2 = eax_33[2]
                                int128_t var_98_2 = eax_33[3]
                                var_d8 = data_8934b0
                                sub_6444f0(&var_d8, &var_c8, var_74, &var_d8)
                                var_d8 = data_8934c0
                                void var_148
                                int128_t* eax_35 = sub_642e30(&var_148)
                                var_c8 = *eax_35
                                int128_t var_b8_3 = eax_35[1]
                                int128_t var_a8_3 = eax_35[2]
                                int128_t var_98_3 = eax_35[3]
                                sub_6444f0(&var_d8, &var_c8, var_74, &var_d8)
                                result = result_2 + 1
                                var_74 = &var_74[0x36]
                                ecx_24 = var_84_2 + 0x40
                                edx_16 = var_6c_2
                                result_2 = result
                                var_84_2 = ecx_24
                                
                                if (result s>= var_78)
                                    break
                                
                                continue
                    
                    if (esi != 0)
                        *(esi + 0x1c) -= 1
        else
            if (*(esi + 4) != 2)
                var_158_6 = "StructureDefGet"
                var_15c = 0x313
                var_160_1 = "C:\x\ax2017\Engine\AssetUtils.cpp"
                ecx_11 = "assetPtr->assetType == ASSET_TYPE_STRUCTURE"
                goto label_6483c4
            
            result = sub_5af880(esi)
            arg2 = *result
            int128_t* var_80_1 = arg2
            
            if (arg2 != 0)
                int32_t i = 0
                int32_t i_1 = 0
                
                if (arg2[3].d s> 0)
                    result = 0
                    uint32_t result_1 = 0
                    
                    do
                        int32_t edi_3 = *(arg2 + 0x38)
                        int32_t edx_8 = *(edi_3 + result + 0x44)
                        void* edi_4 = edi_3 + result
                        var_68 = *var_88
                        int128_t var_58_1 = var_88[1]
                        var_48 = var_88[2]
                        int128_t var_38_2 = var_88[3]
                        
                        if (edx_8 s>= 0 && result_3 != 0)
                            void* ecx_14 = *(result_3 + 0x2c)
                            
                            if (ecx_14 != 0)
                                if (edx_8 s>= *(ecx_14 + 0x14))
                                    sub_63b870(var_88, &data_801800, "index >= 0 && index < mSize", 
                                        "C:\x\ax2017\Engine\xArray.h", 0xc3, 
                                        "XArray<struct Mat4>::operator []")
                                    
                                    if (sub_63bc30() != 0)
                                        breakpoint
                                    
                                    sub_63bb00()
                                    noreturn
                                
                                *(ecx_14 + 0x10)
                                int128_t* eax_20 = sub_642e30(&var_c8)
                                var_68 = *eax_20
                                int128_t var_58_2 = eax_20[1]
                                var_48 = eax_20[2]
                                int128_t var_38_3 = eax_20[3]
                            
                            i = i_1
                        
                        int32_t eax_21 = *(edi_4 + 8)
                        
                        if (eax_21 == 1)
                            int128_t* var_158_8 = &var_d8
                            var_d8 = data_8934f0
                            sub_644c70(&var_d8, &var_68, edi_4 + 0xc)
                            i = i_1
                        else if (eax_21 == 2)
                            int128_t* var_158_9 = &var_d8
                            var_d8 = data_8934f0
                            int128_t* var_160
                            sub_6472e0(&var_d8, &var_68, edi_4 + 0x34, esi.w, edi_4, var_160)
                            i = i_1
                        
                        arg2 = var_80_1
                        i += 1
                        result = result_1 + 0x48
                        i_1 = i
                        result_1 = result
                    while (i s< arg2[3].d)
                
                ecx = data_147abe8
                goto label_64816e

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
