// 函数: sub_737ce0
// 地址: 0x737ce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg2
int32_t* ecx = arg4
int32_t* var_60 = esi
int32_t eax = ecx[1]
char const* const var_7c_1
int32_t var_78_1
char const* const var_74_1
char const* const ecx_1

if (esi[1] != eax)
    var_74_1 = "AtlasMakerPlaceRects"
    var_78_1 = 0x50a
    var_7c_1 = "C:\x\ax2017\Engine\Editor\AtlasMaker.cpp"
    ecx_1 = "packAssets.mSize == locs.mSize"
else if (eax s> 0)
    int32_t edx = 0
    int32_t var_48_1 = 0
    int128_t var_40 = *(*ecx + 4)
    int32_t result
    int32_t var_54_1
    
    if (esi[1] s<= 0)
        var_54_1 = var_40:0xc.d
        result = var_40:8.d
    label_737fe1:
        int32_t* esi_5 = arg6
        int32_t ecx_17 = 0
        int32_t var_48_2 = 0
        int32_t edx_16 = esi_5[1]
        
        if (edx_16 s<= 0)
        label_73807e:
            esi_5[1] = 0
            esi_5[3] = 0
            return result
        
        eax = 0
        int32_t var_4c_4 = 0
        
        while (true)
            if (eax s< 0 || ecx_17 s>= edx_16)
                var_74_1 = "XArray<struct AtlasFontLayerItem>::operator []"
                var_78_1 = 0xb5
                goto label_73809b
            
            int32_t* esi_7 = *esi_5 + eax
            int32_t* ecx_18 = *esi_7
            
            if (ecx_18[1] != 0x12)
                break
            
            void* eax_27 = sub_5af880(ecx_18)
            int32_t ecx_21 = esi_7[1] * 0x30
            void* ecx_22 = ecx_21 + *(eax_27 + 0x20)
            
            if (ecx_21 != neg.d(*(eax_27 + 0x20)))
                *(ecx_22 + 8) = *(arg3 + 0x44)
                *(ecx_22 + 0x10) = *(arg3 + 0x48)
            
            int32_t eax_30 = esi_7[2]
            
            if (eax_30 != 0)
                _aligned_free(eax_30)
            
            sub_6960b0(*esi_7)
            esi_5 = arg6
            ecx_17 = var_48_2 + 1
            eax = var_4c_4 + 0x1c
            var_48_2 = ecx_17
            edx_16 = esi_5[1]
            var_4c_4 = eax
            
            if (ecx_17 s>= edx_16)
                goto label_73807e
            
            continue
    else
        eax = 0
        var_54_1 = var_40:0xc.d
        int32_t var_5c_1 = 0
        result = var_40:8.d
        
        while (true)
            if (eax s< 0 || edx s>= ecx[1])
                var_74_1 = "XArray<struct PackLoc>::operator []"
                var_78_1 = 0xc3
            else
                int32_t* edx_2 = *ecx + eax
                
                if (edx_2[5] != arg5)
                label_737f43:
                    eax += 0x18
                    edx = var_48_1 + 1
                    var_5c_1 = eax
                    var_48_1 = edx
                    
                    if (edx s>= esi[1])
                        goto label_737fe1
                    
                    continue
                else
                    int32_t result_1 = edx_2[3]
                    int32_t ecx_2 = *edx_2
                    
                    if (result s> result_1)
                        result_1 = result
                    
                    result = result_1
                    eax = edx_2[4]
                    
                    if (var_54_1 s> eax)
                        eax = var_54_1
                    
                    var_54_1 = eax
                    
                    if (ecx_2 s>= 0 && ecx_2 s< var_60[1])
                        int32_t eax_3 = ecx_2 * 7
                        int32_t ecx_3 = *var_60
                        int32_t* esi_1 = *(ecx_3 + (eax_3 << 2))
                        int32_t edx_4 = esi_1[1]
                        void var_24
                        
                        if (edx_4 == 3)
                            int32_t* eax_4 = sub_5af880(esi_1)
                            int32_t* esi_2 = *eax_4
                            
                            if (sub_73ac00(eax_4, esi_2, &var_24, arg3) == 0)
                                char* var_74_6 = sub_63d7e0(&esi_1[8])
                                sub_63b870(sub_63b5f0("AtlasMaker: Image load failed %s"), 
                                    &data_801800, "Halt", 
                                    "C:\x\ax2017\Engine\Editor\AtlasMaker.cpp", 0x4c4, 
                                    "AtlasMakerPlaceAssetTexture_New")
                                goto label_7380b2
                            
                            int32_t edx_6 = esi_2[6]
                            int32_t var_14_1 = edx_6
                            int32_t var_20
                            int32_t var_18_1 = sub_6a9570(var_20, edx_6)
                            sub_736340(&var_24, &edx_2[1], &data_800188, &var_24, arg3)
                            esi_2[0xa] = *(arg3 + 0x44)
                            esi_2[0xc] = *(arg3 + 0x48)
                            int32_t edx_9 = edx_2[2]
                            esi_2[0xd] = edx_2[1]
                            esi_2[0xe] = edx_9
                            *esi_2 = edx_2[3] - edx_2[1]
                            esi_2[1] = edx_2[4] - edx_2[2]
                            esi_2[2] = *(arg3 + 0x4c)
                            sub_735fb0(esi_1)
                        else if (edx_4 == 0x12)
                            int32_t edx_10 = *(ecx_3 + (eax_3 << 2) + 8)
                            int32_t eax_16 = *(ecx_3 + (eax_3 << 2) + 4)
                            eax = sub_737b10(eax_16, esi_1, arg6, eax_16, &var_24, *(arg3 + 0x30))
                            
                            if (esi_1[1] != 0x12)
                                break
                            
                            int32_t edx_13 = edx_10 * 9
                            int32_t edi_5 = *(*(sub_5af880(esi_1) + 0x20) + eax_16 * 0x30 + 0x20)
                            int32_t esi_3 = int.d(sub_4d5cb0(*(edi_5 + (edx_13 << 2) + 4) + 0.5f))
                            int32_t eax_20 = int.d(sub_4d5cb0(*(edi_5 + (edx_13 << 2) + 8) + 0.5f))
                            var_40.d = esi_3
                            var_40:4.d = eax_20
                            sub_736340(&var_24, &edx_2[1], &var_40, &var_24, arg3)
                            *(edi_5 + (edx_13 << 2) + 4) = _mm_cvtepi32_ps(*(edx_2 + 4))
                        eax = var_5c_1
                        esi = var_60
                        ecx = arg4
                        goto label_737f43
                    
                    var_74_1 = "XArray<struct PackAsset>::operator []"
                    var_78_1 = 0xc3
            
        label_73809b:
            var_7c_1 = "C:\x\ax2017\Engine\xArray.h"
            ecx_1 = "index >= 0 && index < mSize"
            goto label_7380aa
    var_74_1 = "FontGetDef"
    var_78_1 = 0x2e6
    var_7c_1 = "C:\x\ax2017\Engine\AssetUtils.cpp"
    ecx_1 = "assetPtr->assetType == ASSET_TYPE_FONT"
else
    var_74_1 = "AtlasMakerPlaceRects"
    var_78_1 = 0x50b
    var_7c_1 = "C:\x\ax2017\Engine\Editor\AtlasMaker.cpp"
    ecx_1 = "locs.mSize > 0"

label_7380aa:
sub_63b870(eax, &data_801800, ecx_1, var_7c_1, var_78_1, var_74_1)
label_7380b2:

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
