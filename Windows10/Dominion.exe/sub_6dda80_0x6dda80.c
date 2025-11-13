// 函数: sub_6dda80
// 地址: 0x6dda80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = *(arg2 + 0xc)
char const* const var_30
int32_t var_2c
char const* const var_28
char* eax
char* ecx_1

if (ecx != 0)
    eax = ecx[1]
    
    if (eax != 0xa)
        if (eax != 2)
            var_28 = "AnimSetGetClip"
            var_2c = 0x16a
            ecx_1 = "Halt"
        else
            eax = sub_5af880(ecx)
            int32_t ecx_5 = *(arg2 + 0x10)
            
            if (ecx_5 s>= 0)
                eax = *eax
                
                if (ecx_5 s< *(eax + 0x60))
                    return *(eax + 0x68) + ecx_5 * 0x18
            
            var_28 = "AnimSetGetClip"
            var_2c = 0x165
            ecx_1 = "pAnimSet->clipIndex >= 0 && pAnimSet->clipIndex < 
                pAnimStructure->pStructureImportData->numAnimClips"
        
        var_30 = "C:\x\ax2017\Engine\Animation.cpp"
    else
        eax = sub_5af880(ecx)
        
        if (*(eax + 0x18) == 0)
            var_28 = "AnimSetGetClip"
            var_2c = 0x157
            ecx_1 = "pDefAnimation->animClip.pAnimImportData"
            var_30 = "C:\x\ax2017\Engine\Animation.cpp"
        else if (*(arg2 + 0x10) == 0)
            int32_t* ecx_2 = *arg1
            
            if (ecx_2[1] == 2)
                void* eax_2 = *sub_5af880(ecx_2)
                
                if (*eax == 0)
                    void* ecx_3 = *(eax + 0x18)
                    *eax = 1
                    int32_t esi_1 = *(eax_2 + 0x10)
                    void* var_10_1 = ecx_3
                    int32_t i_2 = *(ecx_3 + 4)
                    int32_t i_1 = i_2
                    
                    if (i_2 s> 0)
                        int32_t ebx_2 = 0
                        int32_t i
                        
                        do
                            int32_t* edi_1 = *(ecx_3 + 8)
                            int32_t ecx_4 = 0
                            *(edi_1 + ebx_2 + 0x10) = 0xffffffff
                            
                            if (esi_1 s> 0)
                                int32_t* eax_5 = *(eax_2 + 0x18) + 0x70
                                
                                do
                                    if (*eax_5 == *(edi_1 + ebx_2))
                                        *(edi_1 + ebx_2 + 0x10) = ecx_4
                                        break
                                    
                                    ecx_4 += 1
                                    eax_5 = &eax_5[0x36]
                                while (ecx_4 s< esi_1)
                            
                            ecx_3 = var_10_1
                            ebx_2 += 0x18
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                
                return &eax[8]
            
            var_28 = "StructureGetDef"
            var_2c = 0x559
            var_30 = "C:\x\ax2017\Engine\Structure.cpp"
            ecx_1 = "assetPtr->assetType == ASSET_TYPE_STRUCTURE"
        else
            var_28 = "AnimSetGetClip"
            var_2c = 0x158
            ecx_1 = "pAnimSet->clipIndex == 0"
            var_30 = "C:\x\ax2017\Engine\Animation.cpp"
else
    var_28 = "AnimSetGetClip"
    var_2c = 0x151
    ecx_1 = "pAnimSet->assetAnimOrStructure"
    var_30 = "C:\x\ax2017\Engine\Animation.cpp"

sub_63b870(eax, &data_801800, ecx_1, var_30, var_2c, var_28)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
