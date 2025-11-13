// 函数: sub_737200
// 地址: 0x737200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_772cd5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_5c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
int32_t* edi = arg1
int32_t* var_34 = edi
int32_t result = edi[1]
int32_t ecx = 0
int32_t var_30 = 0

if (result s> 0)
    while (true)
        char const* const var_68
        int32_t var_64
        char const* const var_60
        char* ecx_10
        
        if (ecx s>= result)
        label_73743b:
            var_60 = "XArray<struct XAsset *>::operator []"
            var_64 = 0xc3
            ecx_10 = "index >= 0 && index < mSize"
            var_68 = "C:\x\ax2017\Engine\xArray.h"
        else
            int32_t* edi_1 = *(*edi + (ecx << 2))
            result = edi_1[1]
            int128_t var_48
            
            if (result == 3)
                result = esi[1]
                int32_t var_4c_2 = 0xffffffff
                var_48 = zx.o(0)
                
                if (result s< esi[2])
                    int32_t ecx_8 = result * 7
                    int32_t eax_14 = *esi
                    *(eax_14 + (ecx_8 << 2)) = edi_1.o
                    *(eax_14 + (ecx_8 << 2) + 0x10) = 0
                    *(eax_14 + (ecx_8 << 2) + 0x18) = 0
                    esi[1] += 1
                label_7373d3:
                    edi = var_34
                    ecx = var_30 + 1
                    var_30 = ecx
                    result = edi[1]
                    
                    if (ecx s>= result)
                        break
                    
                    if (ecx s>= 0)
                        continue
                    
                    goto label_73743b
                
            label_7373ed:
                var_60 = "XArray<struct PackAsset>::Append"
                var_64 = 0x96
                ecx_10 = "mSize < mSizeReserved"
                var_68 = "C:\x\ax2017\Engine\xArray.h"
            else if (result != 0x12)
                var_60 = "AtlasMakerCalcImages"
                var_64 = 0x45c
                var_68 = "C:\x\ax2017\Engine\Editor\AtlasMaker.cpp"
                ecx_10 = "Halt"
            else
                int32_t* var_28_1 = edi_1
                
                if (*edi_1 == 0)
                    arg2.b = 0
                    sub_69f4a0(result, arg2.b, edi_1, 1)
                
                int32_t result_1 = edi_1[7]
                int32_t* edx = *edi_1
                edi_1[7] = result_1 + 1
                void* eax_5 = *edx
                int32_t var_14_1 = 2
                
                if (*(eax_5 + 0x1c) == 0)
                    sub_63b870(eax_5, &data_801800, "pDefFont->layerCount", 
                        "C:\x\ax2017\Engine\Editor\AtlasMaker.cpp", 0x414, "GlyphCount")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                int32_t ecx_2 = *(*(eax_5 + 0x20) + 0x18)
                result = result_1
                int32_t var_14_2 = 0xffffffff
                edi_1[7] = result
                int32_t var_24_1 = ecx_2
                int32_t var_28_2 = 0
                
                if (edi_1[1] == 0x12)
                    int32_t* var_28_3 = edi_1
                    
                    if (edx == 0)
                        edx.b = 0
                        sub_69f4a0(result, edx.b, edi_1, 1)
                        ecx_2 = var_24_1
                    
                    arg2 = edi_1[7]
                    edi_1[7] = arg2 + 1
                    int32_t var_14_3 = 5
                    int32_t eax_10 = *(**edi_1 + 0x1c)
                    
                    if (eax_10 == 0)
                        sub_63b870(eax_10, &data_801800, "pDefFont->layerCount", 
                            "C:\x\ax2017\Engine\Editor\AtlasMaker.cpp", 0x41c, "GlyphLayerCount")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    int32_t eax_11 = 0
                    int32_t var_14_4 = 0xffffffff
                    int32_t var_28_4 = 0
                    edi_1[7] = arg2
                    int32_t var_28_5 = 0
                    
                    if (eax_10 s> 0)
                        do
                            arg2 = nullptr
                            
                            if (ecx_2 s> 0)
                                do
                                    int32_t var_4c_1 = eax_11
                                    result = esi[1]
                                    var_48.d = arg2
                                    
                                    if (result s>= esi[2])
                                        goto label_7373ed
                                    
                                    arg2 += 1
                                    int32_t ecx_5 = result * 7
                                    int32_t eax_12 = *esi
                                    *(eax_12 + (ecx_5 << 2)) = edi_1.o
                                    void* ecx_6 = eax_12 + (ecx_5 << 2)
                                    *(ecx_6 + 0x10) = zx.o(0):8.q
                                    int32_t var_38
                                    *(ecx_6 + 0x18) = var_38
                                    esi[1] += 1
                                    ecx_2 = var_24_1
                                    eax_11 = var_28_5
                                while (arg2 s< ecx_2)
                            
                            eax_11 += 1
                            var_28_5 = eax_11
                        while (eax_11 s< eax_10)
                    
                    goto label_7373d3
                
                var_60 = "DefAutoLock::DefAutoLock"
                var_64 = 0x19
                var_68 = "C:\x\ax2017\Engine\DefLoad.h"
                ecx_10 = "assetPtr && assetPtr->assetType == assetType"
        
        sub_63b870(result, &data_801800, ecx_10, var_68, var_64, var_60)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

fsbase->NtTib.ExceptionList = ExceptionList
return result
