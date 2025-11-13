// 函数: sub_6cfcb0
// 地址: 0x6cfcb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
void var_158
uint32_t result = __security_cookie ^ &var_158
uint32_t result_2 = result
int32_t* esi = arg1
int32_t* var_144 = esi
int32_t* ecx = *esi

if (ecx != 0)
    char const* const var_16c
    int32_t var_168
    char const* const var_164_1
    char* ecx_1
    
    if (ecx[1] != 0x20)
        var_164_1 = "FabDefGet"
        var_168 = 0xeb
        var_16c = "C:\x\ax2017\Engine\FabDef.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_FAB"
    label_6d03d4:
        sub_63b870(result, &data_801800, ecx_1, var_16c, var_168, var_164_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t* edx_1 = sub_5af880(ecx)
    result = 0
    int32_t* var_124_1 = edx_1
    uint32_t result_1 = 0
    
    if (edx_1[2] s> 0)
        int32_t ecx_2 = 0
        int32_t var_128_1 = 0
        
        while (true)
            int32_t* edi_2 = *edx_1 + ecx_2
            void* ecx_4 = sub_6cde00(esi, result)
            void* var_14c_1 = ecx_4
            *(ecx_4 + 8) = *(esi + 8)
            *(ecx_4 + 0x18) = *(esi + 0x18)
            *(ecx_4 + 0x28) = *(esi + 0x28)
            *(ecx_4 + 0x38) = *(esi + 0x38)
            *(ecx_4 + 0x48) = *(esi + 0x48)
            *(ecx_4 + 0x58) = esi[0x16]
            int32_t eax_4 = *edi_2
            
            if (eax_4 == 2)
                int32_t* esi_5 = *(ecx_4 + 0x60)
                int32_t* var_154_6 = esi_5
                
                if (esi_5 == 0)
                    esi_5 = edi_2[0x22]
                    var_154_6 = esi_5
                
                int32_t eax_24 = *(ecx_4 + 4)
                
                if (eax_24 != 0)
                    if (*(sub_6985c0(eax_24) + 4) == esi_5)
                        ecx_4 = var_14c_1
                    else
                        sub_698a30(*(var_14c_1 + 4))
                        ecx_4 = var_14c_1
                        *(ecx_4 + 4) = sub_6987e0(var_154_6)
                else if (esi_5 != 0)
                    ecx_4 = var_14c_1
                    *(ecx_4 + 4) = sub_6987e0(esi_5)
                
                sub_699220(*(ecx_4 + 4), arg2)
                esi = var_144
            else if (eax_4 == 5)
                int32_t eax_21
                int64_t xmm0_90
                
                if (*(ecx_4 + 0x6c) s<= *(ecx_4 + 0x5c))
                    xmm0_90 = *(edi_2 + 0x94)
                    eax_21 = edi_2[0x27]
                else
                    xmm0_90 = *(ecx_4 + 0x70)
                    eax_21 = *(ecx_4 + 0x78)
                
                int32_t i = 0
                int32_t var_154_5 = eax_21
                int32_t i_1 = 0
                
                if (xmm0_90.d s> 0)
                    int32_t esi_3 = xmm0_90:4.d
                    
                    do
                        int32_t edi_3 = 0
                        
                        if (esi_3 s> 0)
                            do
                                int32_t esi_4 = 0
                                
                                if (eax_21 s> 0)
                                    do
                                        int32_t i_2 = i
                                        int32_t var_68_1 = edi_3
                                        int32_t var_64_1 = esi_4
                                        sub_6cded0(&i_2, ecx_4, edi_2, &i_2)
                                        sub_6cfcb0()
                                        eax_21 = var_154_5
                                        esi_4 += 1
                                        ecx_4 = var_14c_1
                                        i = i_1
                                    while (esi_4 s< eax_21)
                                
                                esi_3 = xmm0_90:4.d
                                edi_3 += 1
                            while (edi_3 s< esi_3)
                        
                        i += 1
                        i_1 = i
                    while (i s< xmm0_90.d)
                    
                    esi = var_144
            else if (eax_4 == 8)
                int32_t edx_3 = *(ecx_4 + 0x4b8)
                float var_110
                int128_t var_60
                int128_t var_50
                int128_t var_40
                
                if (edx_3 != 0)
                    result = data_147abe8
                    
                    if (result == 0)
                        var_164_1 = "GetGameData"
                        var_168 = 0x45
                        var_16c = "C:\x\ax2017\Engine\Game.h"
                        ecx_1 = "gpGameData"
                        break
                    
                    void* esi_2 = *(result + 0x10)
                    uint32_t eax_13 = zx.d(edx_3.w)
                    void* const eax_14
                    
                    if (eax_13 u< *(esi_2 + 4))
                        eax_14 = eax_13 * 0x7c + *esi_2
                        
                        if (*(eax_14 + 0x78) != edx_3)
                            eax_14 = nullptr
                    else
                        eax_14 = nullptr
                    
                    if (eax_14 != 0)
                        int128_t var_c0_1
                        int96_t xmm0_49
                        
                        if (*(ecx_4 + 0x480) s<= *(ecx_4 + 0x5c))
                            var_c0_1 = *(edi_2 + 0x10)
                            xmm0_49 = (*(edi_2 + 0x20)).12
                        else
                            var_c0_1 = *(ecx_4 + 0x484)
                            xmm0_49 = (*(ecx_4 + 0x494)).12
                        
                        float xmm0_51 = xmm0_49:4.d
                        float xmm0_55 = (xmm0_51 + xmm0_51) * 3.14159274f * 0.00277777785f * 0.5f
                        float xmm0_56 = sub_4ae0f0(ebp, xmm0_55)
                        float xmm0_58 = sub_4ae0d0(ebp, xmm0_55)
                        float xmm0_59 = var_c0_1:0xc.d
                        float xmm0_63 = (xmm0_59 + xmm0_59) * 3.14159274f * 0.00277777785f * 0.5f
                        float xmm0_64 = sub_4ae0f0(ebp, xmm0_63)
                        float xmm0_66 = sub_4ae0d0(ebp, xmm0_63)
                        float xmm0_67 = xmm0_49.d
                        float xmm0_71 = (xmm0_67 + xmm0_67) * 3.14159274f * 0.00277777785f * 0.5f
                        float xmm0_72 = sub_4ae0f0(ebp, xmm0_71)
                        float xmm0_74 = sub_4ae0d0(ebp, xmm0_71)
                        float xmm3_4 = xmm0_64 * xmm0_56
                        float xmm2_4 = xmm0_66 * xmm0_58
                        int32_t var_f4_2 = var_c0_1:8.d
                        float xmm6_4 = xmm0_66 * xmm0_56
                        float xmm0_78 = xmm0_64 * xmm0_58
                        float var_74_1 = xmm0_74 * xmm2_4 + xmm0_72 * xmm3_4
                        var_110 = xmm0_49:8.d
                        float var_78_1 = xmm0_74 * xmm6_4 - xmm0_72 * xmm0_78
                        float var_7c_1 = xmm0_72 * xmm2_4 + xmm0_74 * xmm3_4
                        int64_t var_fc_2 = var_c0_1.q
                        var_40 = var_110.o
                        int128_t var_30_2 = (xmm0_74 * xmm0_78 - xmm0_72 * xmm6_4).o
                        sub_4eb600(var_14c_1 + 0x3c, &var_40, &var_60, var_14c_1 + 0x3c)
                        float xmm1_18 = data_8c4634
                        *(eax_14 + 0x2c) = var_60
                        *(eax_14 + 0x3c) = var_50
                        sub_6bca30(eax_14, xmm1_18)
                else
                    int128_t var_f0_1
                    int96_t xmm0_7
                    
                    if (*(ecx_4 + 0x480) s<= *(ecx_4 + 0x5c))
                        var_f0_1 = *(edi_2 + 0x10)
                        xmm0_7 = (*(edi_2 + 0x20)).12
                    else
                        var_f0_1 = *(ecx_4 + 0x484)
                        xmm0_7 = (*(ecx_4 + 0x494)).12
                    
                    float xmm0_9 = xmm0_7:4.d
                    float xmm0_13 = (xmm0_9 + xmm0_9) * 3.14159274f * 0.00277777785f * 0.5f
                    float xmm0_14 = sub_4ae0f0(ebp, xmm0_13)
                    float xmm0_16 = sub_4ae0d0(ebp, xmm0_13)
                    float xmm0_17 = var_f0_1:0xc.d
                    float xmm0_21 = (xmm0_17 + xmm0_17) * 3.14159274f * 0.00277777785f * 0.5f
                    float xmm0_22 = sub_4ae0f0(ebp, xmm0_21)
                    float xmm0_24 = sub_4ae0d0(ebp, xmm0_21)
                    float xmm0_25 = xmm0_7.d
                    float xmm0_29 = (xmm0_25 + xmm0_25) * 3.14159274f * 0.00277777785f * 0.5f
                    float xmm0_30 = sub_4ae0f0(ebp, xmm0_29)
                    float xmm0_32 = sub_4ae0d0(ebp, xmm0_29)
                    float xmm3_2 = xmm0_22 * xmm0_14
                    float xmm2_2 = xmm0_24 * xmm0_16
                    float xmm6_2 = xmm0_24 * xmm0_14
                    int32_t var_f4_1 = var_f0_1:8.d
                    float xmm0_36 = xmm0_22 * xmm0_16
                    float var_84_1 = xmm0_32 * xmm2_2 + xmm0_30 * xmm3_2
                    var_110 = xmm0_7:8.d
                    float var_88_1 = xmm0_32 * xmm6_2 - xmm0_30 * xmm0_36
                    float var_8c_1 = xmm0_30 * xmm2_2 + xmm0_32 * xmm3_2
                    int128_t xmm0_42 = (xmm0_32 * xmm0_36 - xmm0_30 * xmm6_2).o
                    int64_t var_fc_1 = var_f0_1.q
                    var_60 = var_110.o
                    var_50 = xmm0_42
                    sub_4eb600(var_14c_1 + 0x3c, &var_60, &var_110, var_14c_1 + 0x3c)
                    int32_t* ecx_6 = edi_2[0x34]
                    var_40 = var_110.o
                    int128_t var_30_1 = xmm0_42
                    *(var_14c_1 + 0x4b8) = sub_6b80f0(ecx_6, &var_40)[0x1e]
                esi = var_144
            
            edx_1 = var_124_1
            result = result_1 + 1
            ecx_2 = var_128_1 + 0xe0
            result_1 = result
            var_128_1 = ecx_2
            
            if (result s>= edx_1[2])
                goto label_6d03b5
        
        goto label_6d03d4

label_6d03b5:
CookieCheckFunction(result)
return result
