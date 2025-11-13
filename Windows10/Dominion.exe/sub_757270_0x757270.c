// 函数: sub_757270
// 地址: 0x757270
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7732f1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x68)
int32_t* var_300 = arg2

if (ecx[1] == 0x15)
    eax_3 = sub_5af880(ecx)
    *(arg1 + 0x14) = eax_3[0xe][1].Next
    *(arg1 + 0xc) = _mm_cvtepi32_ps(zx.o(eax_3[0xe]->Next))
    
    if (arg2[1] == 0x15)
        int32_t* esi_1 = *(sub_5af880(arg2) + 0x38)
        int32_t eax_6
        int32_t edx
        edx:eax_6 = sx.q(esi_1[1])
        float xmm0_4 = _mm_cvtepi32_ps(zx.o(*esi_1))
        int32_t Next = divs.dp.d(sx.q(esi_1[3]), (((edx & 7) + eax_6) s>> 3) * esi_1[2])
        
        if (not(_mm_cvtepi32_ps(zx.o(Next)) / xmm0_4 > 4f))
            void* esi_3 = eax_3[0xe]
            int32_t eax_10
            int32_t edx_4
            edx_4:eax_10 = sx.q(*(esi_3 + 4))
            int32_t temp0_1 =
                divs.dp.d(sx.q(*(esi_3 + 0xc)), (((edx_4 & 7) + eax_10) s>> 3) * *(esi_3 + 8))
            int32_t ecx_11 = *(arg1 + 0x14)
            *(arg1 + 0x70) = temp0_1
            int32_t ecx_12 = ecx_11 * temp0_1
            int32_t eax_17
            int32_t edx_7
            edx_7:eax_17 = sx.q(eax_3[0xe]->Handler)
            int32_t eax_19 = (eax_17 + (edx_7 & 7)) s>> 3
            
            if (ecx_12 s< 0x10)
                ecx_12 = 0x10
            
            *(arg1 + 0x6c) = sub_687730(ecx_12 << 2)
            Next = eax_3[0xe][2].Next
            
            if (Next == 1)
                if (data_1a9b264 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                    int32_t* var_318_1 = &data_1a9b264
                    sub_75970e(&data_1a9b264)
                    
                    if (data_1a9b264 == 0xffffffff)
                        int32_t var_318_2 = 0x10
                        int32_t var_31c_1 = 0x5dc00
                        int32_t var_8_1 = 0
                        int32_t eax_24 = _aligned_malloc(0x5dc00, 0x10)
                        
                        if (eax_24 == 0)
                            char const* const var_318_10 = "XMalloc"
                            int32_t var_31c_7 = 0x57
                            char const* const var_320_6 = "C:\x\ax2017\Engine\xMemory.cpp"
                            sub_63b870(eax_24, &data_801800, "pBuffer")
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        int32_t* var_318_3 = &data_1a9b264
                        data_1a9b268 = eax_24
                        int32_t var_8_2 = 0xffffffff
                        __Init_thread_footer(&data_1a9b264)
                
                void* eax_25 = eax_3[0xe]
                int32_t var_318_4 = *(eax_25 + 0x18)
                int32_t var_31c_2 = *(eax_25 + 0xc)
                int32_t var_320_1 = 0
                Next = sub_69f3e0(eax_25, data_1a9b268, var_300)
                int32_t i = 0
                
                if (*(arg1 + 0x70) s> 0)
                    Next = data_1a9b268
                    int32_t ecx_16 = eax_19
                    int32_t Next_1 = Next
                    
                    do
                        int32_t j = 0
                        
                        if (*(arg1 + 0x14) u> 0)
                            do
                                uint32_t eax_26 = zx.d(*(Next + j))
                                int32_t ecx_18 = *(arg1 + 0x70) * j
                                j += 1
                                *(*(arg1 + 0x6c) + ((ecx_18 + i) << 2)) =
                                    _mm_cvtepi32_ps(zx.o(eax_26)) - 1f
                                Next = Next_1
                            while (j u< *(arg1 + 0x14))
                            
                            ecx_16 = eax_19
                        
                        i += 1
                        Next += ecx_16
                        Next_1 = Next
                    while (i s< *(arg1 + 0x70))
            else if (Next == 2)
                int32_t* esi_6 = var_300
                int32_t* var_24_1 = esi_6
                int32_t var_20_1 = 0
                int32_t var_1c_1 = 0
                int32_t var_328_1 = 0
                int32_t var_32c_1 = 0
                void var_2f4
                int32_t eax_28 = ov_open_callbacks(&var_2f4, &var_2f4, 0, 0, data_800a2c.o, eax_2)
                int128_t var_324_1
                
                if (eax_28 s< 0)
                    int32_t var_318_11 = eax_28
                    char* var_31c_8 = sub_63d7e0(&esi_6[8])
                    char const* const var_320_7 = "failed to read ogg %s %d"
                    var_324_1.d = "SoundOggReaderOpen"
                    int32_t var_328_2 = 0x171
                    char const* const var_32c_2 = "C:\x\ax2017\Engine\SoundOgg.cpp"
                    sub_63b870(sub_63b5f0(), &data_801800, "Halt", 
                        "C:\x\ax2017\Engine\SoundOgg.cpp", 0x171, "SoundOggReaderOpen")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                int32_t var_2f8_2 = 0
                void var_308
                void* var_318_5 = &var_308
                int32_t var_31c_3 = 0x800
                int32_t** var_320_2 = &var_300
                var_324_1.d = &var_2f4
                int32_t eax_29 = ov_read_float(var_324_1)
                int32_t var_2fc_2 = eax_29
                bool cond:0_1 = eax_29 == 0
                
                if (eax_29 s< 0)
                label_75765e:
                    char const* const var_318_12 = "SoundOggReadFrameFloat"
                    int32_t var_31c_9 = 0x1a1
                    char const* const var_320_8 = "C:\x\ax2017\Engine\SoundOgg.cpp"
                    sub_63b870(eax_29, &data_801800, "result >= 0")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                while (not(cond:0_1))
                    int32_t i_1 = 0
                    
                    if (*(arg1 + 0x14) u> 0)
                        int32_t eax_30 = eax_29 << 2
                        int32_t var_304_1 = eax_30
                        
                        do
                            int32_t var_318_6 = eax_30
                            int32_t var_31c_4 = var_300[i_1]
                            int32_t var_320_3 =
                                *(arg1 + 0x6c) + ((*(arg1 + 0x70) * i_1 + var_2f8_2) << 2)
                            memcpy()
                            eax_30 = var_304_1
                            i_1 += 1
                        while (i_1 u< *(arg1 + 0x14))
                        
                        eax_29 = var_2fc_2
                    
                    var_2f8_2 += eax_29
                    void* var_318_7 = &var_308
                    int32_t var_31c_5 = 0x800
                    int32_t** var_320_4 = &var_300
                    var_324_1.d = &var_2f4
                    eax_29 = ov_read_float(var_324_1)
                    var_2fc_2 = eax_29
                    cond:0_1 = eax_29 == 0
                    
                    if (eax_29 s< 0)
                        goto label_75765e
                
                Next = ov_clear(&var_2f4)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(Next)
        return Next

char const* const var_318_9 = "SoundGetDef"
int32_t var_31c_6 = 0x356
char const* const var_320_5 = "C:\x\ax2017\Engine\Sound.cpp"
sub_63b870(eax_3, &data_801800, "assetPtr->assetType == ASSET_TYPE_SOUND")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
