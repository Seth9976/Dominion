// 函数: sub_635b90
// 地址: 0x635b90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76c1cc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t esi
int32_t var_1e4 = esi
int32_t edi
int32_t var_1e8 = edi
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = data_171efd0
float var_f4 = 800f
int128_t var_34 = data_893730
float var_f8 = 1496f

if (ecx != 0)
    eax_3 = zx.d(ecx.w)
    
    if (eax_3 u< data_b4a5c4)
        eax_3 = eax_3 * 0x510c + data_b4a5c0
        
        if (eax_3[0x1442] == ecx && eax_3 != 0 && *eax_3 == 2 && eax_3 != 0xfffffffc)
            uint32_t _Count_1 = 1
            int32_t var_1a8[0x2b]
            uint32_t eax_6 = sub_654ce0(&var_34, &var_1a8, "twitter-campaign", data_171e7e4, 
                &var_34, &var_34, 0, nullptr, 0)
            int32_t var_1f4 = eax_3[0x141f]
            int32_t* esi_2 = var_1a8[0]
            sub_666250(eax_6, &data_bf00ec, esi_2)
            HANDLE result_1
            sub_620b70(&result_1, &data_171efd4)
            int32_t var_14_1 = 0
            int32_t var_1f8 = 0xffffffff
            sub_666380(&result_1, &data_bf00d4, esi_2, &result_1)
            void* eax_8 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
            int32_t var_200_1 = 0xffffffff
            sub_666380(eax_8, &data_be3250, esi_2, eax_8)
            sub_65d6e0(esi_2, (zx.o(0)).d)
            float var_f0
            memset(&var_f0, 0, 0x58)
            void* eax_10 = arg1 + 8
            int32_t edi_1 = 0
            void* ecx_9 = &eax_3[0x1420]
            int32_t var_a0 = 0x3f3b0000
            int32_t* var_1ac = eax_10
            void* var_1b0_1 = ecx_9
            char const* const var_1f8_2
            int32_t var_1f4_2
            char const* const var_1f0_3
            uint32_t _Count
            char* ecx_17
            
            while (true)
                float xmm1_2 = *ecx_9 * 0.73046875f
                int32_t var_ec[0x13]
                var_ec[edi_1 * 2] = *(ecx_9 + 4) * 0.73046875f
                int32_t edx_1 = *(eax_10 + 4)
                (&var_f0)[edi_1 * 2] = xmm1_2
                
                if (edx_1 != 0)
                    int32_t var_9c
                    int32_t eax_11 = var_9c
                    
                    if (edx_1 != 1)
                        eax_11 = edi_1
                    
                    var_9c = eax_11
                
                int128_t xmm2_1 = data_800248
                float xmm1_3 = *ecx_9
                float xmm0_4 = *(ecx_9 + 4) - 87f
                int128_t var_1dc = xmm2_1
                int32_t var_1c4_1 = 0
                float var_1c8_1 = xmm0_4
                float var_1cc_1 = xmm1_3 - 87f
                int128_t var_54 = 0x3f800000.o
                int128_t xmm0_6 = var_1dc
                int32_t var_1c4_2 = 0
                var_1dc = xmm2_1
                int128_t var_44_1 = xmm0_6
                var_1cc_1.q = 0
                int128_t var_98 = 0x3f3b0000.o
                int128_t var_88_1 = var_1dc
                int128_t var_78
                sub_4eb600(&var_98, &var_54, &var_78, &var_98)
                _Count = _Count_1
                var_54 = var_78
                int128_t var_68
                int128_t var_44_2 = var_68
                
                if (_Count s>= 0x2b)
                    var_1f0_3 = "TwitterUIs::alloc"
                    var_1f4_2 = 0x112df
                    var_1f8_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    ecx_17 = "numUIs < MAX_TWITTER_UIS"
                    break
                
                void* esi_3 = &var_1a8[_Count]
                _Count_1 = _Count + 1
                sub_654ce0(&var_34, esi_3, "twitter-campaign-button", data_171e7dc, &var_34, 
                    &var_34, 0, nullptr, 0)
                int32_t esi_4 = *esi_3
                int32_t var_1f4_1 = edi_1
                sub_61fcf0(sub_666060(esi_4, &var_54), &eax_3[1], esi_4, var_1ac)
                sub_65d6e0(esi_4, (zx.o(0)).d)
                edi_1 += 1
                eax_10 = &var_1ac[3]
                ecx_9 = var_1b0_1 + 8
                var_1ac = eax_10
                var_1b0_1 = ecx_9
                
                if (edi_1 s>= 0xa)
                    int32_t var_1ac_1
                    
                    if (_Count_1 != 0)
                        var_1ac_1 = sub_6a1230(eax_10, int.d(fconvert.t(var_f4)), 
                            int.d(fconvert.t(var_f8)), 1, 3, 0)
                        sub_649ab0()
                        data_1a99f88 = sub_4acb60(&__saved_ebp, 0.261799395f)
                        float xmm0_14 = var_f4 / var_f8
                        data_1a99f90 = 0x3dcccccd
                        data_1a99f94 = 0x40400000
                        data_1a99fb8 = 0
                        data_1a99fbc = 0x40400000
                        var_34:0xc.d = 0xbf800000
                        data_1a99f8c = xmm0_14
                        data_1a99f98 = data_bf21e8
                        data_1a99fa8 = data_bf21f8
                        data_1a99fa8:0xc = 0x40400000
                        var_34:4.d = 0x80000000
                        var_34:8.d = 0x80000000
                        data_1a99f98:4.o =
                            *sub_4ac9c0(&var_1dc:0xc, &data_7fef98, &var_34:4, &var_1dc:0xc)
                        _Count = sub_646220(&data_1a99f88)
                        
                        if (data_147aba1 != 0)
                            int32_t* ecx_18 = data_147b070
                            data_cf6a80 = data_891360
                            data_cf6a6c = 1
                            data_cf65f8 = &data_ffffff
                            int128_t* eax_22 = sub_683290(&var_98, 
                                (*(*ecx_18 + 0x90))(&data_ffffff, 0), &var_f8, &var_98)
                            var_78 = *eax_22
                            int128_t var_68_1 = eax_22[1]
                            sub_683220(&var_78)
                            
                            if (data_1a99fc0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                                sub_75970e(&data_1a99fc0)
                                
                                if (data_1a99fc0 == 0xffffffff)
                                    var_14_1.b = 1
                                    data_1a99fc4 = sub_69f030("sys/SpineTintRT.material", 5)
                                    var_14_1.b = 0
                                    __Init_thread_footer(&data_1a99fc0)
                            
                            int32_t esi_5 = 0
                            *(data_147b06c + 0x2dc) = data_1a99fc4
                            
                            if (_Count_1 s> 0)
                                do
                                    sub_6651e0(var_1a8[esi_5])
                                    esi_5 += 1
                                while (esi_5 s< _Count_1)
                            
                            sub_636450(&var_f0)
                            _Count = data_147b06c
                            *(_Count + 0x2dc) = 0
                            __builtin_memcpy(_Count + 0x124, 
                                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                            "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                            "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
                                0x41)
                            sub_649d30()
                            
                            if (data_147aba1 != 0)
                                if (data_147aba0 == 0)
                                    void* ecx_24 = data_147b06c
                                    data_147aba1 = 0
                                    *(ecx_24 + 0x2cc) += 1
                                    int32_t eax_28 = *(ecx_24 + 0x2cc) * 5
                                    *(ecx_24 + (eax_28 << 2) + 0x18c) = 2
                                    *(ecx_24 + (eax_28 << 2) + 0x194) = var_1ac_1
                                    *(ecx_24 + (eax_28 << 2) + 0x198) = 0
                                    *(ecx_24 + (eax_28 << 2) + 0x19c) = 0
                                    sub_6ad5d0(eax_28, 0, var_1ac_1, 0)
                                    sub_645e30()
                                    sub_649120()
                                    sub_6494f0(2)
                                    sub_649c60()
                                    sub_6adb80()
                                    goto label_63620c
                                
                                var_1f0_3 = "Draw3DRenderItemSubmissionEnd"
                                var_1f4_2 = 0xae9
                                var_1f8_2 = "C:\x\ax2017\Engine\Draw3d.cpp"
                                ecx_17 = "!gDraw3DData.quadGroupDrawing"
                            else
                                var_1f0_3 = "Draw3DRenderItemSubmissionEnd"
                                var_1f4_2 = 0xae8
                                var_1f8_2 = "C:\x\ax2017\Engine\Draw3d.cpp"
                                ecx_17 = "gDraw3DData.submittingRenderItems"
                        else
                            var_1f0_3 = "Draw3DOverlayColor"
                            var_1f4_2 = 0x30c
                            var_1f8_2 = "C:\x\ax2017\Engine\Draw3d.cpp"
                            ecx_17 = "gDraw3DData.submittingRenderItems"
                    else
                        var_1ac_1 = 0
                    label_63620c:
                        int32_t edi_3 = 0
                        
                        if (_Count_1 s> 0)
                            int32_t (* esi_7)[0x2b] = &var_1a8
                            
                            do
                                sub_64e810(esi_7)
                                edi_3 += 1
                                esi_7 = &(*esi_7)[1]
                            while (edi_3 s< _Count_1)
                        
                        int32_t eax_29
                        int32_t edx_8
                        eax_29, edx_8 = sub_5a0e20()
                        uint32_t _Count_2 = sub_6a9660(edx_8, edx_8, eax_29, 1)
                        int32_t eax_33
                        
                        if (sub_6a9450(1) * eax_29 s>= 4)
                            eax_33 = sub_6a9450(1) * eax_29
                        else
                            eax_33 = 4
                        
                        data_bf17d0 = eax_33
                        _Count = _Count_2
                        data_bf17c8 = eax_29
                        data_bf17cc = edx_8
                        data_bf17d4 = 1
                        
                        if (_Count s<= 0)
                            var_1f0_3 = "XMalloc"
                            var_1f4_2 = 0x3d
                            var_1f8_2 = "C:\x\ax2017\Engine\xMemory.cpp"
                            ecx_17 = "size > 0"
                        else if (_Count s< 0x77359400)
                            _Count = _aligned_malloc(_Count, 0x10)
                            
                            if (_Count != 0)
                                bool cond:1 = data_bf17a4 != 0
                                data_bf17c4 = _Count
                                
                                if (not(cond:1))
                                    InitializeCriticalSectionAndSpinCount(&data_bf17a8, 0x400)
                                    data_bf17a4 = 1
                                
                                EnterCriticalSection(&data_bf17a8)
                                (*(*data_147b070 + 0x84))(var_1ac_1, &data_bf17c4, eax_2)
                                sub_69ec60(var_1ac_1)
                                sub_63d8d0(&data_bf17c0, arg2)
                                data_bf17a5 = 1
                                HANDLE result = CreateThread(nullptr, 0x100000, sub_635ab0, 
                                    nullptr, THREAD_CREATE_RUN_IMMEDIATELY, nullptr)
                                data_bf17d8 = result
                                int32_t var_14_2 = 2
                                
                                if (data_cf65bc != 0)
                                    result = result_1
                                    
                                    if (result != 0 && *result != 0)
                                        result = sub_63d4e0(&result_1)
                                        int32_t temp0_1 = *(result + 4)
                                        *(result + 4) -= 1
                                        
                                        if (temp0_1 == 1)
                                            result = sub_64c080(result, *(result + 0xc) + 0x10)
                                
                                fsbase->NtTib.ExceptionList = ExceptionList
                                CookieCheckFunction(result)
                                return result
                            
                            var_1f0_3 = "XMalloc"
                            var_1f4_2 = 0x57
                            var_1f8_2 = "C:\x\ax2017\Engine\xMemory.cpp"
                            ecx_17 = "pBuffer"
                        else
                            var_1f0_3 = "XMalloc"
                            var_1f4_2 = 0x3e
                            var_1f8_2 = "C:\x\ax2017\Engine\xMemory.cpp"
                            ecx_17 = "size < 2000000000"
                    break
            
            sub_63b870(_Count, &data_801800, ecx_17, var_1f8_2, var_1f4_2, var_1f0_3)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn

sub_63b870(eax_3, &data_801800, "map", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x11509, 
    "TwitterExportCampaign")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
