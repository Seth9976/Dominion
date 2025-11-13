// 函数: sub_757710
// 地址: 0x757710
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_77332d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_310 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_75ee50(arg1)
int32_t var_8_1 = 0
uint32_t count_1 = 0x2e0
arg1[0x70] = arg2
int32_t c_1 = 0
void var_304
void* var_31c = &var_304
*arg1 = &data_890a58
__builtin_memset(&arg1[0x1e2], 0, 0x14)
memset(var_31c, c_1, count_1)
uint32_t count = 0x2e0
int32_t c = 0
__builtin_memcpy(&arg1[0x72], &var_304, 0x2e0)
memset(&var_304, c, count)
int32_t eax_4 = arg2
__builtin_memcpy(&arg1[0x12a], &var_304, 0x2e0)
int32_t* ecx = *(eax_4 + 0x68)
char const* const var_31c_1
int32_t var_318
char const* const var_314
char const* const ecx_1

if (ecx[1] != 0x15)
label_7577cc:
    var_314 = "SoundGetDef"
    var_318 = 0x356
    var_31c_1 = "C:\x\ax2017\Engine\Sound.cpp"
    ecx_1 = "assetPtr->assetType == ASSET_TYPE_SOUND"
label_757b03:
    sub_63b870(eax_4, &data_801800, ecx_1, var_31c_1, var_318, var_314)
label_757b0b:
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

eax_4 = sub_5af880(ecx)
int32_t esi_1 = eax_4
int32_t var_20_1 = esi_1
int32_t edi_3 = *(esi_1 + 0x30)
int32_t* ecx_7
void* esi_3
void*** result

if (edi_3 != 0)
    if (edi_3 s<= 1 || *(esi_1 + 0x18) != 0)
        if (*(esi_1 + 0x18) != 1)
            var_314 = "TGGAudioInstance::TGGAudioInstance"
            var_318 = 0x1ae
            ecx_1 = "Halt"
        else if (edi_3 == 2)
            result = arg1
            int32_t* ecx_13 = nullptr
            arg2 = 0
            int32_t* var_18_1 = nullptr
            void* var_1c_1 = &result[0x127]
            
            while (true)
                eax_4 = *(esi_1 + 0x20)
                int32_t* ecx_14 = *(ecx_13 + eax_4)
                
                if (ecx_14[1] != 0x15)
                    goto label_7577cc
                
                int32_t* esi_5 = *(sub_5af880(ecx_14) + 0x38)
                int32_t eax_26
                int32_t edx_11
                edx_11:eax_26 = sx.q(esi_5[1])
                float xmm0_7 = _mm_cvtepi32_ps(zx.o(*esi_5))
                eax_4 = divs.dp.d(sx.q(esi_5[3]), (((edx_11 & 7) + eax_26) s>> 3) * esi_5[2])
                int32_t edx_16
                
                if (_mm_cvtepi32_ps(zx.o(eax_4)) / xmm0_7 <= 4f)
                    edx_16 = arg2
                else
                    int128_t xmm0_8 = data_800a2c.o
                    void* eax_31 = *(var_18_1 + *(var_20_1 + 0x20))
                    *(var_1c_1 - 4) = eax_31
                    int32_t var_324_2 = 0
                    int32_t var_328_3 = 0
                    *var_1c_1 = 0
                    *(var_1c_1 + 4) = 0
                    count.o = xmm0_8
                    eax_4 = ov_open_callbacks(var_1c_1 - 0x2d4, var_1c_1 - 0x2d4, var_328_3, 
                        var_324_2, count)
                    
                    if (eax_4 s< 0)
                        ecx_7 = eax_31 + 0x20
                        goto label_7578b5
                    
                    edx_16 = arg2 + 1
                    result[4] |= 0x20000
                    arg2 = edx_16
                
                ecx_13 = &var_18_1[2]
                var_1c_1 += 0x2e0
                var_18_1 = ecx_13
                
                if (ecx_13 s>= 0x10)
                    if (edx_16 == 0 || edx_16 == 2)
                        result[4] |= 1
                        result[0x1e2] = edx_16
                        goto label_757ada
                    
                    var_314 = "TGGAudioInstance::TGGAudioInstance"
                    var_318 = 0x1a6
                    ecx_1 = "countStreaming == 0 || countStreaming == 2"
                    break
                
                esi_1 = var_20_1
        else
            var_314 = "TGGAudioInstance::TGGAudioInstance"
            var_318 = 0x198
            ecx_1 = "sound->permutationCount == 2"
        
        var_31c_1 = "C:\x\ax2017\Engine\SoundSoloud.cpp"
        goto label_757b03
    
    uint32_t temp1_2 = modu.dp.d(0:(sub_63eb70()), edi_3)
    result = arg1
    result[0x71] = temp1_2
    eax_4 = *(esi_1 + 0x20)
    int32_t* ecx_8 = *(eax_4 + (temp1_2 << 3))
    
    if (ecx_8[1] != 0x15)
        var_314 = "SoundGetDef"
        var_318 = 0x356
        var_31c_1 = "C:\x\ax2017\Engine\Sound.cpp"
        ecx_1 = "assetPtr->assetType == ASSET_TYPE_SOUND"
        goto label_757b03
    
    int32_t* esi_4 = *(sub_5af880(ecx_8) + 0x38)
    int32_t eax_17
    int32_t edx_7
    edx_7:eax_17 = sx.q(esi_4[1])
    float xmm0_5 = _mm_cvtepi32_ps(zx.o(*esi_4))
    
    if (_mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(esi_4[3]), (((edx_7 & 7) + eax_17) s>> 3) * esi_4[2])))
            / xmm0_5 <= 4f)
        goto label_757ada
    
    esi_3 = *(*(var_20_1 + 0x20) + (result[0x71] << 3))
else
    result = arg1
    eax_4 = result[0x70]
    int32_t* ecx_2 = *(eax_4 + 0x68)
    
    if (ecx_2[1] != 0x15)
        var_314 = "SoundGetDef"
        var_318 = 0x356
        var_31c_1 = "C:\x\ax2017\Engine\Sound.cpp"
        ecx_1 = "assetPtr->assetType == ASSET_TYPE_SOUND"
        goto label_757b03
    
    int32_t* esi_2 = *(sub_5af880(ecx_2) + 0x38)
    int32_t eax_7
    int32_t edx_1
    edx_1:eax_7 = sx.q(esi_2[1])
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(*esi_2))
    
    if (_mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(esi_2[3]), (((edx_1 & 7) + eax_7) s>> 3) * esi_2[2])))
            / xmm0_2 <= 4f)
        goto label_757ada
    
    esi_3 = result[0x70][0x1a]

int128_t xmm0_3 = data_800a2c.o
result[0x126] = esi_3
result[0x127] = 0
result[0x128] = 0
count.o = xmm0_3
eax_4 = ov_open_callbacks(&result[0x72], &result[0x72], 0, 0, count)

if (eax_4 s>= 0)
    result[4] |= 0x20000
    result[0x1e2] = 1
label_757ada:
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

ecx_7 = esi_3 + 0x20
label_7578b5:
int32_t var_314_1 = eax_4
char* var_318_1 = sub_63d7e0(ecx_7)
sub_63b870(sub_63b5f0("failed to read ogg %s %d"), &data_801800, "Halt", 
    "C:\x\ax2017\Engine\SoundOgg.cpp", 0x171, "SoundOggReaderOpen")
goto label_757b0b
