// 函数: sub_618270
// 地址: 0x618270
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = arg2
int32_t* var_50 = eax
int32_t* edi = arg3
int32_t* var_4c = edi
char const* const var_6c
int32_t var_68
char const* const var_64
char* ecx

if (eax != 0)
    if (*edi == 0)
    label_61851b:
        eax.b = 0
        return eax
    
    int32_t* eax_2 = *sub_5af880(eax)
    int32_t ecx_2 = *eax_2
    eax = eax_2[1]
    int32_t* ecx_3
    int32_t esi_1
    
    if (arg4 != 0)
        if (edi[0xb] == ecx_2 && edi[0xc] == eax)
            esi_1 = edi[0x10e]
            int32_t edx = 0
            ecx_3 = var_50
            
            if (esi_1 s> 0)
                eax = &edi[0x10c]
                
                do
                    if (*eax == ecx_3)
                        goto label_61851b
                    
                    edx += 1
                    eax -= 4
                while (edx s< esi_1)
            
            if (esi_1 != 0x1c)
                edi[0x10e] = esi_1 + 1
                eax = 0x10c - esi_1
                edi[eax] = ecx_3
            else
                int32_t ecx_4 = edi[0x110]
                edi[0x110] = ecx_4 + 1
                esi_1 = mods.dp.d(sx.q(ecx_4), esi_1)
                eax = sub_69ec60(edi[0x10c - esi_1])
                ecx_3 = var_50
                edi[0x10c - esi_1] = ecx_3
                edi = var_4c
            
            goto label_6183c7
        
        var_64 = "PreloadTexture"
        var_68 = 0xcd17
        ecx = "allocator.sizeReverse == assetSize"
        var_6c = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    else if (edi[7] != ecx_2 || edi[8] != eax)
        var_64 = "PreloadTexture"
        var_68 = 0xcd1b
        ecx = "allocator.size == assetSize"
        var_6c = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    else
        esi_1 = edi[0x10d]
        int32_t edx_3 = 0
        ecx_3 = var_50
        
        if (esi_1 s> 0)
            eax = &edi[0xd]
            
            do
                if (*eax == ecx_3)
                    goto label_61851b
                
                edx_3 += 1
                eax = &eax[1]
            while (edx_3 s< esi_1)
        
        if (esi_1 != 0x38)
            eax = esi_1 + 1
            edi[0x10d] = eax
        else
            int32_t ecx_6 = edi[0x10f]
            esi_1 = mods.dp.d(sx.q(ecx_6), esi_1)
            edi[0x10f] = ecx_6 + 1
            eax = sub_69ec60(edi[esi_1 + 0xd])
            ecx_3 = var_50
        
        edi[esi_1 + 0xd] = ecx_3
    label_6183c7:
        
        if (esi_1 == 0xffffffff)
            goto label_61851b
        
        if (ecx_3[1] == 3)
            void* edx_6 = *sub_5af880(ecx_3)
            *(edx_6 + 0x28) = 0
            *(edx_6 + 0x34) = 0
            *(edx_6 + 0x38) = 0
            *(edx_6 + 0x30) = 0
            int32_t eax_13
            int32_t edx_7
            edx_7:eax_13 = sx.q(esi_1)
            int32_t var_3c_1
            int32_t eax_17
            void* ecx_11
            int32_t* edx_12
            
            if (arg4 == 0)
                ecx_11 = var_4c[7]
                int32_t esi_5 = var_4c[8]
                edx_12 = edi[1] + divs.dp.d(edx_7:eax_13, edi[6]) * ecx_11
                int32_t edi_5 = mods.dp.d(edx_7:eax_13, edi[6]) * esi_5 + var_4c[2]
                var_3c_1 = edi_5
                eax_17 = esi_5 + edi_5
            else
                int32_t edi_2 = edi[0xc]
                edx_12 = var_4c[3] - edi[0xb] * (divs.dp.d(edx_7:eax_13, edi[0xa]) + 1)
                int32_t esi_3 = var_4c[4] - (mods.dp.d(edx_7:eax_13, edi[0xa]) + 1) * edi_2
                var_3c_1 = esi_3
                ecx_11 = var_4c[0xb]
                eax_17 = edi_2 + esi_3
            
            int32_t* var_40 = edx_12
            void* var_38_1 = ecx_11 + edx_12
            int32_t var_34_1 = eax_17
            var_40.o = var_40.o
            void var_24
            sub_6a02a0(var_50, &var_24)
            sub_6ae120(&var_24, &var_40, *var_4c, &var_24)
            sub_6a0540(var_50)
            *(edx_6 + 0x28) = *var_4c
            eax = var_40
            *(edx_6 + 0x34) = eax
            *(edx_6 + 0x38) = var_3c_1
            int32_t* ecx_17 = *var_4c
            
            if (ecx_17[1] == 3)
                int32_t* eax_23 = sub_5af880(ecx_17)
                data_8c4154 |= 1
                *(edx_6 + 0x30) = *(*eax_23 + 0x30)
                int32_t eax_25
                eax_25.b = 1
                return eax_25
            
            var_64 = "TextureGetDef"
            var_68 = 0x89
            var_6c = "C:\x\ax2017\Engine\Texture.h"
            ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
        else
            var_64 = "TextureGetDef"
            var_68 = 0x89
            var_6c = "C:\x\ax2017\Engine\Texture.h"
            ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
else
    var_64 = "PreloadTexture"
    var_68 = 0xcd0d
    ecx = "asset != NULL"
    var_6c = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"

sub_63b870(eax, &data_801800, ecx, var_6c, var_68, var_64)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
