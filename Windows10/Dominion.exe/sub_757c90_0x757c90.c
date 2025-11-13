// 函数: sub_757c90
// 地址: 0x757c90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg1
int32_t ecx = arg3
void* var_10 = esi
char const* const var_3c_1
int32_t var_38_1
char const* const var_34_1
void* eax
char* ecx_1

if (arg4 == ecx)
    void* result = nullptr
    void* result_1 = nullptr
    
    if (ecx == 0)
    label_757f05:
        *(esi + 0x79c) += result
        return result
    
    void* edi_1 = esi + 0x790
    
    while (true)
        void* ebx_2 = ecx - result
        void* edx_1
        
        if (((*(esi + 0x10) u>> 0x11).b & 1) == 0)
            eax = *(esi + 0x1c0)
            int32_t* ecx_4 = *(eax + 0x68)
            
            if (ecx_4[1] != 0x15)
            label_757f6c:
                var_34_1 = "SoundGetDef"
                var_38_1 = 0x356
                var_3c_1 = "C:\x\ax2017\Engine\Sound.cpp"
                ecx_1 = "assetPtr->assetType == ASSET_TYPE_SOUND"
                break
            
            void* edx_6 = sub_5af880(ecx_4)
            
            if (*(edx_6 + 0x30) != 0)
                eax = *(edx_6 + 0x20)
                int32_t ecx_5
                
                if (*(edx_6 + 0x18) != 0)
                    ecx_5 = *(esi + 0x78c)
                else
                    ecx_5 = *(esi + 0x1c4)
                
                int32_t* ecx_6 = *(eax + (ecx_5 << 3))
                
                if (ecx_6[1] != 0x15)
                    goto label_757f6c
                
                edx_6 = sub_5af880(ecx_6)
                edi_1 = esi + 0x790
            
            eax = *(edx_6 + 0x38)
            int32_t i_2 = *(esi + 0x48)
            
            if (*(eax + 8) != i_2)
                var_34_1 = "TGGAudioInstance::getAudio"
                var_38_1 = 0x253
                var_3c_1 = "C:\x\ax2017\Engine\SoundSoloud.cpp"
                ecx_1 = "sound->pSoundImportData->numChannels == (int)mChannels"
                break
            
            eax = *(edx_6 + 0x28)
            int32_t edx_7 = *(eax + 0x6c)
            
            if (edx_7 == 0)
                var_34_1 = "TGGAudioInstance::getAudio"
                var_38_1 = 0x254
                var_3c_1 = "C:\x\ax2017\Engine\SoundSoloud.cpp"
                ecx_1 = "tggSource->mData"
                break
            
            int32_t eax_11 = *(eax + 0x70)
            int32_t edx_8 = *edi_1
            void* eax_12 = eax_11 - edx_8
            int32_t var_20_2 = edx_8
            
            if (eax_12 u< ebx_2)
                ebx_2 = eax_12
            
            if (i_2 s> 0)
                int32_t count = ebx_2 << 2
                int32_t count_3 = count
                int32_t edi_3 = arg2 + (result_1 << 2)
                int32_t i_1 = i_2
                int32_t ebx_5 = edx_7 + (edx_8 << 2)
                int32_t i
                
                do
                    memcpy(edi_3, ebx_5, count)
                    ebx_5 += eax_11 << 2
                    edi_3 += arg4 << 2
                    count = count_3
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                esi = var_10
                edi_1 = esi + 0x790
            
            edx_1 = esi + 0x794
        else
            eax = *edi_1
            edx_1 = esi + 0x794
            int32_t ecx_2 = *edx_1
            
            if (eax s>= ecx_2)
                ebx_2 = nullptr
            else
                int32_t edx_2 = *(esi + 0x798)
                
                if (ecx_2 s> 0)
                    void* edx_3 = ebx_2
                    ebx_2 = ecx_2 - eax
                    bool cond:2_1 = ebx_2 s>= edx_3
                    
                    if (ebx_2 s< edx_3)
                        if (ebx_2 s<= 0)
                            var_34_1 = "TGGAudioInstance::getOggData"
                            var_38_1 = 0x1c1
                            var_3c_1 = "C:\x\ax2017\Engine\SoundSoloud.cpp"
                            ecx_1 = "samples > 0"
                            break
                        
                        cond:2_1 = ebx_2 s>= edx_3
                    
                    if (cond:2_1)
                        ebx_2 = edx_3
                    
                    int32_t edx_4 = *(esi + 0x48)
                    int32_t edi_2 = 0
                    
                    if (edx_4 s> 0)
                        int32_t edx_5 = eax << 2
                        int32_t count_1 = ebx_2 << 2
                        int32_t count_2 = count_1
                        int32_t var_20_1 = edx_5
                        int32_t esi_2 = arg2 + (result_1 << 2)
                        
                        do
                            memcpy(esi_2, *(edx_2 + (edi_2 << 2)) + edx_5, count_1)
                            edi_2 += 1
                            edx_5 = var_20_1
                            count_1 = count_2
                            esi_2 += arg4 << 2
                        while (edi_2 s< edx_4)
                        
                        esi = var_10
                        ecx_2 = *(esi + 0x794)
                        eax = *edi_1
                    
                    edi_1 = esi + 0x790
                    edx_1 = esi + 0x794
                else
                    ebx_2 = nullptr
                    edi_1 = esi + 0x790
                    edx_1 = esi + 0x794
            
            eax += ebx_2
            
            if (eax s> ecx_2)
                var_34_1 = "TGGAudioInstance::getAudio"
                var_38_1 = 0x24b
                var_3c_1 = "C:\x\ax2017\Engine\SoundSoloud.cpp"
                ecx_1 = "source.ogg.frameOffset + numRead <= source.ogg.frameSize"
                break
        
        if (ebx_2 != 0)
            uint8_t eax_17 = (*(esi + 0x10) u>> 0x11).b
            void* ecx_13 = *edi_1 + ebx_2
            *edi_1 = ecx_13
            
            if ((eax_17 & 1) != 0 && *edx_1 == ecx_13)
                sub_757b20(esi)
            
            result = result_1 + ebx_2
            result_1 = result
        else
            result = result_1
            
            if (sub_757b20(esi) != 0)
                *(esi + 0x10) |= 0x10000
                *(esi + 0x79c) += result
                return result
            
            edi_1 = esi + 0x790
        
        ecx = arg3
        
        if (result u>= ecx)
            goto label_757f05
else
    var_34_1 = "TGGAudioInstance::getAudio"
    var_38_1 = 0x240
    var_3c_1 = "C:\x\ax2017\Engine\SoundSoloud.cpp"
    ecx_1 = "aBufferSize == aSamplesToRead"

sub_63b870(eax, &data_801800, ecx_1, var_3c_1, var_38_1, var_34_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
