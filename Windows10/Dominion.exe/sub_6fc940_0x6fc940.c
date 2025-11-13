// 函数: sub_6fc940
// 地址: 0x6fc940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7723f7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t esi
int32_t var_b0 = esi
int32_t __saved_ebp
int32_t var_b8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = data_147ded0

if (result != 0)
    if (*(result + 4) != 0x20)
        data_cf65f8 = 0xff000000
        float var_84[0x6]
        float* eax_3 = sub_6fbda0(esi, &var_84)
        int128_t var_4c = *eax_3
        int128_t var_3c_1 = *(eax_3 + 0x10)
        int128_t var_2c_1 = *(eax_3 + 0x20)
        int64_t var_1c_1 = *(eax_3 + 0x30)
        uint32_t eax_4
        int32_t edx_1
        eax_4, edx_1 = sub_646220(&var_4c)
        char const* const var_c4_1
        int32_t var_c0_1
        char const* const var_bc_2
        char* ecx_2
        
        if (data_147aba1 == 0)
            var_bc_2 = "Draw3DAmbientLight"
            var_c0_1 = 0x336
            var_c4_1 = "C:\x\ax2017\Engine\Draw3d.cpp"
            ecx_2 = "gDraw3DData.submittingRenderItems"
        label_6fd188:
            sub_63b870(eax_4, &data_801800, ecx_2, var_c4_1, var_c0_1, var_bc_2)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        bool cond:0_1 = data_147df8c != 2
        int128_t xmm0_5 = data_7fefb0
        __builtin_strncpy(&data_cf6aa0, "333?", 4)
        data_cf6b14 = 0x3e7
        data_cf6a90 = xmm0_5
        
        if (not(cond:0_1))
            edx_1 = sub_683cc0()
        
        if (*(data_147ded0 + 4) == 0x1e)
            edx_1 = sub_745100()
        
        if (*(data_147ded0 + 4) == 0x1d)
            edx_1 = sub_752040()
        
        eax_4 = data_147ded0
        
        if (*(eax_4 + 4) == 0x22)
            eax_4, edx_1 = sub_672340()
        
        int32_t* ecx_3 = data_147dcb8
        float var_a4
        int128_t var_a0
        void* ThreadLocalStoragePointer
        
        if (ecx_3 != 0 && data_147df8c != 1)
            eax_4, ecx_3, edx_1 = sub_682cf0(ecx_3, (zx.o(0)).d, (zx.o(0)).d)
            ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
        else if (data_147dcbc == 0 || data_147df8c != 1)
            data_cf65f8 = 0xffc0c0c0
            ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
        else
            ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
            void* esi_1 = *ThreadLocalStoragePointer
            
            if (data_1a9a388 s> *(esi_1 + 8))
                sub_75970e(&data_1a9a388)
                
                if (data_1a9a388 == 0xffffffff)
                    int32_t var_8_1 = 0
                    data_1a9a38c = sub_69f030("sys/skybox.material", 5)
                    int32_t var_8_2 = 0xffffffff
                    __Init_thread_footer(&data_1a9a388)
            
            if (data_1a9a390 s> *(esi_1 + 8))
                sub_75970e(&data_1a9a390)
                
                if (data_1a9a390 == 0xffffffff)
                    int32_t var_8_3 = 1
                    data_1a9a394 = sub_69f030("sys/skybox.structure", 2)
                    int32_t var_8_4 = 0xffffffff
                    __Init_thread_footer(&data_1a9a390)
            
            int32_t eax_11 = data_147df14
            int32_t* ecx_4 = data_1a9a394
            int32_t var_c0_2 = data_147dcbc
            var_a0 = data_800248
            var_a4 = 10f
            int64_t var_90_1 = data_147df0c.q
            int32_t var_88_1 = eax_11
            eax_4, ecx_3, edx_1 = sub_648920(eax_11, &var_a4, ecx_4, data_1a9a38c, var_c0_2, 0)
        
        if (data_147aba1 == 0)
            var_bc_2 = "Draw3DLayer"
            var_c0_1 = 0x32c
            var_c4_1 = "C:\x\ax2017\Engine\Draw3d.cpp"
            ecx_2 = "gDraw3DData.submittingRenderItems"
            goto label_6fd188
        
        bool cond:1_1 = data_147df8c != 1
        data_cf6b14 = 0x3e9
        
        if (not(cond:1_1))
            eax_4 = data_147dec8
            
            if (*(eax_4 + 0x84) != 0)
                void* esi_2 = *ThreadLocalStoragePointer
                
                if (data_1a9a398 s> *(esi_2 + 8))
                    sub_75970e(&data_1a9a398)
                    
                    if (data_1a9a398 == 0xffffffff)
                        int32_t var_8_5 = 2
                        data_1a9a39c = sub_69f030("sys/particle_3d.material", 5)
                        int32_t var_8_6 = 0xffffffff
                        __Init_thread_footer(&data_1a9a398)
                
                if (data_1a9a3a0 s> *(esi_2 + 8))
                    sub_75970e(&data_1a9a3a0)
                    
                    if (data_1a9a3a0 == 0xffffffff)
                        int32_t var_8_7 = 3
                        data_1a9a3a4 = sub_69f030("sys/holodeck.texture", 3)
                        int32_t var_8_8 = 0xffffffff
                        __Init_thread_footer(&data_1a9a3a0)
                
                __builtin_memcpy(&var_4c:8, 
                    "\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\xbf\x"
                "00\x00\x00\x00\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
                "00\x80\x3f\x00\x00\x00\x00", 
                    0x30)
                var_a4 = 4f
                int32_t var_88_2 = 0
                int128_t var_6c
                __builtin_memcpy(&var_6c, 
                    "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x"
                "00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00", 
                    0x20)
                var_a0 = data_800248
                int64_t var_90_2 = 0
                eax_4, ecx_3, edx_1 = sub_646bb0(sub_648a50(0, &var_4c:8, &var_a4, 4), &var_6c, 
                    &var_4c:8, &data_bf23ac, data_1a9a3a4, data_1a9a39c)
        
        if (data_147aba1 == 0)
            var_bc_2 = "Draw3DLayer"
            var_c0_1 = 0x32c
            var_c4_1 = "C:\x\ax2017\Engine\Draw3d.cpp"
            ecx_2 = "gDraw3DData.submittingRenderItems"
            goto label_6fd188
        
        uint32_t** edi_1 = data_147abe8
        data_cf6b14 = 0
        
        if (edi_1 == 0)
        label_6fd172:
            var_bc_2 = "GetGameData"
            var_c0_1 = 0x45
            var_c4_1 = "C:\x\ax2017\Engine\Game.h"
            ecx_2 = "gpGameData"
            goto label_6fd188
        
        uint32_t* edi_2 = *edi_1
        
        if (*(data_147ded0 + 4) != 0x22)
            uint32_t esi_3 = 0
            
            while (true)
                if (esi_3 != 0)
                    esi_3 += 0x6c
                else
                    esi_3 = *edi_2
                
                int32_t eax_19 = edi_2[1] * 0x6c + *edi_2
                
                if (esi_3 u>= eax_19)
                    break
                
                while ((*(esi_3 + 0x68) & 0xffff0000) == 0)
                    esi_3 += 0x6c
                    
                    if (esi_3 u>= eax_19)
                        goto label_6fcda0
                
                int32_t* var_bc_3 = ecx_3
                ecx_3, edx_1 = sub_648980(esi_3, data_147df88)
            
        label_6fcda0:
            eax_4 = data_147ded0
            
            if (*(eax_4 + 4) == 0x18)
                eax_4 = data_147abe8
                
                if (eax_4 == 0)
                    goto label_6fd172
                
                int32_t* edi_3 = *(eax_4 + 0xc)
                void* esi_4 = nullptr
                
                while (true)
                    if (esi_4 != 0)
                        esi_4 += 0x94
                    else
                        esi_4 = *edi_3
                    
                    int32_t eax_21 = edi_3[1] * 0x94 + *edi_3
                    
                    if (esi_4 u>= eax_21)
                        break
                    
                    while (true)
                        if ((*(esi_4 + 0x90) & 0xffff0000) != 0)
                            sub_6e65e0(eax_21, edx_1, esi_4, &data_bf21e8)
                            int16_t eax_22
                            eax_22, edx_1 = GetKeyState(0x57)
                            
                            if (eax_22 s>= 0)
                                break
                            
                            if (*(data_cf65b4 + 0x18) == 0)
                                break
                            
                            HWND eax_24
                            eax_24, edx_1 = GetFocus()
                            
                            if (eax_24 != data_147b084 && eax_24 != 0)
                                break
                            
                            if (data_1a9a3a8 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                                edx_1 = sub_75970e(&data_1a9a3a8)
                                
                                if (data_1a9a3a8 == 0xffffffff)
                                    int32_t var_8_9 = 4
                                    data_1a9a3ac = sub_69f030("sys/SpriteWireFrame.material", 5)
                                    int32_t var_8_10 = 0xffffffff
                                    edx_1 = __Init_thread_footer(&data_1a9a3a8)
                            
                            int32_t eax_28 = data_1a9a3ac
                            *(esi_4 + 0x84) = eax_28
                            edx_1 = sub_6e65e0(eax_28, edx_1, esi_4, &data_bf21e8)
                            *(esi_4 + 0x84) = 0
                            break
                        
                        esi_4 += 0x94
                        
                        if (esi_4 u>= eax_21)
                            goto label_6fce06
                
            label_6fce06:
                eax_4 = data_147ded0
            
            if (*(eax_4 + 4) == 0x19)
                void* edi_4 = data_147abe8
                
                if (edi_4 == 0)
                    goto label_6fd172
                
                int32_t* edi_5 = *(edi_4 + 0x10)
                void* esi_5 = nullptr
                
                while (true)
                    if (esi_5 != 0)
                        esi_5 += 0x7c
                    else
                        esi_5 = *edi_5
                    
                    int32_t eax_30 = edi_5[1] * 0x7c + *edi_5
                    
                    if (esi_5 u>= eax_30)
                        break
                    
                    while (true)
                        if ((*(esi_5 + 0x78) & 0xffff0000) != 0)
                            if (*(esi_5 + 0x20) == 1)
                                break
                            
                            sub_6c24d0(esi_5, &data_bf21e8)
                            break
                        
                        esi_5 += 0x7c
                        
                        if (esi_5 u>= eax_30)
                            goto label_6fcf24
        
    label_6fcf24:
        result = data_147df8c
        
        if (result == 1 || result == 2)
            result = sub_73bf30()
            
            if (data_147df8c == 2)
                void* eax_31 = data_147ded0
                
                if (eax_31 != 0 && *(eax_31 + 4) == 0x12)
                    var_a0 = data_8936a0
                    sub_682f00(&var_a0:0xc, &data_7e5d1c)
                    char* var_ac
                    int32_t eax_32
                    int32_t ecx_13
                    eax_32, ecx_13 = sub_63d720(&var_ac, 
                        "Grumpy wizards make toxic brew for the evil Queen and Jack.\r%$1234567890?!")
                    int32_t var_8_11 = 5
                    int32_t var_bc_4 = 0
                    int32_t var_c0_4 = 0
                    sub_6b74d0(eax_32, &var_a0:0xc, ecx_13, data_147ded0, 0xff000000, 0, 4, 
                        0x3f800000)
                    int32_t var_8_12 = 6
                    
                    if (data_cf65bc != 0)
                        char* eax_33 = var_ac
                        
                        if (eax_33 != 0 && *eax_33 != 0)
                            char* eax_34 = sub_63d4e0(&var_ac)
                            int32_t temp0_1 = *(eax_34 + 4)
                            *(eax_34 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
                    
                    int32_t var_8_13 = 0xffffffff
                    var_a0 = data_8936e0
                    sub_682f00(&var_a0:0xc, &data_7e43e4)
                    uint32_t result_1
                    int32_t eax_35
                    int32_t ecx_18
                    eax_35, ecx_18 = sub_63d720(&result_1, 
                        "Grumpy wizards make toxic brew for the evil Queen and Jack.\r%$1234567890?!")
                    int32_t var_8_14 = 7
                    int32_t var_bc_5 = 0
                    int32_t var_c0_5 = 0
                    result = sub_6b74d0(eax_35, &var_a0:0xc, ecx_18, data_147ded0, 0xffffffff, 0, 
                        4, 0x3f800000)
                    int32_t var_8_15 = 8
                    
                    if (data_cf65bc != 0)
                        result = result_1
                        
                        if (result != 0 && *result != 0)
                            result = sub_63d4e0(&result_1)
                            int32_t temp1_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp1_1 == 1)
                                result = sub_64c080(result, *(result + 0xc) + 0x10)
                                result_1 = &data_801800
                    
                    int32_t var_8_16 = 0xffffffff
                
                if (eax_31 == 0 || *(eax_31 + 4) != 0x12 || data_147df8c == 2)
                    result = data_147b06c
                    *(result + 0x2dc) = 0
                    __builtin_memcpy(result + 0x124, 
                        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                    "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                    "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                    "00\x00\x00\x80\x3f\x00", 
                        0x41)
                    sub_649d30()
    else
        result = sub_742470()

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
