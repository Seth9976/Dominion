// 函数: sub_737b10
// 地址: 0x737b10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = arg3[3]
void* eax = &arg3[3]
int32_t esi = arg3[1]
void* edi = eax
int32_t var_c = edx
char const* const var_2c
int32_t var_28
char const* const var_24
char* ecx_1

if (edx s>= esi)
label_737bae:
    *eax = 0
    
    if (edx s> 0)
        void* ecx_3 = nullptr
        eax = nullptr
        void* var_10_1 = nullptr
        void* edi_2 = 0x1c
        
        while (true)
            if (eax s>= esi)
                goto label_737b7d
            
            int32_t edx_3 = *arg3
            eax = var_10_1
            esi = arg3[1]
            
            if (*(eax + edx_3) == arg2)
                if (ecx_3 s>= esi)
                    goto label_737b7d
                
                eax = edx_3 + ecx_3 * 0x1c
                
                if (*(eax + 4) == arg4)
                    goto label_737b98
            
            ecx_3 += 1
            arg3[3] = ecx_3
            
            if (ecx_3 s>= var_c)
                edi = &arg3[3]
                break
            
            edi_2 += 0x1c
            eax = ecx_3
            var_10_1 = edi_2
            
            if (eax s< 0)
                var_24 = "XArray<struct AtlasFontLayerItem>::operator []"
                var_28 = 0xb5
                ecx_1 = "index >= 0 && index < mSize"
                goto label_737cb6_1
    
    if (arg2[1] == 0x12)
        int32_t* eax_10 = *(*(sub_5af880(arg2) + 0x20) + arg4 * 0x30)
        eax = arg3[1]
        
        if (eax s< arg3[2])
            arg3[1] = eax + 1
            void* edx_6 = (eax + 1) * 7
            int32_t eax_12 = *arg3
            *(eax_12 + (edx_6 << 2) - 0x1c) = arg2
            void* esi_4 = eax_12 + (edx_6 << 2)
            *(eax_12 + (edx_6 << 2) - 0x18) = arg4
            sub_736270(eax_12, esi_4 - 0x14, eax_10, arg6)
            *edi = arg3[1] - 1
            int32_t eax_15 = *(esi_4 - 4)
            *arg5 = *(esi_4 - 0x14)
            arg5[1].d = eax_15
            return eax_15
        
        var_24 = "XArray<struct AtlasFontLayerItem>::Alloc"
        var_28 = 0xa1
        ecx_1 = "mSize < mSizeReserved"
    label_737cb6:
        var_2c = "C:\x\ax2017\Engine\xArray.h"
    else
        var_24 = "FontGetDef"
        var_28 = 0x2e6
        var_2c = "C:\x\ax2017\Engine\AssetUtils.cpp"
        ecx_1 = "assetPtr->assetType == ASSET_TYPE_FONT"
else
    int32_t ecx = edx
    
    if (edx s>= 0)
        eax = edx * 0x1c
        void* edi_1 = eax + 0x1c
        
        while (true)
            int32_t edx_1 = *arg3
            esi = arg3[1]
            
            if (*(eax + edx_1) == arg2)
                if (ecx s>= esi)
                    goto label_737b7d
                
                eax = edx_1 + ecx * 0x1c
                
                if (*(eax + 4) == arg4)
                label_737b98:
                    int32_t eax_5 = *(eax + 0x18)
                    *arg5 = *(eax + 8)
                    arg5[1].d = eax_5
                    return eax_5
            
            ecx += 1
            eax = &arg3[3]
            *eax = ecx
            
            if (ecx s>= esi)
                edx = var_c
                edi = &arg3[3]
                break
            
            edi_1 += 0x1c
            eax = edi_1
            
            if (ecx s< 0)
                goto label_737b7d
        
        goto label_737bae
    
label_737b7d:
    var_24 = "XArray<struct AtlasFontLayerItem>::operator []"
    var_28 = 0xb5
    ecx_1 = "index >= 0 && index < mSize"
label_737cb6_1:
    var_2c = "C:\x\ax2017\Engine\xArray.h"

sub_63b870(eax, &data_801800, ecx_1, var_2c, var_28, var_24)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
